#include "libgcl/hash.h"
#include "libgcl/libgcl.h"
#include "../s00a/Enemy/asiato.h"
#include "../s00a/Takabe/cinema.h"
#include "../s01a/Thing/sphere.h"
#include "../s16b/Takabe/fadeio.h"
#include "../d11c/Enemy/demokage.h"
#include "../s20a/Enemy/demoasi.h"
#include "../d01a/Takabe/focus.h"
#include "../d01a/Okajima/blur.h"
#include "../d03a/Okajima/blurpure.h"

void AN_Smoke_800CE164(SVECTOR *pos, SVECTOR *speed, int index, int script);
void demothrd_2_8007DA94(SVECTOR *pPosition, SVECTOR *pRotation);

GCL_ActorTableEntry endingOverlayCharas[] = 
{
    { CHARA_ASIATO, NewAsiatoKun_800D1A70 },
    { CHARA_UNKNOWN_3453, (TGCL_ActorCreateFn)0x800C4F34 }, // ending_movie_800C4F34
    { CHARA_CINEMA, NewCinemaScreenSet_800DE4D8 },
    { CHARA_SPHERE, NewSphere_800C69C0 },
    { CHARA_FADEIO, NewFadeIo_800C4224 },
    { CHARA_FADEIO_0004, NewFadeIo_800C4224 },
    { CHARA_DEMOKAGE, (TGCL_ActorCreateFn)NewDemoKage_800C48A4 },
    { CHARA_DEMOASI, (TGCL_ActorCreateFn)NewDemoasi_800C414C },
    { CHARA_ENVMAP3, (TGCL_ActorCreateFn)0x800CA3A4 }, // ending_envmap3_800CA3A4
    { CHARA_SUB_EFCT, NewFocus_800CEFF8 },
    { CHARA_BLOOD_BL, NewBlur_800CD530 },
    { CHARA_UNKNOWN_002F, (TGCL_ActorCreateFn)AN_Smoke_800CE164 },
    { CHARA_UNKNOWN_0033, (TGCL_ActorCreateFn)demothrd_2_8007DA94 },
    { CHARA_FALL_SPL, NewBlurPure_800C54D4},
    { NULL, NULL }
};

const char ending_aMovied_800CC78C[] = "MOVIE %d\n";
const char ending_aNotfound_800CC798[] = "NOT FOUND\n";
const char ending_aMoviec_800CC7A4[] = "movie.c";

int SECTION("overlay.bss") ending_dword_800CCD9C;
int SECTION("overlay.bss") ending_dword_800CCDA0;
int SECTION("overlay.bss") ending_dword_800CCDA4;
int SECTION("overlay.bss") ending_dword_800CCDA8;
int SECTION("overlay.bss") ending_dword_800CCDAC;
int SECTION("overlay.bss") ending_dword_800CCDB0;
int SECTION("overlay.bss") ending_dword_800CCDB4;
int SECTION("overlay.bss") ending_dword_800CCDB8;
int SECTION("overlay.bss") ending_dword_800CCDBC;
int SECTION("overlay.bss") ending_dword_800CCDC0;
int SECTION("overlay.bss") ending_dword_800CCDC4;
int SECTION("overlay.bss") ending_dword_800CCDC8;
int SECTION("overlay.bss") ending_dword_800CCDCC;
int SECTION("overlay.bss") ending_dword_800CCDD0;
int SECTION("overlay.bss") ending_dword_800CCDD4;
int SECTION("overlay.bss") ending_dword_800CCDD8;
int SECTION("overlay.bss") ending_dword_800CCDDC;
int SECTION("overlay.bss") ending_dword_800CCDE0;
int SECTION("overlay.bss") ending_dword_800CCDE4;
int SECTION("overlay.bss") ending_dword_800CCDE8;
int SECTION("overlay.bss") ending_dword_800CCDEC;
int SECTION("overlay.bss") ending_dword_800CCDF0;
int SECTION("overlay.bss") ending_dword_800CCDF4;
int SECTION("overlay.bss") ending_dword_800CCDF8;
int SECTION("overlay.bss") ending_dword_800CCDFC;
int SECTION("overlay.bss") ending_dword_800CCE00;
int SECTION("overlay.bss") ending_dword_800CCE04;
int SECTION("overlay.bss") ending_dword_800CCE08;
int SECTION("overlay.bss") ending_dword_800CCE0C;

