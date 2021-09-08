#include"tecs_mruby.h"
#include"tTECS2MrubyVM_tecsgen.h"
#include <mruby.h>

void mrb_init_mrb(CELLCB *p_cellcb, mrb_state *mrb, mrbc_context *c);

void 
eTECS2MrubyVM_init(CELLIDX idx)
{
	CELLCB	*p_cellcb = GET_CELLCB(idx);
	VAR_mrb = mrb_open();
	VAR_context = mrbc_context_new( VAR_mrb );
	mrb_init_mrb(p_cellcb, VAR_mrb, VAR_context);
	
}
mrb_state*
eTECS2MrubyVM_get_mrb(CELLIDX idx)
{
	CELLCB	*p_cellcb = GET_CELLCB(idx);
	return VAR_mrb;
}

void
eTECS2MrubyVM_fin(CELLIDX idx)
{
	CELLCB	*p_cellcb = GET_CELLCB(idx);
	mrbc_context_free( VAR_mrb, VAR_context );//これ以上VMを使わないという意味になる
	mrb_close( VAR_mrb );
}


void
mrb_init_mrb(CELLCB	*p_cellcb, mrb_state *mrb, mrbc_context *c){
    

    /* £²¤Ä¤Î mruby bytecode ¤òÆ°ºî¤µ¤»¤ë */
    mrb_load_irep_cxt(mrb, ATTR_irep, c);     //mruby library
    //mrb_load_irep_cxt(mrb, VAR_irepApp, c);      //mruby application (transferred via Bluetooth)

    if (mrb->exc) {
        mrb_p(mrb, mrb_obj_value(mrb->exc));
        exit(0);
    }
}
 mrb_value*
 eTECS2MrubyVM_instance_create(CELLIDX idx);
 {
 	CELLCB	*p_cellcb = GET_CELLCB(idx);
 	struct RClass *shimo = mrb_class_get(VAR_mrb, "Ryo");
 	mrb_value shimo_value = mrb_obj_value(shimo);  
    mrb_value VAR_yamashina = mrb_funcall(VAR_mrb, shimo_value, "new", 0); 
    return VAR_yamashina;

 }