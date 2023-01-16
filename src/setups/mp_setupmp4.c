//
// Warehouse (MP)
//

#include "stagesetup.h"

extern s32 intro[];
extern u32 props[];
extern struct path paths[];
extern struct ailist ailists[];

struct stagesetup setup = {
	NULL,
	NULL,
	NULL,
	intro,
	props,
	paths,
	ailists,
	NULL,
};

u32 props[] = {
	weapon(0x0100, 0x0000, PAD_MP4_0167, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION00)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0171, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0172, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP4_0168, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION01)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0173, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0174, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP4_0169, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION02)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0175, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0176, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP4_016A, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION03)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0177, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0178, OBJFLAG_FALL, 0, 0, 1000)
	stdobject(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0185, OBJFLAG_FALL | OBJFLAG_XTOPADBOUNDS | OBJFLAG_YTOPADBOUNDS | OBJFLAG_ZTOPADBOUNDS | OBJFLAG_INVINCIBLE, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP4_016B, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION04)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0179, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_017A, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP4_016C, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION00)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_017B, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_017C, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP4_016D, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION01)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_017D, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_017E, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP4_016E, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION02)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_017F, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0180, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP4_016F, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION03)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0181, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0182, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP4_0170, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION04)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0183, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP4_0184, OBJFLAG_FALL, 0, 0, 1000)
	hover_prop(0x0100, MODEL_A51_CRATE2, PAD_MP4_0186, OBJFLAG_FALL | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_01000000 | OBJFLAG_DEACTIVATED | OBJFLAG_HOVERPROP_20000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, OBJFLAG3_PUSHABLE, 1000, 0x02010000)
	hover_prop(0x0100, MODEL_HOVERCRATE1, PAD_MP4_0187, OBJFLAG_FALL | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_01000000 | OBJFLAG_DEACTIVATED | OBJFLAG_HOVERPROP_20000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, OBJFLAG3_PUSHABLE | OBJFLAG3_GRABBABLE, 1000, 0x02010000)
	hover_prop(0x0100, MODEL_A51_CRATE2, PAD_MP4_0188, OBJFLAG_FALL | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_01000000 | OBJFLAG_DEACTIVATED | OBJFLAG_HOVERPROP_20000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, OBJFLAG3_PUSHABLE, 1000, 0x02010000)
	endprops
};

s32 intro[] = {
	spawn(PAD_MP4_015B)
	spawn(PAD_MP4_015C)
	spawn(PAD_MP4_015D)
	spawn(PAD_MP4_015E)
	spawn(PAD_MP4_015F)
	spawn(PAD_MP4_0160)
	spawn(PAD_MP4_0161)
	spawn(PAD_MP4_0162)
	spawn(PAD_MP4_0163)
	spawn(PAD_MP4_0164)
	spawn(PAD_MP4_0165)
	spawn(PAD_MP4_0166)
	case(0, 0x013f)
	case_respawn(0, 0x0140)
	case_respawn(0, 0x0141)
	case_respawn(0, 0x0142)
	case_respawn(0, 0x0143)
	case_respawn(0, 0x0144)
	case_respawn(0, 0x0145)
	case(1, 0x014c)
	case_respawn(1, 0x0146)
	case_respawn(1, 0x0147)
	case_respawn(1, 0x0148)
	case_respawn(1, 0x0149)
	case_respawn(1, 0x014a)
	case_respawn(1, 0x014b)
	case(2, 0x0153)
	case_respawn(2, 0x014e)
	case_respawn(2, 0x014f)
	case_respawn(2, 0x0150)
	case_respawn(2, 0x0151)
	case_respawn(2, 0x0152)
	case_respawn(2, 0x014d)
	case(3, 0x015a)
	case_respawn(3, 0x0154)
	case_respawn(3, 0x0155)
	case_respawn(3, 0x0156)
	case_respawn(3, 0x0157)
	case_respawn(3, 0x0158)
	case_respawn(3, 0x0159)
	hill(0x011c)
	hill(0x0087)
	hill(0x006a)
	hill(0x00ec)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};

u8 func1001_1590[] = {
	set_wind_speed(22)
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

u8 func1000_159c[] = {
	mp_init_simulants
	rebuild_teams
	rebuild_squadrons
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

struct ailist ailists[] = {
	{ func1000_159c, 0x1000 },
	{ func1001_1590, 0x1001 },
	{ NULL, 0 },
};





