/*
 * File: simulink_model_closedloop_data.c
 *
 * Code generated for Simulink model 'simulink_model_closedloop'.
 *
 * Model version                  : 20.6
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Sep  5 21:03:05 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "simulink_model_closedloop.h"

/* Constant parameters (default storage) */
const ConstP rtConstP = {
  /* Expression: [model.x0 0 0]
   * Referenced by: '<Root>/y_ref_0'
   */
  { 0.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: repmat([ model.ddelta_min, model.dTc_min]',N,1)
   * Referenced by: '<Root>/lbu'
   */
  { -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0,
    -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0,
    -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0,
    -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0,
    -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0,
    -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0,
    -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0,
    -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0, -2.0, -4.0 },

  /* Expression: repmat([model.ey_min, model.Track_vel_min , model.delta_min, model.Tc_min]',N-1,1)
   * Referenced by: '<Root>/lbx'
   */
  { -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5,
    1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0,
    -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4,
    -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0,
    -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5,
    1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0,
    -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4,
    -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0,
    -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5,
    1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0,
    -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4,
    -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0,
    -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5,
    1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0,
    -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4, -1.0, -2.5, 1.0, -0.4,
    -1.0 },

  /* Expression: repmat([constraint.alon_min, constraint.alat_min]',N,1)
   * Referenced by: '<Root>/lh'
   */
  { -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0,
    -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0,
    -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0,
    -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0,
    -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0,
    -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0,
    -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0,
    -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0, -8.0, -4.0 },

  /* Expression: repmat([model.ddelta_max, model.dTc_max]',N,1)
   * Referenced by: '<Root>/ubu'
   */
  { 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0,
    4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0,
    2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0,
    4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0,
    2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0,
    4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0,
    2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0, 2.0, 4.0 },

  /* Expression: repmat([model.ey_max, model.Track_vel_max , model.delta_max, model.Tc_max]',N-1,1)
   * Referenced by: '<Root>/ubx'
   */
  { 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0,
    0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5,
    30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4,
    1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0, 2.5, 30.0, 0.4, 1.0 },

  /* Expression: repmat([constraint.alon_max, constraint.alat_max]',N,1)
   * Referenced by: '<Root>/uh'
   */
  { 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0,
    4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0,
    8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0,
    4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0,
    8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0,
    4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0,
    8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0, 8.0, 4.0 },

  /* Expression: model.x0
   * Referenced by: '<Root>/Delay1'
   */
  { 0.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
