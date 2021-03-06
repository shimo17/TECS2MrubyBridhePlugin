/* gen_defs.h */

/* General(ly useful) constant, macro, and type definitions */

/* $Id: gen_defs.h,v 1.66 2014/04/04 00:17:52 deuce Exp $ */
																			
/****************************************************************************
 * @format.tab-size 4           (Plain Text/Source Code File Header)        *
 * @format.use-tabs true        (see http://www.synchro.net/ptsc_hdr.html)  *
 *                                                                          *
 * Copyright 2011 Rob Swindell - http://www.synchro.net/copyright.html      *
 *                                                                          *
 * This library is free software; you can redistribute it and/or            *
 * modify it under the terms of the GNU Lesser General Public License       *
 * as published by the Free Software Foundation; either version 2           *
 * of the License, or (at your option) any later version.                   *
 * See the GNU Lesser General Public License for more details: lgpl.txt or  *
 * http://www.fsf.org/copyleft/lesser.html                                  *
 *                                                                          *
 * Anonymous FTP access to the most recent released source is available at  *
 * ftp://vert.synchro.net, ftp://cvs.synchro.net and ftp://ftp.synchro.net  *
 *                                                                          *
 * Anonymous CVS access to the development source and modification history  *
 * is available at cvs.synchro.net:/cvsroot/sbbs, example:                  *
 * cvs -d :pserver:anonymous@cvs.synchro.net:/cvsroot/sbbs login            *
 *     (just hit return, no password is necessary)                          *
 * cvs -d :pserver:anonymous@cvs.synchro.net:/cvsroot/sbbs checkout src     *
 *                                                                          *
 * For Synchronet coding style and modification guidelines, see             *
 * http://www.synchro.net/source.html                                       *
 *                                                                          *
 * You are encouraged to submit any modifications (preferably in Unix diff  *
 * format) via e-mail to mods@synchro.net                                   *
 *                                                                          *
 * Note: If this box doesn't appear square, then you need to fix your tabs. *
 ****************************************************************************/

#ifndef _GEN_DEFS_H
#define _GEN_DEFS_H

#include <errno.h>

/* Resolve multi-named errno constants */
#if defined(EDEADLK) && !defined(EDEADLOCK)
        #define EDEADLOCK EDEADLK
#endif

#if defined(_WIN32)
        #define WIN32_LEAN_AND_MEAN     /* Don't bring in excess baggage */
        #include <windows.h>
#elif defined(__OS2__)
        #define INCL_BASE       /* need this for DosSleep prototype */
        #include <os2.h>
#else
        #if (defined(__APPLE__) && defined(__MACH__) && defined(__POWERPC__)) || defined (__NetBSD__)
                #ifndef __unix__
                        #define __unix__
                #endif
        #endif
#endif


#include <sys/types.h>
#ifdef HAS_INTTYPES_H
#if defined __cplusplus
#define __STDC_FORMAT_MACROS
#endif
#include <inttypes.h>
#else
#ifdef HAS_STDINT_H
#include <stdint.h>
#endif
#endif

                                               /* Control characters */
#ifndef STX
#define STX     0x02                           /* Start of text                 ^B      */
#endif
#ifndef ETX
#define ETX     0x03                           /* End of text                   ^C      */
#endif
#ifndef BEL
#define BEL     0x07                            /* Bell/beep                    ^G      */
#endif
#ifndef FF
#define FF      0x0c                            /* Form feed                    ^L      */
#endif
#ifndef ESC
#define ESC     0x1b                            /* Escape                       ^[      */
#endif
#ifndef DEL
#define DEL     0x7f                            /* Delete                       ^BS     */
#endif
#ifndef BS
#define BS      '\b'                            /* Back space                   ^H      */
#endif
#ifndef TAB
#define TAB     '\t'                            /* Horizontal tabulation        ^I      */
#endif
#ifndef LF
#define LF      '\n'                            /* Line feed                    ^J      */
#endif
#ifndef CR
#define CR      '\r'                            /* Carriage return              ^M      */
#endif

#ifndef CTRL_A
enum {
         CTRL_A=1
        ,CTRL_B
        ,CTRL_C
        ,CTRL_D 
        ,CTRL_E
        ,CTRL_F
        ,CTRL_G
        ,CTRL_H
        ,CTRL_I
        ,CTRL_J
        ,CTRL_K
        ,CTRL_L
        ,CTRL_M
        ,CTRL_N
        ,CTRL_O
        ,CTRL_P
        ,CTRL_Q
        ,CTRL_R
        ,CTRL_S
        ,CTRL_T
        ,CTRL_U
        ,CTRL_V
        ,CTRL_W
        ,CTRL_X
        ,CTRL_Y
        ,CTRL_Z
};
#endif

/* Unsigned type short-hands    */
#ifndef uchar
    #define uchar   unsigned char
#endif
#ifndef ushort
	#define ushort  unsigned short
	typedef unsigned int uint;			/* Incompatible with Spidermonkey header files when #define'd */
	#define ulong   unsigned long
#endif

#if !defined(HAS_INTTYPES_H) && !defined(XPDEV_DONT_DEFINE_INTTYPES)

#if !defined(HAS_STDINT_H)

typedef char    int8_t;
typedef short   int16_t;
typedef long    int32_t;
typedef uchar   uint8_t;
typedef ushort  uint16_t;
typedef ulong   uint32_t;

#endif

#if defined(_MSC_VER) || defined(__WATCOMC__) || defined(__BORLANDC__)
typedef signed __int64 int64_t;
typedef unsigned __int64 uint64_t;
#define INTTYPES_H_64BIT_PREFIX         "I64"
#else
typedef signed long long int int64_t;
typedef unsigned long long int uint64_t;
#define INTTYPES_H_64BIT_PREFIX         "ll"
#endif

typedef uint64_t	uintmax_t;
#define _UINTMAX_T_DECLARED
typedef int64_t		intmax_t;
#define _INTMAX_T_DECLARED

#if !defined(HAS_STDINT_H) && !defined(_UINTPTR_T_DEFINED)
typedef uintmax_t	uintptr_t;
typedef intmax_t	intptr_t;
#endif

/* printf integer formatters: */

#define PRId32	"d"
#define PRIu32	"u"
#define PRIi32	"i"
#define PRIx32	"x"
#define PRIX32	"X"
#define PRIo32	"o"

#define PRIi64  INTTYPES_H_64BIT_PREFIX"i"
#define PRIu64  INTTYPES_H_64BIT_PREFIX"u"
#define PRId64  INTTYPES_H_64BIT_PREFIX"d"
#define PRIx64  INTTYPES_H_64BIT_PREFIX"x"
#define PRIX64  INTTYPES_H_64BIT_PREFIX"X"
#define PRIo64  INTTYPES_H_64BIT_PREFIX"o"

#define PRIdMAX	PRId64
#define PRIiMAX	PRIi64
#define PRIuMAX	PRIu64
#define PRIxMAX	PRIx64
#define PRIXMAX	PRIX64
#define PRIoMAX	PRIo64

/* scanf integer formatters: */

#define SCNd32 	PRId32
#define SCNi32 	PRIi32
#define SCNu32 	PRIu32
#define SCNx32 	PRIx32
#define SCNX32 	PRIX32
#define SCNo32 	PRIo32

#define SCNd64 	PRId64
#define SCNi64 	PRIi64
#define SCNu64 	PRIu64
#define SCNx64 	PRIx64
#define SCNX64 	PRIX64
#define SCNo64 	PRIo64

#define SCNdMAX	PRId64
#define SCNiMAX	PRIi64
#define SCNuMAX	PRIu64
#define SCNxMAX	PRIx64
#define SCNXMAX	PRIX64
#define SCNoMAX	PRIo64

#endif

/* Legacy 32-bit time_t */
typedef int32_t         time32_t;

#if defined(_WIN32)
#  if defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS==64)
#    define off_t       int64_t
#    define PRIdOFF     PRId64
#    define PRIuOFF     PRIu64
#  else
#    define PRIdOFF     "ld"
#    define PRIuOFF     "lu"
#  endif
#elif defined(__linux__) || defined(__sun__)
#  if defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS==64)
#    define PRIdOFF     PRId64
#    define PRIuOFF     PRIu64
#  else
#    define PRIdOFF     PRId32
#    define PRIuOFF     PRIu32
#  endif
#else
#  define PRIdOFF       PRId64
#  define PRIuOFF       PRIu64
#endif

/* Windows Types */

#ifndef _WIN32
#ifndef BYTE
#define BYTE    uint8_t
#endif
#ifndef WORD
#define WORD    uint16_t
#endif
#ifndef DWORD
#define DWORD   uint32_t
#endif
#ifndef BOOL
#define BOOL    int
#endif

#ifndef TRUE
#define TRUE    1
#define FALSE   0
#endif
#ifndef HANDLE
#define HANDLE  void*
#endif
#endif

#ifndef INT_TO_BOOL
#define INT_TO_BOOL(x)  ((x)?TRUE:FALSE)
#endif

/* Custom Types */
typedef struct {
        char*   name;
        char*   value;
} named_string_t;

typedef struct {
        char*   name;
        int     value;
} named_int_t;

typedef struct {
        char*   name;
        uint    value;
} named_uint_t;

typedef struct {
        char*   name;
        long    value;
} named_long_t;

typedef struct {
        char*   name;
        ulong   value;
} named_ulong_t;

typedef struct {
        char*   name;
        short   value;
} named_short_t;

typedef struct {
        char*   name;
        ushort  value;
} named_ushort_t;

typedef struct {
        char*   name;
        float   value;
} named_float_t;

typedef struct {
        char*   name;
        double  value;
} named_double_t;

typedef struct {
        char*   name;
        BOOL    value;
} named_bool_t;

typedef struct {
        int     key;
        char*   value;
} keyed_string_t;

typedef struct {
        int     key;
        int     value;
} keyed_int_t;


/************************/
/* Handy Integer Macros */
/************************/

/* Data Block Length Alignment Macro (returns required padding length for proper alignment) */
#define PAD_LENGTH_FOR_ALIGNMENT(len,blk)       (((len)%(blk))==0 ? 0 : (blk)-((len)%(blk)))

/***********************/
/* Handy String Macros */
/***********************/

/* Null-Terminate an ASCIIZ char array */
#define TERMINATE(str)                      str[sizeof(str)-1]=0

/* This is a bound-safe version of strcpy basically - only works with fixed-length arrays */
#ifdef SAFECOPY_USES_SPRINTF
#define SAFECOPY(dst,src)                   sprintf(dst,"%.*s",(int)sizeof(dst)-1,src)
#else   /* strncpy is faster */
#define SAFECOPY(dst,src)                   (strncpy(dst,src,sizeof(dst)), TERMINATE(dst))
#endif

/* Bound-safe version of sprintf() - only works with fixed-length arrays */
#if (defined __FreeBSD__) || (defined __NetBSD__) || (defined __OpenBSD__) || (defined(__APPLE__) && defined(__MACH__) && defined(__POWERPC__))
/* *BSD *nprintf() is already safe */
#define SAFEPRINTF(dst,fmt,arg)             snprintf(dst,sizeof(dst),fmt,arg)
#define SAFEPRINTF2(dst,fmt,a1,a2)          snprintf(dst,sizeof(dst),fmt,a1,a2)
#define SAFEPRINTF3(dst,fmt,a1,a2,a3)		snprintf(dst,sizeof(dst),fmt,a1,a2,a3)
#define SAFEPRINTF4(dst,fmt,a1,a2,a3,a4)	snprintf(dst,sizeof(dst),fmt,a1,a2,a3,a4)
#else										
#define SAFEPRINTF(dst,fmt,arg)				snprintf(dst,sizeof(dst),fmt,arg), TERMINATE(dst)
#define SAFEPRINTF2(dst,fmt,a1,a2)			snprintf(dst,sizeof(dst),fmt,a1,a2), TERMINATE(dst)
#define SAFEPRINTF3(dst,fmt,a1,a2,a3)		snprintf(dst,sizeof(dst),fmt,a1,a2,a3), TERMINATE(dst)
#define SAFEPRINTF4(dst,fmt,a1,a2,a3,a4)	snprintf(dst,sizeof(dst),fmt,a1,a2,a3,a4), TERMINATE(dst)
#endif

/* Replace every occurance of c1 in str with c2, using p as a temporary char pointer */
#define REPLACE_CHARS(str,c1,c2,p)      for((p)=(str);*(p);(p)++) if(*(p)==(c1)) *(p)=(c2);

/* ASCIIZ char* parsing helper macros */
#define SKIP_WHITESPACE(p)              while(*(p) && isspace((unsigned char)*(p)))                     (p)++;
#define FIND_WHITESPACE(p)              while(*(p) && !isspace((unsigned char)*(p)))            (p)++;
#define SKIP_CHAR(p,c)                  while(*(p)==c)                                                                          (p)++;
#define FIND_CHAR(p,c)                  while(*(p) && *(p)!=c)                                                          (p)++;
#define SKIP_CHARSET(p,s)               while(*(p) && strchr(s,*(p))!=NULL)                                     (p)++;
#define FIND_CHARSET(p,s)               while(*(p) && strchr(s,*(p))==NULL)                                     (p)++;
#define SKIP_ALPHA(p)                   while(*(p) && isalpha((unsigned char)*(p)))                     (p)++;
#define FIND_ALPHA(p)                   while(*(p) && !isalpha((unsigned char)*(p)))            (p)++;
#define SKIP_ALPHANUMERIC(p)            while(*(p) && isalnum((unsigned char)*(p)))                     (p)++;
#define FIND_ALPHANUMERIC(p)            while(*(p) && !isalnum((unsigned char)*(p)))            (p)++;
#define SKIP_DIGIT(p)                   while(*(p) && isdigit((unsigned char)*(p)))                     (p)++;
#define FIND_DIGIT(p)                   while(*(p) && !isdigit((unsigned char)*(p)))            (p)++;
#define SKIP_HEXDIGIT(p)                while(*(p) && isxdigit((unsigned char)*(p)))            (p)++;
#define FIND_HEXDIGIT(p)                while(*(p) && !isxdigit((unsigned char)*(p)))           (p)++;

/* Variable/buffer initialization (with zeros) */
#define ZERO_VAR(var)                           memset(&(var),0,sizeof(var))
#define ZERO_ARRAY(array)                       memset(array,0,sizeof(array))

/****************************************************************************/
/* MALLOC/FREE Macros for various compilers and environments                */
/* MALLOC is used for allocations of 64k or less                            */
/* FREE is used to free buffers allocated with MALLOC                       */
/* LMALLOC is used for allocations of possibly larger than 64k              */
/* LFREE is used to free buffers allocated with LMALLOC                     */
/* REALLOC is used to re-size a previously MALLOCed or LMALLOCed buffer     */
/* FAR16 is used to create a far (32-bit) pointer in 16-bit compilers       */
/* HUGE16 is used to create a huge (32-bit) pointer in 16-bit compilers     */
/****************************************************************************/
#if defined(__COMPACT__) || defined(__LARGE__) || defined(__HUGE__)
        #define HUGE16 huge
        #define FAR16 far
        #if defined(__TURBOC__)
                #define REALLOC(x,y) farrealloc(x,y)
                #define LMALLOC(x) farmalloc(x)
                #define MALLOC(x) farmalloc(x)
                #define LFREE(x) farfree(x)
                #define FREE(x) farfree(x)
        #elif defined(__WATCOMC__)
                #define REALLOC realloc
                #define LMALLOC(x) halloc(x,1)  /* far heap, but slow */
                #define MALLOC malloc           /* far heap, but 64k max */
                #define LFREE hfree
                #define FREE free
        #else   /* Other 16-bit Compiler */
                #define REALLOC realloc
                #define LMALLOC malloc
                #define MALLOC malloc
                #define LFREE free
                #define FREE free
        #endif
#else           /* 32-bit Compiler or Small Memory Model */
        #define HUGE16
        #define FAR16
        #define REALLOC realloc
        #define LMALLOC malloc
        #define MALLOC malloc
        #define LFREE free
        #define FREE free
#endif

/********************************/
/* Handy Pointer-freeing Macros */
/********************************/
#define FREE_AND_NULL(x)                if(x!=NULL) { FREE(x); x=NULL; }
#define FREE_LIST_ITEMS(list,i)         if(list!=NULL) {                                \
											for(i=0;list[i]!=NULL;i++)      \
												FREE_AND_NULL(list[i]); \
                                        }
#define FREE_LIST(list,i)               FREE_LIST_ITEMS(list,i) FREE_AND_NULL(list)

/********************************/
/* Other Pointer-List Macros    */
/********************************/
#define COUNT_LIST_ITEMS(list,i)        { i=0; if(list!=NULL) while(list[i]!=NULL) i++; }

/* Special hackery for SDL */
#ifdef WITH_SDL_AUDIO
        #include <SDL.h>

        #ifdef main
                #undef main
        #endif
        #define main    XPDEV_main
#endif

#endif /* Don't add anything after this #endif statement */

#if 0 // Legacy or unfit code -- ertl-liyixiao

#if defined(__unix__)
        #include <syslog.h>
#else
        /*
         * log priorities (copied from BSD syslog.h)
         */
        #define LOG_EMERG       0       /* system is unusable */
        #define LOG_ALERT       1       /* action must be taken immediately */
        #define LOG_CRIT        2       /* critical conditions */
        #define LOG_ERR         3       /* error conditions */
        #define LOG_WARNING     4       /* warning conditions */
        #define LOG_NOTICE      5       /* normal but significant condition */
        #define LOG_INFO        6       /* informational */
        #define LOG_DEBUG       7       /* debug-level messages */
#endif

#endif
