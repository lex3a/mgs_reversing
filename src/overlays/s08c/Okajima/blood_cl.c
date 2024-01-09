#include "libdg/libdg.h"
#include "libgcl/libgcl.h"
#include "libgv/libgv.h"

typedef struct _BloodClWork
{
    GV_ACT   actor;
    DG_PRIM *prim;
    SVECTOR  vecs[64];
    int      map;
} BloodClWork;

extern int GM_CurrentMap_800AB9B0;

#define EXEC_LEVEL 4

int BloodClGetSvecs_800C99AC(char *opt, SVECTOR *out)
{
    int   count;
    char *res;

    count = 0;

    while ((res = GCL_Get_Param_Result_80020AA4()) != NULL)
    {
        GCL_StrToSV_80020A14(res, out);
        out++;
        count++;
    }

    return count;
}

void BloodClGetInts_800C9A00(char *opt, int *out)
{
    char *res;

    while ((res = GCL_Get_Param_Result_80020AA4()) != NULL)
    {
        *out = GCL_StrToInt_800209E8(res);
        out++;
    }
}

void BloodClDie_800C9A44(BloodClWork *work)
{
    DG_PRIM *prim;

    prim = work->prim;
    if (prim != NULL)
    {
        DG_DequeuePrim_800182E0(prim);
        DG_FreePrim_8001BC04(prim);
    }
}

void BloodClAct_800C9A80(BloodClWork *work)
{
}

static inline void BloodClTexPack(POLY_FT4 *pack, DG_TEX *tex)
{
    int x, y, w, h;

    x = tex->field_8_offx;
    w = tex->field_A_width;
    y = tex->field_9_offy;
    h = tex->field_B_height;
    setUVWH(pack, x, y, w, h);

    pack->tpage = tex->field_4_tPage;
    pack->clut = tex->field_6_clut;
}

int BloodClGetResources_800C9A88(BloodClWork *work, int map)
{
    SVECTOR   pos[16];
    SVECTOR   dir[16];
    int       size[16];
    SVECTOR   local[4];
    SVECTOR   color;
    int       raise;
    int       n_prims;
    int       opt;
    int       abr;
    int       i;
    DG_PRIM  *prim;
    DG_TEX   *tex;
    POLY_FT4 *packs0;
    POLY_FT4 *packs1;

    raise = 0;

    n_prims = 0;
    opt = GCL_GetOption_80020968('r');
    if (opt != NULL)
    {
        raise = GCL_StrToInt_800209E8((char *)opt);
    }

    opt = GCL_GetOption_80020968('p');
    if (opt != NULL)
    {
        n_prims = BloodClGetSvecs_800C99AC((char *)opt, pos);

        opt = GCL_GetOption_80020968('d');
        if (opt != NULL)
        {
            BloodClGetSvecs_800C99AC((char *)opt, dir);
        }

        opt = GCL_GetOption_80020968('s');
        if (opt != NULL)
        {
            BloodClGetInts_800C9A00((char *)opt, size);
        }
    }

    opt = GCL_GetOption_80020968('u');
    if (opt != NULL)
    {
        abr = GCL_StrToInt_800209E8((char *)opt);
        abr &= 0x3;
    }
    else
    {
        abr = 0;
    }

    opt = GCL_GetOption_80020968('c');
    if (opt != NULL)
    {
        BloodClGetSvecs_800C99AC((char *)opt, &color);
    }

    work->map = map;
    GM_CurrentMap_800AB9B0 = map;

    for (i = 0; i < n_prims; i++)
    {
        local[0].vx = size[i];
        local[0].vy = 0;
        local[0].vz = size[i];

        local[1].vx = -size[i];
        local[1].vy = 0;
        local[1].vz = size[i];

        local[2].vx = size[i];
        local[2].vy = 0;
        local[2].vz = -size[i];

        local[3].vx = -size[i];
        local[3].vy = 0;
        local[3].vz = -size[i];

        DG_SetPos2_8001BC8C(&pos[i], &dir[i]);
        DG_PutVector_8001BE48(local, &work->vecs[i * 4], 4);
    }

    prim = DG_GetPrim(0x1012, n_prims, 0, work->vecs, NULL);
    work->prim = prim;
    if (work->prim == NULL)
    {
        return -1;
    }

    prim->field_2E_k500 = raise;

    tex = DG_GetTexture_8001D830(GV_StrCode_80016CCC("ketchap_grey"));
    if (tex == NULL)
    {
        return -1;
    }

    packs0 = (POLY_FT4 *)prim->field_40_pBuffers[0];
    packs1 = (POLY_FT4 *)prim->field_40_pBuffers[1];

    while (--n_prims >= 0)
    {
        setPolyFT4(packs0);
        setSemiTrans(packs0, 1);

        setPolyFT4(packs1);
        setSemiTrans(packs1, 1);

        BloodClTexPack(packs0, tex);
        BloodClTexPack(packs1, tex);

        setRGB0(packs0, color.vx, color.vy, color.vz);
        setRGB0(packs1, color.vx, color.vy, color.vz);

        packs0->tpage |= abr << 5;
        packs1->tpage |= abr << 5;

        packs0++;
        packs1++;
    }

    return 0;
}

GV_ACT * NewBloodCl_800C9DF0(int name, int where, int argc, char **argv)
{
    BloodClWork *work;

    work = (BloodClWork *)GV_NewActor_800150E4(EXEC_LEVEL, sizeof(BloodClWork));
    if (work != NULL)
    {
        GV_SetNamedActor_8001514C(&work->actor, (TActorFunction)BloodClAct_800C9A80, (TActorFunction)BloodClDie_800C9A44, "blood_cl.c");

        if (BloodClGetResources_800C9A88(work, where) < 0)
        {
            GV_DestroyActor_800151C8(&work->actor);
            return NULL;
        }
    }

    return &work->actor;
}
