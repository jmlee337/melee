#include <melee/gr/grshrine.h>

#include <dolphin/os/os.h>
#include <math.h>
#include <melee/gr/granime.h>
#include <melee/gr/grdisplay.h>
#include <melee/gr/ground.h>
#include <melee/gr/grzakogenerator.h>
#include <melee/lb/lbunknown_001.h>
#include <melee/lb/lbunknown_003.h>
#include <sysdolphin/baselib/gobjgxlink.h>

static void* lbl_804D6A18;

static StageCallbacks lbl_803E50E8[3] = {
    { grShrine_80201E08, grShrine_80201E34, grShrine_80201E3C,
      grShrine_80201E40, 0 },
    { grShrine_80201E44, grShrine_80201E88, grShrine_80201E90,
      grShrine_80201E94, 0 },
    { grShrine_80201E9C, grShrine_80201F14, grShrine_80201F1C,
      grShrine_80201F40, (1 << 30) | (1 << 31) },
};

StageData lbl_803E5130 = {
    (1 << 0) | (1 << 1) | (1 << 2),
    lbl_803E50E8,
    "/GrSh.dat",
    grShrine_80201C64,
    grShrine_80201C60,
    grShrine_80201CF0,
    grShrine_80201CF4,
    grShrine_80201D18,
    grShrine_80201F44,
    grShrine_80201F4C,
    (1 << 0),
    NULL,
    0,
};

static void grShrine_80201C60(int arg0) {}

static void grShrine_80201C64(void)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 unused0[8];
#endif

    lbl_804D6A18 = Ground_801C49F8();
    grShrine_80201D20(0);
    grShrine_80201D20(1);
    grShrine_80201D20(2);
    Ground_801C39C0();
    Ground_801C3BB4();

    {
        Vec3 v = { 0.5F, 0.0F, 0.0F };

        /// @todo Unused stack.
#ifdef MUST_MATCH
        u8 unused1[4];
#endif

        lb_80011A50(&v, -1, 0.5f, 0.0f, M_PI / 3, -10000.0f, 10000.0f, 10000.0f,
                    -10000.0f);
    }
}

static void grShrine_80201CF0(void) {}

static void grShrine_80201CF4(void)
{
    grZakoGenerator_801CAE04(false);
}

static bool grShrine_80201D18(void)
{
    return false;
}

static HSD_GObj* grShrine_80201D20(s32 arg0)
{
    HSD_GObj* gobj;
    StageCallbacks* callbacks = &lbl_803E50E8[arg0];

    gobj = Ground_801C14D0(arg0);

    if (gobj != NULL) {
        Ground* gp;
        gp = gobj->user_data;
        gp->x8_callback = NULL;
        gp->xC_callback = NULL;
        GObj_SetupGXLink(gobj, grDisplay_801C5DB0, 3, 0);
        if (callbacks->callback3 != NULL) {
            gp->x1C_callback = callbacks->callback3;
        }
        if (callbacks->callback0 != NULL) {
            callbacks->callback0(gobj);
        }
        if (callbacks->callback2 != NULL) {
            func_8038FD54(gobj, callbacks->callback2, 4);
        }
    } else {
        OSReport("%s:%d: couldn t get gobj(id=%d)\n", "grshrine.c", 205, arg0);
    }
    return gobj;
}

static void grShrine_80201E08(HSD_GObj* gobj)
{
    Ground* gp = gobj->user_data;
    grAnime_801C8138(gobj, gp->map_id, 0);
}

static bool grShrine_80201E34(HSD_GObj* arg0)
{
    return false;
}

static void grShrine_80201E3C(HSD_GObj* arg0) {}

static void grShrine_80201E40(HSD_GObj* arg0) {}

static void grShrine_80201E44(HSD_GObj* gobj)
{
    Ground* gp = gobj->user_data;
    grAnime_801C8138(gobj, gp->map_id, 0);
    gp->x11_flags.b012 = 2;
}

static bool grShrine_80201E88(HSD_GObj* arg0)
{
    return false;
}

static void grShrine_80201E90(HSD_GObj* arg0) {}

static void grShrine_80201E94(HSD_GObj* arg0) {}

static void grShrine_80201E98(HSD_GObj* arg0) {}

static void grShrine_80201E9C(HSD_GObj* gobj)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8];
#endif

    Ground* gp = gobj->user_data;
    Ground_801C2ED0(gobj->hsd_obj, gp->map_id);
    grAnime_801C8138(gobj, gp->map_id, 0);
    Ground_801C10B8(gobj, grShrine_80201E98);
    Ground_801C2FE0(gobj);
    gp->x10_flags.b5 = true;
}

static bool grShrine_80201F14(HSD_GObj* arg0)
{
    return false;
}

static void grShrine_80201F1C(HSD_GObj* arg0)
{
    Ground_801C2FE0(arg0);
    lb_800115F4();
}

static void grShrine_80201F40(HSD_GObj* arg0) {}

static bool grShrine_80201F44(bool arg0)
{
    return false;
}

static bool grShrine_80201F4C(Vec3* a, int _, HSD_JObj* joint)
{
    Vec3 b;
    lb_8000B1CC(joint, 0, &b);

    if (a->y > b.y)
        return true;
    else
        return false;
}
