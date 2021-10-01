/*  1 "gen/tmp_C_src.c" */
/*  1 "<built-in>" */
/*  1 "<command-line>" */
/*  1 "gen/tmp_C_src.c" */
/*  34 "gen/tmp_C_src.c" */
typedef struct { int dummy; } va_list;

/*  1 "./../../../mruby/include/mruby/boxing_nan.h" 1 */
/*  39 "./../../../mruby/include/mruby/boxing_nan.h" */
typedef struct mrb_value {
  union {
    mrb_float f;
    union {
      void *p;
      struct {
        union { mrb_int i; mrb_sym sym; }; uint32_t ttt;






      };
    } value;
  };
} mrb_value;
/*  36 "gen/tmp_C_src.c" 2 */
