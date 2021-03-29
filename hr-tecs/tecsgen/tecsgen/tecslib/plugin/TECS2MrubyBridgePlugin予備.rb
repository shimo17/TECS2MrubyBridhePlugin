# -*- coding: utf-8 -*-
#
#  TECS Generator
#      Generator for TOPPERS Embedded Component System
#  
#   Copyright (C) 2008-2014 by TOPPERS Project
#--
#   上記著作権者は，以下の(1)〜(4)の条件を満たす場合に限り，本ソフトウェ
#   ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
#   変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
#   (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
#       権表示，この利用条件および下記の無保証規定が，そのままの形でソー
#       スコード中に含まれていること．
#   (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
#       用できる形で再配布する場合には，再配布に伴うドキュメント（利用
#       者マニュアルなど）に，上記の著作権表示，この利用条件および下記
#       の無保証規定を掲載すること．
#   (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
#       用できない形で再配布する場合には，次のいずれかの条件を満たすこ
#       と．
#     (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
#         作権表示，この利用条件および下記の無保証規定を掲載すること．
#     (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
#         報告すること．
#   (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
#       害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
#       また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
#       由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
#       免責すること．
#  
#   本ソフトウェアは，無保証で提供されているものである．上記著作権者お
#   よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
#   に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
#   アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
#   の責任を負わない．
#  
#   $Id: TECS2CBridgePlugin.rb 2068 2014-06-21 07:04:08Z okuma-top $
#++

#== TECS => C 呼び出しプラグイン
class TECS2MrubyBridgePlugin < SignaturePlugin
#@signature:: Signature   プラグインの対象となるシグニチャ
#@option:: String   '"', '"' で囲まれた文字列

  @@signature_list = { }

  #signature::     Signature        シグニチャ（インスタンス）
  def initialize( signature, option )
    super

    @signature = signature
    @header_name = "#{$gen}/#{@signature.get_global_name}.#{$h_suffix}"
    @celltype_name = :"t#{@signature.get_global_name}"

    parse_plugin_arg
  end

  def gen_cdl_file file
    if @@signature_list[ @signature.get_global_name ] then
      @@signature_list[ @signature.get_global_name ] << self
      cdl_warning( "T2CW001 signature '$1' duplicate. ignored current one", @signature.get_namespace_path )
      return
    end
    @@signature_list[ @signature.get_global_name ] = [ self ]

    print_msg "  TECS2MrubyBridgePlugin: [celltype] TECS2Mruby::#{@celltype_name}. Create cell then join to entry port 'eEntry' from the caller cell\n"
    file.print <<EOT
namespace nTECS2Mruby{
  celltype #{@celltype_name} {
    entry #{@signature.get_namespace_path} eEnt;
  };
};
EOT
  end

  #=== 後ろのコードを生成
  #プラグインの後ろのコードを生成
  #file:: File: 
  def self.gen_post_code( file )
    # 複数のプラグインの post_code が一つのファイルに含まれるため、以下のような見出しをつけること
    # file.print "/* '#{self.class.name}' post code */\n"
  end

  #===  受け口関数の本体(C言語)を生成する
  #     通常であれば、ジェネレータは受け口関数のテンプレートを生成する
  #     プラグインの場合、変更する必要のないセルタイプコードを生成する
  #file::           FILE        出力先ファイル
  #b_singleton::    bool        true if singleton
  #ct_name::        Symbol
  #global_ct_name:: string
  #sig_name::       string
  #ep_name::        string
  #func_name::      string
  #func_global_name:: string
  #func_type::      class derived from Type
  def gen_ep_func_body( file, b_singleton, ct_name, global_ct_name, sig_name, ep_name, func_name, func_global_name, func_type, params )

    ret_type = func_type.get_type
    b_ret_void = ret_type.is_void?

    if ! b_ret_void then
      file.print( "  #{ret_type.get_type_str}  retval;\n" )
    end

    if ! b_singleton then

      file.print <<EOT
  #{ct_name}_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述京都 */
  }

  mrb_state mrb*=  mrb_open(); 
  

EOT
    end

    # p "celltype_name, sig_name, func_name, func_global_name"
    # p "#{ct_name}, #{sig_name}, #{func_name}, #{func_global_name}"

    if ! b_ret_void then
      file.print( "  retval = " )
    else
      file.print( "  " )
    end

    file.print( "#{func_name}(" )

    delim = ""
    params.each{ |param|
      file.printf( "#{delim} #{param.get_name}" )
      delim = ","
    }

    file.print( " );\n" )

    if ! b_ret_void then
      file.print( "  return retval;\n" )
    end

  end


  def gen_postamble( file, b_singleton, ct_name, global_name )

    # generate header file here, NOT postamble
    file2 = CFile.open( @header_name, "w" )
    file2.print <<EOT
/*
 * This file was generated by TECS2MrubyBridgePlugin and has prototype
 * decalarations of functions in signature '#{@signature.get_namespace_path}'
 */

#include "global_tecsgen.#{$h_suffix}"

EOT
    @signature.get_function_head_array.each { |f|
      decl = f.get_declarator
      func_type = decl.get_type
      params = func_type.get_paramlist.get_items
      func_name = decl.get_name

      ret_type = func_type.get_type

      # p "celltype_name, sig_name, func_name, func_global_name"
      # p "#{ct_name}, #{sig_name}, #{func_name}, #{func_global_name}"

      file2.print( "#{ret_type.get_type_str}  #{func_name}(" )

      delim = ""
      params.each{ |param|
        file2.printf( "#{delim} #{param.get_name}" )
        delim = ","
      }
      
      file2.print( " )#{ret_type.get_type_str_post};\n" )
    }

      file2.close
  end

end

