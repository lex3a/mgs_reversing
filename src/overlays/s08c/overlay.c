#include "libgcl/hash.h"
#include "libgcl/libgcl.h"
#include "../s16b/Enemy/asioto.h"
#include "../s16b/Takabe/fadeio.h"
#include "../d11c/Game/lamp.h"
#include "../s01a/animal/doll/doll.h"
#include "../s00a/Takabe/cinema.h"
#include "../s16b/Takabe/dymc_seg.h"
// WALL_SPA 800CB4A4
#include "../d11c/Takabe/gas_efct.h"
#include "../s00a/Takabe/o2_damge.h"
#include "Okajima/blood_cl.h"
#include "Okajima/blood_bl.h"
#include "../s00a/Takabe/cat_in.h"
#include "../s00a/Game/pad.h"
#include "Game/vibrate.h"
#include "Okajima/blood.h"
#include "Okajima/splash.h"
#include "../d00a/Okajima/d_bloods.h"
#include "../d11c/Enemy/demokage.h"
#include "Equip/kogaku2.h"
#include "../d01a/Takabe/focus.h"
#include "../d01a/Okajima/blur.h"
#include "../s16b/Takabe/sepia.h"
#include "Enemy/katana.h"
#include "../d03a/Okajima/blurpure.h"

void s08c_800C4194(MATRIX *pos);

GCL_ActorTableEntry s08cOverlayCharas[] = 
{
    { CHARA_ASIOTO, NewAsioto_800C3E08 },
    { CHARA_FADE_IN_OUT, NewFadeIo_800C42BC },
    { CHARA_LAMP, NewLamp_800C3B34 },
    { CHARA_DOLL, NewDoll_800DCD78 },
    { CHARA_CINEMA, NewCinemaScreenSet_800DE4D8 },
    { CHARA_DYNAMIC_SEGMENT, NewDymcSeg_800C4BCC },
    { CHARA_WALL_SPA, (TGCL_ActorCreateFn)0x800CB4A4 },
    { CHARA_GAS_EFFECT, NewGasEffect_800C4E5C },
    { CHARA_O2_DAMAGE, NewO2Damage_800DE9C8 },
    { CHARA_BLOOD_CL, NewBloodCl_800C9DF0 },
    { CHARA_BLOOD_BL_6A4C, NewBloodBl_800CD7CC },
    { CHARA_CAT_IN, NewZoom_800DFA88 },
    { CHARA_PAD_CBF8, NewPad_800C37EC },
    { CHARA_VIBRATE, (TGCL_ActorCreateFn)vibrate_init_8005D508 },
    { CHARA_FADEIO, NewFadeIo_800C4224 },
    { CHARA_FADEIO_0004, NewFadeIo_800C4224 },
    { CHARA_BLOOD, (TGCL_ActorCreateFn)NewBlood_80072728 },
    { CHARA_SPLASH, NewSplash_800C8D6C },
    { CHARA_D_BLOODS, (TGCL_ActorCreateFn)NewDBloods_800D5B70 },
    { CHARA_DEMOKAGE, (TGCL_ActorCreateFn)NewDemoKage_800C48A4 },
    { CHARA_UNKNOWN_0011, (TGCL_ActorCreateFn)s08c_800C4194 },
    { CHARA_KOGAKU2_001A, (TGCL_ActorCreateFn)NewKogaku2_800615FC },
    { CHARA_KOGAKU2_001B, (TGCL_ActorCreateFn)NewKogaku3_80061708 },
    { CHARA_SUB_EFCT, NewFocus_800CEFF8 },
    { CHARA_BLOOD_BL, (TGCL_ActorCreateFn)0x800CAEE4 }, // s08c_blur_800CAEE4
    { CHARA_SEPIA, (TGCL_ActorCreateFn)NewSepia_800C5214 },
    { CHARA_KATANA, (TGCL_ActorCreateFn)NewKatana_800C5660 },
    { CHARA_FALL_SPL, NewBlurPure_800C54D4 },
    { NULL, NULL }
};
