#ifndef _SOCOM_H
#define _SOCOM_H

#include "Game/game.h"
#include "libgv/libgv.h"
#include "Game/control.h"

typedef struct _SocomWork
{
    GV_ACT         field_0_actor;
    OBJECT_NO_ROTS field_20;
    CONTROL       *field_44_pCtrl;
    OBJECT        *field_48_parent_object;
    int            field_4C_obj_idx;
    int           *field_50_ptr;
    short          field_54_bullet_type;
    short          field_56;
    DG_PRIM       *field_58_prim;
    DG_TEX        *field_5C_pTexture;
    SVECTOR        field_60_array[20];
    int            field_100;
    int            field_104_rnd;
    int            field_108;
    DG_PRIM       *field_10C_pPrim;
    SVECTOR        field_110;
    SVECTOR        field_118;
} SocomWork;

STATIC_ASSERT_SIZE(SocomWork, 0x120);

void socom_act_helper_8006528C(SocomWork *a1);
void socom_act_80065518(SocomWork *a1);

int socom_loader_80065B04(SocomWork *a1, OBJECT *a2, int a3);

#endif // _SOCOM_H
