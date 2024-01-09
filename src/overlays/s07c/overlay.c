#include "libgcl/hash.h"
#include "libgcl/libgcl.h"
#include "../s16b/Enemy/asioto.h"
#include "../s16b/Takabe/fadeio.h"
#include "Thing/door.h"
#include "../s16b/Enemy/wall.h"
#include "../s07a/Takabe/mirror.h"
#include "../s03e/Game/evpanel.h"
#include "../s16b/Takabe/dymc_seg.h"
#include "../d11c/Game/lamp.h"
// CHARA_MERYL7_E271
#include "../s00a/Takabe/cinema.h"
// CHARA_LOADER_9FFD
#include "../s00a/Takabe/telop.h"
#include "../d11c/Enemy/demokage.h"
#include "../d01a/Takabe/focus.h"
#include "../d11c/Takabe/gas_efct.h"
#include "../d03a/Okajima/blurpure.h"
int s07c_second_800C5790(void);

GCL_ActorTableEntry s07cOverlayCharas[] = 
{
    { CHARA_ASIOTO, NewAsioto_800C3E08 },
    { CHARA_FADE_IN_OUT, NewFadeIo_800C42BC },
    { CHARA_DOOR, NewDoor_8006FD00 },
    { CHARA_OBSTACLE, NewWall_800C3718 },
    { CHARA_MIRROR, NewMirror_800E085C },
    { CHARA_ELEVATOR_PANEL, NewEvPanel_800C4AD8 },
    { CHARA_DYNAMIC_SEGMENT, NewDymcSeg_800C4BCC },
    { CHARA_LAMP, NewLamp_800C3B34 },
    { CHARA_MERYL7_E271, (TGCL_ActorCreateFn)0x800C7BC4 }, // s07c_meryl72_800C7BC4
    { CHARA_CINEMA, NewCinemaScreenSet_800DE4D8 },
    { CHARA_LOADER_9FFD, (TGCL_ActorCreateFn)s07c_second_800C5790 },
    { CHARA_FADEIO, NewFadeIo_800C4224 },
    { CHARA_FADEIO_0004, NewFadeIo_800C4224 },
    { CHARA_SHUTER, (TGCL_ActorCreateFn)NewTelop_800DDD7C },
    { CHARA_DEMOKAGE, (TGCL_ActorCreateFn)NewDemoKage_800C48A4 },
    { CHARA_SUB_EFCT, NewFocus_800CEFF8 },
    { CHARA_GAS_EFCT, (TGCL_ActorCreateFn)NewGasEffect_800C4EF8 },
    { CHARA_FALL_SPL, NewBlurPure_800C54D4 },
    { NULL, NULL }
};
