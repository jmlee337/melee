#include <melee/gr/grtkoopa.h>

#include <dolphin/os/os.h>
#include <melee/gr/granime.h>
#include <melee/gr/grdisplay.h>
#include <melee/gr/ground.h>
#include <melee/gr/grzakogenerator.h>
#include <melee/lb/lbunknown_003.h>
#include <sysdolphin/baselib/gobjgxlink.h>

extern StageInfo stage_info;

static StageCallbacks lbl_803E8C70[4] = {
    { grTKoopa_802217D4, grTKoopa_80221800, grTKoopa_80221808,
      grTKoopa_8022180C, 0 },
    { grTKoopa_802218A0, grTKoopa_802218F0, grTKoopa_802218F8,
      grTKoopa_80221918, 0 },
    { grTKoopa_80221810, grTKoopa_80221860, grTKoopa_80221868,
      grTKoopa_8022189C, (1 << 30) | (1 << 31) },
    { NULL, NULL, NULL, NULL, 0 }
};

StageData lbl_803E8CCC = {
    (1 << 0) | (1 << 4) | (1 << 5),
    lbl_803E8C70,
    "/GrTKp.dat",
    grTKoopa_8022164C,
    grTKoopa_80221648,
    grTKoopa_802216BC,
    grTKoopa_802216C0,
    grTKoopa_802216E4,
    grTKoopa_8022191C,
    grTKoopa_80221924,
    (1 << 0),
    NULL,
    0,
};

static void grTKoopa_80221648(int arg0) {}

static void grTKoopa_8022164C(void)
{
    stage_info.unk8C.b4 = false;
    stage_info.unk8C.b5 = true;
    grTKoopa_802216EC(0);
    grTKoopa_802216EC(1);
    grTKoopa_802216EC(2);
    Ground_801C39C0();
    Ground_801C3BB4();
    Ground_801C4210();
    Ground_801C42AC();
}
static void grTKoopa_802216BC(void) {}

static void grTKoopa_802216C0(void)
{
    grZakoGenerator_801CAE04(0);
}

static bool grTKoopa_802216E4(void)
{
    return false;
}

static HSD_GObj* grTKoopa_802216EC(int gobj_id)
{
    HSD_GObj* gobj;
    StageCallbacks* callbacks = &lbl_803E8C70[gobj_id];

    gobj = Ground_801C14D0(gobj_id);
    if (gobj != NULL) {
        Ground* gp = gobj->user_data;
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
        OSReport("%s:%d: couldn t get gobj(id=%d)\n", "grtkoopa.c", 195,
                 gobj_id);
    }

    return gobj;
}

static void grTKoopa_802217D4(HSD_GObj* gobj)
{
    Ground* gp = gobj->user_data;
    grAnime_801C8138(gobj, gp->map_id, 0);
}

static bool grTKoopa_80221800(HSD_GObj* arg0)
{
    return false;
}

static void grTKoopa_80221808(HSD_GObj* arg0) {}
static void grTKoopa_8022180C(HSD_GObj* arg0) {}

static void grTKoopa_80221810(HSD_GObj* gobj)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8];
#endif

    Ground* gp = gobj->user_data;
    Ground_801C2ED0(gobj->hsd_obj, gp->map_id);
    grAnime_801C8138(gobj, gp->map_id, 0);
}

static bool grTKoopa_80221860(HSD_GObj* arg0)
{
    return false;
}

static void grTKoopa_80221868(HSD_GObj* gobj)
{
    lb_800115F4();
    Ground_801C2FE0(gobj);
}

static void grTKoopa_8022189C(HSD_GObj* arg0) {}

static void grTKoopa_802218A0(HSD_GObj* gobj)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8];
#endif

    Ground* gp = gobj->user_data;
    Ground_801C2ED0(gobj->hsd_obj, gp->map_id);
    grAnime_801C8138(gobj, gp->map_id, 0);
}

static bool grTKoopa_802218F0(HSD_GObj* arg0)
{
    return false;
}

static void grTKoopa_802218F8(HSD_GObj* arg0)
{
    Ground_801C2FE0(arg0);
}

static void grTKoopa_80221918(HSD_GObj* arg0) {}

static bool grTKoopa_8022191C(int arg0)
{
    return false;
}

static bool grTKoopa_80221924(Vec3* arg0, int arg1, HSD_JObj* arg2)
{
    return true;
}
