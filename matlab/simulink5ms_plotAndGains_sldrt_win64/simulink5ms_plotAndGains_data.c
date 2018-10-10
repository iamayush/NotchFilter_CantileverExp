/*
 * simulink5ms_plotAndGains_data.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "simulink5ms_plotAndGains".
 *
 * Model version              : 1.107
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Wed Oct 10 12:07:02 2018
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "simulink5ms_plotAndGains.h"
#include "simulink5ms_plotAndGains_private.h"

/* Block parameters (default storage) */
P_simulink5ms_plotAndGains_T simulink5ms_plotAndGains_P = {
  /* Mask Parameter: PacketInput1_MaxMissedTicks
   * Referenced by: '<S1>/Packet Input1'
   */
  50.0,

  /* Mask Parameter: PacketOutput_MaxMissedTicks
   * Referenced by: '<S2>/Packet Output'
   */
  10.0,

  /* Mask Parameter: PacketInput1_YieldWhenWaiting
   * Referenced by: '<S1>/Packet Input1'
   */
  0.0,

  /* Mask Parameter: PacketOutput_YieldWhenWaiting
   * Referenced by: '<S2>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketInput1_PacketID
   * Referenced by: '<S1>/Packet Input1'
   */
  1,

  /* Mask Parameter: PacketOutput_PacketID
   * Referenced by: '<S2>/Packet Output'
   */
  1,

  /* Expression: 1
   * Referenced by: '<Root>/Gain3'
   */
  1.0,

  /* Expression: 3.0/4095
   * Referenced by: '<Root>/Gain'
   */
  0.0007326007326007326,

  /* Expression: 1
   * Referenced by: '<Root>/Gain4'
   */
  1.0,

  /* Expression: 3.0/4095
   * Referenced by: '<Root>/Gain12'
   */
  0.0007326007326007326,

  /* Expression: 1
   * Referenced by: '<Root>/Gain1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain2'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Value_16bit2'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain6'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Gain1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Value_16bit3'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain7'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Gain2'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Value_16bit1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain5'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Gain3'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Value_16bit4'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain8'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Gain4'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Value_16bit5 '
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain9'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Gain5'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Value_16bit6'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain10'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Gain6'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Value_16bit7'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain11'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Gain7'
   */
  1.0,

  /* Computed Parameter: ConstantMustbeThisValue0x7fff_Value
   * Referenced by: '<S2>/Constant Must be This Value 0x7fff'
   */
  32767
};
