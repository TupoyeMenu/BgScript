#pragma region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 4;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	char* sLocal_16 = 0;
	BOOL bLocal_17 = 0;
	int iLocal_18 = 0;
	BOOL bLocal_19 = 0;
	Object obLocal_20 = 0;
	BOOL bLocal_21 = 0;
	BOOL bLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	BOOL bLocal_40 = 0;
	BOOL bLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	BOOL bLocal_49 = 0;
	Object obLocal_50 = 0;
	BOOL bLocal_51 = 0;
	BOOL bLocal_52 = 0;
	BOOL bLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0.f;
	Hash hLocal_66 = 0;
	Object obLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 4;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	Object obLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	BOOL bLocal_86 = 0;
	BOOL bLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	float fLocal_95 = 0.f;
	float fLocal_96 = 0.f;
	BOOL bLocal_97 = 0;
	Hash hLocal_98 = 0;
	BOOL bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	BOOL bLocal_106 = 0;
	BOOL bLocal_107 = 0;
	BOOL bLocal_108 = 0;
	BOOL bLocal_109 = 0;
	BOOL bLocal_110 = 0;
	BOOL bLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	BOOL bLocal_114 = 0;
	BOOL bLocal_115 = 0;
	BOOL bLocal_116 = 0;
	int iLocal_117 = 0;
	BOOL bLocal_118 = 0;
	int iLocal_119 = 0;
	BOOL bLocal_120 = 0;
	BOOL bLocal_121 = 0;
	int iLocal_122 = 0;
	BOOL bLocal_123 = 0;
	BOOL bLocal_124 = 0;
	BOOL bLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	BOOL bLocal_128 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#pragma endregion Local Var

void func_0x554CF458()
{
	int num;

	iLocal_1 = -1;
	iLocal_2 = -1;
	sLocal_16 = "1.69.11";
	iLocal_35 = -1;
	iLocal_36 = -1;
	uLocal_56 = { 5022.5645f, -5738f, 16.0937f };
	uLocal_59 = { 5033.8535f, -5747.7485f, 20.4291f };
	uLocal_62 = { 5005.5f, -5750.4f, 17.3f };
	fLocal_65 = 2f;
	iLocal_85 = -1;
	iLocal_88 = -1;
	iLocal_100 = -1;
	iLocal_101 = -1;
	iLocal_102 = -1;
	iLocal_103 = -1;
	iLocal_104 = -1;
	iLocal_105 = -1;
	bLocal_110 = true;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	/*Global_1578030*/g_iBGScriptVersion = MISC::GET_HASH_KEY(sLocal_16);
	func_0x483B9432();

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_0xB401A131();
	
		func_0xE69DADEC();
		func_0x109BC0D6();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && /*Global_2693440*/g_sCURRENT_UGC_STATUS.f_3)
		{
			if (MISC::IS_PC_VERSION())
				Global_4537436 = 0;
		
			FIX_FOR_3280561();
			FIX_FOR_3533670();
			FIX_FOR_5092622();
			func_0x46F6CB8F();
			CHILIADWAKEUP_MAINTAIN();
			func_0xB333D603();
			func_0x5F76544B();
			func_0x455A0262();
			func_0x6AF3BC1C();
			func_0x357924CD();
			func_0x1774FC3F();
			func_0x363E3964();
			func_0xFBC7D388();
			func_0x313073A8();
			func_0xA66E2814();
			func_0x5B6F3F79();
			func_0x70A5C900();
			func_0xD6C077B5();
			func_0xF8C83443();
			func_0xE581594F();
			func_0xEBB43BC2();
			func_0xECE2040D();
			func_0xB55FA0CE();
			func_0x641FD663();
			func_0x172A7346();
			func_0xE9E981BB();
			func_0xF486EB6C();
			func_0x715AA924();
			func_0xA5075A65();
			func_0x6D6D328D();
		}
	
		func_0x60E20BC();
		func_0x408B2E23();
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_0xF4189EB7();
			func_0x1F921654();
			func_0x74A81591();
			func_0xD6E31DD5();
			func_0xD5159B9E();
			func_0x45DA7A3();
			func_0x8566D7EF();
			func_0xC56445BB();
			func_0x38BE1A63();
			func_0x8AA7B74C();
			func_0xC0CFEB4E();
			func_0x466660F2();
			func_0xF81D7A3C();
		}
		else if (/*Global_2693440*/g_sCURRENT_UGC_STATUS.f_3)
		{
			func_0xEFFC3CA9();
			func_0xF9174A1C();
			func_0x486BE352();
		}
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_0x486BE352()
{
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_50))
		OBJECT::DELETE_OBJECT(&obLocal_50);

	if (bLocal_52)
	{
		/*Global_262145*/g_sMPTunables.f_29242 = 20000;
		/*Global_262145*/g_sMPTunables.f_29243 = 99000;
		bLocal_52 = false;
	}

	Global_1058421 = { 0f, 0f, 0f };
	/*Global_1058116*/gBG_MC_serverBD_VARS.f_292 = 0;
	bLocal_53 = false;
	func_0xCBDC91BD();
	iLocal_0 = 0;
	unk = 4;
	uLocal_3 = { unk };
	func_0x52B389EB();
	return;
}

void func_0x52B389EB()
{
	Vector3 vector;

	if (!bLocal_51)
		return;

	vector = { -3259.08f, 3927.874f, 30.03f };
	bLocal_51 = false;
	ENTITY::REMOVE_MODEL_HIDE(vector, 40f, -2099251745, false);
	ENTITY::REMOVE_MODEL_HIDE(vector, 40f, -1420307939, false);
	return;
}

void func_0xCBDC91BD()
{
	if (iLocal_1 != -1)
		/*Global_262145*/g_sMPTunables.f_25342 = iLocal_1;

	if (iLocal_2 != -1)
		/*Global_262145*/g_sMPTunables.f_25343 = iLocal_2;

	return;
}

void func_0xF9174A1C()
{
	Player player;
	Ped ped;
	Hash weaponTypeFromPickupType;
	int num;
	int i;
	int j;

	if (bLocal_53 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) <= 0)
		return;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (!ENTITY::IS_ENTITY_DEAD(ped, false))
	{
		for (i = 0; i <= */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_88124 - 1; i = i + 1)
		{
			weaponTypeFromPickupType = OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_88133[i].f_15);
		
			if (!WEAPON::IS_WEAPON_VALID(weaponTypeFromPickupType))
			{
			}
			else
			{
				for (j = 0; j <= 5; j = j + 1)
				{
					num = /*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_88133[i].f_16[j];
				
					if (!func_0x8054862F(num, weaponTypeFromPickupType))
						/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_88133[i].f_16[j] = 0;
				}
			}
		}
	
		bLocal_53 = true;
	}

	return;
}

BOOL func_0x8054862F(int iParam0, Hash hParam1)
{
	var unk;

	switch (iParam0)
	{
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return false;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, func_0xF8673E79(iParam0, hParam1), 16);

	if (!func_0x3F07D11E(unk))
		return false;

	return true;
}

BOOL func_0x3F07D11E(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_VAR_GUN") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_RAIL") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_CLIP1" /*Default Clip*/) || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_BAT_XM3") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_BAT_XM301") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_BAT_XM302") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_BAT_XM303") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_BAT_XM304") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_BAT_XM305") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_BAT_XM306") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_BAT_XM307") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_BAT_XM308") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_BAT_XM309") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_PISTMK2_XM3") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_VAR_RAY18") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_PUMPSHT_XM3") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_MSMG_XM3") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_MSMGFRN_VAR") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_RPGTVR_VAR") || MISC::ARE_STRINGS_EQUAL(&uParam0, "WCT_STNGN_BAIL"))
		return false;

	return true;
}

char* func_0xF8673E79(int iParam0, Hash hParam1)
{
	int i;
	int dlcWeaponIndex;
	var unk;
	var ComponentDataPtr;

	if (hParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE" /*Knuckle Duster*/;
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG";
		}
	}
	else if (hParam1 == joaat("WEAPON_BAT"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_BAT_VARMOD_XM3"):
				return "WCT_BAT_XM3";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
				return "WCT_BAT_XM301";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
				return "WCT_BAT_XM302";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
				return "WCT_BAT_XM303";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
				return "WCT_BAT_XM304";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
				return "WCT_BAT_XM305";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
				return "WCT_BAT_XM306";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
				return "WCT_BAT_XM307";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
				return "WCT_BAT_XM308";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
				return "WCT_BAT_XM309";
		}
	}
	else if (hParam1 == joaat("WEAPON_KNIFE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
				return "WCT_KNIFE_XM3";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
				return "WCT_KNIFE_XM301";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
				return "WCT_KNIFE_XM302";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
				return "WCT_KNIFE_XM303";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
				return "WCT_KNIFE_XM304";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
				return "WCT_KNIFE_XM305";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
				return "WCT_KNIFE_XM306";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
				return "WCT_KNIFE_XM307";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
				return "WCT_KNIFE_XM308";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
				return "WCT_KNIFE_XM309";
		}
	}

	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /*No Attachment*/;
	
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
	
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP" /*Grip*/;
	
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH" /*Flashlight*/;
	
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH" /*Flashlight*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX" /*Advanced Scope*/;
	
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG" /*Scope*/;
	
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL";
	
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
	
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2";
	
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB";
	
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG";
	
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX";
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN";
	
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
	
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
	
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
	
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
	
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
	
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCT_VAR_WEED";
	
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCT_VAR_STUD";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCT_VAR_BONE";
	
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
			return "WCT_PISTMK2_XM3";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_XM3"):
			return "WCT_MSMG_XM3";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"):
			return "WCT_PUMPSHT_XM3";
	
		case 375646046:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 503494624:
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_MICROSMG_VARMOD_FRN"):
			return "WCT_MSMGFRN_VAR";
	
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"):
			return "WCT_CRBNMIC_VAR";
	
		case joaat("COMPONENT_RPG_VARMOD_TVR"):
			return "WCT_RPGTVR_VAR";
	
		case 943088878:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 310778254:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_BATTLERIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_BATTLERIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_XMAS23"):
			return "WCT_COMPIST_XM";
	
		case joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23"):
			return "WCT_HVSP_XM";
	
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23"):
			return "WCT_SPCR_XM";
	
		case -1675905033:
			return "WCT_STNGN_BAIL";
	
		default:
			if (hParam1 != 0)
			{
				dlcWeaponIndex = func_0x941A9C73(hParam1, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
							if (ComponentDataPtr.f_3 == iParam0)
								return func_0xC9D82232(&(ComponentDataPtr.f_6));
					}
				}
			}
			break;
	}

	return "WCT_INVALID";
}

char* func_0xC9D82232(var uParam0)
{
	return uParam0;
}

int func_0x941A9C73(Hash hParam0, Any* panParam1)
{
	int numDlcWeapons;
	int i;

	numDlcWeapons = FILES::GET_NUM_DLC_WEAPONS();

	for (i = 0; i < numDlcWeapons; i = i + 1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(i, panParam1))
			if (panParam1->f_1 == hParam0)
				return i;
	}

	return -1;
}

void func_0xEFFC3CA9()
{
	int i;

	if (!func_0x3DC0CE5C() || IS_BIT_SET(/*Global_262145*/g_sMPTunables.f_25296, 2))
		return;

	for (i = 0; i <= */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_119413 - 1; i = i + 1)
	{
		if (/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_119419[i].f_28 == -624951259)
			/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_119419[i].f_28 = joaat("WEAPON_BAT");
	}

	return;
}

BOOL func_0x3DC0CE5C()
{
	return /*Global_4718592*/g_FMMC_STRUCT == 0 && /*Global_4718592*/g_FMMC_STRUCT.f_2 == 6;
}

void func_0xF81D7A3C()
{
	Vector3 vector;

	if (!func_0xBAF7844B(*/*Global_4718592*/g_FMMC_STRUCT.f_185586))
		return;

	if (bLocal_51)
		return;

	if (!STREAMING::IS_IPL_ACTIVE("M24_1_carrier"))
		return;

	vector = { -3259.08f, 3927.874f, 30.03f };
	bLocal_51 = true;
	ENTITY::CREATE_MODEL_HIDE(vector, 40f, -2099251745, true);
	ENTITY::CREATE_MODEL_HIDE(vector, 40f, -1420307939, true);
	return;
}

BOOL func_0xBAF7844B(int iParam0)
{
	return iParam0 == 92;
}

void func_0x466660F2()
{
	int i;
	int num;
	int num2;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller")) == 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) == 1)
		return;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		num = /*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3;
		/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3 = 0;
	
		if (IS_BIT_SET(num, 0))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 0);
	
		if (IS_BIT_SET(num, 1))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 1);
	
		if (IS_BIT_SET(num, 2))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 2);
	
		if (IS_BIT_SET(num, 3))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 3);
	
		if (IS_BIT_SET(num, 4))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 4);
	
		if (IS_BIT_SET(num, 5))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 5);
	
		if (IS_BIT_SET(num, 5))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 6);
	
		if (IS_BIT_SET(num, 5))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 7);
	
		if (IS_BIT_SET(num, 6))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 8);
	
		if (IS_BIT_SET(num, 7))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 9);
	
		if (IS_BIT_SET(num, 8))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 10);
	
		if (IS_BIT_SET(num, 9))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 11);
	
		if (IS_BIT_SET(num, 10))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 12);
	
		if (IS_BIT_SET(num, 11))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 13);
	
		if (IS_BIT_SET(num, 12))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 14);
	
		if (IS_BIT_SET(num, 13))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 15);
	
		if (IS_BIT_SET(num, 14))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 16);
	
		if (IS_BIT_SET(num, 15))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 17);
	
		if (IS_BIT_SET(num, 16))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 18);
	
		if (IS_BIT_SET(num, 17))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 19);
	
		if (IS_BIT_SET(num, 18))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 20);
	
		if (IS_BIT_SET(num, 19))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 21);
	
		if (IS_BIT_SET(num, 20))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 22);
	
		if (IS_BIT_SET(num, 21))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 23);
	
		if (IS_BIT_SET(num, 22))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 24);
	
		if (IS_BIT_SET(num, 23))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_80137[i].f_100.f_3), 25);
	}

	for (i = 0; i <= 31; i = i + 1)
	{
		num2 = /*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3;
		/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3 = 0;
	
		if (IS_BIT_SET(num2, 0))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 0);
	
		if (IS_BIT_SET(num2, 1))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 1);
	
		if (IS_BIT_SET(num2, 2))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 2);
	
		if (IS_BIT_SET(num2, 3))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 3);
	
		if (IS_BIT_SET(num2, 4))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 4);
	
		if (IS_BIT_SET(num2, 5))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 5);
	
		if (IS_BIT_SET(num2, 5))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 6);
	
		if (IS_BIT_SET(num2, 5))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 7);
	
		if (IS_BIT_SET(num2, 6))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 8);
	
		if (IS_BIT_SET(num2, 7))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 9);
	
		if (IS_BIT_SET(num2, 8))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 10);
	
		if (IS_BIT_SET(num2, 9))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 11);
	
		if (IS_BIT_SET(num2, 10))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 12);
	
		if (IS_BIT_SET(num2, 11))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 13);
	
		if (IS_BIT_SET(num2, 12))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 14);
	
		if (IS_BIT_SET(num2, 13))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 15);
	
		if (IS_BIT_SET(num2, 14))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 16);
	
		if (IS_BIT_SET(num2, 15))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 17);
	
		if (IS_BIT_SET(num2, 16))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 18);
	
		if (IS_BIT_SET(num2, 17))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 19);
	
		if (IS_BIT_SET(num2, 18))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 20);
	
		if (IS_BIT_SET(num2, 19))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 21);
	
		if (IS_BIT_SET(num2, 20))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 22);
	
		if (IS_BIT_SET(num2, 21))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 23);
	
		if (IS_BIT_SET(num2, 22))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 24);
	
		if (IS_BIT_SET(num2, 23))
			MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_7002[i].f_285.f_3), 25);
	}

	return;
}

void func_0xC0CFEB4E()
{
	int i;
	int j;
	Object closestObjectOfType;
	int k;
	BOOL flag;
	var animDict;
	var animDict2;
	var animDict3;
	int num;

	if (func_0x62114499(4) != */*Global_4718592*/g_FMMC_STRUCT.f_127178)
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_77[i]))
		{
		}
		else
		{
			for (j = 0; j <= 8; j = j + 1)
			{
				closestObjectOfType = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_0x4CB488BA(i), 2f, func_0xC02FF737(j), false, false, true);
			
				if (ENTITY::DOES_ENTITY_EXIST(closestObjectOfType))
					uLocal_77[i] = closestObjectOfType;
			}
		}
	}

	for (i = 0; i <= 3; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_77[i]))
			return;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_82))
	{
		k = 0;
	
		for (k = 0; k <= 31; k = k + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(/*Global_1058116*/gBG_MC_serverBD_VARS.f_119[k]))
			{
			}
			else if (ENTITY::GET_ENTITY_MODEL(/*Global_1058116*/gBG_MC_serverBD_VARS.f_119[k]) != 961977741)
			{
			}
			else
			{
				obLocal_82 = /*Global_1058116*/gBG_MC_serverBD_VARS.f_119[k];
			}
		}
	}

	flag = true;
	TEXT_LABEL_ASSIGN_STRING(&animDict, "ANIM@SCRIPTED@CBR5@IG3_DRILL_BOX@PATTERN_01@LOCKBOX_04@MALE@", 64);
	TEXT_LABEL_ASSIGN_STRING(&animDict2, "ANIM@SCRIPTED@CBR5@IG3_DRILL_BOX@PATTERN_02@LOCKBOX_04@MALE@", 64);
	TEXT_LABEL_ASSIGN_STRING(&animDict3, "ANIM@SCRIPTED@CBR5@IG3_DRILL_BOX@PATTERN_03@LOCKBOX_04@MALE@", 64);

	for (i = 0; i <= 3; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict, "REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict, "REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict, "REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict2, "REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict2, "REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict2, "REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict3, "REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict3, "REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict3, "REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict2, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict2, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict2, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict3, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict3, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict3, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict2, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict2, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict2, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict3, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict3, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_77[i], &animDict3, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3))
			flag = false;
	}

	if (!flag)
		return;

	if (*/*Global_4718592*/g_FMMC_STRUCT.f_186714 != -1)
	{
		num = */*Global_4718592*/g_FMMC_STRUCT.f_186714;
	
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(obLocal_82))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(obLocal_82))
		{
		}
		else
		{
			OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(obLocal_82, PLAYER::PLAYER_PED_ID());
		
			if (num != -1)
			{
				Global_1058067.f_48 = 1;
				MISC::SET_BIT(&Global_1058067.f_38[num / 32], num % 32);
				Global_1058421 = { 10.61f, 0.11f, 210.2f };
			}
		}
	}

	return;
}

Hash func_0xC02FF737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1352813819;
	
		case 1:
			return -1642065782;
	
		case 2:
			return 318962254;
	
		case 3:
			return 94265221;
	
		case 4:
			return -508291147;
	
		case 5:
			return 192047921;
	
		case 6:
			return 1149721950;
	
		case 7:
			return -281824588;
	
		case 8:
			return 649044399;
	
		default:
		
	}

	return 0;
}

Vector3 func_0x4CB488BA(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1233.9f, -2299.2f, -48.9f;
	
		case 1:
			return 1222.9f, -2299.2f, -48.9f;
	
		case 2:
			return 1218.6f, -2298.8f, -48.9f;
	
		case 3:
			return 1208.7f, -2299.2f, -48.9f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_0x62114499(int iParam0)
{
	if (iParam0 != -1)
		return /*Global_262145*/g_sMPTunables.f_33015[iParam0];

	return -1;
}

void func_0x8AA7B74C()
{
	int i;
	Vector3 entityCoords;
	float num;
	BOOL flag;

	if (!func_0xBAF7844B(*/*Global_4718592*/g_FMMC_STRUCT.f_185586))
		return;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	for (i = 0; i <= 24; i = i + 1)
	{
		if (!_IS_NULL_VECTOR(/*Global_4718592*/g_FMMC_STRUCT.f_190637[i].f_1))
		{
			num = entityCoords.f_2 - /*Global_4718592*/g_FMMC_STRUCT.f_190637[i].f_1.f_2;
			flag = num < 2f && num > -0.75f;
		
			if (flag && SYSTEM::VDIST2(entityCoords, /*Global_4718592*/g_FMMC_STRUCT.f_190637[i].f_1) < SYSTEM::POW(/*Global_4718592*/g_FMMC_STRUCT.f_190637[i].f_23, 2f))
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);
			
				if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) != 0 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CONTEXT))
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

void func_0x38BE1A63()
{
	int i;

	if (!func_0xBAF7844B(*/*Global_4718592*/g_FMMC_STRUCT.f_185586))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_68[0]))
		uLocal_68[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-3208.6f, 4003.9f, 5.06f, 3f, -1358531112, false, false, true);

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_68[1]))
		uLocal_68[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-3208.6f, 4003.9f, 5.06f, 3f, 665806624, false, false, true);

	i = 0;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_68[i]))
		{
		}
		else if (ENTITY::IS_ENTITY_ATTACHED(uLocal_68[i]))
		{
			MISC::SET_BIT(&iLocal_71, i);
			_STOPWATCH_RESET(&uLocal_72[i], false, false);
		}
		else if (IS_BIT_SET(iLocal_71, i))
		{
			if (_STOPWATCH_IS_INITIALIZED(&uLocal_72[i]))
			{
				if (func_0x932F3142(uLocal_72[i], 3500, false))
				{
					_STOPWATCH_DESTROY(&uLocal_72[i]);
					NETWORK::NETWORK_SET_ENTITY_CAN_BLEND(uLocal_68[i], true);
					MISC::CLEAR_BIT(&iLocal_71, i);
				}
				else
				{
					NETWORK::NETWORK_SET_ENTITY_CAN_BLEND(uLocal_68[i], false);
				}
			}
		}
	}

	return;
}

void _STOPWATCH_DESTROY(var uParam0)
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_0x932F3142(int iParam0, var uParam1, int iParam2, BOOL bParam3)
{
	if (iParam2 == -1)
		return true;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
		return true;

	return false;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0)
{
	return uParam0->f_1;
}

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

void func_0xC56445BB()
{
	if (!func_0xFEA78839())
	{
		if (*/*Global_4718592*/g_FMMC_STRUCT.f_117195 == 27 || */*Global_4718592*/g_FMMC_STRUCT.f_117195 == 26)
		{
			NETWORK::NETWORK_BAIL(1, 0, 0);
			return;
		}
	}

	if (*/*Global_4718592*/g_FMMC_STRUCT.f_117195 == 27 || */*Global_4718592*/g_FMMC_STRUCT.f_117195 == 26 || */*Global_4718592*/g_FMMC_STRUCT.f_117195 == 32 || */*Global_4718592*/g_FMMC_STRUCT.f_117195 == 30)
	{
		func_0xC1B9BC82();
		return;
	}

	func_0xCBDC91BD();
	return;
}

void func_0xC1B9BC82()
{
	BOOL flag;

	if (/*Global_1574974*/g_bMission321Done)
	{
		func_0xF5F20EF();
		flag = func_0x2160CD41() && !func_0xF4DE11B5() && func_0x47FF56D2();
	
		if (func_0x30BBB71E(&uLocal_3, IS_BIT_SET(iLocal_0, 0), flag, flag))
		{
			if (!IS_BIT_SET(iLocal_0, 0))
			{
				MISC::SET_BIT(&iLocal_0, 0);
				func_0xEEB941A();
			}
		}
		else if (IS_BIT_SET(iLocal_0, 0))
		{
			MISC::CLEAR_BIT(&iLocal_0, 0);
			func_0xCBDC91BD();
		}
	}

	return;
}

void func_0xEEB941A()
{
	if (iLocal_1 != -1)
		/*Global_262145*/g_sMPTunables.f_25342 = 2147483647;

	if (iLocal_2 != -1)
		/*Global_262145*/g_sMPTunables.f_25343 = 2147483647;

	return;
}

BOOL func_0x30BBB71E(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3)
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk;
	int i;

	flag = bParam1;

	if (/*Global_262145*/g_sMPTunables.f_19052)
	{
		flag2 = func_0x46774D9C(uParam0);
	
		if (!/*Global_1575083*/g_b_IsInTransition && !flag2)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_0x974E48B4() || func_0x974E48B4() || func_0x14C33082())
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					flag3 = true;
				
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
					{
						flag3 = true;
					
						if (func_0x879897C4(uParam0, bParam3))
							flag3 = false;
					}
					else
					{
						unk = 4;
						func_0xABB7A2E(&unk[0], &unk[1], &unk[2], &unk[3], false);
					
						for (i = 0; i < 4; i = i + 1)
						{
							if (func_0x19022DBD(unk[i], &uParam0->[i], uParam0, bParam2))
								flag3 = false;
						}
					}
				
					if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
						flag3 = false;
				
					if (flag3)
					{
						if (!_STOPWATCH_IS_INITIALIZED(&(uParam0->f_7)))
							_STOPWATCH_INITIALIZE(&(uParam0->f_7), false, false);
					
						if (_STOPWATCH_IS_INITIALIZED(&(uParam0->f_7)) && func_0x932F3142(uParam0->f_7, 2000, false))
							uParam0->f_5 = uParam0->f_5 + MISC::GET_FRAME_TIME();
					}
					else
					{
						if (_STOPWATCH_IS_INITIALIZED(&(uParam0->f_7)))
						{
							_STOPWATCH_DESTROY(&(uParam0->f_7));
							func_0xB55AE3AD(uParam0);
						}
					
						uParam0->f_6 = uParam0->f_6 + MISC::GET_FRAME_TIME();
					}
				
					if (!func_0x48B70C9A())
						if (func_0xE6BC36B9(uParam0))
							if (!bParam1)
								flag = true;
						else if (bParam1)
							flag = false;
				}
				else
				{
					func_0xB55AE3AD(uParam0);
				}
			}
			else
			{
				func_0xB55AE3AD(uParam0);
			}
		}
		else if (flag2)
		{
			flag = false;
		}
	}

	return flag;
}

BOOL func_0xE6BC36B9(var uParam0)
{
	int num;
	int num2;

	num = SYSTEM::ROUND(uParam0->f_5 * /*Global_262145*/g_sMPTunables.f_19053);

	if (uParam0->f_6 < (float)num)
		return true;

	num2 = SYSTEM::ROUND((float)func_0xBE0C0056() * 1f);

	if (uParam0->f_6 < (float)num2)
		return true;

	return false;
}

int func_0xBE0C0056()
{
	if (func_0xA89F0CB7())
		return 5;

	return 10;
}

BOOL func_0xA89F0CB7()
{
	return */*Global_4718592*/g_FMMC_STRUCT.f_117195 == 32;
}

BOOL func_0x48B70C9A()
{
	return IS_BIT_SET(*/*Global_4718592*/g_FMMC_STRUCT.f_178389, 12);
}

void func_0xB55AE3AD(var uParam0)
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime)
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL func_0x19022DBD(int iParam0, var uParam1, var uParam2, BOOL bParam3)
{
	if (bParam3)
		return true;

	if (iParam0 > 10 || iParam0 < -10)
	{
		if (*uParam1 != iParam0)
		{
			*uParam1 = iParam0;
			_STOPWATCH_RESET(&(uParam2->f_11), false, false);
			return true;
		}
	}

	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT))
	{
		_STOPWATCH_RESET(&(uParam2->f_11), false, false);
		return true;
	}

	if (func_0xA89F0CB7())
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, 363) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, 364))
		{
			_STOPWATCH_RESET(&(uParam2->f_11), false, false);
			return true;
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&(uParam2->f_11)))
	{
		if (func_0x932F3142(uParam2->f_11, 2500, false))
			_STOPWATCH_DESTROY(&(uParam2->f_11));
	
		return true;
	}

	return false;
}

void func_0xABB7A2E(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4)
{
	*uParam0 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	*uParam1 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	*uParam2 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	*uParam3 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);

	if (bParam4)
	{
		if ((float)*uParam0 == 0f && (float)*uParam1 == 0f)
		{
			*uParam0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
			*uParam1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
		}
	
		if ((float)*uParam2 == 0f && (float)*uParam3 == 0f)
		{
			*uParam2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
			*uParam3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
		}
	}

	return;
}

BOOL func_0x879897C4(var uParam0, BOOL bParam1)
{
	BOOL flag;
	var unk;

	flag = true;

	if (bParam1)
		return true;

	if (_STOPWATCH_IS_INITIALIZED(&(uParam0->f_9)) && func_0x932F3142(uParam0->f_9, 4000, false))
		_STOPWATCH_DESTROY(&(uParam0->f_9));

	unk = 4;
	func_0xABB7A2E(&unk[0], &unk[1], &unk[2], &unk[3], false);

	if (func_0x69F6E663(unk[3], &uParam0->[3]))
		flag = false;

	if (!flag || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_MOVE_UP_ONLY) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_MOVE_DOWN_ONLY) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_MOVE_LEFT_ONLY) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_MOVE_RIGHT_ONLY) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT))
		_STOPWATCH_RESET(&(uParam0->f_9), false, false);

	if (func_0xA89F0CB7())
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, 363) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, 364))
			_STOPWATCH_RESET(&(uParam0->f_11), false, false);

	if (_STOPWATCH_IS_INITIALIZED(&(uParam0->f_9)))
		if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_BRAKE) || PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ACCELERATE))
			return true;

	return false;
}

BOOL func_0x69F6E663(int iParam0, var uParam1)
{
	if (iParam0 > 1 || iParam0 < -1)
	{
		if (*uParam1 != iParam0)
		{
			*uParam1 = iParam0;
			return true;
		}
	}

	return false;
}

BOOL func_0x14C33082()
{
	return IS_BIT_SET(/*Global_2684504*/Join_session_trigger, 21);
}

BOOL func_0x974E48B4()
{
	return /*Global_2684504*/Join_session_trigger.f_694;
}

BOOL func_0x974E48B4()
{
	return /*Global_2684504*/Join_session_trigger.f_693;
}

BOOL func_0x46774D9C(var uParam0)
{
	return uParam0->f_6 > (float)/*Global_262145*/g_sMPTunables.f_19054;
}

BOOL func_0x47FF56D2()
{
	return Global_1836688;
}

BOOL func_0xF4DE11B5()
{
	if (/*Global_4456484*/g_sRC_SB_CoronaOptions.f_5 == 18)
		return true;

	if (/*Global_4456484*/g_sRC_SB_CoronaOptions.f_5 == 19)
		return true;

	return IS_BIT_SET(/*Global_4718592*/g_FMMC_STRUCT.f_28, 18);
}

BOOL func_0x2160CD41()
{
	if (/*Global_1836686*/g_b_IsRallyRace || /*Global_4456484*/g_sRC_SB_CoronaOptions.f_34 == 2)
		return true;

	return false;
}

void func_0xF5F20EF()
{
	if (iLocal_1 == -1)
		iLocal_1 = /*Global_262145*/g_sMPTunables.f_25342;

	if (iLocal_2 == -1)
		iLocal_2 = /*Global_262145*/g_sMPTunables.f_25343;

	return;
}

BOOL func_0xFEA78839()
{
	if (*/*Global_4718592*/g_FMMC_STRUCT.f_127755 == 1 || */*Global_4718592*/g_FMMC_STRUCT.f_127755 == 2)
		return true;

	return false;
}

void func_0x8566D7EF()
{
	if (func_0xFEA78839())
		return;

	if (IS_BIT_SET(*/*Global_4718592*/g_FMMC_STRUCT.f_178387, 24) || OBJECT::IS_POINT_IN_ANGLED_AREA(/*Global_4718592*/g_FMMC_STRUCT.f_3565, 1552.523f, -5461.145f, -10f, 10200f, -6599.993f, 200f, 3499.965f, false, true))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
			ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1271.2f, -3091.5f, 5.9f, true, false, false, true);
	
		NETWORK::NETWORK_BAIL(1, 0, 0);
	}

	return;
}

void func_0x45DA7A3()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		return;

	Global_1058421 = { 10.61f, 0.11f, 210.2f };
	MISC::SET_BIT(&(/*Global_1058116*/gBG_MC_serverBD_VARS.f_292), 21);
	return;
}

void func_0xD5159B9E()
{
	eEventType eventAtIndex;
	struct<3> eventData;
	struct<19> eventData2;
	int i;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		if (eventAtIndex == EVENT_NETWORK_SCRIPT_EVENT)
		{
			SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 3);
		
			switch (eventData)
			{
				case -1946226138:
					if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData2, 19))
					{
						if (eventData2 == -1946226138)
						{
							if (eventData2.f_4 == 36)
							{
								if (eventData2.f_13 <= -1 || eventData2.f_13 >= 60)
									return;
							
								if (/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_88133[eventData2.f_13].f_23 == 13)
								{
									/*Global_262145*/g_sMPTunables.f_29242 = 0;
									/*Global_262145*/g_sMPTunables.f_29243 = 0;
									bLocal_52 = true;
								}
							}
						}
					}
					break;
			}
		}
	}

	return;
}

void func_0xD6E31DD5()
{
	if (!/*Global_2684504*/Join_session_trigger.f_24)
		return;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_56, uLocal_59, fLocal_65, false, true, 0) || SYSTEM::VDIST2(uLocal_62, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) <= SYSTEM::POW(3f, 2f))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_50))
	{
		obLocal_50 = OBJECT::CREATE_OBJECT(joaat("prop_const_fence02b"), 5025.56f, -5740.52f, 16f, false, false, false);
		ENTITY::SET_ENTITY_HEADING(obLocal_50, -42.2f);
		ENTITY::SET_ENTITY_ALPHA(obLocal_50, 0, false);
		ENTITY::SET_ENTITY_NOWEAPONDECALS(obLocal_50, true);
	}

	if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		if (func_0x932F3142(uLocal_54, 750, false))
			return;
	else
		_STOPWATCH_RESET(&uLocal_54, false, false);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RLEFT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RUP, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RDOWN, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_UP, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_BEHIND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_LS, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_RS, true);
	return;
}

void func_0x74A81591()
{
	int playerTeam;
	int num;

	if (bLocal_49)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
			bLocal_49 = false;
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		return;

	if (!func_0xBAF7844B(*/*Global_4718592*/g_FMMC_STRUCT.f_185586))
		return;

	playerTeam = PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX());

	if (playerTeam != 0)
		return;

	num = /*Global_1058116*/gBG_MC_serverBD_VARS.f_14[playerTeam];

	if (num != 0 && num != 1)
		return;

	if (Global_1058067.f_1 != 6 || !IS_BIT_SET(/*Global_1058116*/gBG_MC_serverBD_VARS.f_9, 12))
		return;

	NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, true);
	NETWORK::SET_GHOST_ALPHA(50);
	bLocal_49 = true;
	return;
}

void func_0x1F921654()
{
	Entity entity;
	int i;
	Entity entityIndexOfCutsceneEntity;
	Vector3 vector;
	float groundZ;

	if (func_0x62114499(3) != */*Global_4718592*/g_FMMC_STRUCT.f_127178)
	{
		uLocal_44 = { func_0xA9B5EBA8() };
		_STOPWATCH_DESTROY(&uLocal_47);
		return;
	}

	i = 0;

	for (i = 0; i <= 79; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(/*Global_1058116*/gBG_MC_serverBD_VARS.f_152[i]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(/*Global_1058116*/gBG_MC_serverBD_VARS.f_152[i]) != -372985740)
		{
		}
		else
		{
			entity = /*Global_1058116*/gBG_MC_serverBD_VARS.f_152[i];
		}
	}

	MISC::SET_BIT(&(/*Global_4718592*/g_FMMC_STRUCT.f_174795[0].f_148[1].f_10), 3);

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		entityIndexOfCutsceneEntity = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("HVB_TARGET_01", 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(entityIndexOfCutsceneEntity))
			uLocal_44 = { ENTITY::GET_ENTITY_COORDS(entityIndexOfCutsceneEntity, false) };
	}
	else if (!_IS_NULL_VECTOR(uLocal_44))
	{
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_47))
			_STOPWATCH_INITIALIZE(&uLocal_47, false, false);
	
		if (func_0x932F3142(uLocal_47, 5000, false))
		{
			uLocal_44 = { func_0xA9B5EBA8() };
			_STOPWATCH_DESTROY(&uLocal_47);
		}
	
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entity))
		{
			vector = { uLocal_44 };
			groundZ = 0f;
		
			if (MISC::GET_GROUND_Z_EXCLUDING_OBJECTS_FOR_3D_COORD(vector, &groundZ, false, false))
				vector.f_2 = groundZ;
		
			ENTITY::SET_ENTITY_COORDS(entity, vector, true, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(entity, true, false);
			uLocal_44 = { func_0xA9B5EBA8() };
			_STOPWATCH_DESTROY(&uLocal_47);
		}
	}

	return;
}

Vector3 func_0xA9B5EBA8()
{
	return 0f, 0f, 0f;
}

int func_0x62114499(int iParam0)
{
	if (iParam0 != -1)
		return /*Global_262145*/g_sMPTunables.f_35481[iParam0];

	return -1;
}

void func_0xF4189EB7()
{
	if (Global_1956949)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 366, false);
		bLocal_41 = true;
	}
	else if (bLocal_41)
	{
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_42))
			_STOPWATCH_INITIALIZE(&uLocal_42, false, false);
	
		if (func_0x932F3142(uLocal_42, 5000, false))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 366, true);
			bLocal_41 = false;
			_STOPWATCH_DESTROY(&uLocal_42);
		}
	}

	return;
}

void func_0x408B2E23()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_F_Freemode_01"))
	{
		if (func_0xD56328D2())
		{
			bLocal_109 = true;
		}
		else if (bLocal_109)
		{
			bLocal_109 = false;
			bLocal_108 = false;
		}
	
		if (!bLocal_108)
		{
			func_0xCB5B3536();
			bLocal_108 = true;
		}
	
		func_0xF5241D2();
	}
	else if (bLocal_108 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bLocal_108 = false;
	}

	return;
}

void func_0xF5241D2()
{
	int i;

	if (!func_0x47FF56D2() || Global_98800 != 7 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("wardrobe_mp")) == 0 || /*Global_23831*/g_sMenuData.f_6342 < 0 || /*Global_23831*/g_sMenuData.f_6342 >= 125)
		return;

	for (i = 0; i < 9; i = i + 1)
	{
		if (!func_0x17120C54(i))
		{
		}
		else if (!Global_4539212[/*Global_23831*/g_sMenuData.f_6342])
		{
			if (Global_4538960[/*Global_23831*/g_sMenuData.f_6342] == func_0xC02FF737(i))
				Global_4539212[/*Global_23831*/g_sMenuData.f_6342] = true;
		}
	}

	return;
}

int func_0xC02FF737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1614928771;
	
		case 1:
			return 770570732;
	
		case 2:
			return -1424493502;
	
		case 3:
			return -1185247033;
	
		case 4:
			return -931352821;
	
		case 5:
			return -691647586;
	
		case 6:
			return 212514678;
	
		case 7:
			return 451498995;
	
		case 8:
			return 654797871;
	
		default:
		
	}

	return 0;
}

BOOL func_0x17120C54(int iParam0)
{
	int num;

	if (_STAT_GET_PACKED_BOOL(func_0xBD745F24(iParam0), -1))
		return false;

	num = GET_MP_INT_CHARACTER_STAT(12334, -1);

	if (!IS_BIT_SET(num, 5 + iParam0))
		return false;

	return true;
}

int GET_MP_INT_CHARACTER_STAT(int iParam0, int iParam1)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_0x505A9F99(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_0x505A9F99(int iParam0, int iParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, GET_SLOT_NUMBER(iParam1));
}

int GET_SLOT_NUMBER(int iCharacter)
{
	int num;
	int num2;

	num = iCharacter;

	if (num == -1)
	{
		num2 = func_0x47FF56D2();
	
		if (num2 > -1)
		{
			/*Global_2750949*/MPGlobalsStats = 0;
			num = num2;
		}
		else
		{
			num = 0;
			/*Global_2750949*/MPGlobalsStats = 1;
		}
	}

	return num;
}

int func_0x47FF56D2()
{
	return /*Global_1574926*/g_Private_ACTIVE_CHARACTER;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1)
{
	if (iParam1 == -1)
		iParam1 = func_0x47FF56D2();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_0xBD745F24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 32407;
	
		case 1:
			return 42287;
	
		case 2:
			return 42257;
	
		case 3:
			return 42268;
	
		case 4:
			return 42286;
	
		case 5:
			return 51215;
	
		case 6:
			return 51237;
	
		case 7:
			return 51238;
	
		case 8:
			return 51234;
	
		default:
		
	}

	return 0;
}

BOOL func_0x47FF56D2()
{
	return Global_98822;
}

void func_0xCB5B3536()
{
	int i;
	int j;
	Hash hashNameForComponent;
	int num;

	for (i = 0; i < 9; i = i + 1)
	{
		if (!func_0x17120C54(i))
		{
		}
		else
		{
			num = func_0xF9396AAC();
		
			for (j = 0; j < 21; j = j + 1)
			{
				if (/*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[num].f_681.f_2308[j])
				{
					hashNameForComponent = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 11, /*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[num].f_681.f_1338[j][11], /*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[num].f_681.f_1612[j][11]);
				
					if (hashNameForComponent == func_0xC02FF737(i))
						/*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[num].f_681.f_2308[j] = false;
				}
			}
		
			hashNameForComponent = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 11, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_JBIB), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_JBIB));
		
			if (hashNameForComponent == func_0xC02FF737(i))
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_JBIB, 82, 0, 0);
		}
	}

	return;
}

Hash func_0xC02FF737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1614928771;
	
		case 1:
			return 1633751116;
	
		case 2:
			return -2102979918;
	
		case 3:
			return 639671982;
	
		case 4:
			return 897756728;
	
		case 5:
			return 1874086081;
	
		case 6:
			return 1951028164;
	
		case 7:
			return 581054577;
	
		case 8:
			return 1801885868;
	
		default:
		
	}

	return 0;
}

int func_0xF9396AAC()
{
	int num;

	num = 0;
	return num;
}

BOOL func_0xD56328D2()
{
	return /*Global_101585*/g_sShopSettings.f_394 > 0;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk)
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == /*Global_2672855*/MPGlobals.f_3)
					return /*Global_2672855*/MPGlobals.f_2;
				else if (/*Global_2657971*/GlobalplayerBD[player] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_0x60E20BC()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !/*Global_2693440*/g_sCURRENT_UGC_STATUS.f_3)
		return;

	if (func_0xDBD936D3())
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true) && !IS_BIT_SET(/*Global_1845281*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_140, 22))
		{
			if (!bLocal_40 && !Global_76497)
			{
				Global_76497 = true;
				bLocal_40 = true;
			}
		}
		else if (bLocal_40 && Global_76497)
		{
			Global_76497 = false;
			bLocal_40 = false;
		}
	}
	else if (bLocal_40 && Global_76497)
	{
		Global_76497 = false;
		bLocal_40 = false;
	}

	return;
}

BOOL func_0xDBD936D3()
{
	if (func_0x21D64237() == 0)
		return true;

	return false;
}

int func_0x21D64237()
{
	return /*Global_32948*/g_Private_Gamemode_Current;
}

void func_0x6D6D328D()
{
	Vehicle vehiclePedIsIn;

	if (!bLocal_128)
	{
		if (func_0x440D1C81(PLAYER::PLAYER_ID()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		
			if (func_0x1540FA4C(vehiclePedIsIn, true) || func_0x1540FA4C(vehiclePedIsIn, true))
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(vehiclePedIsIn) || func_0x65FE6645(PLAYER::PLAYER_ID()) || VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, joaat("oppressor2")) && PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) && !func_0x7C71011F(PLAYER::PLAYER_ID()) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					if (func_0x65FE6645(PLAYER::PLAYER_ID()))
						bLocal_128 = true;
		}
	}
	else if (!func_0x440D1C81(PLAYER::PLAYER_ID()) || !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		bLocal_128 = false;
	}

	if (bLocal_128)
	{
		func_0x32520C49();
		bLocal_128 = false;
	}

	return;
}

void func_0x32520C49()
{
	Vehicle vehiclePedIsUsing;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && /*Global_1943513*/dance_state != 7 && !func_0x42FA397() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	
		if (_GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == -1)
		{
			func_0x7E110C6F(vehiclePedIsUsing, true);
			VEHICLE::SET_VEHICLE_FIXED(vehiclePedIsUsing);
			ENTITY::SET_ENTITY_HEALTH(vehiclePedIsUsing, 1000, 0, 0);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(vehiclePedIsUsing, 1000f);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(vehiclePedIsUsing, 1000f);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(vehiclePedIsUsing, 0f);
			ENTITY::SET_ENTITY_COLLISION(vehiclePedIsUsing, true, false);
			ENTITY::SET_ENTITY_VISIBLE(vehiclePedIsUsing, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(vehiclePedIsUsing, false);
			VEHICLE::SET_VEHICLE_LIGHTS(vehiclePedIsUsing, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(vehiclePedIsUsing, false);
			VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(vehiclePedIsUsing, false);
			VEHICLE::SET_VEHICLE_IS_STOLEN(vehiclePedIsUsing, false);
			VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(vehiclePedIsUsing, false);
			VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(vehiclePedIsUsing, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(vehiclePedIsUsing, true);
			ENTITY::SET_ENTITY_INVINCIBLE(vehiclePedIsUsing, false);
			VEHICLE::SET_CAN_USE_HYDRAULICS(vehiclePedIsUsing, true);
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(vehiclePedIsUsing, false);
		
			if (func_0x1540FA4C(vehiclePedIsUsing, true) && func_0x6C1B60FD(vehiclePedIsUsing) == PLAYER::PLAYER_ID())
				/*Global_2738934*/MPGlobalsAmbience.f_288 = -1;
			else if (func_0x1540FA4C(vehiclePedIsUsing, true))
				func_0x97234A0B(&vehiclePedIsUsing);
		}
	}

	return;
}

void func_0x97234A0B(var uParam0)
{
	int num;
	int num2;

	num = 13791;
	num2 = GET_MP_INT_CHARACTER_STAT(num, -1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 1);

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
		func_0x492EF904(num2);
	else
		func_0x8EE3C8AD(uParam0, num2, -1, PLAYER::PLAYER_ID(), false);

	/*Global_2738934*/MPGlobalsAmbience.f_295 = num2;
	return;
}

void func_0x8EE3C8AD(var uParam0, int iParam1, int iParam2, Player plParam3, BOOL bParam4)
{
	Player player;
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		switch (iParam1)
		{
			case 4:
			case 8:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, plParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
			
				for (i = 0; i < 32; i = i + 1)
				{
					player = PLAYER::INT_TO_PLAYERINDEX(i);
				
					if (_NETWORK_IS_PLAYER_VALID(player, false, true) && player != plParam3)
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(player), *uParam0, false))
							if (iParam2 == -1)
								func_0x7CE30EA7(func_0x8B0BD82A(player), 0, 0f, 0, 0, 1, plParam3);
							else
								func_0x7CE30EA7(func_0x8B0BD82A(player), 0, 0f, 0, 0, 0, plParam3);
				}
				break;
		
			case 1:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, plParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
			
				for (i = 0; i < 32; i = i + 1)
				{
					player = PLAYER::INT_TO_PLAYERINDEX(i);
				
					if (_NETWORK_IS_PLAYER_VALID(player, false, false) && player != plParam3)
						if (func_0x4B2E9FD(plParam3, player))
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, player, false);
						else if (_NETWORK_IS_PLAYER_VALID(player, false, true))
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(player), *uParam0, false))
								func_0x7CE30EA7(func_0x8B0BD82A(player), 0, 0f, 0, 0, 1, plParam3);
				}
				break;
		
			case 2:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, plParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
			
				for (i = 0; i < 32; i = i + 1)
				{
					player = PLAYER::INT_TO_PLAYERINDEX(i);
				
					if (_NETWORK_IS_PLAYER_VALID(player, false, false) && player != plParam3)
						if (func_0x2F311F9F(plParam3, player))
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, player, false);
						else if (_NETWORK_IS_PLAYER_VALID(player, false, true))
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(player), *uParam0, false))
								func_0x7CE30EA7(func_0x8B0BD82A(player), 0, 0f, 0, 0, 1, plParam3);
				}
				break;
		
			case 3:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, plParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
			
				for (i = 0; i < 32; i = i + 1)
				{
					player = PLAYER::INT_TO_PLAYERINDEX(i);
				
					if (_NETWORK_IS_PLAYER_VALID(player, false, false) && player != plParam3)
						if (func_0x4B2E9FD(plParam3, player) || func_0x2F311F9F(plParam3, player))
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, player, false);
						else if (_NETWORK_IS_PLAYER_VALID(player, false, true))
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(player), *uParam0, false))
								func_0x7CE30EA7(func_0x8B0BD82A(player), 0, 0f, 0, 0, 1, plParam3);
				}
				break;
		
			case 0:
			case 9:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
				break;
		
			case 5:
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, false);
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, PLAYER::GET_PLAYER_PED(plParam3), 0);
				break;
		
			case 6:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, plParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
			
				for (i = 0; i < 32; i = i + 1)
				{
					player = PLAYER::INT_TO_PLAYERINDEX(i);
				
					if (_NETWORK_IS_PLAYER_VALID(player, false, false) && player != plParam3)
						if (func_0x738B29C4(plParam3, player))
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, player, false);
						else if (_NETWORK_IS_PLAYER_VALID(player, false, true))
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(player), *uParam0, false))
								func_0x7CE30EA7(func_0x8B0BD82A(player), 0, 0f, 0, 0, 1, plParam3);
				}
				break;
		
			case 7:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, plParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
			
				for (i = 0; i < 32; i = i + 1)
				{
					player = PLAYER::INT_TO_PLAYERINDEX(i);
				
					if (_NETWORK_IS_PLAYER_VALID(player, false, false) && player != plParam3)
						if (func_0x4B2E9FD(plParam3, player) || func_0x2F311F9F(plParam3, player) || func_0x738B29C4(plParam3, player))
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, player, false);
						else if (_NETWORK_IS_PLAYER_VALID(player, false, true))
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(player), *uParam0, false))
								func_0x7CE30EA7(func_0x8B0BD82A(player), 0, 0f, 0, 0, 1, plParam3);
				}
				break;
		}
	}

	return;
}

BOOL func_0x738B29C4(Player plParam0, Player plParam1)
{
	Player player;

	player = func_0xF661080E(plParam0);

	if (func_0x6A46C9B4(player))
		if (player == func_0xF661080E(plParam1))
			return true;

	return false;
}

BOOL func_0x6A46C9B4(Player plParam0)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

Player func_0xF661080E(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		return /*Global_1887305*/globalPlayerBD_FM_3[plParam0].f_10;

	return _INVALID_PLAYER_INDEX();
}

Player _INVALID_PLAYER_INDEX()
{
	return -1;
}

BOOL func_0x2F311F9F(Player plParam0, Player plParam1)
{
	if (IS_BIT_SET(/*Global_2657971*/GlobalplayerBD[plParam0].f_392, plParam1) || IS_BIT_SET(/*Global_2657971*/GlobalplayerBD[plParam1].f_392, plParam0))
		return true;

	return false;
}

BOOL func_0x4B2E9FD(Player plParam0, Player plParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707307 = { GET_GAMER_HANDLE_PLAYER(plParam0) };
		Global_2707320 = { GET_GAMER_HANDLE_PLAYER(plParam1) };
	
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707307))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707320))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707237, 35, &Global_2707307);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707272, 35, &Global_2707320);
			
				if (Global_2707237 == Global_2707272)
					return true;
			}
		}
	}

	return false;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

void func_0x7CE30EA7(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, Player plParam6)
{
	Hash eventData;

	eventData = -503325966;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_8 = plParam6;
	eventData.f_5 = iParam1;
	eventData.f_6 = iParam4;
	eventData.f_3 = fParam2;
	eventData.f_4 = iParam3;
	eventData.f_7 = iParam5;
	eventData.f_9 = MISC::GET_FRAME_COUNT();

	if (!(iParam0 == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 10, iParam0, eventData);

	return;
}

int func_0x8B0BD82A(Player plParam0)
{
	int address;

	if (func_0x6A46C9B4(plParam0))
		MISC::SET_BIT(&address, plParam0);

	return address;
}

void func_0x492EF904(int iParam0)
{
	Hash eventData;

	eventData = 1433450626;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = iParam0;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 4, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true), eventData);
	return;
}

int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators)
{
	int address;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(player, false, false))
			if (player != PLAYER::PLAYER_ID() || includeLocalPlayer)
				if (includeSpectators)
					MISC::SET_BIT(&address, i);
				else if (!func_0x1A32E11A(player, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_0x1A32E11A(Player plParam0, int iParam1)
{
	BOOL flag;

	if (!func_0x6A46C9B4(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_0x1DCD393E(-1, false) == 8;
	else
		flag = /*Global_1845281*/GlobalplayerBD_FM[plParam0].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_0x1DCD393E(int iParam0, BOOL bParam1)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_0x47FF56D2();

	if (Global_1575063[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

Player func_0x6C1B60FD(Vehicle veParam0)
{
	Hash _int;

	if (!func_0x1540FA4C(veParam0, true))
		return _INVALID_PLAYER_INDEX();

	_int = DECORATOR::DECOR_GET_INT(veParam0, "Player_Vehicle");
	return func_0xF94387FF(_int, false, true, 0);
}

Player func_0xF94387FF(Hash hParam0, BOOL bParam1, BOOL bParam2, Player plParam3)
{
	Player player;
	int i;

	if (bParam2)
	{
		for (i = 0; i < 32; i = i + 1)
		{
			player = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (_NETWORK_IS_PLAYER_VALID(player, false, true) || bParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(player))
				if (hParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(player))
					return player;
		}
	}
	else if (_NETWORK_IS_PLAYER_VALID(plParam3, false, true) || bParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(plParam3))
	{
		if (hParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(plParam3))
			return plParam3;
	}

	return _INVALID_PLAYER_INDEX();
}

void func_0x7E110C6F(Vehicle veParam0, BOOL bParam1)
{
	int _int;

	if (!func_0xB4BAF94A(veParam0) || bParam1)
	{
		if (!/*Global_1836681*/g_b_On_Race || Global_1836691 && !func_0x9B371C47())
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("ruiner2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_19425);
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 0, /*Global_262145*/g_sMPTunables.f_19426);
			}
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("blazer5"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 0, /*Global_262145*/g_sMPTunables.f_19427);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("apc"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_21424);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("dune3"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_21425);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("oppressor"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_21426);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("tampa3"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 0, /*Global_262145*/g_sMPTunables.f_21427);
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_21428);
			}
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("trailersmall2"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_21429);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("chernobog"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 0, /*Global_262145*/g_sMPTunables.f_23627);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("thruster"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_23628);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("deluxo"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_23629);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("stromberg"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_23630);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("stromberg"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 2, /*Global_262145*/g_sMPTunables.f_23631);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("barrage"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 4, /*Global_262145*/g_sMPTunables.f_23632);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("khanjali"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 3, /*Global_262145*/g_sMPTunables.f_23633);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("khanjali"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 4, /*Global_262145*/g_sMPTunables.f_23633);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("pounder2"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_23849);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("pounder2"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 2, /*Global_262145*/g_sMPTunables.f_23850);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("mule4"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_23851);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("oppressor2"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 2, /*Global_262145*/g_sMPTunables.f_24267);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("strikeforce"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_23852);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("scramjet"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_23853);
		
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("monster3") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("monster4") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("monster5"))
					VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 0, /*Global_262145*/g_sMPTunables.f_25486);
			
				if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("imperator") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("imperator2") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("imperator3"))
					VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_25487);
			
				if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("issi4") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("issi6"))
					VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_25488);
			
				if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("issi5"))
					VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 2, /*Global_262145*/g_sMPTunables.f_25488);
			}
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("vigilante"))
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, /*Global_262145*/g_sMPTunables.f_21645);
		
			if (func_0xCC6DC3C(veParam0))
			{
				switch (VEHICLE::GET_VEHICLE_MOD(veParam0, 9))
				{
					case 0:
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("volatol")))
							VEHICLE::SET_VEHICLE_BOMB_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_23634);
						else
							VEHICLE::SET_VEHICLE_BOMB_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_21641);
						break;
				
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("volatol")))
							VEHICLE::SET_VEHICLE_BOMB_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_23634);
						else
							VEHICLE::SET_VEHICLE_BOMB_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_21642);
						break;
				
					case 2:
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("volatol")))
							VEHICLE::SET_VEHICLE_BOMB_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_23634);
						else
							VEHICLE::SET_VEHICLE_BOMB_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_21643);
						break;
				
					case 3:
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("volatol")))
							VEHICLE::SET_VEHICLE_BOMB_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_23634);
						else
							VEHICLE::SET_VEHICLE_BOMB_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_21644);
						break;
				}
			}
		
			if (func_0xE79DDE78(veParam0))
				if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("oppressor2")))
					if (VEHICLE::GET_VEHICLE_MOD(veParam0, 6) == 1)
						VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_21650);
					else if (VEHICLE::GET_VEHICLE_MOD(veParam0, 6) == 0)
						VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_21651);
				else if (VEHICLE::GET_VEHICLE_MOD(veParam0, 1) == 1)
					VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_21646);
				else if (VEHICLE::GET_VEHICLE_MOD(veParam0, 1) == 0)
					VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(veParam0, /*Global_262145*/g_sMPTunables.f_21647);
		}
	
		if (!/*Global_1836681*/g_b_On_Race)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("voltic2"))
			{
				VEHICLE::SET_SCRIPT_ROCKET_BOOST_RECHARGE_TIME(veParam0, /*Global_262145*/g_sMPTunables.f_19424);
				VEHICLE::SET_VEHICLE_KERS_ALLOWED(veParam0, true);
			}
		}
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("boxville5"))
			VEHICLE::VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(veParam0, false);
	
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
		{
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
				_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
		
			MISC::SET_BIT(&_int, 24);
			DECORATOR::DECOR_SET_INT(veParam0, "MPBitset", _int);
		}
	}
	else if (/*Global_1836681*/g_b_On_Race && !Global_1836691)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("ruiner2"))
		{
			if (VEHICLE::GET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 0) != 0)
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 0, 0);
		
			if (VEHICLE::GET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1) != 0)
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 1, 0);
		
			if (!VEHICLE::IS_VEHICLE_WEAPON_DISABLED(joaat("VEHICLE_WEAPON_RUINER_BULLET"), veParam0, PLAYER::PLAYER_PED_ID()))
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_BULLET"), veParam0, PLAYER::PLAYER_PED_ID());
		
			if (!VEHICLE::IS_VEHICLE_WEAPON_DISABLED(joaat("VEHICLE_WEAPON_RUINER_ROCKET"), veParam0, PLAYER::PLAYER_PED_ID()))
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_ROCKET"), veParam0, PLAYER::PLAYER_PED_ID());
		}
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("blazer5"))
		{
			if (VEHICLE::GET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 0) != 0)
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(veParam0, 0, 0);
		
			if (!VEHICLE::IS_VEHICLE_WEAPON_DISABLED(joaat("VEHICLE_WEAPON_CANNON_BLAZER"), veParam0, PLAYER::PLAYER_PED_ID()))
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_CANNON_BLAZER"), veParam0, PLAYER::PLAYER_PED_ID());
		}
	}

	return;
}

BOOL func_0xE79DDE78(Vehicle veParam0)
{
	if (func_0xEB13AB9D(veParam0))
	{
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 1) == 1)
			return true;
	
		if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("oppressor2")))
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 6) == 1)
				return true;
	}

	if (func_0xEB13AB9D(veParam0))
	{
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 1) == 0)
			return true;
	
		if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("oppressor2")))
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 6) == 0)
				return true;
	}

	if (func_0xEB13AB9D(veParam0))
		if (VEHICLE::IS_TOGGLE_MOD_ON(veParam0, 20))
			return true;

	return false;
}

BOOL func_0xEB13AB9D(Vehicle veParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("havok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
			return true;
	}

	return false;
}

BOOL func_0xEB13AB9D(Vehicle veParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("pyro"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("nokota"):
		case joaat("hunter"):
		case joaat("molotok"):
		case joaat("bombushka"):
		case joaat("havok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
			return true;
	}

	return false;
}

BOOL func_0xEB13AB9D(Vehicle veParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("havok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
			return true;
	}

	return false;
}

BOOL func_0xCC6DC3C(Vehicle veParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("streamer216"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("alkonost"):
		case joaat("strikeforce"):
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 9) > -1)
				return true;
			break;
	}

	return false;
}

BOOL func_0x9B371C47()
{
	if (IS_BIT_SET(/*Global_4718592*/g_FMMC_STRUCT.f_28, 18) || */*Global_4718592*/g_FMMC_STRUCT.f_117195 == 18 || */*Global_4718592*/g_FMMC_STRUCT.f_117195 == 19)
		return true;

	return false;
}

BOOL func_0xB4BAF94A(Vehicle veParam0)
{
	int _int;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
					_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
			
				if (IS_BIT_SET(_int, 24))
					return true;
			}
		}
	}

	return false;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle)
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(ped))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == ped)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

BOOL func_0x42FA397()
{
	return IS_BIT_SET(/*Global_1943520*/g_SimpleInteriorData, 6);
}

BOOL func_0x7C71011F(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(/*Global_2657971*/GlobalplayerBD[plParam0].f_322, 4);

	return false;
}

BOOL func_0x65FE6645(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(/*Global_1845281*/GlobalplayerBD_FM[plParam0].f_268.f_312, 13);

	return false;
}

BOOL func_0x1540FA4C(Vehicle veParam0, BOOL bParam1)
{
	if (/*Global_79389*/g_bInMultiplayer)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Hacker_Truck"))
				return 1;

	return 0;
}

BOOL func_0x1540FA4C(Vehicle veParam0, BOOL bParam1)
{
	if (/*Global_79389*/g_bInMultiplayer)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))
				return true;

	return false;
}

BOOL func_0x440D1C81(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (func_0xB2831D42(plParam0) && /*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_11 == plParam0)
			return true;

	return false;
}

BOOL func_0xB2831D42(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8 != -1)
				return func_0xEE599357(/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8) == 11;

	return false;
}

int func_0xEE599357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
	}

	return -1;
}

void func_0xA5075A65()
{
	if (func_0x88D363EA(PLAYER::PLAYER_ID()) && /*Global_2657971*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_322.f_11 == PLAYER::PLAYER_ID())
	{
		func_0x6C5FB9B7();
	
		if (bLocal_124 || !bLocal_123)
			_STOPWATCH_RESET(&uLocal_126, true, false);
	}
	else
	{
		func_0x54292169();
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_126))
	{
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_126, 5000, true))
		{
			_STOPWATCH_DESTROY(&uLocal_126);
		
			if (bLocal_125)
			{
				bLocal_125 = false;
				Global_2696206 = false;
			}
		}
		else if (!bLocal_125)
		{
			if (!Global_2696206)
			{
				Global_2696206 = true;
				bLocal_125 = true;
				_STOPWATCH_RESET(&uLocal_126, true, false);
			}
		}
	}

	return;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer)
{
	if (millis == -1)
		return true;

	_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >= millis)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >= millis)
		return true;

	return false;
}

void func_0x54292169()
{
	bLocal_123 = false;
	bLocal_124 = false;
	iLocal_122 = 0;
	return;
}

void func_0x6C5FB9B7()
{
	int i;
	int num;

	if (!bLocal_123)
	{
		num = iLocal_122 + 30;
	
		if (num >= 1932)
			num = 1931;
	
		for (i = iLocal_122; i <= num; i = i + 1)
		{
			if (IS_BIT_SET(Global_4544411[i].f_13, 14))
			{
				if (func_0xBF3EFB31(Global_4544411[i].f_15.f_2))
				{
					bLocal_124 = true;
					bLocal_123 = true;
					return;
				}
			}
		
			iLocal_122 = iLocal_122 + 1;
		}
	
		if (num == 1931)
			bLocal_123 = true;
	}

	return;
}

BOOL func_0xBF3EFB31(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return false;
	}

	return true;
}

BOOL func_0x88D363EA(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8 != -1)
				return func_0xEE599357(/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8) == 24;

	return false;
}

void func_0x715AA924()
{
	BOOL isEntityAtCoord;
	BOOL flag;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (func_0x3B8D0381(PLAYER::PLAYER_ID()) && func_0x5976C0FC() == PLAYER::PLAYER_ID() && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		isEntityAtCoord = ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 419.2876f, 4815.4233f, -59.9983f, 0.4f, 0.5f, 2f, false, true, 0);
		flag = func_0x142F7A4A(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 350.4359f, 50f);
	
		if (isEntityAtCoord && flag)
			if (HUD::IS_PAUSE_MENU_ACTIVE())
				if (!func_0xF0B5FECC(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_ACHIEVE_HEADING, true))
					TASK::TASK_ACHIEVE_HEADING(PLAYER::PLAYER_PED_ID(), 180f, 0);
	}

	return;
}

BOOL func_0xF0B5FECC(Ped pedParam0, eScriptTaskHash esthParam1, BOOL bParam2)
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;
	else if (!bParam2)
		if (scriptTaskStatus == 2 || scriptTaskStatus == 3)
			return true;

	return false;
}

int func_0x142F7A4A(float fParam0, float fParam1, float fParam2)
{
	float num;
	float num2;

	num2 = fParam1 - fParam2;

	if (num2 < 0f)
		num2 = num2 + 360f;

	num = fParam1 + fParam2;

	if (num >= 360f)
		num = num - 360f;

	if (num > num2)
		if (fParam0 < num && fParam0 > num2)
			return 1;
	else if (fParam0 < num || fParam0 > num2)
		return 1;

	return 0;
}

Player func_0x5976C0FC()
{
	return func_0xF9B95C37(PLAYER::PLAYER_ID());
}

Player func_0xF9B95C37(Player plParam0)
{
	int num;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return plParam0;

	if (func_0x406DDACB(plParam0) != -1)
	{
		num = func_0xEE599357(func_0x406DDACB(plParam0));
	
		if (num == 2 || num == 1 || num == 0 || num == 25)
		{
			if (func_0xB4CE8E51(plParam0, false))
				return func_0xF661080E(plParam0);
		
			return plParam0;
		}
		else if (num == 3)
		{
			return _INVALID_PLAYER_INDEX();
		}
	
		return /*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_11;
	}

	return _INVALID_PLAYER_INDEX();
}

BOOL func_0xB4CE8E51(Player plParam0, BOOL bParam1)
{
	if (!func_0x6A46C9B4(plParam0))
		return false;

	if (!bParam1)
		if (func_0xC62FC261(plParam0))
			return false;

	return func_0x6A46C9B4(/*Global_1887305*/globalPlayerBD_FM_3[plParam0].f_10);
}

BOOL func_0xC62FC261(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x6A46C9B4(/*Global_1887305*/globalPlayerBD_FM_3[plParam0].f_10))
			return /*Global_1887305*/globalPlayerBD_FM_3[plParam0].f_10 == plParam0;

	return false;
}

int func_0x406DDACB(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return /*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8;
		else if (/*Global_1575083*/g_b_IsInTransition || Global_2635563.f_2980 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return /*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8;

	return -1;
}

BOOL func_0x3B8D0381(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8 != -1)
				return func_0xEE599357(/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8) == 9;

	return false;
}

void func_0xF486EB6C()
{
	BOOL flag;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_0xDBD936D3())
	{
		func_0xB6B385C2(0);
		return;
	}

	switch (iLocal_119)
	{
		case 0:
			if (func_0x8C4F1C88())
				func_0xB6B385C2(1);
			break;
	
		case 1:
			if (!func_0x8C4F1C88())
				func_0xB6B385C2(0);
		
			if (func_0xBA519C1() && !_IS_FMMC_ACTIVE())
				func_0xB6B385C2(2);
			break;
	
		case 2:
			if (!func_0x8C4F1C88())
				func_0xB6B385C2(0);
		
			if (!func_0xBA519C1() || _IS_FMMC_ACTIVE())
				func_0xB6B385C2(1);
		
			if (func_0x47FF56D2())
			{
				func_0xB6B385C2(3);
				bLocal_121 = bLocal_120;
			}
			break;
	
		case 3:
			if (!func_0x8C4F1C88())
			{
				func_0xB6B385C2(0);
				flag = true;
			}
		
			if (!func_0xBA519C1() || _IS_FMMC_ACTIVE())
			{
				func_0xB6B385C2(1);
				flag = true;
			}
		
			if (!func_0x47FF56D2())
			{
				func_0xB6B385C2(2);
				flag = true;
			}
		
			if (flag)
				if (bLocal_121 != PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bLocal_121, 0);
			break;
	}

	bLocal_120 = PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID());
	return;
}

BOOL func_0x47FF56D2()
{
	return Global_1962263;
}

BOOL _IS_FMMC_ACTIVE()
{
	return /*Global_1845281*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_193 != 0;
}

BOOL func_0xBA519C1()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

BOOL func_0x8C4F1C88()
{
	return func_0x8278D653(PLAYER::PLAYER_ID(), 7);
}

BOOL func_0x8278D653(Player plParam0, int iParam1)
{
	return IS_BIT_SET(/*Global_2657971*/GlobalplayerBD[plParam0].f_219, iParam1);
}

void func_0xB6B385C2(int iParam0)
{
	if (iParam0 != iLocal_119)
		iLocal_119 = iParam0;

	return;
}

BOOL func_0xDBD936D3()
{
	if (func_0x4228A1C2() == 0)
		return true;

	return false;
}

int func_0x4228A1C2()
{
	return /*Global_1574633*/g_TransitionData.f_18;
}

void func_0xE9E981BB()
{
	Vehicle vehiclePedIsUsing;

	if (IS_BIT_SET(/*Global_1943520*/g_SimpleInteriorData.f_1, 28))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		{
			vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing))
				if (!func_0x5000025C(ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing)))
					MISC::CLEAR_BIT(&(/*Global_1943520*/g_SimpleInteriorData.f_1), 28);
		}
	}

	return;
}

BOOL func_0x5000025C(Hash hParam0)
{
	switch (hParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("conada"):
		case -1659004814:
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("streamer216"):
		case 239897677:
			return true;
	
		default:
		
	}

	return false;
}

void func_0x172A7346()
{
	if (func_0x56648017())
	{
		if (!bLocal_118)
		{
			if (!/*Global_262145*/g_sMPTunables.f_13090)
			{
				bLocal_118 = true;
				/*Global_262145*/g_sMPTunables.f_13090 = 1;
			}
		}
	}
	else if (bLocal_118)
	{
		bLocal_118 = false;
		/*Global_262145*/g_sMPTunables.f_13090 = 0;
	}

	return;
}

BOOL func_0x56648017()
{
	if (func_0x6641C326() || func_0xB8ABA6E5() || func_0x7603C7D8() || func_0xE3052980())
		return true;

	return false;
}

BOOL func_0xE3052980()
{
	if (func_0x48014DA(PLAYER::PLAYER_ID()) == 276 && func_0x48014DA(PLAYER::PLAYER_ID()) == 3)
		return true;

	return false;
}

int func_0x48014DA(Player plParam0)
{
	if (func_0x8B0CDA01(plParam0, false))
		return /*Global_1887305*/globalPlayerBD_FM_3[plParam0].f_10.f_182;

	return -1;
}

BOOL func_0x8B0CDA01(Player plParam0, BOOL bParam1)
{
	if (/*Global_1887305*/globalPlayerBD_FM_3[plParam0].f_10.f_33 != -1 || bParam1 && /*Global_1887305*/globalPlayerBD_FM_3[plParam0].f_10.f_32 != -1)
		return true;

	return false;
}

int func_0x48014DA(Player plParam0)
{
	if (func_0x8B0CDA01(plParam0, false))
		return /*Global_1887305*/globalPlayerBD_FM_3[plParam0].f_10.f_33;

	return -1;
}

BOOL func_0x7603C7D8()
{
	if (func_0x48014DA(PLAYER::PLAYER_ID()) == 276 && func_0x48014DA(PLAYER::PLAYER_ID()) == 1)
		return true;

	return false;
}

int func_0xB8ABA6E5()
{
	if (func_0x48014DA(PLAYER::PLAYER_ID()) == 276 && func_0x48014DA(PLAYER::PLAYER_ID()) == 2)
		return 1;

	return 0;
}

int func_0x6641C326()
{
	if (func_0x48014DA(PLAYER::PLAYER_ID()) == 276 && func_0x48014DA(PLAYER::PLAYER_ID()) == 0)
		return 1;

	return 0;
}

void func_0x641FD663()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || /*Global_1575055*/g_Private_IsMultiplayerCreatorRunning || func_0x48014DA(PLAYER::PLAYER_ID()) == 164 && func_0x407E342D(PLAYER::PLAYER_ID()))
		return;

	if (/*Global_2657971*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_233 != 99)
	{
		if (/*Global_2672855*/MPGlobals.f_2557[0].f_1 == 1 || /*Global_101585*/g_sShopSettings.f_393 > 0)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		
			if (NETWORK::NETWORK_HAS_PENDING_INVITE() && /*Global_101585*/g_sShopSettings.f_393 > 0 && /*Global_101585*/g_sShopSettings.f_493 != -1 && !bLocal_116)
			{
				bLocal_116 = true;
				iLocal_117 = /*Global_101585*/g_sShopSettings.f_493;
				func_0x9D8964AD(iLocal_117, 8, true);
			}
		}
	}
	else if (bLocal_116 && /*Global_2672855*/MPGlobals.f_2557[0].f_1 != 1 && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !NETWORK::NETWORK_HAS_PENDING_INVITE() && CAM::IS_SCREEN_FADED_IN() && !Global_2635563.f_45.f_320)
	{
		func_0x9D8964AD(iLocal_117, 8, false);
		bLocal_116 = false;
		iLocal_117 = -1;
	}

	return;
}

void func_0x9D8964AD(int iParam0, int iParam1, BOOL bParam2)
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&/*Global_101585*/g_sShopSettings.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_0x21D64237() == 0)
		{
			address = GET_MP_INT_CHARACTER_STAT(func_0x28E83966(iParam0), -1);
			MISC::SET_BIT(&address, iParam1);
			func_0xC00D48A9(func_0x28E83966(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::SET_BIT(&/*Global_113969*/SP_save_structure.f_668[iParam0], iParam1);
	}

	return;
}

void func_0xC00D48A9(int iParam0, int iParam1, int iParam2, BOOL bParam3)
{
	Hash statName;

	statName = func_0x505A9F99(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_0x28E83966(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 12924;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9917;
	
		case 57:
			return 9919;
	
		case 58:
			return 11435;
	
		case 59:
			return 11846;
	
		case 60:
			return 11903;
	
		default:
			break;
	}

	return 14835;
}

BOOL func_0x407E342D(Player plParam0)
{
	if (func_0xC62FC261(plParam0))
		if (func_0xE40D6326(plParam0))
			return true;

	return false;
}

BOOL func_0xE40D6326(Player plParam0)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_0x7CD5054C(plParam0, 9);

	return false;
}

BOOL func_0x7CD5054C(Player plParam0, int iParam1)
{
	return IS_BIT_SET(/*Global_1887305*/globalPlayerBD_FM_3[plParam0].f_10.f_4, iParam1);
}

void func_0xB55FA0CE()
{
	if (!func_0x36AA2E94(60) && IS_BIT_SET(/*Global_1845281*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_140, 22))
		func_0xB37805F9(60);

	return;
}

void func_0xB37805F9(int iParam0)
{
	int offset;
	int num;

	offset = iParam0;
	num = offset / 32;
	offset = offset % 32;
	MISC::SET_BIT(&Global_1836944[num], offset);
	return;
}

BOOL func_0x36AA2E94(int iParam0)
{
	int num;
	int num2;

	num = iParam0;
	num2 = num / 32;
	num = num % 32;
	return IS_BIT_SET(Global_1836944[num2], num);
}

void func_0xECE2040D()
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		return;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_ARCADE")) > 0 && func_0xFE840448(PLAYER::PLAYER_ID()) && func_0x87650690())
		bLocal_115 = true;

	if (bLocal_115 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_ARCADE")) <= 0)
	{
		if (func_0x87650690())
			func_0x14C7EA4A(false);
	
		bLocal_115 = false;
	}

	return;
}

void func_0x14C7EA4A(BOOL bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(/*Global_1943520*/g_SimpleInteriorData.f_13, 17))
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				MISC::SET_BIT(&(/*Global_1943520*/g_SimpleInteriorData.f_13), 17);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), KNOCKOFFVEHICLE_NEVER);
			}
		}
	}
	else if (IS_BIT_SET(/*Global_1943520*/g_SimpleInteriorData.f_13, 17))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			MISC::CLEAR_BIT(&(/*Global_1943520*/g_SimpleInteriorData.f_13), 17);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), KNOCKOFFVEHICLE_DEFAULT);
		}
	}

	return;
}

BOOL func_0x87650690()
{
	return IS_BIT_SET(/*Global_1943520*/g_SimpleInteriorData.f_13, 17);
}

BOOL func_0xFE840448(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8 != -1)
				return func_0xEE599357(/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8) == 17;

	return false;
}

void func_0xEBB43BC2()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		return;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0 && func_0xE8921B44(0))
	{
		if (!IS_BIT_SET(/*Global_1943520*/g_SimpleInteriorData.f_4811, 12))
		{
			bLocal_114 = true;
			MISC::SET_BIT(&(/*Global_1943520*/g_SimpleInteriorData.f_4811), 7);
		}
	}
	else if (bLocal_114)
	{
		bLocal_114 = false;
		MISC::CLEAR_BIT(&(/*Global_1943520*/g_SimpleInteriorData.f_4811), 7);
	}

	return;
}

BOOL func_0xE8921B44(int iParam0)
{
	if (iParam0 == 1)
		if (/*Global_20930*/g_Cellphone.PhoneOwner.f_1 > 3)
			if (IS_BIT_SET(Global_8800, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (/*Global_20930*/g_Cellphone.PhoneOwner.f_1 > 3)
		return true;

	return false;
}

void func_0xE581594F()
{
	int i;
	int j;
	BOOL flag;

	if (!func_0x2F4042DD(PLAYER::PLAYER_ID()) || !_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) || !func_0xDBD936D3())
		return;

	if (func_0xE7AE0A5(&uLocal_112, 5000, false))
	{
		if (GET_MP_INT_CHARACTER_STAT(12036, -1) != -1)
			return;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (func_0x7BEA6B6B(i, true) == 1)
			{
				flag = false;
			
				for (j = 0; j < 4; j = j + 1)
				{
					if (Global_2709637[j].f_103 == /*Global_262145*/g_sMPTunables.f_33031[i])
					{
						flag = true;
						break;
					}
				}
			
				if (flag)
					func_0x115F642(2, i, true);
				else
					func_0x115F642(0, i, true);
			}
		}
	}

	return;
}

void func_0x115F642(int iParam0, int iParam1, BOOL bParam2)
{
	switch (iParam1)
	{
		case 0:
			func_0xC00D48A9(12165, iParam0, -1, true);
			break;
	
		case 1:
			func_0xC00D48A9(12166, iParam0, -1, true);
			break;
	
		case 2:
			func_0xC00D48A9(12167, iParam0, -1, true);
			break;
	
		default:
			break;
	}

	if (bParam2 && iParam1 != -1)
		Global_1975605[PLAYER::PLAYER_ID()].f_71.f_23[iParam1] = iParam0;

	return;
}

int func_0x7BEA6B6B(int iParam0, BOOL bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return GET_MP_INT_CHARACTER_STAT(12165, -1);
		
			case 1:
				return GET_MP_INT_CHARACTER_STAT(12166, -1);
		
			case 2:
				return GET_MP_INT_CHARACTER_STAT(12167, -1);
		
			default:
			
		}
	}

	return func_0xEFF7D641(PLAYER::PLAYER_ID(), iParam0);
}

int func_0xEFF7D641(Player plParam0, int iParam1)
{
	if (plParam0 != -1 && iParam1 > -1 && iParam1 < 3)
		return Global_1975605[plParam0].f_71.f_23[iParam1];

	return -1;
}

BOOL func_0xE7AE0A5(var uParam0, int iParam1, BOOL bParam2)
{
	if (iParam1 == -1)
		return true;

	_STOPWATCH_INITIALIZE(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			_STOPWATCH_DESTROY(uParam0);
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		_STOPWATCH_DESTROY(uParam0);
		return true;
	}

	return false;
}

BOOL func_0x2F4042DD(Player plParam0)
{
	return /*Global_1845281*/GlobalplayerBD_FM[plParam0].f_268.f_498 != 0;
}

void func_0xF8C83443()
{
	int num;
	int num2;
	int num3;
	int i;
	int num4;
	int num5;
	int num6;
	int num7;
	int j;

	if (!func_0x2F4042DD(PLAYER::PLAYER_ID()))
		return;

	if (!bLocal_111)
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && func_0xDBD936D3())
		{
			if (GET_MP_INT_CHARACTER_STAT(12036, -1) == -1)
			{
				bLocal_111 = true;
				return;
			}
		
			num = GET_MP_INT_CHARACTER_STAT(12169, -1);
			num2 = GET_MP_INT_CHARACTER_STAT(12037, -1);
			num3 = GET_MP_INT_CHARACTER_STAT(12038, -1);
		
			for (i = 0; i < 4; i = i + 1)
			{
				if (Global_2709637[i].f_103 > 0)
				{
					num4 = 0;
					num5 = -1;
					func_0xC5EEEB87(Global_2709637[i].f_103, &num4, &num5);
					num6 = func_0xB8EC44B7(num4);
				
					if (num2 == num6 && num3 == num5)
					{
						func_0x7BE3998D();
					
						if (num == */*Global_262145*/g_sMPTunables.f_33054)
						{
							num7 = Global_2709637[i].f_107;
						
							if (num7 == -1)
							{
								for (j = 0; j < 3; j = j + 1)
								{
									if (/*Global_262145*/g_sMPTunables.f_33031[j] == Global_2709637[i].f_103)
									{
										num7 = j;
										break;
									}
								}
							}
						
							if (num7 >= 0 && num7 < 3)
								if (func_0x7BEA6B6B(num7, true) != 2)
									func_0x115F642(2, num7, true);
						}
					}
				}
			}
		
			bLocal_111 = true;
		}
	}
	else if (!func_0xDBD936D3())
	{
		bLocal_111 = false;
	}

	return;
}

void func_0x7BE3998D()
{
	int address;

	func_0xC00D48A9(12036, -1, -1, true);
	func_0xC00D48A9(12037, 0, -1, true);
	func_0xC00D48A9(12038, -1, -1, true);
	func_0xC00D48A9(346, false, -1, true);
	func_0xC00D48A9(12039, 0, -1, true);
	func_0xC00D48A9(12168, -1, -1, true);
	func_0xC00D48A9(12169, 0, -1, true);
	func_0x4C8CAB3D(42101, 0, -1);
	Global_1975605[PLAYER::PLAYER_ID()].f_71.f_13.f_8 = 0;
	MISC::CLEAR_BIT(&(Global_1975559.f_1), 30);
	func_0xC00D48A9(12041, 0, -1, true);
	func_0xC00D48A9(12139, 0, -1, true);
	func_0xC00D48A9(12140, -1, -1, true);
	address = GET_MP_INT_CHARACTER_STAT(12033, -1);
	MISC::CLEAR_BIT(&address, 0);
	MISC::CLEAR_BIT(&address, 11);
	MISC::CLEAR_BIT(&address, 14);
	MISC::CLEAR_BIT(&address, 13);
	func_0xC00D48A9(12033, address, -1, true);
	func_0xC00D48A9(12040, 0, -1, true);
	return;
}

void func_0x4C8CAB3D(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
		iParam2 = func_0x47FF56D2();

	if (iParam1 < 0)
		iParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
	return;
}

void func_0xC00D48A9(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3)
{
	Hash statName;

	statName = func_0x1D62A43E(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, bParam3);

	return;
}

Hash func_0x1D62A43E(int iParam0, int iParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, GET_SLOT_NUMBER(iParam1));
}

int func_0xB8EC44B7(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("lm87");
	
		case 2:
			return joaat("cinquemila");
	
		case 3:
			return joaat("autarch");
	
		case 4:
			return joaat("tigon");
	
		case 5:
			return joaat("champion");
	
		case 6:
			return joaat("tenf");
	
		case 7:
			return joaat("sm722");
	
		case 8:
			return joaat("omnisegt");
	
		case 9:
			return joaat("growler");
	
		case 10:
			return joaat("deity");
	
		case 11:
			return joaat("italirsx");
	
		case 12:
			return joaat("coquette4");
	
		case 13:
			return joaat("jubilee");
	
		case 14:
			return joaat("astron");
	
		case 15:
			return joaat("comet7");
	
		case 16:
			return joaat("torero");
	
		case 17:
			return joaat("cheetah2");
	
		case 18:
			return joaat("turismo2");
	
		case 19:
			return joaat("infernus2");
	
		case 20:
			return joaat("stafford");
	
		case 21:
			return joaat("gt500");
	
		case 22:
			return joaat("viseris");
	
		case 23:
			return joaat("mamba");
	
		case 24:
			return joaat("coquette3");
	
		case 25:
			return joaat("stingergt");
	
		case 26:
			return joaat("ztype");
	
		case 27:
			return -1933242328;
	
		case 28:
			return joaat("vigero2");
	
		case 29:
			return joaat("buffalo4");
	
		case 30:
			return joaat("ruston");
	
		case 31:
			return joaat("gauntlet4");
	
		case 32:
			return joaat("dominator8");
	
		case 33:
			return joaat("btype3");
	
		case 34:
			return joaat("swinger");
	
		case 35:
			return joaat("feltzer3");
	
		case 36:
			return joaat("omnis");
	
		case 37:
			return joaat("tropos");
	
		case 38:
			return joaat("jugular");
	
		case 39:
			return joaat("patriot3");
	
		case 40:
			return joaat("toros");
	
		case 41:
			return joaat("caracara2");
	
		case 42:
			return joaat("sentinel3");
	
		case 43:
			return joaat("weevil");
	
		case 44:
			return joaat("kanjo");
	
		case 45:
			return -1249788006;
	
		case 46:
			return joaat("kamacho");
	
		case 47:
			return joaat("hellion");
	
		case 48:
			return joaat("ellie");
	
		case 49:
			return joaat("hermes");
	
		case 50:
			return joaat("hustler");
	
		case 51:
			return joaat("turismo3");
	
		case 52:
			return 165968051;
	
		case 53:
			return 1447690049;
	
		case 54:
			return 669204833;
	
		case 55:
			return joaat("ignus");
	
		case 56:
			return joaat("zentorno");
	
		case 57:
			return joaat("neon");
	
		case 58:
			return joaat("furia");
	
		case 59:
			return joaat("zorrusso");
	
		case 60:
			return joaat("thrax");
	
		case 61:
			return joaat("vagner");
	
		case 62:
			return 2100457220;
	
		case 63:
			return joaat("italigto");
	
		case 64:
			return joaat("s80");
	
		case 65:
			return joaat("tyrant");
	
		case 66:
			return 1748565021;
	
		case 67:
			return joaat("torero2");
	
		case 68:
			return joaat("neo");
	
		case 69:
			return joaat("corsita");
	
		case 70:
			return joaat("paragon");
	
		case 71:
			return joaat("btype2");
	
		case 72:
			return joaat("comet4");
	
		case 73:
			return -465825307;
	
		case 74:
			return -131348178;
	
		case 75:
			return joaat("komoda");
	
		case 76:
			return joaat("tailgater2");
	
		case 77:
			return joaat("jester3");
	
		case 78:
			return joaat("jester4");
	
		case 79:
			return joaat("euros");
	
		case 80:
			return joaat("zr350");
	
		case 81:
			return joaat("cypher");
	
		case 82:
			return joaat("dominator7");
	
		case 83:
			return joaat("baller8");
	
		case 84:
			return joaat("casco");
	
		case 85:
			return joaat("yosemite2");
	
		case 86:
			return joaat("everon");
	
		case 87:
			return joaat("penumbra2");
	
		case 88:
			return joaat("vstr");
	
		case 89:
			return -441209695;
	
		case 90:
			return joaat("schlagen");
	
		case 91:
			return -1029730482;
	
		case 92:
			return joaat("clique");
	
		case 93:
			return 996383885;
	
		case 94:
			return joaat("sugoi");
	
		case 95:
			return joaat("greenwood");
	
		case 96:
			return -654498607;
	
		case 97:
			return 1550581940;
	
		case 98:
			return joaat("seminole2");
	
		case 99:
			return joaat("kanjosj");
	
		case 100:
			return joaat("previon");
	
		default:
		
	}

	return 0;
}

void func_0xC5EEEB87(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = (iParam0 - 1) / (101 - 1);
	*uParam1 = iParam0 - ((101 - 1) * *uParam2);
	return;
}

void func_0xD6C077B5()
{
	var unk;
	int i;
	int num;
	int num2;
	int num3;

	if (bLocal_110)
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && func_0xDBD936D3() && !func_0x8B0CDA01(PLAYER::PLAYER_ID(), false))
		{
			unk.f_9 = 49;
			unk.f_59 = 2;
			unk.f_78 = -1;
			unk.f_79 = -1;
			unk.f_96 = -1;
			unk.f_97 = 1;
			unk.f_99 = 132;
			unk.f_100 = -1;
			unk.f_106 = -1;
			unk.f_107 = -1;
			unk.f_108 = -1;
		
			for (i = 0; i < 4; i = i + 1)
			{
				if (Global_2709637[i].f_103 > 0)
				{
					unk.f_103 = Global_2709637[i].f_103;
					num = 0;
					num2 = -1;
					func_0xC5EEEB87(unk.f_103, &num, &num2);
					func_0x523BD426(num, num2, &(unk.f_104));
					num3 = GET_MP_INT_CHARACTER_STAT(func_0xE4DDEB52(i), -1);
				
					if (num3 > 0)
						unk.f_104 = num3;
					else
						func_0xC00D48A9(func_0xE4DDEB52(i), unk.f_104, -1, true);
				
					if (unk.f_104 > 0)
						Global_2709637[i].f_104 = unk.f_104;
				}
			}
		
			bLocal_110 = false;
		}
	}
	else if (func_0x8B0CDA01(PLAYER::PLAYER_ID(), false))
	{
		switch (func_0x48014DA(PLAYER::PLAYER_ID()))
		{
			case 325:
			case 326:
			case 327:
			case 328:
			case 329:
			case 330:
			case 331:
			case 332:
			case 333:
				bLocal_110 = true;
				break;
		}
	}
	else if (!func_0xDBD936D3())
	{
		bLocal_110 = true;
	}

	return;
}

int func_0xE4DDEB52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12207;
	
		case 1:
			return 12208;
	
		case 2:
			return 12209;
	
		case 3:
			return 12210;
	
		default:
		
	}

	return 0;
}

void func_0x523BD426(int iParam0, int iParam1, var uParam2)
{
	iParam1 = func_0x1D7642BB(iParam1, 0, 4);

	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 695000;
					break;
			
				case 1:
					*uParam2 = 687000;
					break;
			
				case 2:
					*uParam2 = 682000;
					break;
			
				case 3:
					*uParam2 = 685000;
					break;
			
				case 4:
					*uParam2 = 691000;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 670000;
					break;
			
				case 1:
					*uParam2 = 663000;
					break;
			
				case 2:
					*uParam2 = 660000;
					break;
			
				case 3:
					*uParam2 = 659000;
					break;
			
				case 4:
					*uParam2 = 658000;
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 680000;
					break;
			
				case 1:
					*uParam2 = 677000;
					break;
			
				case 2:
					*uParam2 = 672000;
					break;
			
				case 3:
					*uParam2 = 681000;
					break;
			
				case 4:
					*uParam2 = 684000;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 669000;
					break;
			
				case 1:
					*uParam2 = 667000;
					break;
			
				case 2:
					*uParam2 = 660000;
					break;
			
				case 3:
					*uParam2 = 671000;
					break;
			
				case 4:
					*uParam2 = 670000;
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 665000;
					break;
			
				case 1:
					*uParam2 = 672000;
					break;
			
				case 2:
					*uParam2 = 661000;
					break;
			
				case 3:
					*uParam2 = 662000;
					break;
			
				case 4:
					*uParam2 = 658000;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 653000;
					break;
			
				case 1:
					*uParam2 = 660000;
					break;
			
				case 2:
					*uParam2 = 658000;
					break;
			
				case 3:
					*uParam2 = 654000;
					break;
			
				case 4:
					*uParam2 = 665000;
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 650000;
					break;
			
				case 1:
					*uParam2 = 655000;
					break;
			
				case 2:
					*uParam2 = 658000;
					break;
			
				case 3:
					*uParam2 = 662000;
					break;
			
				case 4:
					*uParam2 = 664000;
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 651000;
					break;
			
				case 1:
					*uParam2 = 654000;
					break;
			
				case 2:
					*uParam2 = 660000;
					break;
			
				case 3:
					*uParam2 = 655000;
					break;
			
				case 4:
					*uParam2 = 652000;
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 665000;
					break;
			
				case 1:
					*uParam2 = 667000;
					break;
			
				case 2:
					*uParam2 = 670000;
					break;
			
				case 3:
					*uParam2 = 674000;
					break;
			
				case 4:
					*uParam2 = 677000;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 665000;
					break;
			
				case 1:
					*uParam2 = 667000;
					break;
			
				case 2:
					*uParam2 = 670000;
					break;
			
				case 3:
					*uParam2 = 674000;
					break;
			
				case 4:
					*uParam2 = 677000;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 695000;
					break;
			
				case 1:
					*uParam2 = 692000;
					break;
			
				case 2:
					*uParam2 = 694000;
					break;
			
				case 3:
					*uParam2 = 690000;
					break;
			
				case 4:
					*uParam2 = 688000;
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 675000;
					break;
			
				case 1:
					*uParam2 = 677000;
					break;
			
				case 2:
					*uParam2 = 680000;
					break;
			
				case 3:
					*uParam2 = 673000;
					break;
			
				case 4:
					*uParam2 = 670000;
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 655000;
					break;
			
				case 1:
					*uParam2 = 651000;
					break;
			
				case 2:
					*uParam2 = 650000;
					break;
			
				case 3:
					*uParam2 = 656000;
					break;
			
				case 4:
					*uParam2 = 665000;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 652000;
					break;
			
				case 1:
					*uParam2 = 654000;
					break;
			
				case 2:
					*uParam2 = 660000;
					break;
			
				case 3:
					*uParam2 = 661000;
					break;
			
				case 4:
					*uParam2 = 657000;
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 664000;
					break;
			
				case 1:
					*uParam2 = 669000;
					break;
			
				case 2:
					*uParam2 = 667000;
					break;
			
				case 3:
					*uParam2 = 670000;
					break;
			
				case 4:
					*uParam2 = 673000;
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 672000;
					break;
			
				case 1:
					*uParam2 = 665000;
					break;
			
				case 2:
					*uParam2 = 669000;
					break;
			
				case 3:
					*uParam2 = 668000;
					break;
			
				case 4:
					*uParam2 = 675000;
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 680000;
					break;
			
				case 1:
					*uParam2 = 677000;
					break;
			
				case 2:
					*uParam2 = 679000;
					break;
			
				case 3:
					*uParam2 = 683000;
					break;
			
				case 4:
					*uParam2 = 672000;
					break;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 681000;
					break;
			
				case 1:
					*uParam2 = 685000;
					break;
			
				case 2:
					*uParam2 = 683000;
					break;
			
				case 3:
					*uParam2 = 676000;
					break;
			
				case 4:
					*uParam2 = 678000;
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 682000;
					break;
			
				case 1:
					*uParam2 = 686000;
					break;
			
				case 2:
					*uParam2 = 684000;
					break;
			
				case 3:
					*uParam2 = 678000;
					break;
			
				case 4:
					*uParam2 = 675000;
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 659000;
					break;
			
				case 1:
					*uParam2 = 665000;
					break;
			
				case 2:
					*uParam2 = 662000;
					break;
			
				case 3:
					*uParam2 = 660000;
					break;
			
				case 4:
					*uParam2 = 661000;
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 565000;
					break;
			
				case 1:
					*uParam2 = 560000;
					break;
			
				case 2:
					*uParam2 = 561000;
					break;
			
				case 3:
					*uParam2 = 558000;
					break;
			
				case 4:
					*uParam2 = 662000;
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 564000;
					break;
			
				case 1:
					*uParam2 = 561000;
					break;
			
				case 2:
					*uParam2 = 569000;
					break;
			
				case 3:
					*uParam2 = 563000;
					break;
			
				case 4:
					*uParam2 = 567000;
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 570000;
					break;
			
				case 1:
					*uParam2 = 569000;
					break;
			
				case 2:
					*uParam2 = 565000;
					break;
			
				case 3:
					*uParam2 = 567000;
					break;
			
				case 4:
					*uParam2 = 568000;
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 552000;
					break;
			
				case 1:
					*uParam2 = 554000;
					break;
			
				case 2:
					*uParam2 = 559000;
					break;
			
				case 3:
					*uParam2 = 556000;
					break;
			
				case 4:
					*uParam2 = 557000;
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 560000;
					break;
			
				case 1:
					*uParam2 = 557000;
					break;
			
				case 2:
					*uParam2 = 559000;
					break;
			
				case 3:
					*uParam2 = 563000;
					break;
			
				case 4:
					*uParam2 = 562000;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 568000;
					break;
			
				case 1:
					*uParam2 = 561000;
					break;
			
				case 2:
					*uParam2 = 565000;
					break;
			
				case 3:
					*uParam2 = 566000;
					break;
			
				case 4:
					*uParam2 = 570000;
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 557000;
					break;
			
				case 1:
					*uParam2 = 551000;
					break;
			
				case 2:
					*uParam2 = 553000;
					break;
			
				case 3:
					*uParam2 = 556000;
					break;
			
				case 4:
					*uParam2 = 555000;
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 560000;
					break;
			
				case 1:
					*uParam2 = 559000;
					break;
			
				case 2:
					*uParam2 = 556000;
					break;
			
				case 3:
					*uParam2 = 561000;
					break;
			
				case 4:
					*uParam2 = 563000;
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 565000;
					break;
			
				case 1:
					*uParam2 = 560000;
					break;
			
				case 2:
					*uParam2 = 558000;
					break;
			
				case 3:
					*uParam2 = 566000;
					break;
			
				case 4:
					*uParam2 = 563000;
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 578000;
					break;
			
				case 1:
					*uParam2 = 580000;
					break;
			
				case 2:
					*uParam2 = 575000;
					break;
			
				case 3:
					*uParam2 = 576000;
					break;
			
				case 4:
					*uParam2 = 577000;
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 585000;
					break;
			
				case 1:
					*uParam2 = 575000;
					break;
			
				case 2:
					*uParam2 = 578000;
					break;
			
				case 3:
					*uParam2 = 581000;
					break;
			
				case 4:
					*uParam2 = 582000;
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 580000;
					break;
			
				case 1:
					*uParam2 = 575000;
					break;
			
				case 2:
					*uParam2 = 576000;
					break;
			
				case 3:
					*uParam2 = 573000;
					break;
			
				case 4:
					*uParam2 = 574000;
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 561000;
					break;
			
				case 1:
					*uParam2 = 559000;
					break;
			
				case 2:
					*uParam2 = 555000;
					break;
			
				case 3:
					*uParam2 = 562000;
					break;
			
				case 4:
					*uParam2 = 565000;
					break;
			}
			break;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 570000;
					break;
			
				case 1:
					*uParam2 = 567000;
					break;
			
				case 2:
					*uParam2 = 568000;
					break;
			
				case 3:
					*uParam2 = 574000;
					break;
			
				case 4:
					*uParam2 = 572000;
					break;
			}
			break;
	
		case 35:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 580000;
					break;
			
				case 1:
					*uParam2 = 574000;
					break;
			
				case 2:
					*uParam2 = 576000;
					break;
			
				case 3:
					*uParam2 = 570000;
					break;
			
				case 4:
					*uParam2 = 572000;
					break;
			}
			break;
	
		case 36:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 568000;
					break;
			
				case 1:
					*uParam2 = 567000;
					break;
			
				case 2:
					*uParam2 = 565000;
					break;
			
				case 3:
					*uParam2 = 564000;
					break;
			
				case 4:
					*uParam2 = 561000;
					break;
			}
			break;
	
		case 37:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 580000;
					break;
			
				case 1:
					*uParam2 = 570000;
					break;
			
				case 2:
					*uParam2 = 572000;
					break;
			
				case 3:
					*uParam2 = 579000;
					break;
			
				case 4:
					*uParam2 = 577000;
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 575000;
					break;
			
				case 1:
					*uParam2 = 580000;
					break;
			
				case 2:
					*uParam2 = 576000;
					break;
			
				case 3:
					*uParam2 = 578000;
					break;
			
				case 4:
					*uParam2 = 582000;
					break;
			}
			break;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 590000;
					break;
			
				case 1:
					*uParam2 = 580000;
					break;
			
				case 2:
					*uParam2 = 585000;
					break;
			
				case 3:
					*uParam2 = 588000;
					break;
			
				case 4:
					*uParam2 = 578000;
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 590000;
					break;
			
				case 1:
					*uParam2 = 591000;
					break;
			
				case 2:
					*uParam2 = 593000;
					break;
			
				case 3:
					*uParam2 = 594000;
					break;
			
				case 4:
					*uParam2 = 595000;
					break;
			}
			break;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 380000;
					break;
			
				case 1:
					*uParam2 = 385000;
					break;
			
				case 2:
					*uParam2 = 382000;
					break;
			
				case 3:
					*uParam2 = 386000;
					break;
			
				case 4:
					*uParam2 = 381000;
					break;
			}
			break;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 375000;
					break;
			
				case 1:
					*uParam2 = 380000;
					break;
			
				case 2:
					*uParam2 = 378000;
					break;
			
				case 3:
					*uParam2 = 370000;
					break;
			
				case 4:
					*uParam2 = 372000;
					break;
			}
			break;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 365000;
					break;
			
				case 1:
					*uParam2 = 360000;
					break;
			
				case 2:
					*uParam2 = 361000;
					break;
			
				case 3:
					*uParam2 = 364000;
					break;
			
				case 4:
					*uParam2 = 359000;
					break;
			}
			break;
	
		case 44:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 358000;
					break;
			
				case 1:
					*uParam2 = 357000;
					break;
			
				case 2:
					*uParam2 = 355000;
					break;
			
				case 3:
					*uParam2 = 360000;
					break;
			
				case 4:
					*uParam2 = 356000;
					break;
			}
			break;
	
		case 45:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 365000;
					break;
			
				case 1:
					*uParam2 = 370000;
					break;
			
				case 2:
					*uParam2 = 371000;
					break;
			
				case 3:
					*uParam2 = 369000;
					break;
			
				case 4:
					*uParam2 = 367000;
					break;
			}
			break;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 370000;
					break;
			
				case 1:
					*uParam2 = 375000;
					break;
			
				case 2:
					*uParam2 = 373000;
					break;
			
				case 3:
					*uParam2 = 368000;
					break;
			
				case 4:
					*uParam2 = 365000;
					break;
			}
			break;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 375000;
					break;
			
				case 1:
					*uParam2 = 370000;
					break;
			
				case 2:
					*uParam2 = 367000;
					break;
			
				case 3:
					*uParam2 = 377000;
					break;
			
				case 4:
					*uParam2 = 372000;
					break;
			}
			break;
	
		case 48:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 390000;
					break;
			
				case 1:
					*uParam2 = 391000;
					break;
			
				case 2:
					*uParam2 = 388000;
					break;
			
				case 3:
					*uParam2 = 389000;
					break;
			
				case 4:
					*uParam2 = 385000;
					break;
			}
			break;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 386000;
					break;
			
				case 1:
					*uParam2 = 376000;
					break;
			
				case 2:
					*uParam2 = 379000;
					break;
			
				case 3:
					*uParam2 = 381000;
					break;
			
				case 4:
					*uParam2 = 383000;
					break;
			}
			break;
	
		case 50:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 365000;
					break;
			
				case 1:
					*uParam2 = 360000;
					break;
			
				case 2:
					*uParam2 = 361000;
					break;
			
				case 3:
					*uParam2 = 364000;
					break;
			
				case 4:
					*uParam2 = 369000;
					break;
			}
			break;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 695000;
					break;
			
				case 1:
					*uParam2 = 687000;
					break;
			
				case 2:
					*uParam2 = 682000;
					break;
			
				case 3:
					*uParam2 = 685000;
					break;
			
				case 4:
					*uParam2 = 691000;
					break;
			}
			break;
	
		case 52:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 670000;
					break;
			
				case 1:
					*uParam2 = 663000;
					break;
			
				case 2:
					*uParam2 = 660000;
					break;
			
				case 3:
					*uParam2 = 659000;
					break;
			
				case 4:
					*uParam2 = 658000;
					break;
			}
			break;
	
		case 53:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 680000;
					break;
			
				case 1:
					*uParam2 = 677000;
					break;
			
				case 2:
					*uParam2 = 672000;
					break;
			
				case 3:
					*uParam2 = 681000;
					break;
			
				case 4:
					*uParam2 = 684000;
					break;
			}
			break;
	
		case 54:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 669000;
					break;
			
				case 1:
					*uParam2 = 667000;
					break;
			
				case 2:
					*uParam2 = 660000;
					break;
			
				case 3:
					*uParam2 = 671000;
					break;
			
				case 4:
					*uParam2 = 670000;
					break;
			}
			break;
	
		case 55:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 665000;
					break;
			
				case 1:
					*uParam2 = 672000;
					break;
			
				case 2:
					*uParam2 = 661000;
					break;
			
				case 3:
					*uParam2 = 662000;
					break;
			
				case 4:
					*uParam2 = 658000;
					break;
			}
			break;
	
		case 56:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 653000;
					break;
			
				case 1:
					*uParam2 = 660000;
					break;
			
				case 2:
					*uParam2 = 658000;
					break;
			
				case 3:
					*uParam2 = 654000;
					break;
			
				case 4:
					*uParam2 = 665000;
					break;
			}
			break;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 650000;
					break;
			
				case 1:
					*uParam2 = 655000;
					break;
			
				case 2:
					*uParam2 = 658000;
					break;
			
				case 3:
					*uParam2 = 662000;
					break;
			
				case 4:
					*uParam2 = 664000;
					break;
			}
			break;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 651000;
					break;
			
				case 1:
					*uParam2 = 654000;
					break;
			
				case 2:
					*uParam2 = 660000;
					break;
			
				case 3:
					*uParam2 = 655000;
					break;
			
				case 4:
					*uParam2 = 652000;
					break;
			}
			break;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 665000;
					break;
			
				case 1:
					*uParam2 = 667000;
					break;
			
				case 2:
					*uParam2 = 670000;
					break;
			
				case 3:
					*uParam2 = 674000;
					break;
			
				case 4:
					*uParam2 = 677000;
					break;
			}
			break;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 665000;
					break;
			
				case 1:
					*uParam2 = 667000;
					break;
			
				case 2:
					*uParam2 = 670000;
					break;
			
				case 3:
					*uParam2 = 674000;
					break;
			
				case 4:
					*uParam2 = 677000;
					break;
			}
			break;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 695000;
					break;
			
				case 1:
					*uParam2 = 692000;
					break;
			
				case 2:
					*uParam2 = 694000;
					break;
			
				case 3:
					*uParam2 = 690000;
					break;
			
				case 4:
					*uParam2 = 688000;
					break;
			}
			break;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 675000;
					break;
			
				case 1:
					*uParam2 = 677000;
					break;
			
				case 2:
					*uParam2 = 680000;
					break;
			
				case 3:
					*uParam2 = 673000;
					break;
			
				case 4:
					*uParam2 = 670000;
					break;
			}
			break;
	
		case 63:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 655000;
					break;
			
				case 1:
					*uParam2 = 651000;
					break;
			
				case 2:
					*uParam2 = 650000;
					break;
			
				case 3:
					*uParam2 = 656000;
					break;
			
				case 4:
					*uParam2 = 665000;
					break;
			}
			break;
	
		case 64:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 652000;
					break;
			
				case 1:
					*uParam2 = 654000;
					break;
			
				case 2:
					*uParam2 = 660000;
					break;
			
				case 3:
					*uParam2 = 661000;
					break;
			
				case 4:
					*uParam2 = 657000;
					break;
			}
			break;
	
		case 65:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 664000;
					break;
			
				case 1:
					*uParam2 = 669000;
					break;
			
				case 2:
					*uParam2 = 667000;
					break;
			
				case 3:
					*uParam2 = 670000;
					break;
			
				case 4:
					*uParam2 = 673000;
					break;
			}
			break;
	
		case 66:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 672000;
					break;
			
				case 1:
					*uParam2 = 665000;
					break;
			
				case 2:
					*uParam2 = 669000;
					break;
			
				case 3:
					*uParam2 = 668000;
					break;
			
				case 4:
					*uParam2 = 675000;
					break;
			}
			break;
	
		case 67:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 680000;
					break;
			
				case 1:
					*uParam2 = 677000;
					break;
			
				case 2:
					*uParam2 = 679000;
					break;
			
				case 3:
					*uParam2 = 683000;
					break;
			
				case 4:
					*uParam2 = 672000;
					break;
			}
			break;
	
		case 68:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 681000;
					break;
			
				case 1:
					*uParam2 = 685000;
					break;
			
				case 2:
					*uParam2 = 683000;
					break;
			
				case 3:
					*uParam2 = 676000;
					break;
			
				case 4:
					*uParam2 = 678000;
					break;
			}
			break;
	
		case 69:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 682000;
					break;
			
				case 1:
					*uParam2 = 686000;
					break;
			
				case 2:
					*uParam2 = 684000;
					break;
			
				case 3:
					*uParam2 = 678000;
					break;
			
				case 4:
					*uParam2 = 675000;
					break;
			}
			break;
	
		case 70:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 659000;
					break;
			
				case 1:
					*uParam2 = 665000;
					break;
			
				case 2:
					*uParam2 = 662000;
					break;
			
				case 3:
					*uParam2 = 660000;
					break;
			
				case 4:
					*uParam2 = 661000;
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 565000;
					break;
			
				case 1:
					*uParam2 = 560000;
					break;
			
				case 2:
					*uParam2 = 561000;
					break;
			
				case 3:
					*uParam2 = 558000;
					break;
			
				case 4:
					*uParam2 = 662000;
					break;
			}
			break;
	
		case 72:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 564000;
					break;
			
				case 1:
					*uParam2 = 561000;
					break;
			
				case 2:
					*uParam2 = 569000;
					break;
			
				case 3:
					*uParam2 = 563000;
					break;
			
				case 4:
					*uParam2 = 567000;
					break;
			}
			break;
	
		case 73:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 570000;
					break;
			
				case 1:
					*uParam2 = 569000;
					break;
			
				case 2:
					*uParam2 = 565000;
					break;
			
				case 3:
					*uParam2 = 567000;
					break;
			
				case 4:
					*uParam2 = 568000;
					break;
			}
			break;
	
		case 74:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 552000;
					break;
			
				case 1:
					*uParam2 = 554000;
					break;
			
				case 2:
					*uParam2 = 559000;
					break;
			
				case 3:
					*uParam2 = 556000;
					break;
			
				case 4:
					*uParam2 = 557000;
					break;
			}
			break;
	
		case 75:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 560000;
					break;
			
				case 1:
					*uParam2 = 557000;
					break;
			
				case 2:
					*uParam2 = 559000;
					break;
			
				case 3:
					*uParam2 = 563000;
					break;
			
				case 4:
					*uParam2 = 562000;
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 568000;
					break;
			
				case 1:
					*uParam2 = 561000;
					break;
			
				case 2:
					*uParam2 = 565000;
					break;
			
				case 3:
					*uParam2 = 566000;
					break;
			
				case 4:
					*uParam2 = 570000;
					break;
			}
			break;
	
		case 77:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 557000;
					break;
			
				case 1:
					*uParam2 = 551000;
					break;
			
				case 2:
					*uParam2 = 553000;
					break;
			
				case 3:
					*uParam2 = 556000;
					break;
			
				case 4:
					*uParam2 = 555000;
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 560000;
					break;
			
				case 1:
					*uParam2 = 559000;
					break;
			
				case 2:
					*uParam2 = 556000;
					break;
			
				case 3:
					*uParam2 = 561000;
					break;
			
				case 4:
					*uParam2 = 563000;
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 565000;
					break;
			
				case 1:
					*uParam2 = 560000;
					break;
			
				case 2:
					*uParam2 = 558000;
					break;
			
				case 3:
					*uParam2 = 566000;
					break;
			
				case 4:
					*uParam2 = 563000;
					break;
			}
			break;
	
		case 80:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 578000;
					break;
			
				case 1:
					*uParam2 = 580000;
					break;
			
				case 2:
					*uParam2 = 575000;
					break;
			
				case 3:
					*uParam2 = 576000;
					break;
			
				case 4:
					*uParam2 = 577000;
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 585000;
					break;
			
				case 1:
					*uParam2 = 575000;
					break;
			
				case 2:
					*uParam2 = 578000;
					break;
			
				case 3:
					*uParam2 = 581000;
					break;
			
				case 4:
					*uParam2 = 582000;
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 580000;
					break;
			
				case 1:
					*uParam2 = 575000;
					break;
			
				case 2:
					*uParam2 = 576000;
					break;
			
				case 3:
					*uParam2 = 573000;
					break;
			
				case 4:
					*uParam2 = 574000;
					break;
			}
			break;
	
		case 83:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 561000;
					break;
			
				case 1:
					*uParam2 = 559000;
					break;
			
				case 2:
					*uParam2 = 555000;
					break;
			
				case 3:
					*uParam2 = 562000;
					break;
			
				case 4:
					*uParam2 = 565000;
					break;
			}
			break;
	
		case 84:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 570000;
					break;
			
				case 1:
					*uParam2 = 567000;
					break;
			
				case 2:
					*uParam2 = 568000;
					break;
			
				case 3:
					*uParam2 = 574000;
					break;
			
				case 4:
					*uParam2 = 572000;
					break;
			}
			break;
	
		case 85:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 580000;
					break;
			
				case 1:
					*uParam2 = 574000;
					break;
			
				case 2:
					*uParam2 = 576000;
					break;
			
				case 3:
					*uParam2 = 570000;
					break;
			
				case 4:
					*uParam2 = 572000;
					break;
			}
			break;
	
		case 86:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 568000;
					break;
			
				case 1:
					*uParam2 = 567000;
					break;
			
				case 2:
					*uParam2 = 565000;
					break;
			
				case 3:
					*uParam2 = 564000;
					break;
			
				case 4:
					*uParam2 = 561000;
					break;
			}
			break;
	
		case 87:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 580000;
					break;
			
				case 1:
					*uParam2 = 570000;
					break;
			
				case 2:
					*uParam2 = 572000;
					break;
			
				case 3:
					*uParam2 = 579000;
					break;
			
				case 4:
					*uParam2 = 577000;
					break;
			}
			break;
	
		case 88:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 575000;
					break;
			
				case 1:
					*uParam2 = 580000;
					break;
			
				case 2:
					*uParam2 = 576000;
					break;
			
				case 3:
					*uParam2 = 578000;
					break;
			
				case 4:
					*uParam2 = 582000;
					break;
			}
			break;
	
		case 89:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 590000;
					break;
			
				case 1:
					*uParam2 = 580000;
					break;
			
				case 2:
					*uParam2 = 585000;
					break;
			
				case 3:
					*uParam2 = 588000;
					break;
			
				case 4:
					*uParam2 = 578000;
					break;
			}
			break;
	
		case 90:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 590000;
					break;
			
				case 1:
					*uParam2 = 591000;
					break;
			
				case 2:
					*uParam2 = 593000;
					break;
			
				case 3:
					*uParam2 = 594000;
					break;
			
				case 4:
					*uParam2 = 595000;
					break;
			}
			break;
	
		case 91:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 380000;
					break;
			
				case 1:
					*uParam2 = 385000;
					break;
			
				case 2:
					*uParam2 = 382000;
					break;
			
				case 3:
					*uParam2 = 386000;
					break;
			
				case 4:
					*uParam2 = 381000;
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 375000;
					break;
			
				case 1:
					*uParam2 = 380000;
					break;
			
				case 2:
					*uParam2 = 378000;
					break;
			
				case 3:
					*uParam2 = 370000;
					break;
			
				case 4:
					*uParam2 = 372000;
					break;
			}
			break;
	
		case 93:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 365000;
					break;
			
				case 1:
					*uParam2 = 360000;
					break;
			
				case 2:
					*uParam2 = 361000;
					break;
			
				case 3:
					*uParam2 = 364000;
					break;
			
				case 4:
					*uParam2 = 359000;
					break;
			}
			break;
	
		case 94:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 358000;
					break;
			
				case 1:
					*uParam2 = 357000;
					break;
			
				case 2:
					*uParam2 = 355000;
					break;
			
				case 3:
					*uParam2 = 360000;
					break;
			
				case 4:
					*uParam2 = 356000;
					break;
			}
			break;
	
		case 95:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 365000;
					break;
			
				case 1:
					*uParam2 = 370000;
					break;
			
				case 2:
					*uParam2 = 371000;
					break;
			
				case 3:
					*uParam2 = 369000;
					break;
			
				case 4:
					*uParam2 = 367000;
					break;
			}
			break;
	
		case 96:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 370000;
					break;
			
				case 1:
					*uParam2 = 375000;
					break;
			
				case 2:
					*uParam2 = 373000;
					break;
			
				case 3:
					*uParam2 = 368000;
					break;
			
				case 4:
					*uParam2 = 365000;
					break;
			}
			break;
	
		case 97:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 375000;
					break;
			
				case 1:
					*uParam2 = 370000;
					break;
			
				case 2:
					*uParam2 = 367000;
					break;
			
				case 3:
					*uParam2 = 377000;
					break;
			
				case 4:
					*uParam2 = 372000;
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 390000;
					break;
			
				case 1:
					*uParam2 = 391000;
					break;
			
				case 2:
					*uParam2 = 388000;
					break;
			
				case 3:
					*uParam2 = 389000;
					break;
			
				case 4:
					*uParam2 = 385000;
					break;
			}
			break;
	
		case 99:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 386000;
					break;
			
				case 1:
					*uParam2 = 376000;
					break;
			
				case 2:
					*uParam2 = 379000;
					break;
			
				case 3:
					*uParam2 = 381000;
					break;
			
				case 4:
					*uParam2 = 383000;
					break;
			}
			break;
	
		case 100:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 365000;
					break;
			
				case 1:
					*uParam2 = 360000;
					break;
			
				case 2:
					*uParam2 = 361000;
					break;
			
				case 3:
					*uParam2 = 364000;
					break;
			
				case 4:
					*uParam2 = 369000;
					break;
			}
			break;
	}

	return;
}

int func_0x1D7642BB(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

void func_0x70A5C900()
{
	if (func_0x88D363EA(PLAYER::PLAYER_ID()) && /*Global_2657971*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_322.f_11 == PLAYER::PLAYER_ID())
	{
		if (func_0x47FF56D2() == 4 && HUD::GET_WARNING_SCREEN_MESSAGE_HASH() == joaat("BAIL_BADSPONLY"))
		{
			Global_2696206 = true;
			bLocal_107 = true;
		}
	}
	else if (bLocal_107 && func_0xDBD936D3())
	{
		Global_2696206 = false;
		bLocal_107 = false;
	}

	return;
}

int func_0x47FF56D2()
{
	return Global_1057440;
}

void func_0x5B6F3F79()
{
	var string1;

	if (func_0xAB4D17EF(PLAYER::PLAYER_ID()) == 1)
	{
		if (!bLocal_106)
		{
			string1 = { func_0xF0BF0F97() };
		
			if (MISC::ARE_STRINGS_EQUAL(&string1, "TNRP_UE_5A"))
				bLocal_106 = true;
		}
		else
		{
			func_0xF4FB34B2(789, false);
			func_0xF4FB34B2(790, false);
			func_0xF4FB34B2(791, false);
		}
	}
	else
	{
		bLocal_106 = false;
	}

	return;
}

void func_0xF4FB34B2(int iParam0, BOOL bParam1)
{
	int i;
	int num;

	if (iParam0 == 0 || !func_0x9468B50E(iParam0))
		return;

	num = -1;

	for (i = 0; i < 18; i = i + 1)
	{
		if (bParam1)
		{
			if (Global_1949771.f_5941[i] == iParam0)
				return;
		
			if (Global_1949771.f_5941[i] == 0)
				if (num == -1)
					num = i;
		}
		else if (Global_1949771.f_5941[i] == iParam0)
		{
			Global_1949771.f_5941[i] = 0;
		}
	}

	if (bParam1)
		if (num > -1)
			Global_1949771.f_5941[num] = iParam0;

	return;
}

BOOL func_0x9468B50E(int iParam0)
{
	return func_0x14BA5D57(iParam0, PLAYER::PLAYER_ID());
}

BOOL func_0x14BA5D57(int iParam0, Player plParam1)
{
	Player player;
	int i;
	int j;

	if (plParam1 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam1, false, true))
	{
		if (Global_1949771.f_6046.f_3 != 0)
			return 1;
	
		if (iParam0 != 0)
		{
			player = plParam1;
		
			if (func_0xB4CE8E51(plParam1, true))
				player = func_0xF661080E(plParam1);
		
			for (i = 0; i < 10; i = i + 1)
			{
				if (Global_2650436.f_199.f_962[i] == player)
				{
					for (j = 0; j < 18; j = j + 1)
					{
						if (Global_2650436.f_199.f_962[i].f_1[j] == iParam0)
							return 1;
					}
				}
			}
		}
	}

	return 0;
}

struct<6> func_0xF0BF0F97()
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (/*Global_22286*/22286 != 0)
		return Global_21905;

	return unk;
}

int func_0xAB4D17EF(Player plParam0)
{
	if (func_0x48014DA(plParam0) == 271)
		return func_0x48014DA(plParam0);

	return -1;
}

void func_0xA66E2814()
{
	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !CAM::IS_SCREEN_FADED_OUT() && /*Global_2696212*/g_OfficeHeliDockData.f_5 == 1 && /*Global_2696212*/g_OfficeHeliDockData.f_27.f_66 == joaat("seasparrow2"))
		/*Global_2696212*/g_OfficeHeliDockData.f_5 = 0;

	return;
}

void func_0x313073A8()
{
	if (Global_1980263.f_9 != -1)
	{
		if (!bLocal_99)
		{
			iLocal_100 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD);
			iLocal_101 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD);
			iLocal_102 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1);
			iLocal_103 = PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD);
			iLocal_104 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF);
			iLocal_105 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF);
			bLocal_99 = true;
		}
		else if (iLocal_100 != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD) || iLocal_101 != PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD) || iLocal_102 != PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1) || iLocal_103 != PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD) || iLocal_104 != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF) || iLocal_105 != PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF))
		{
			Global_1980263.f_9 = -1;
			Global_1980263.f_10 = -1;
			bLocal_99 = false;
		}
	}

	return;
}

void func_0xFBC7D388()
{
	if (!Global_1980303)
		Global_1980303 = true;

	return;
}

void func_0x363E3964()
{
	Vehicle playersLastVehicle;
	Ped entityIndexOfCutsceneEntity;
	float entityHeading;
	Vector3 entityCoords;
	Vehicle closestVehicle;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_content_bike_shop_delivery")) == 0)
		return;

	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (hLocal_98 != 0)
			hLocal_98 = 0;
	
		if (bLocal_97)
			bLocal_97 = false;
	
		return;
	}

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(playersLastVehicle))
		hLocal_98 = ENTITY::GET_ENTITY_MODEL(playersLastVehicle);

	func_0x443205DF(&playersLastVehicle);
	entityIndexOfCutsceneEntity = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Delivery_vehicle", joaat("hermes"));

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityIndexOfCutsceneEntity))
	{
		ENTITY::SET_ENTITY_VISIBLE(entityIndexOfCutsceneEntity, false, false);
		ENTITY::SET_ENTITY_COLLISION(entityIndexOfCutsceneEntity, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(entityIndexOfCutsceneEntity, true);
		entityCoords = { ENTITY::GET_ENTITY_COORDS(entityIndexOfCutsceneEntity, true) };
		entityHeading = ENTITY::GET_ENTITY_HEADING(entityIndexOfCutsceneEntity);
	}

	if (!bLocal_97)
	{
		closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(0f, 0f, -50f, 1f, hLocal_98, 2);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(closestVehicle))
		{
			ENTITY::SET_ENTITY_COORDS(closestVehicle, entityCoords, false, false, false, false);
			ENTITY::SET_ENTITY_HEADING(closestVehicle, entityHeading);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(closestVehicle, 1084227584);
			bLocal_97 = true;
			return;
		}
	}

	return;
}

void func_0x443205DF(var uParam0)
{
	int i;
	Ped pedInVehicleSeat;
	int seatIndex;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(*uParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
	{
		for (i = -1; i <= 8; i = i + 1)
		{
			seatIndex = i;
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, seatIndex, false);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedInVehicleSeat))
				NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(pedInVehicleSeat);
		}
	
		NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(*uParam0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam0, false, true, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(*uParam0, false);
	}

	return;
}

void func_0x1774FC3F()
{
	int num;
	BOOL flag;
	BOOL flag2;
	float entityHeading;
	float num2;
	Player i;
	int num3;

	num = -1;

	if (func_0xCA2EA26D(false) && func_0xC4C02DA2(_GET_BOSS_OF_LOCAL_PLAYER()) != 0)
	{
		num = func_0xF83E017(func_0xC4C02DA2(_GET_BOSS_OF_LOCAL_PLAYER()));
		flag = 1;
	}
	else
	{
		num = func_0x965C3491(PLAYER::PLAYER_ID());
	}

	if (iLocal_88 != num || bLocal_87 != flag)
	{
		func_0xDEB37B1F(num, &uLocal_89, &uLocal_92, &fLocal_95, &fLocal_96);
		iLocal_88 = num;
		bLocal_87 = flag;
	}

	if (/*Global_1943520*/g_SimpleInteriorData.f_4811.f_4 == -1 && /*Global_1943520*/g_SimpleInteriorData.f_4811.f_4 != iLocal_88)
		/*Global_1943520*/g_SimpleInteriorData.f_4811.f_4 = iLocal_88;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_89, uLocal_92, fLocal_95, false, true, 0))
	{
		entityHeading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		num2 = MISC::ABSF(fLocal_96 - entityHeading);
		flag2 = num2 < 60f || num2 > 300f;
	
		if (!flag2)
			return;
	
		for (i = 0; i < 32; i = i + 1)
		{
			if (func_0x8ACF6631(i, iLocal_88))
				num3 = num3 + 1;
		}
	
		if (num3 == 0 || num3 == 1 && func_0x8ACF6631(_GET_BOSS_OF_LOCAL_PLAYER(), iLocal_88))
			if (func_0x67F162DB())
				func_0xD40A0568(iLocal_88);
	}

	return;
}

void func_0xD40A0568(int iParam0)
{
	if (bLocal_87)
		func_0xE47D2A15(_GET_BOSS_OF_LOCAL_PLAYER());

	/*Global_1943520*/g_SimpleInteriorData.f_3893 = 1;
	/*Global_1943520*/g_SimpleInteriorData.f_3894 = iParam0;
	/*Global_1943520*/g_SimpleInteriorData.f_3895 = 0;
	/*Global_1943520*/g_SimpleInteriorData.f_3900 = 1;
	/*Global_2657971*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_322.f_29 = 0;
	return;
}

void func_0xE47D2A15(Player plParam0)
{
	/*Global_1943520*/g_SimpleInteriorData.f_3547 = plParam0;
	return;
}

BOOL func_0x67F162DB()
{
	if (!/*Global_1943520*/g_SimpleInteriorData.f_5025.f_51)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		return false;

	if (!func_0xDBD936D3())
		return false;

	if (func_0xEDAE0057() || func_0x1A7B661A())
		return false;

	if (func_0xB24070EF(PLAYER::PLAYER_ID()) || /*Global_1943520*/g_SimpleInteriorData.f_3893 || /*Global_1943513*/dance_state != 0 || HUD::IS_WARNING_MESSAGE_ACTIVE() || func_0x3BED6F11(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_0xC7DC1D8(PLAYER::PLAYER_PED_ID(), false))
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (func_0x85F8BECA(PLAYER::PLAYER_ID()) || func_0x47FF56D2())
		return false;

	if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
		return false;

	if (func_0x42FA397())
		return false;

	if (func_0xC2ABD0AE() || func_0x14C810F0() || Global_1844920.f_171)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("GB_DELIVERY")) > 0)
		return false;

	if (/*Global_1943520*/g_SimpleInteriorData.f_4811.f_2 != 0)
		return false;

	if (func_0x44A439DC() || func_0x8E975DBA())
		return false;

	if (/*Global_1943520*/g_SimpleInteriorData.f_3902 || /*Global_1887305*/globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_10.f_32 == 148 || Global_1962263 || func_0xE8921B44(0) || func_0xB72C022E() || _IS_PLAYER_A_BEAST(PLAYER::PLAYER_ID()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		return false;

	return true;
}

BOOL _IS_PLAYER_A_BEAST(Player plParam0)
{
	if (func_0x8EC56FC1(plParam0) == 146)
		if (plParam0 == /*Global_2738934*/MPGlobalsAmbience.f_5171)
			return true;

	return false;
}

int func_0x8EC56FC1(Player plParam0)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return /*Global_1887305*/globalPlayerBD_FM_3[player];

	return -1;
}

BOOL func_0xB72C022E()
{
	Vehicle vehiclePedIsIn;

	if (Global_33100)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false)))
					return true;
		}
	}

	return false;
}

BOOL func_0x8E975DBA()
{
	if (/*Global_2672855*/MPGlobals.f_990.f_5 == -1)
		return 0;

	return 1;
}

BOOL func_0x44A439DC()
{
	return MISC::GET_GAME_TIMER() <= /*Global_23831*/g_sMenuData.f_6481 + 100;
}

BOOL func_0x14C810F0()
{
	return /*Global_1943520*/g_SimpleInteriorData.f_4821.f_1 != -1;
}

BOOL func_0xC2ABD0AE()
{
	return /*Global_1943520*/g_SimpleInteriorData.f_4821 != -1;
}

int func_0x47FF56D2()
{
	return Global_1835494;
}

int func_0x85F8BECA(Player plParam0)
{
	if (func_0x295F4323(plParam0))
		return 1;

	if (func_0xE40D6326(plParam0))
		return 1;

	return 0;
}

BOOL func_0x295F4323(Player plParam0)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(/*Global_1887305*/globalPlayerBD_FM_3[player].f_1, 0);

	return false;
}

BOOL func_0xC7DC1D8(Ped pedParam0, BOOL bParam1)
{
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return false;

	if (TASK::GET_IS_TASK_ACTIVE(pedParam0, 2))
		return true;

	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(pedParam0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(pedParam0) != 0)
		return true;

	return false;
}

BOOL func_0x3BED6F11(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(/*Global_2657971*/GlobalplayerBD[plParam0].f_322, 3);

	return false;
}

BOOL func_0xB24070EF(Player plParam0)
{
	BOOL flag;

	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true) || Global_2635563.f_2980)
	{
		flag = IS_BIT_SET(/*Global_2657971*/GlobalplayerBD[plParam0].f_322, 1);
		return flag;
	}

	return false;
}

BOOL func_0x1A7B661A()
{
	return IS_BIT_SET(/*Global_2684504*/Join_session_trigger.f_3, 7);
}

BOOL func_0xEDAE0057()
{
	return IS_BIT_SET(/*Global_2684504*/Join_session_trigger.f_2, 11);
}

BOOL func_0x8ACF6631(Player plParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && plParam0 != PLAYER::PLAYER_ID())
		if (func_0xE50D2DA8(plParam0, iParam1) && !func_0x3BED6F11(plParam0))
			return true;

	return false;
}

BOOL func_0xE50D2DA8(Player plParam0, int iParam1)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8 != -1 && func_0xEE599357(/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8) == 29)
				return /*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8 == iParam1;

	return false;
}

void func_0xDEB37B1F(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 167:
			*uParam1 = { 487.406f, -943.518f, 26.087f };
			*uParam2 = { 486.422f, -943.5f, 28.128f };
			*uParam3 = 1.5f;
			*uParam4 = 0f;
			break;
	
		case 168:
			*uParam1 = { 122.277f, 10.761f, 67.117f };
			*uParam2 = { 122.639f, 11.828f, 69.15f };
			*uParam3 = 1.5f;
			*uParam4 = 72.2f;
			break;
	
		case 169:
			*uParam1 = { -1412.68f, -654.53f, 27.673f };
			*uParam2 = { -1411.988f, -654.039f, 29.634f };
			*uParam3 = 1.5f;
			*uParam4 = -143.25f;
			break;
	
		case 170:
			*uParam1 = { 128.1375f, -1710.6313f, 28.27612f };
			*uParam2 = { 129.05801f, -1711.4574f, 30.27109f };
			*uParam3 = 1.5f;
			*uParam4 = -86.722f;
			break;
	
		case 171:
			*uParam1 = { -64.145f, 6505.953f, 30.536f };
			*uParam2 = { -65.051f, 6506.012f, 32.497f };
			*uParam3 = 1.5f;
			*uParam4 = -3.466f;
			break;
	}

	return;
}

int func_0x965C3491(Player plParam0)
{
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		num = func_0xC4C02DA2(plParam0);
	
		if (num != 0)
			return func_0xF83E017(num);
	}

	return -1;
}

int func_0xF83E017(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 167;
	
		case 2:
			return 168;
	
		case 3:
			return 169;
	
		case 4:
			return 170;
	
		case 5:
			return 171;
	
		default:
		
	}

	return -1;
}

int func_0xC4C02DA2(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return /*Global_1845281*/GlobalplayerBD_FM[plParam0].f_268.f_525;

	return 0;
}

Player _GET_BOSS_OF_LOCAL_PLAYER()
{
	return /*Global_1887305*/globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_10;
}

BOOL func_0xCA2EA26D(BOOL bParam0)
{
	return func_0xB4CE8E51(PLAYER::PLAYER_ID(), bParam0);
}

void func_0x357924CD()
{
	int num;
	BOOL flag;

	if (IS_BIT_SET(/*Global_2738934*/MPGlobalsAmbience.f_460.f_5, 0))
	{
		bLocal_86 = true;
	}
	else if (bLocal_86)
	{
		if (!func_0xD7F7F990(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_IN() && !IS_BIT_SET(/*Global_1845281*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_268.f_33, 4))
		{
			bLocal_86 = false;
		
			if (IS_BIT_SET(/*Global_1943520*/g_SimpleInteriorData.f_4811, 4))
				MISC::CLEAR_BIT(&(/*Global_1943520*/g_SimpleInteriorData.f_4811), 4);
		}
	}

	if (bLocal_86)
	{
		if (!IS_BIT_SET(/*Global_1943520*/g_SimpleInteriorData.f_4811, 4))
			MISC::SET_BIT(&(/*Global_1943520*/g_SimpleInteriorData.f_4811), 4);
	
		num = -1;
		flag = false;
		num = func_0x54874B4C("GR_ENTERAOC" /*Press ~a~ to enter your Avenger with this vehicle.*/);
	
		if (num > -1 && num < 6)
			if (/*Global_44799*/g_IntentionList[num] == 1)
				flag = true;
	
		if (flag)
		{
			Global_44998 = 1;
			Global_44999 = 1;
		
			if (func_0x2BB88AD0(num))
				HUD::CLEAR_HELP(true);
		}
	}

	return;
}

BOOL func_0x2BB88AD0(int iParam0)
{
	BOOL flag;

	if (iParam0 < 0)
		return false;

	if (/*Global_44799*/g_IntentionList[iParam0].f_6)
		return false;

	flag = false;

	if (!/*Global_44799*/g_IntentionList[iParam0].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(/*Global_44799*/g_IntentionList[iParam0].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44994);
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(/*Global_44799*/g_IntentionList[iParam0].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44994);
	
		if (/*Global_44799*/g_IntentionList[iParam0].f_30)
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(/*Global_44799*/g_IntentionList[iParam0].f_13));
		else
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(/*Global_44799*/g_IntentionList[iParam0].f_13));
	
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}

	return flag;
}

int func_0x54874B4C(char* sParam0)
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(/*Global_44799*/g_IntentionList[i].f_8)) && MISC::ARE_STRINGS_EQUAL(&(/*Global_44799*/g_IntentionList[i].f_8), sParam0))
			return i;
	}

	return -1;
}

BOOL func_0xD7F7F990(Player plParam0)
{
	if (IS_BIT_SET(/*Global_1845281*/GlobalplayerBD_FM[plParam0].f_268.f_33, 14))
		return true;

	if (IS_BIT_SET(/*Global_1845281*/GlobalplayerBD_FM[plParam0].f_268.f_33, 11))
		return true;

	return false;
}

void func_0x6AF3BC1C()
{
	int num;

	num = func_0xE3A3D5D5(PLAYER::PLAYER_ID());

	if (num != -1 && iLocal_85 != num)
		iLocal_85 = num;

	if (iLocal_85 == -1)
		return;

	/*Global_262145*/g_sMPTunables.f_35477 = 500f;
	/*Global_262145*/g_sMPTunables.f_35478 = 500f;
	/*Global_262145*/g_sMPTunables.f_35479 = 500f;
	/*Global_262145*/g_sMPTunables.f_35480 = 500f;

	switch (iLocal_85)
	{
		case 0:
			/*Global_262145*/g_sMPTunables.f_35477 = 10000f;
			break;
	
		case 1:
			/*Global_262145*/g_sMPTunables.f_35478 = 10000f;
			break;
	
		case 2:
			/*Global_262145*/g_sMPTunables.f_35479 = 10000f;
			break;
	
		case 3:
			/*Global_262145*/g_sMPTunables.f_35480 = 10000f;
			break;
	}

	return;
}

int func_0xE3A3D5D5(Player plParam0)
{
	if (func_0x48014DA(plParam0) == 339)
		return func_0xE22E8209(plParam0, 339);

	return -1;
}

int func_0xE22E8209(Player plParam0, int iParam1)
{
	if (func_0x48014DA(plParam0) == iParam1)
		return func_0x48014DA(plParam0);

	return -1;
}

void func_0x455A0262()
{
	if (func_0xCFD5B39D())
	{
		if (func_0xE1FE3E() && !IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(12035, -1), 0) && !_STAT_GET_PACKED_BOOL(51259, -1))
		{
			func_0x233B3FA1(true);
			_STAT_SET_PACKED_BOOL(51259, true, -1);
		}
	}
	else if (_STAT_GET_PACKED_BOOL(51259, -1))
	{
		func_0x233B3FA1(false);
		_STAT_SET_PACKED_BOOL(51259, false, -1);
	}

	return;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2)
{
	if (iParam2 == -1)
		iParam2 = func_0x47FF56D2();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_0x233B3FA1(BOOL bParam0)
{
	int address;

	address = GET_MP_INT_CHARACTER_STAT(12035, -1);

	if (bParam0)
		MISC::SET_BIT(&address, 0);
	else
		MISC::CLEAR_BIT(&address, 0);

	func_0xC00D48A9(12035, address, -1, true);
	return;
}

BOOL func_0xE1FE3E()
{
	if (func_0x5137F6D6(166, -1))
		return true;

	if (_STAT_GET_PACKED_BOOL(28287, -1))
		return true;

	return false;
}

BOOL func_0x5137F6D6(int iParam0, int iParam1)
{
	Hash statHash;
	BOOL outValue;

	statHash = func_0x1C1291EE(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_0x1C1291EE(int iParam0, int iParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, GET_SLOT_NUMBER(iParam1));
}

BOOL func_0xCFD5B39D()
{
	if (/*Global_76498*/g_bBrowserVisible && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
		return true;

	return false;
}

void func_0x5F76544B()
{
	BOOL flag;
	Vehicle vehiclePedIsIn;

	flag = true;

	if (func_0xE3A3D5D5(PLAYER::PLAYER_ID()) != 0)
		flag = false;

	if (/*Global_2738934*/MPGlobalsAmbience.f_6841 != 9)
		flag = false;

	if (!CAM::IS_SCREEN_FADED_OUT())
		flag = false;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		flag = false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		flag = false;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
		if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn))
			flag = false;
		else if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) != joaat("toreador"))
			flag = false;
		else if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(vehiclePedIsIn))
			flag = false;
	else
		flag = false;

	if (_GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true) == -1)
		flag = false;

	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1115.654f, -2273.433f, 28.898413f, 1115.2473f, -2278.1094f, 30.927465f, 3f, false, true, 0))
		flag = false;

	if (flag)
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_83))
			_STOPWATCH_INITIALIZE(&uLocal_83, false, false);
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_83, 10000, false))
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
	else if (_STOPWATCH_IS_INITIALIZED(&uLocal_83))
		_STOPWATCH_DESTROY(&uLocal_83);

	return;
}

int func_0xE3A3D5D5(Player plParam0)
{
	if (func_0x48014DA(plParam0) == 317)
		return func_0xE22E8209(plParam0, 317);

	return -1;
}

void func_0xB333D603()
{
	if (!IS_BIT_SET(/*Global_1943520*/g_SimpleInteriorData.f_13, 11))
		return;

	if (!func_0x70532CF7(PLAYER::PLAYER_ID()) && !func_0x3BED6F11(PLAYER::PLAYER_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("GB_DELIVERY")) == 0)
		MISC::CLEAR_BIT(&(/*Global_1943520*/g_SimpleInteriorData.f_13), 11);

	return;
}

BOOL func_0x70532CF7(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8 != -1)
				return func_0xEE599357(/*Global_2657971*/GlobalplayerBD[plParam0].f_322.f_8) == 29;

	return false;
}

void CHILIADWAKEUP_MAINTAIN()
{
	Hash model;
	int num;
	int data;
	float num2;
	float num3;
	Vector3 vector;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_29))
	{
		MISC::SET_BIT(/*&Global_8801*/&BitSet_CellphoneDisplay_Continued, 2);
	
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_29, 60000, false))
		{
			_STOPWATCH_RESET(&uLocal_29, false, false);
			_STOPWATCH_DESTROY(&uLocal_29);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_27) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_27, 1000, false))
	{
		if (iLocal_36 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_36 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_36, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_27, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_36))
				AUDIO::STOP_SOUND(iLocal_36);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_36);
			iLocal_36 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			_STOPWATCH_RESET(&uLocal_27, false, false);
			_STOPWATCH_DESTROY(&uLocal_27);
		}
	}

	if (!bLocal_21 && !func_0x48656DF7())
		return;

	bLocal_21 = true;
	MISC::SET_BIT(/*&Global_8801*/&BitSet_CellphoneDisplay_Continued, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_20))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_20, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_20, 8000);
			num = GET_MP_INT_CHARACTER_STAT(7869, -1);
			func_0xC00D48A9(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_31 = { ENTITY::GET_ENTITY_COORDS(obLocal_20, false) };
			iLocal_34 = 0;
		}
	}
	else
	{
		CHILIADWAKEUP_ROTATE_OBJECT();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_35 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_35 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_35, "07", obLocal_20, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_22)
			{
				if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_23, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_20, false);
					_STOPWATCH_RESET(&uLocal_23, false, false);
					_STOPWATCH_DESTROY(&uLocal_23);
					_STOPWATCH_INITIALIZE(&uLocal_25, false, false);
					bLocal_22 = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_25, false, false)) / SYSTEM::TO_FLOAT(func_0x729E933());
				num3 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_23, false, false)) / SYSTEM::TO_FLOAT(CHILIADWAKEUP_GET_LERP_TIME());
				num3 = num3 * num2;
				vector = { LERP_VECTOR(uLocal_31, CHILIADWAKEUP_GET_LERP_END_COORD(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_20, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_34 = iLocal_34 + 1;
					uLocal_31 = { ENTITY::GET_ENTITY_COORDS(obLocal_20, false) };
					_STOPWATCH_RESET(&uLocal_23, false, false);
					_STOPWATCH_DESTROY(&uLocal_23);
				
					if (CHILIADWAKEUP_GET_LERP_TIME() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_20);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_35))
							AUDIO::STOP_SOUND(iLocal_35);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_35);
						iLocal_35 = -1;
						_STOPWATCH_INITIALIZE(&uLocal_27, false, false);
						_STOPWATCH_INITIALIZE(&uLocal_29, false, false);
						_STOPWATCH_RESET(&uLocal_25, false, false);
						_STOPWATCH_DESTROY(&uLocal_25);
						uLocal_31 = { 0f, 0f, 0f };
						iLocal_34 = 0;
						bLocal_21 = false;
						bLocal_22 = false;
					}
				}
			}
		}
	}

	return;
}

Vector3 LERP_VECTOR(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

Vector3 CHILIADWAKEUP_GET_LERP_END_COORD()
{
	switch (iLocal_34)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
	
		case 1:
			return -1082.8652f, 6390.5195f, 924.2493f;
	
		case 2:
			return -2542.874f, 7217.5137f, 1051.3335f;
	
		case 3:
			return -4139.1064f, 8143.3022f, 1412.694f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int CHILIADWAKEUP_GET_LERP_TIME()
{
	switch (iLocal_34)
	{
		case 0:
			return 2000;
	
		case 1:
			return 1000;
	
		case 2:
			return 100;
	
		case 3:
			return 50;
	
		default:
		
	}

	return -1;
}

int func_0x729E933()
{
	return 3150;
}

int _STOPWATCH_GET_TIME_PASSED(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *pStopwatch);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch);
}

void CHILIADWAKEUP_ROTATE_OBJECT()
{
	float entityRotation;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_20, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_20, entityRotation, 2, true);
	return;
}

BOOL func_0x48656DF7()
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && /*Global_2640096*/g_TransitionSpawnData == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_0x52131E1C(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && /*Global_2685444*/g_TransitionSessionNonResetVars.f_3078.f_178 >= 1 && /*Global_2685444*/g_TransitionSessionNonResetVars.f_3078.f_178 < 4 && func_0xC61AA4B9() && func_0x97C9EE39())
		return true;

	return false;
}

BOOL func_0x97C9EE39()
{
	if (_STAT_GET_PACKED_BOOL(15476, -1) && GET_MP_INT_CHARACTER_STAT(5453, func_0x47FF56D2()) > 577)
		return true;

	return false;
}

BOOL func_0xC61AA4B9()
{
	int weatherType1;
	int weatherType2;
	float percentWeather2;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.5f)
		if (weatherType1 == joaat("rain") || weatherType1 == joaat("THUNDER") || weatherType2 == joaat("xmas"))
			return true;
	else if (weatherType2 == joaat("rain") || weatherType2 == joaat("THUNDER") || weatherType2 == joaat("xmas"))
		return true;

	return false;
}

BOOL func_0x52131E1C(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam1) <= fParam4 * fParam4;
}

void func_0x46F6CB8F()
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;
	int vehicleMod;

	if (!MISC::IS_PC_VERSION())
		return;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehiclePedIsIn))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == PLAYER::PLAYER_PED_ID() || VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, -1, false))
					{
						entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
						vehicleMod = VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 48);
					
						if (func_0xE7F02343(entityModel, vehicleMod))
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn))
								VEHICLE::SET_VEHICLE_MOD(vehiclePedIsIn, 48, -1, false);
					}
				}
			}
		}
	}

	return;
}

BOOL func_0xE7F02343(Hash hParam0, int iParam1)
{
	switch (hParam0)
	{
		case -223461503:
			if (iParam1 == 10)
				return true;
			break;
	
		case joaat("banshee"):
			if (iParam1 == 14)
				return true;
			break;
	
		case -143587026:
			if (iParam1 == 10)
				return true;
			break;
	
		case joaat("previon"):
			if (iParam1 == 14)
				return true;
			break;
	
		case joaat("growler"):
			if (iParam1 == 12)
				return true;
			break;
	
		case joaat("kuruma"):
			if (iParam1 == 11)
				return true;
			break;
	
		case joaat("insurgent3"):
			if (iParam1 == 34)
				return true;
			break;
	
		case joaat("avenger"):
		case joaat("avenger3"):
			if (iParam1 == 32)
				return true;
			break;
	
		case joaat("patriot2"):
			if (iParam1 == 29)
				return true;
			break;
	
		case joaat("khanjali"):
			if (iParam1 == 24)
				return true;
			break;
	}

	return false;
}

void FIX_FOR_5092622()
{
	if (Global_112912 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_0xDBD936D3())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

void FIX_FOR_3533670()
{
	if (!bLocal_19)
	{
		if (/*Global_1836472*/g_FinishedFreemodeInit)
		{
			if (IS_REPEAT_OFFENDER_X_0() || IS_REPEAT_OFFENDER_X())
				/*Global_262145*/g_sMPTunables.f_19912 = 1;
			else
				/*Global_262145*/g_sMPTunables.f_19912 = 0;
		
			bLocal_19 = true;
		}
	}
	else if (!/*Global_1836472*/g_FinishedFreemodeInit)
	{
		bLocal_19 = false;
	}

	return;
}

int IS_REPEAT_OFFENDER_X()
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < /*Global_262145*/g_sMPTunables.f_10716)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < /*Global_262145*/g_sMPTunables.f_10712 - 1; i = i + 1)
	{
		if (unk[i] < /*Global_262145*/g_sMPTunables.f_10716)
			return 0;
	}

	return 1;
}

int _MPPLY_STAT_GET_INT(Hash hParam0)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int IS_REPEAT_OFFENDER_X_0()
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < /*Global_262145*/g_sMPTunables.f_10715)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < /*Global_262145*/g_sMPTunables.f_10711 - 1; i = i + 1)
	{
		if (unk[i] < /*Global_262145*/g_sMPTunables.f_10715)
			return 0;
	}

	return 1;
}

void FIX_FOR_3280561()
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		for (i = 0; i < 32; i = i + 1)
		{
			MISC::SET_BIT(&(/*Global_1845281*/GlobalplayerBD_FM[i].f_826), 1);
		}
	}

	return;
}

void func_0x109BC0D6()
{
	if (func_0x8BB4165B())
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_67))
		{
			ENTITY::SET_ENTITY_VISIBLE(obLocal_67, false, false);
		}
		else
		{
			hLocal_66 = joaat("apa_heist_apart2_door");
		
			if (func_0x350793CC(hLocal_66))
			{
				obLocal_67 = OBJECT::CREATE_OBJECT(hLocal_66, 122.271f, 12.916f, 67.282f, false, false, true);
			
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_67))
				{
					ENTITY::SET_ENTITY_COORDS(obLocal_67, 122.271f, 12.916f, 67.282f, false, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(obLocal_67, 0f, 90.525f, 70.35f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_67, true);
					ENTITY::SET_ENTITY_VISIBLE(obLocal_67, false, false);
					ENTITY::SET_ENTITY_PROOFS(obLocal_67, true, true, true, true, true, true, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_66);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(obLocal_67))
	{
		OBJECT::DELETE_OBJECT(&obLocal_67);
	}

	return;
}

BOOL func_0x350793CC(Hash hParam0)
{
	if (hParam0 == 0)
		return true;

	STREAMING::REQUEST_MODEL(hParam0);
	return STREAMING::HAS_MODEL_LOADED(hParam0);
}

BOOL func_0x8BB4165B()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (!/*Global_2693440*/g_sCURRENT_UGC_STATUS.f_3)
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	if (!func_0xDBD936D3())
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true))
		return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	return true;
}

void func_0xE69DADEC()
{
	if (MISC::IS_PC_VERSION())
		return;

	switch (iLocal_37)
	{
		case 0:
			if (func_0xFA31F4FF())
				if (func_0x4BEFF6D3())
					if (/*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[func_0xF9396AAC()].f_681.f_1275 == 0)
						func_0x28DF00E8(1);
					else
						func_0x28DF00E8(5);
				else
					func_0x28DF00E8(5);
			break;
	
		case 1:
			if (func_0xFA31F4FF())
			{
				if (/*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[func_0xF9396AAC()].f_681.f_1275 != 0)
				{
					_STOPWATCH_RESET(&uLocal_38, true, false);
					func_0x28DF00E8(2);
				}
			}
			else
			{
				func_0x28DF00E8(0);
			}
			break;
	
		case 2:
			if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_38, 60000, true))
			{
				func_0x28DF00E8(5);
			}
			else
			{
				if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					if (HUD::GET_WARNING_SCREEN_MESSAGE_HASH() == joaat("HUD_NOCONNECT"))
						func_0x28DF00E8(3);
			
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					func_0x28DF00E8(3);
			
				if (!NETWORK::NETWORK_IS_CABLE_CONNECTED())
					func_0x28DF00E8(3);
			}
			break;
	
		case 3:
			Global_33226 = 1;
			func_0x28DF00E8(4);
			break;
	
		case 4:
			break;
	
		case 5:
			if (!func_0xFA31F4FF())
				func_0x28DF00E8(0);
			break;
	}

	return;
}

void func_0x28DF00E8(int iParam0)
{
	iLocal_37 = iParam0;
	return;
}

BOOL func_0x4BEFF6D3()
{
	int num;
	int num2;
	var unk;
	var unk2;
	var unk3;
	int num3;
	var unk4;
	var unk5;
	int num4;

	num = GET_MP_INT_CHARACTER_STAT(1499, -1);
	num2 = func_0x9BA7A639();
	func_0xB807819C(num, num2, &unk, &unk2, &unk3, &num3, &unk4, &unk5);
	num4 = num3 + unk4 + unk5;
	return num4 == 0;
}

void func_0xB807819C(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_0xEA08B1(iParam0, iParam1))
	{
		num = func_0x2D4DB85F(iParam1);
		num2 = func_0xE1B0542C(iParam0);
		num3 = func_0xE1B0542C(iParam0) - func_0xE1B0542C(iParam1);
		num4 = func_0x2D4DB85F(iParam0) - func_0x2D4DB85F(iParam1);
		num5 = func_0x826C592F(iParam0) - func_0x826C592F(iParam1);
		num6 = func_0x626AEC54(iParam0) - func_0x626AEC54(iParam1);
		num7 = func_0xC188C91C(iParam0) - func_0xC188C91C(iParam1);
		num8 = func_0x90B520AB(iParam0) - func_0x90B520AB(iParam1);
	}
	else
	{
		num = func_0x2D4DB85F(iParam0);
		num2 = func_0xE1B0542C(iParam1);
		num3 = func_0xE1B0542C(iParam1) - func_0xE1B0542C(iParam0);
		num4 = func_0x2D4DB85F(iParam1) - func_0x2D4DB85F(iParam0);
		num5 = func_0x826C592F(iParam1) - func_0x826C592F(iParam0);
		num6 = func_0x626AEC54(iParam1) - func_0x626AEC54(iParam0);
		num7 = func_0xC188C91C(iParam1) - func_0xC188C91C(iParam0);
		num8 = func_0x90B520AB(iParam1) - func_0x90B520AB(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_0xD3EBACB3(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_0xDB08F514(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_0xDB08F514(float fParam0, float fParam1, float fParam2)
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_0xD3EBACB3(int iParam0, int iParam1)
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_0x90B520AB(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_0xC188C91C(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_0x626AEC54(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_0x826C592F(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_0xE1B0542C(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_0x3EE55A88(BOOL bParam0, var uParam1, var uParam2)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_0x2D4DB85F(int iParam0)
{
	return iParam0 & 15;
}

BOOL func_0xEA08B1(int iParam0, int iParam1)
{
	int num;
	int num2;

	if (!func_0x57D8E518(iParam1) || !func_0x57D8E518(iParam0))
		return true;

	num = func_0xE1B0542C(iParam0);
	num2 = func_0xE1B0542C(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_0x2D4DB85F(iParam0);
	num2 = func_0x2D4DB85F(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_0x826C592F(iParam0);
	num2 = func_0x826C592F(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_0x626AEC54(iParam0);
	num2 = func_0x626AEC54(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_0xC188C91C(iParam0);
	num2 = func_0xC188C91C(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_0x90B520AB(iParam0);
	num2 = func_0x90B520AB(iParam1);

	if (num > num2)
		return true;

	return false;
}

BOOL func_0x57D8E518(int iParam0)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_0x90B520AB(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_0xC188C91C(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_0x626AEC54(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_0xE1B0542C(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_0x2D4DB85F(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_0x826C592F(iParam0);

	if (num6 < 1 || num6 > func_0xD3EBACB3(num5, num4))
		return false;

	return true;
}

int func_0x9BA7A639()
{
	var unk;
	int year;

	CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
	func_0xDB8A72C0(&unk, year.f_5);
	func_0x76860AE7(&unk, year.f_4);
	func_0x864304A8(&unk, year.f_3);
	func_0x2220FC6(&unk, year.f_2);
	func_0x4C70B2C3(&unk, year.f_1 - 1);
	func_0x15B9927E(&unk, year);
	return unk;
}

void func_0x15B9927E(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_0x4C70B2C3(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_0x2220FC6(var uParam0, int iParam1)
{
	int num;
	int num2;

	num = func_0x2D4DB85F(*uParam0);
	num2 = func_0xE1B0542C(*uParam0);

	if (iParam1 < 1 || iParam1 > func_0xD3EBACB3(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_0x864304A8(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_0x76860AE7(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_0xDB8A72C0(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_0xFA31F4FF()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("freemode")) == 0)
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true))
		return false;

	return true;
}

void func_0xB401A131()
{
	if (bLocal_17)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		DISPLAY_TEXT_WITH_LITERAL_STRING_FOR_RELEASE_F9(0.69f, 0.06f, "STRING", sLocal_16);
	}

	if (!bLocal_17)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_18)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_18 = iLocal_18 + 1;
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_18 = iLocal_18 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_18 = 0;
					}
					break;
			
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_18 = iLocal_18 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_18 = 0;
					}
					break;
			
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_18 = iLocal_18 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_18 = 0;
					}
					break;
			
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
					{
						bLocal_17 = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_18 = 0;
					}
					break;
			}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_18)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					iLocal_18 = iLocal_18 + 1;
					SYSTEM::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_18 = iLocal_18 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_18 = 0;
				}
				break;
		
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					iLocal_18 = iLocal_18 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_18 = 0;
				}
				break;
		
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_18 = iLocal_18 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_18 = 0;
				}
				break;
		
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					bLocal_17 = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_18 = 0;
				}
				break;
		}
	}

	return;
}

void DISPLAY_TEXT_WITH_LITERAL_STRING_FOR_RELEASE_F9(float DisplayAtX, float DisplayAtY, char* pTextLabel, char* pLiteralString)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(pTextLabel);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(pLiteralString);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(DisplayAtX, DisplayAtY, 0);
	return;
}

BOOL IS_ROCKSTAR_DEV()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_0x483B9432()
{
	int i;
	int num;

	for (i = 0; i < 30; i = i + 1)
	{
		/*Global_1979332*/g_InvalidNetworkModels[i] = 0;
		Global_1979301[i] = func_0xB8EC44B7(i);
	
		if (Global_1979301[i] != 0)
		{
			num = num + 1;
			/*Global_1979332*/g_InvalidNetworkModels[i] = 1;
		}
	}

	Global_1979300 = num;
	return;
}

int func_0xB8EC44B7(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_rub_cage01a");
	
		case 1:
			return joaat("prop_fnclink_05crnr1");
	
		case 2:
			return joaat("Prop_FncLink_03e");
	
		case 3:
			return joaat("prop_air_trailer_2a");
	
		case 4:
			return joaat("prop_crate_10a");
	
		case 5:
			return joaat("p_cablecar_s");
	
		case 6:
			return joaat("prop_test_elevator");
	
		case 7:
			return joaat("p_ld_coffee_vend_01");
	
		case 8:
			return joaat("prop_gold_cont_01b");
	
		case 9:
			return joaat("Prop_feeder1");
	
		case 10:
			return joaat("prop_feeder1_cr");
	
		case 11:
			return joaat("prop_gold_cont_01");
	
		case 12:
			return joaat("stt_prop_stunt_tube_fork");
	
		case 13:
			return joaat("sr_prop_spec_tube_xxs_04a");
	
		case 14:
			return joaat("stt_prop_stunt_tube_crn_15d");
	
		case 15:
			return joaat("stt_prop_stunt_tube_xxs");
	
		case 16:
			return joaat("stt_prop_stunt_tube_s");
	
		case 17:
			return joaat("xs_prop_ar_tunnel_01a_sf");
	
		case 18:
			return joaat("xs_prop_arena_turntable_01a_sf");
	
		case 19:
			return joaat("stt_prop_stunt_tube_xs");
	
		case 20:
			return joaat("stt_prop_stunt_tube_m");
	
		case 21:
			return joaat("prop_elecbox_12");
	
		case 22:
			return joaat("p_cablecar_s_door_l");
	
		case 23:
			return joaat("prop_container_ld_pu");
	
		case 24:
			return joaat("p_cablecar_s_door_r");
	
		default:
		
	}

	return 0;
}

