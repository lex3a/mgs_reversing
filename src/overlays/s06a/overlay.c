#include "libgcl/hash.h"
#include "libgcl/libgcl.h"
#include "Game/vibrate.h"
#include "../s01a/Takabe/tracktrp.h"
#include "../s00a/Takabe/cinema.h"
#include "../s16b/Takabe/fadeio.h"
#include "../s00a/Thing/emitter.h"
#include "../s01a/animal/doll/doll.h"
#include "../s01a/Enemy/camera.h"
#include "../s00a/Enemy/command.h"
#include "../s00a/Enemy/watcher.h"
#include "../s02c/Takabe/shuter.h"
#include "../d11c/Takabe/gas_efct.h"
#include "../s00a/Takabe/o2_damge.h"
#include "../s03e/Game/evpanel.h"
#include "../s00a/Okajima/pato_lmp.h"
#include "../s16b/Enemy/asioto.h"
#include "Takabe/life_up.h"
#include "../s00a/Takabe/cat_in.h"
#include "../s16b/Enemy/wall.h"
#include "../d11c/Game/lamp.h"
#include "../s00a/Takabe/camshake.h"
#include "../s01a/Okajima/blink_tx.h"
#include "../s16b/Takabe/dymc_seg.h"

GCL_ActorTableEntry s06aOverlayCharas[] =
{
    { CHARA_VIBRATE, (TGCL_ActorCreateFn)vibrate_init_8005D508 },
    { CHARA_TRACK_TRAP, NewTracktrp_800E1DB0 },
    { CHARA_CINEMA, NewCinemaScreenSet_800DE4D8 },
    { CHARA_FADE_IN_OUT, NewFadeIo_800C42BC },
    { CHARA_EMITTER, NewEmitter_800C3E50 },
    { CHARA_DOLL, NewDoll_800DCD78 },
    { CHARA_CAMERA, NewCamera_800D67F8 },
    { CHARA_COMMAND, NewCommand_800D0908 },
    { CHARA_WATCHER, NewSnakeWatcher_800C5034 },
    { CHARA_SHUTER_03D9, NewShuter_800DFB44 },
    { CHARA_GAS_EFFECT, NewGasEffect_800C4E5C },
    { CHARA_O2_DAMAGE, NewO2Damage_800DE9C8 },
    { CHARA_ELEVATOR_PANEL, NewEvPanel_800C4AD8 },
    { CHARA_PATO_LAMP, NewPatrolLamp_800D7A2C },
    { CHARA_ASIOTO, NewAsioto_800C3E08 },
    { CHARA_LIFE_UP, NewLifeUp_800DF428 },
    { CHARA_CAT_IN, NewZoom_800DFA88 },
    { CHARA_OBSTACLE, NewWall_800C3718 },
    { CHARA_LAMP, NewLamp_800C3B34 },
    { CHARA_CAMERA_SHAKE, NewCameraShake_800DF6AC },
    { CHARA_BLINK_TX, NewBlinkTx_800DECD8 },
    { CHARA_DYNAMIC_SEGMENT, NewDymcSeg_800C4BCC },
    { NULL, NULL }
};
