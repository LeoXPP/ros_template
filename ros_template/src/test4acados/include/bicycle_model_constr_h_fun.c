/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) bicycle_model_constr_h_fun_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[12] = {8, 1, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s1[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s2[3] = {0, 0, 0};

/* bicycle_model_constr_h_fun:(i0[8],i1[2],i2[],i3[])->(o0[2]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10, w11, w12;
  /* #0: @0 = 0.5 */
  w0 = 5.0000000000000000e-001;
  /* #1: @1 = 4000 */
  w1 = 4000.;
  /* #2: @2 = input[0][7] */
  w2 = arg[0] ? arg[0][7] : 0;
  /* #3: @1 = (@1*@2) */
  w1 *= w2;
  /* #4: @0 = (@0*@1) */
  w0 *= w1;
  /* #5: @2 = input[0][6] */
  w2 = arg[0] ? arg[0][6] : 0;
  /* #6: @3 = cos(@2) */
  w3 = cos( w2 );
  /* #7: @3 = (@0*@3) */
  w3  = (w0*w3);
  /* #8: @4 = 0.5 */
  w4 = 5.0000000000000000e-001;
  /* #9: @4 = (@4*@1) */
  w4 *= w1;
  /* #10: @3 = (@3+@4) */
  w3 += w4;
  /* #11: @4 = -4560.4 */
  w4 = -4.5603999999999996e+003;
  /* #12: @1 = 8 */
  w1 = 8.;
  /* #13: @5 = 0.4 */
  w5 = 4.0000000000000002e-001;
  /* #14: @6 = input[0][2] */
  w6 = arg[0] ? arg[0][2] : 0;
  /* #15: @7 = 0.9 */
  w7 = 9.0000000000000002e-001;
  /* #16: @8 = input[0][0] */
  w8 = arg[0] ? arg[0][0] : 0;
  /* #17: @7 = (@7*@8) */
  w7 *= w8;
  /* #18: @7 = (@6+@7) */
  w7  = (w6+w7);
  /* #19: @9 = input[0][1] */
  w9 = arg[0] ? arg[0][1] : 0;
  /* #20: @7 = atan2(@7,@9) */
  w7  = atan2(w7,w9);
  /* #21: @7 = (@7-@2) */
  w7 -= w2;
  /* #22: @5 = (@5*@7) */
  w5 *= w7;
  /* #23: @10 = -0.5 */
  w10 = -5.0000000000000000e-001;
  /* #24: @11 = 0.4 */
  w11 = 4.0000000000000002e-001;
  /* #25: @11 = (@11*@7) */
  w11 *= w7;
  /* #26: @12 = 0.4 */
  w12 = 4.0000000000000002e-001;
  /* #27: @12 = (@12*@7) */
  w12 *= w7;
  /* #28: @12 = atan(@12) */
  w12 = atan( w12 );
  /* #29: @11 = (@11-@12) */
  w11 -= w12;
  /* #30: @10 = (@10*@11) */
  w10 *= w11;
  /* #31: @5 = (@5-@10) */
  w5 -= w10;
  /* #32: @5 = atan(@5) */
  w5 = atan( w5 );
  /* #33: @1 = (@1*@5) */
  w1 *= w5;
  /* #34: @1 = sin(@1) */
  w1 = sin( w1 );
  /* #35: @4 = (@4*@1) */
  w4 *= w1;
  /* #36: @1 = sin(@2) */
  w1 = sin( w2 );
  /* #37: @1 = (@4*@1) */
  w1  = (w4*w1);
  /* #38: @3 = (@3-@1) */
  w3 -= w1;
  /* #39: @1 = 500 */
  w1 = 500.;
  /* #40: @3 = (@3/@1) */
  w3 /= w1;
  /* #41: output[0][0] = @3 */
  if (res[0]) res[0][0] = w3;
  /* #42: @3 = cos(@2) */
  w3 = cos( w2 );
  /* #43: @4 = (@4*@3) */
  w4 *= w3;
  /* #44: @3 = -4000 */
  w3 = -4000.;
  /* #45: @1 = 8 */
  w1 = 8.;
  /* #46: @5 = 0.45 */
  w5 = 4.5000000000000001e-001;
  /* #47: @6 = (@6-@8) */
  w6 -= w8;
  /* #48: @6 = atan2(@6,@9) */
  w6  = atan2(w6,w9);
  /* #49: @5 = (@5*@6) */
  w5 *= w6;
  /* #50: @9 = -0.5 */
  w9 = -5.0000000000000000e-001;
  /* #51: @8 = 0.45 */
  w8 = 4.5000000000000001e-001;
  /* #52: @8 = (@8*@6) */
  w8 *= w6;
  /* #53: @10 = 0.45 */
  w10 = 4.5000000000000001e-001;
  /* #54: @10 = (@10*@6) */
  w10 *= w6;
  /* #55: @10 = atan(@10) */
  w10 = atan( w10 );
  /* #56: @8 = (@8-@10) */
  w8 -= w10;
  /* #57: @9 = (@9*@8) */
  w9 *= w8;
  /* #58: @5 = (@5-@9) */
  w5 -= w9;
  /* #59: @5 = atan(@5) */
  w5 = atan( w5 );
  /* #60: @1 = (@1*@5) */
  w1 *= w5;
  /* #61: @1 = sin(@1) */
  w1 = sin( w1 );
  /* #62: @3 = (@3*@1) */
  w3 *= w1;
  /* #63: @4 = (@4+@3) */
  w4 += w3;
  /* #64: @2 = sin(@2) */
  w2 = sin( w2 );
  /* #65: @0 = (@0*@2) */
  w0 *= w2;
  /* #66: @4 = (@4+@0) */
  w4 += w0;
  /* #67: @0 = 500 */
  w0 = 500.;
  /* #68: @4 = (@4/@0) */
  w4 /= w0;
  /* #69: output[0][1] = @4 */
  if (res[0]) res[0][1] = w4;
  return 0;
}

CASADI_SYMBOL_EXPORT int bicycle_model_constr_h_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int bicycle_model_constr_h_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int bicycle_model_constr_h_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void bicycle_model_constr_h_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int bicycle_model_constr_h_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void bicycle_model_constr_h_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void bicycle_model_constr_h_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void bicycle_model_constr_h_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int bicycle_model_constr_h_fun_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int bicycle_model_constr_h_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real bicycle_model_constr_h_fun_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* bicycle_model_constr_h_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* bicycle_model_constr_h_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* bicycle_model_constr_h_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* bicycle_model_constr_h_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int bicycle_model_constr_h_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 13;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
