#ifndef MELEE_FT_CHARA_FTKIRBY_FORWARD_H
#define MELEE_FT_CHARA_FTKIRBY_FORWARD_H

#include <platform.h>
#include "ft/forward.h"
#include "ftCommon/forward.h"

/// @todo Clean up factorization

static MotionFlags const ftKb_MF_MultiJump ATTRIBUTE_USED =
    Ft_MF_KeepGfx | Ft_MF_SkipHit | Ft_MF_SkipAnimVel | Ft_MF_Unk06;

static MotionFlags const ftKb_MF_AttackDash ATTRIBUTE_USED =
    Ft_MF_KeepFastFall | Ft_MF_KeepColAnimHitStatus | Ft_MF_SkipItemVis |
    Ft_MF_FreezeState;

static MotionFlags const ftKb_MF_AttackDashAir ATTRIBUTE_USED =
    ftKb_MF_AttackDash | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_18_20_21 ATTRIBUTE_USED =
    Ft_MF_SkipItemVis | Ft_MF_UnkUpdatePhys | Ft_MF_FreezeState;

static MotionFlags const ftKb_MF_4_18_20_21 ATTRIBUTE_USED =
    ftKb_MF_18_20_21 | Ft_MF_SkipModel;

static MotionFlags const ftKb_MF_2_4_18_20_21 ATTRIBUTE_USED =
    ftKb_MF_4_18_20_21 | Ft_MF_KeepColAnimHitStatus;

static MotionFlags const ftKb_MF_5_18_20_21 ATTRIBUTE_USED =
    ftKb_MF_18_20_21 | Ft_MF_SkipAnimVel;

static MotionFlags const ftKb_MF_SpecialN ATTRIBUTE_USED =
    ftKb_MF_4_18_20_21 | Ft_MF_KeepFastFall;

static MotionFlags const ftKb_MF_SpecialS ATTRIBUTE_USED =
    ftKb_MF_4_18_20_21 | Ft_MF_KeepGfx;

static MotionFlags const ftKb_MF_SpecialHi ATTRIBUTE_USED =
    ftKb_MF_4_18_20_21 | Ft_MF_KeepFastFall | Ft_MF_KeepGfx;

static MotionFlags const ftKb_MF_SpecialNMr ATTRIBUTE_USED =
    ftKb_MF_4_18_20_21 | Ft_MF_KeepFastFall | Ft_MF_KeepColAnimHitStatus;

static MotionFlags const ftKb_MF_SpecialNKp ATTRIBUTE_USED =
    ftKb_MF_4_18_20_21 | Ft_MF_KeepFastFall | Ft_MF_SkipHit;

static MotionFlags const ftKb_MF_SpecialNPe ATTRIBUTE_USED =
    ftKb_MF_2_4_18_20_21 | Ft_MF_KeepFastFall | Ft_MF_SkipHit;

static MotionFlags const ftKb_MF_SpecialNYs ATTRIBUTE_USED =
    ftKb_MF_5_18_20_21 | Ft_MF_KeepFastFall;

static MotionFlags const ftKb_MF_SpecialNLg ATTRIBUTE_USED =
    ftKb_MF_5_18_20_21 | Ft_MF_KeepColAnimHitStatus;

static MotionFlags const ftKb_MF_SpecialNZd ATTRIBUTE_USED =
    ftKb_MF_5_18_20_21 | Ft_MF_KeepGfx | Ft_MF_KeepColAnimHitStatus;

static MotionFlags const ftKb_MF_SpecialNDr ATTRIBUTE_USED =
    ftKb_MF_5_18_20_21 | Ft_MF_SkipHit;

static MotionFlags const ftKb_MF_SpecialNGk ATTRIBUTE_USED =
    ftKb_MF_SpecialNZd | Ft_MF_SkipHit;

static MotionFlags const ftKb_MF_SpecialNFx ATTRIBUTE_USED =
    ftKb_MF_2_4_18_20_21 | Ft_MF_KeepGfx | Ft_MF_SkipThrowException;

static MotionFlags const ftKb_MF_SpecialNLk ATTRIBUTE_USED =
    ftKb_MF_4_18_20_21 | Ft_MF_KeepGfx | Ft_MF_SkipHit |
    Ft_MF_SkipThrowException;

static MotionFlags const ftKb_MF_SpecialNSk ATTRIBUTE_USED =
    ftKb_MF_SpecialNLk | Ft_MF_KeepFastFall;

static MotionFlags const ftKb_MF_SpecialNNs ATTRIBUTE_USED =
    ftKb_MF_2_4_18_20_21 | Ft_MF_SkipHit | Ft_MF_SkipThrowException;

static MotionFlags const ftKb_MF_SpecialNPp ATTRIBUTE_USED =
    ftKb_MF_SpecialNNs | Ft_MF_KeepGfx;

static MotionFlags const ftKb_MF_SpecialNPk ATTRIBUTE_USED =
    ftKb_MF_SpecialNPp | Ft_MF_KeepFastFall;

static MotionFlags const ftKb_MF_SpecialNSs ATTRIBUTE_USED =
    ftKb_MF_5_18_20_21 | Ft_MF_SkipThrowException;

static MotionFlags const ftKb_MF_SpecialNSs_1 ATTRIBUTE_USED =
    ftKb_MF_SpecialNSs | Ft_MF_KeepGfx;

static MotionFlags const ftKb_MF_SpecialNMt ATTRIBUTE_USED =
    ftKb_MF_SpecialNSs_1 | Ft_MF_KeepFastFall;

static MotionFlags const ftKb_MF_SpecialNCl ATTRIBUTE_USED =
    ftKb_MF_SpecialNMt | Ft_MF_KeepColAnimHitStatus;

static MotionFlags const ftKb_MF_SpecialNFc ATTRIBUTE_USED =
    ftKb_MF_SpecialNDr | Ft_MF_KeepFastFall | Ft_MF_SkipThrowException;

static MotionFlags const ftKb_MF_SpecialNPc ATTRIBUTE_USED =
    ftKb_MF_SpecialNSs_1 | Ft_MF_SkipHit;

static MotionFlags const ftKb_MF_SpecialNGw ATTRIBUTE_USED =
    ftKb_MF_SpecialNPc | Ft_MF_KeepFastFall;

static MotionFlags const ftKb_MF_SpecialLw ATTRIBUTE_USED =
    ftKb_MF_2_4_18_20_21 | Ft_MF_KeepSfx;

static MotionFlags const ftKb_MF_SpecialNCa ATTRIBUTE_USED =
    ftKb_MF_SpecialLw | Ft_MF_KeepFastFall | Ft_MF_KeepGfx;

static MotionFlags const ftKb_MF_SpecialNDk ATTRIBUTE_USED =
    ftKb_MF_4_18_20_21 | Ft_MF_SkipHit | Ft_MF_KeepSfx;

static MotionFlags const ftKb_MF_5_9_18_20_21 ATTRIBUTE_USED =
    ftKb_MF_5_18_20_21 | Ft_MF_KeepSfx;

static MotionFlags const ftKb_MF_2_5_9_18_20_21 ATTRIBUTE_USED =
    ftKb_MF_5_9_18_20_21 | Ft_MF_KeepColAnimHitStatus;

static MotionFlags const ftKb_MF_SpecialNPr ATTRIBUTE_USED =
    ftKb_MF_5_9_18_20_21 | Ft_MF_KeepGfx;

static MotionFlags const ftKb_MF_SpecialNMs ATTRIBUTE_USED =
    ftKb_MF_2_5_9_18_20_21 | Ft_MF_KeepFastFall;

static MotionFlags const ftKb_MF_SpecialNGn ATTRIBUTE_USED =
    ftKb_MF_2_5_9_18_20_21 | Ft_MF_SkipHit;

static MotionFlags const ftKb_MF_SpecialNFeStart ATTRIBUTE_USED =
    ftKb_MF_SpecialNMs | Ft_MF_SkipHit;

static MotionFlags const ftKb_MF_SpecialAirN ATTRIBUTE_USED =
    ftKb_MF_SpecialN | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirS ATTRIBUTE_USED =
    ftKb_MF_SpecialS | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirHi ATTRIBUTE_USED =
    ftKb_MF_SpecialHi | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNMr ATTRIBUTE_USED =
    ftKb_MF_SpecialNMr | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNKp ATTRIBUTE_USED =
    ftKb_MF_SpecialNKp | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNPe ATTRIBUTE_USED =
    ftKb_MF_SpecialNPe | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNYs ATTRIBUTE_USED =
    ftKb_MF_SpecialNYs | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNLg ATTRIBUTE_USED =
    ftKb_MF_SpecialNLg | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNZd ATTRIBUTE_USED =
    ftKb_MF_SpecialNZd | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNDr ATTRIBUTE_USED =
    ftKb_MF_SpecialNDr | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNGk ATTRIBUTE_USED =
    ftKb_MF_SpecialNGk | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNFx ATTRIBUTE_USED =
    ftKb_MF_SpecialNFx | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNLk ATTRIBUTE_USED =
    ftKb_MF_SpecialNLk | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNSk ATTRIBUTE_USED =
    ftKb_MF_SpecialNSk | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNNs ATTRIBUTE_USED =
    ftKb_MF_SpecialNNs | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNPp ATTRIBUTE_USED =
    ftKb_MF_SpecialNPp | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNPk ATTRIBUTE_USED =
    ftKb_MF_SpecialNPk | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNSs ATTRIBUTE_USED =
    ftKb_MF_SpecialNSs | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNMt ATTRIBUTE_USED =
    ftKb_MF_SpecialNMt | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNCl ATTRIBUTE_USED =
    ftKb_MF_SpecialNCl | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNFc ATTRIBUTE_USED =
    ftKb_MF_SpecialNFc | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNPc ATTRIBUTE_USED =
    ftKb_MF_SpecialNPc | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNGw ATTRIBUTE_USED =
    ftKb_MF_SpecialNGw | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirLw ATTRIBUTE_USED =
    ftKb_MF_SpecialLw | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNCa ATTRIBUTE_USED =
    ftKb_MF_SpecialNCa | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNDk ATTRIBUTE_USED =
    ftKb_MF_SpecialNDk | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNPr ATTRIBUTE_USED =
    ftKb_MF_SpecialNPr | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNMs ATTRIBUTE_USED =
    ftKb_MF_SpecialNMs | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNGn ATTRIBUTE_USED =
    ftKb_MF_SpecialNGn | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialNFe ATTRIBUTE_USED =
    ftKb_MF_SpecialNFeStart | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_0_4_18_20_21 ATTRIBUTE_USED =
    ftKb_MF_4_18_20_21 | Ft_MF_KeepFastFall;

static MotionFlags const ftKb_MF_SpecialNCaptureTurn ATTRIBUTE_USED =
    ftKb_MF_0_4_18_20_21 | Ft_MF_KeepAccessory;

static MotionFlags const ftKb_MF_SpecialAirNCaptureTurn ATTRIBUTE_USED =
    ftKb_MF_SpecialNCaptureTurn | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialNCaptureWalk ATTRIBUTE_USED =
    ftKb_MF_0_4_18_20_21 | Ft_MF_UpdateCmd;

static MotionFlags const ftKb_MF_SpecialNCaptureJumpSquat ATTRIBUTE_USED =
    ftKb_MF_0_4_18_20_21 | Ft_MF_SkipNametagVis;

static MotionFlags const ftKb_MF_SpecialNLoop ATTRIBUTE_USED =
    ftKb_MF_0_4_18_20_21 | Ft_MF_Unk19;

static MotionFlags const ftKb_MF_SpecialNKpLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNKp | Ft_MF_Unk19;

static MotionFlags const ftKb_MF_SpecialNGkLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNGk | Ft_MF_Unk19;

static MotionFlags const ftKb_MF_SpecialNFxLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNFx | Ft_MF_Unk19;

static MotionFlags const ftKb_MF_SpecialNLkCharged ATTRIBUTE_USED =
    ftKb_MF_SpecialNLk | Ft_MF_Unk19;

static MotionFlags const ftKb_MF_SpecialNSkLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNSk | Ft_MF_Unk19;

static MotionFlags const ftKb_MF_SpecialNMtLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNMt | Ft_MF_Unk19;

static MotionFlags const ftKb_MF_SpecialNClCharged ATTRIBUTE_USED =
    ftKb_MF_SpecialNCl | Ft_MF_Unk19;

static MotionFlags const ftKb_MF_SpecialNFcLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNFc | Ft_MF_Unk19;

static MotionFlags const ftKb_MF_SpecialNPrLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNPr | Ft_MF_Unk19;

static MotionFlags const ftKb_MF_SpecialAirNLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNLoop | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNKpLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNKpLoop | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNGkLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNGkLoop | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNFxLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNFxLoop | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNLkCharged ATTRIBUTE_USED =
    ftKb_MF_SpecialNLkCharged | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNSkLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNSkLoop | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNMtLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNMtLoop | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNClCharged ATTRIBUTE_USED =
    ftKb_MF_SpecialNClCharged | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNFcLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNFcLoop | Ft_MF_SkipParasol;

static MotionFlags const ftKb_MF_SpecialAirNPrLoop ATTRIBUTE_USED =
    ftKb_MF_SpecialNPrLoop | Ft_MF_SkipParasol;

typedef enum ftKirby_MotionState {
    ftKb_MS_Jump2 = ftCo_MS_Count,
    ftKb_MS_Jump3,
    ftKb_MS_Jump4,
    ftKb_MS_Jump5,
    ftKb_MS_Jump6,

    ftKb_MS_Jump2_WithHat,
    ftKb_MS_Jump3_WithHat,
    ftKb_MS_Jump4_WithHat,
    ftKb_MS_Jump5_WithHat,
    ftKb_MS_Jump6_WithHat,

    ftKb_MS_AttackDash,
    ftKb_MS_AttackDash_Air,

    ftKb_MS_SpecialN_Start,
    ftKb_MS_SpecialN_Loop,
    ftKb_MS_SpecialN_End,
    ftKb_MS_SpecialN_Capture,
    ftKb_MS_Unk_357,
    ftKb_MS_SpecialN_Captured,
    ftKb_MS_SpecialN_CaptureWait,
    ftKb_MS_SpecialN_CaptureWalkSlow,
    ftKb_MS_SpecialN_CaptureWalkMiddle,
    ftKb_MS_SpecialN_CaptureWalkFast,
    ftKb_MS_SpecialN_CaptureTurn,
    ftKb_MS_SpecialN_CaptureJumpSquat,
    ftKb_MS_SpecialN_CaptureJump,
    ftKb_MS_SpecialN_CaptureLanding,
    ftKb_MS_SpecialN_Digest,
    ftKb_MS_Unk_368,
    ftKb_MS_SpecialN_Spit,
    ftKb_MS_Unk_370,
    ftKb_MS_SpecialAirN_Start,
    ftKb_MS_SpecialAirN_Loop,
    ftKb_MS_SpecialAirN_End,
    ftKb_MS_SpecialAirN_Capture,
    ftKb_MS_Unk_375,
    ftKb_MS_SpecialAirN_Captured,
    ftKb_MS_SpecialAirN_CaptureWait,
    ftKb_MS_SpecialAirN_Digest,
    ftKb_MS_Unk_379,
    ftKb_MS_SpecialAirN_Spit,
    ftKb_MS_Unk_381,
    ftKb_MS_SpecialAirN_CaptureTurn,

    ftKb_MS_SpecialS,
    ftKb_MS_SpecialAirS,

    ftKb_MS_SpecialHi_Start,
    ftKb_MS_Unk_386,
    ftKb_MS_Unk_387,
    ftKb_MS_SpecialHi_End,

    /// @todo Names.
    ftKb_MS_SpecialAirHi_Start,
    ftKb_MS_SpecialAirHi_Apex,
    ftKb_MS_SpecialHi_SwordDescent,
    ftKb_MS_SpecialAirHi_End,

    ftKb_MS_SpecialLw_Start,
    ftKb_MS_SpecialLw,
    ftKb_MS_SpecialLw_End,
    ftKb_MS_SpecialAirLw_Start,
    ftKb_MS_SpecialAirLw,
    ftKb_MS_SpecialAirLw_End,

    ftKb_MS_SpecialN_Mr,
    ftKb_MS_SpecialAirN_Mr,

    ftKb_MS_SpecialN_Lk_Charge,
    ftKb_MS_SpecialN_Lk_FullyCharged,
    ftKb_MS_SpecialN_Lk_Fire,
    ftKb_MS_SpecialAirN_Lk_Charge,
    ftKb_MS_SpecialAirN_Lk_FullyCharged,
    ftKb_MS_SpecialAirN_Lk_Fire,

    ftKb_MS_SpecialN_Ss_Start,
    ftKb_MS_SpecialN_Ss_Loop,
    ftKb_MS_SpecialN_Ss_End,
    ftKb_MS_SpecialN_Ss_Fire,
    ftKb_MS_SpecialAirN_Ss_Start,
    ftKb_MS_SpecialAirN_Ss_Fire,

    ftKb_MS_SpecialN_Ys,
    ftKb_MS_SpecialN_Ys_CaptureStart,
    ftKb_MS_Unk_415,
    ftKb_MS_SpecialN_Ys_Capture,
    ftKb_MS_Unk_417,
    ftKb_MS_SpecialAirN_Ys,
    ftKb_MS_SpecialAirN_Ys_CaptureStart,
    ftKb_MS_Unk_420,
    ftKb_MS_SpecialAirN_Ys_Capture,
    ftKb_MS_Unk_422,

    ftKb_MS_SpecialN_Fx_Start,
    ftKb_MS_SpecialN_Fx_Loop,
    ftKb_MS_SpecialN_Fx_End,
    ftKb_MS_SpecialAirN_Fx_Start,
    ftKb_MS_SpecialAirN_Fx_Loop,
    ftKb_MS_SpecialAirN_Fx_End,

    ftKb_MS_SpecialN_Pk,
    ftKb_MS_SpecialAirN_Pk,

    ftKb_MS_SpecialN_Lg,
    ftKb_MS_SpecialAirN_Lg,

    ftKb_MS_SpecialN_Ca,
    ftKb_MS_SpecialAirN_Ca,

    ftKb_MS_SpecialN_Ns_Start,
    ftKb_MS_SpecialN_Ns_Charge,
    ftKb_MS_SpecialN_Ns_Explode,
    ftKb_MS_SpecialN_Ns_End,
    ftKb_MS_SpecialAirN_Ns_Start,
    ftKb_MS_SpecialAirN_Ns_Charge,
    ftKb_MS_SpecialAirN_Ns_Explode,
    ftKb_MS_SpecialAirN_Ns_End,

    ftKb_MS_SpecialN_Kp_Start,
    ftKb_MS_SpecialN_Kp_Loop,
    ftKb_MS_SpecialN_Kp_End,
    ftKb_MS_SpecialAirN_Kp_Start,
    ftKb_MS_SpecialAirN_Kp_Loop,
    ftKb_MS_SpecialAirN_Kp_End,

    ftKb_MS_SpecialN_Pe,
    ftKb_MS_SpecialN_Pe_Attack,
    ftKb_MS_SpecialAirN_Pe,
    ftKb_MS_SpecialAirN_Pe_Attack,

    ftKb_MS_SpecialN_Ic,
    ftKb_MS_SpecialAirN_Ic,

    ftKb_MS_SpecialN_Dk_ChargeStart,
    ftKb_MS_SpecialN_Dk_ChargeLoop,
    ftKb_MS_SpecialN_Dk_ChargeStop,
    ftKb_MS_SpecialN_Dk_EarlyPunch,
    ftKb_MS_SpecialN_Dk_FullChargePunch,
    ftKb_MS_SpecialAirN_Dk_ChargeStart,
    ftKb_MS_SpecialAirN_Dk_ChargeLoop,
    ftKb_MS_SpecialAirN_Dk_ChargeStop,
    ftKb_MS_SpecialAirN_Dk_EarlyPunch,
    ftKb_MS_SpecialAirN_Dk_FullChargePunch,

    ftKb_MS_SpecialN_Zd,
    ftKb_MS_SpecialAirN_Zd,

    ftKb_MS_SpecialN_Sk_StartCharge,
    ftKb_MS_SpecialN_Sk_ChargeLoop,
    ftKb_MS_SpecialN_Sk_EndCharge,
    ftKb_MS_SpecialN_Sk_Fire,
    ftKb_MS_SpecialAirN_Sk_StartCharge,
    ftKb_MS_SpecialAirN_Sk_ChargeLoop,
    ftKb_MS_SpecialAirN_Sk_EndCharge,
    ftKb_MS_SpecialAirN_Sk_Fire,

    ftKb_MS_SpecialN_Pr_ChargeStartR,
    ftKb_MS_SpecialN_Pr_ChargeStartL,
    ftKb_MS_SpecialN_Pr_ChargeLoop,
    ftKb_MS_SpecialN_Pr_FullyCharged,
    ftKb_MS_SpecialN_Pr_ChargeRelease,
    ftKb_MS_SpecialN_Pr_TurnStart,
    ftKb_MS_SpecialN_Pr_EndR,
    ftKb_MS_SpecialN_Pr_EndL,
    ftKb_MS_SpecialAirN_Pr_ChargeStartR,
    ftKb_MS_SpecialAirN_Pr_ChargeStartL,
    ftKb_MS_SpecialAirN_Pr_ChargeLoop,
    ftKb_MS_SpecialAirN_Pr_FullyCharged,
    ftKb_MS_SpecialAirN_Pr_ChargeRelease,
    ftKb_MS_Unk_488,
    ftKb_MS_SpecialAirN_Pr_EndR,
    ftKb_MS_SpecialAirN_Pr_EndL,
    ftKb_MS_SpecialN_Pr_Hit,

    ftKb_MS_SpecialN_Ms_StartCharge,
    ftKb_MS_SpecialN_Ms_ChargeLoop,
    ftKb_MS_SpecialN_Ms_EarlyRelease,
    ftKb_MS_SpecialN_Ms_FullyCharged,
    ftKb_MS_SpecialAirN_Ms_StartCharge,
    ftKb_MS_SpecialAirN_Ms_ChargeLoop,
    ftKb_MS_SpecialAirN_Ms_EarlyRelease,
    ftKb_MS_SpecialAirN_Ms_FullyCharged,

    ftKb_MS_SpecialN_Mt_StartCharge,
    ftKb_MS_SpecialN_Mt_ChargeLoop,
    ftKb_MS_SpecialN_Mt_FullyCharged,
    ftKb_MS_SpecialN_Mt_EndCharge,
    ftKb_MS_SpecialN_Mt_Fire,
    ftKb_MS_SpecialAirN_Mt_StartCharge,
    ftKb_MS_SpecialAirN_Mt_ChargeLoop,
    ftKb_MS_SpecialAirN_Mt_FullyCharged,
    ftKb_MS_SpecialAirN_Mt_EndCharge,
    ftKb_MS_SpecialAirN_Mt_Fire,

    ftKb_MS_SpecialN_Gw,
    ftKb_MS_SpecialAirN_Gw,

    ftKb_MS_SpecialN_Dr,
    ftKb_MS_SpecialAirN_Dr,

    ftKb_MS_SpecialN_Cl_Charge,
    ftKb_MS_SpecialN_Cl_FullyCharged,
    ftKb_MS_SpecialN_Cl_Fire,
    ftKb_MS_SpecialAirN_Cl_Charge,
    ftKb_MS_SpecialAirN_Cl_FullyCharged,
    ftKb_MS_SpecialAirN_Cl_Fire,

    ftKb_MS_SpecialN_Fc_Start,
    ftKb_MS_SpecialN_Fc_Loop,
    ftKb_MS_SpecialN_Fc_End,
    ftKb_MS_SpecialAirN_Fc_Start,
    ftKb_MS_SpecialAirN_Fc_Loop,
    ftKb_MS_SpecialAirN_Fc_End,

    ftKb_MS_SpecialN_Pc,
    ftKb_MS_SpecialAirN_Pc,

    ftKb_MS_SpecialN_Gn,
    ftKb_MS_SpecialAirN_Gn,

    ftKb_MS_SpecialN_Fe_StartCharge,
    ftKb_MS_SpecialN_Fe_ChargeLoop,
    ftKb_MS_SpecialN_Fe_EarlyRelease,
    ftKb_MS_SpecialN_Fe_FullyCharged,
    ftKb_MS_SpecialAirN_Fe_StartCharge,
    ftKb_MS_SpecialAirN_Fe_ChargeLoop,
    ftKb_MS_SpecialAirN_Fe_EarlyRelease,
    ftKb_MS_SpecialAirN_Fe_FullyCharged,

    ftKb_MS_SpecialN_Gk_Start,
    ftKb_MS_SpecialN_Gk_Loop,
    ftKb_MS_SpecialN_Gk_End,
    ftKb_MS_SpecialAirN_Gk_Start,
    ftKb_MS_SpecialAirN_Gk_Loop,
    ftKb_MS_SpecialAirN_Gk_End,
} ftKirby_MotionState;

#endif
