#include "libgcl/hash.h"
#include "libgcl/libgcl.h"
#include "../s16b/Enemy/asioto.h"
#include "../s16b/Takabe/fadeio.h"
#include "../s00a/Enemy/command.h"
#include "../s00a/Enemy/watcher.h"
#include "Enemy/meryl7.h"
#include "Thing/door.h"
#include "../s16b/Enemy/wall.h"
#include "Takabe/mirror.h"
#include "../s03e/Game/evpanel.h"
#include "../s16b/Takabe/dymc_seg.h"
#include "../d11c/Game/lamp.h"
#include "../s00a/Takabe/cinema.h"
#include "../s00a/Takabe/cat_in.h"

GCL_ActorTableEntry s07aOverlayCharas[] = 
{
    { CHARA_ASIOTO, NewAsioto_800C3E08 },
    { CHARA_FADE_IN_OUT, NewFadeIo_800C42BC },
    { CHARA_COMMAND, NewCommand_800D0908 },
    { CHARA_WATCHER, NewSnakeWatcher_800C5034 },
    { CHARA_MERYL7, NewEnemyMeryl_800D63A4 },
    { CHARA_DOOR, NewDoor_8006FD00 },
    { CHARA_OBSTACLE, NewWall_800C3718 },
    { CHARA_MIRROR, NewMirror_800E085C },
    { CHARA_ELEVATOR_PANEL, NewEvPanel_800C4AD8 },
    { CHARA_DYNAMIC_SEGMENT, NewDymcSeg_800C4BCC },
    { CHARA_LAMP, NewLamp_800C3B34 },
    { CHARA_CINEMA, NewCinemaScreenSet_800DE4D8 },
    { CHARA_CAT_IN, NewZoom_800DFA88 },
    { NULL, NULL }
};
