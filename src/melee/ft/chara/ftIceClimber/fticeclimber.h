#ifndef MELEE_FT_CHARA_FTICECLIMBER_FTICECLIMBER_H
#define MELEE_FT_CHARA_FTICECLIMBER_FTICECLIMBER_H

#include <melee/ft/ftcommon.h>
#include <melee/lb/lbvector.h>

typedef struct _ftIceClimberAttributes {
    f32 x0;
    f32 x4;
    f32 x8;
    f32 xC;
    f32 x10;
    f32 x14;
    f32 x18;
    s32 x1C;
    s32 x20;
    s32 x24;
    s32 x28;
    s32 x2C;
    u8 data_filler_1[0xC4 - 0x30];
    f32 xC4;
    f32 xC8;
    u8 data_filler_2[0x90];
} ftIceClimberAttributes;

void ftPopo_OnLoadForNana(Fighter* fp);
void ftPopo_8011F318(HSD_GObj*);
void ftPopo_8011F390(HSD_GObj*);
void ftPopo_8011F398(HSD_GObj*);
void ftPopo_8011F3D8(HSD_GObj*);
void ftPopo_8011F354(HSD_GObj*);
void ftPopo_8011F394(HSD_GObj*);
void ftPopo_8011F3B8(HSD_GObj*);
void ftPopo_8011F454(HSD_GObj*);
void ftPopo_8011FC78(HSD_GObj*);
void ftPopo_8011FF40(HSD_GObj*);
void ftPopo_80120080(HSD_GObj*);
void ftPopo_80120660(HSD_GObj*);
void ftPopo_8011FCD0(HSD_GObj*);
void ftPopo_8011FF90(HSD_GObj*);
void ftPopo_80120230(HSD_GObj*);
void ftPopo_80120854(HSD_GObj*);
void ftPopo_8011FD9C(HSD_GObj*);
void ftPopo_8011FFE0(HSD_GObj*);
void ftPopo_801203E0(HSD_GObj*);
void ftPopo_80120A48(HSD_GObj*);
void ftPopo_8011FE48(HSD_GObj*);
void ftPopo_80120030(HSD_GObj*);
void ftPopo_80120520(HSD_GObj*);
void ftPopo_80120C58(HSD_GObj*);
void ftPopo_801212C4(HSD_GObj*);
void ftPopo_801214D4(HSD_GObj*);
void ftPopo_801215DC(HSD_GObj*);
void ftPopo_80121740(HSD_GObj*);
void ftPopo_80121944(HSD_GObj*);
void ftPopo_80121AC8(HSD_GObj*);
void ftPopo_80121AD0(HSD_GObj*);
void ftPopo_80121C34(HSD_GObj*);
void ftPopo_801223B8(HSD_GObj*);
void ftPopo_8012248C(HSD_GObj*);
void ftPopo_80122494(HSD_GObj*);
void ftPopo_80122664(HSD_GObj*);
void ftPopo_80121E10(HSD_GObj*);
void ftPopo_80121EB0(HSD_GObj*);
void ftPopo_80121EB8(HSD_GObj*);
void ftPopo_80121F2C(HSD_GObj*);
void ftPopo_80122110(HSD_GObj*);
void ftPopo_801221AC(HSD_GObj*);
void ftPopo_801221B4(HSD_GObj*);
void ftPopo_80122228(HSD_GObj*);
void ftPopo_801213CC(HSD_GObj*);
void ftPopo_80121558(HSD_GObj*);
void ftPopo_80121680(HSD_GObj*);
void ftPopo_8012177C(HSD_GObj*);
void ftPopo_801219F4(HSD_GObj*);
void ftPopo_80121ACC(HSD_GObj*);
void ftPopo_80121B74(HSD_GObj*);
void ftPopo_80121C70(HSD_GObj*);
void ftPopo_80122410(HSD_GObj*);
void ftPopo_80122490(HSD_GObj*);
void ftPopo_80122538(HSD_GObj*);
void ftPopo_801226A0(HSD_GObj*);
void ftPopo_80121E4C(HSD_GObj*);
void ftPopo_80121EB4(HSD_GObj*);
void ftPopo_80121ED8(HSD_GObj*);
void ftPopo_80121F68(HSD_GObj*);
void ftPopo_8012214C(HSD_GObj*);
void ftPopo_801221B0(HSD_GObj*);
void ftPopo_801221D4(HSD_GObj*);
void ftPopo_80122264(HSD_GObj*);
void ftPopo_80122A0C(HSD_GObj*);
void ftPopo_80122B0C(HSD_GObj*);
void ftPopo_80122B14(HSD_GObj*);
void ftPopo_80122C18(HSD_GObj*);
void ftPopo_80122A8C(HSD_GObj*);
void ftPopo_80122B10(HSD_GObj*);
void ftPopo_80122B34(HSD_GObj*);
void ftPopo_80122D04(HSD_GObj*);
void ftNana_80123CA4(HSD_GObj*);
void ftNana_80123E58(HSD_GObj*);
void ftNana_80123E60(HSD_GObj*);
void ftNana_80123F98(HSD_GObj*);
void ftNana_80123D68(HSD_GObj*);
void ftNana_80123E5C(HSD_GObj*);
void ftNana_80123EFC(HSD_GObj*);
void ftNana_801241A0(HSD_GObj*);
void ftNana_80123348(HSD_GObj*);
void ftNana_80123388(HSD_GObj*);
void ftNana_80123390(HSD_GObj*);
void ftNana_801233F0(HSD_GObj*);
void ftNana_80123448(HSD_GObj*);
void ftNana_801234E4(HSD_GObj*);
void ftNana_801234EC(HSD_GObj*);
void ftNana_801235BC(HSD_GObj*);
void ftNana_80123384(HSD_GObj*);
void ftNana_8012338C(HSD_GObj*);
void ftNana_801233EC(HSD_GObj*);
void ftNana_801233F4(HSD_GObj*);
void ftNana_80123484(HSD_GObj*);
void ftNana_801234E8(HSD_GObj*);
void ftNana_8012350C(HSD_GObj*);
void ftNana_801235F8(HSD_GObj*);
void ftPopo_SpecialS_StartMotion(HSD_GObj*);
void ftPopo_SpecialAirHi_StartMotion(HSD_GObj*);
void ftPopo_SpecialAirLw_StartMotion(HSD_GObj*);
void ftPopo_SpecialAirS_StartMotion(HSD_GObj*);
void ftPopo_SpecialLw_StartMotion(HSD_GObj*);
void ftPopo_SpecialHi_StartMotion(HSD_GObj*);

#endif
