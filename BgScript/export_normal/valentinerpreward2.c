#pragma region Local Var
	char* sLocal_0 = 0;
	BOOL bLocal_1 = 0;
	int iLocal_2 = 0;
	BOOL bLocal_3 = 0;
	Object obLocal_4 = 0;
	BOOL bLocal_5 = 0;
	BOOL bLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	BOOL bLocal_24 = 0;
	BOOL bLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	Object obLocal_33 = 0;
	BOOL bLocal_34 = 0;
	BOOL bLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0.f;
	Hash hLocal_48 = 0;
	Object obLocal_49 = 0;
	var uLocal_50 = 4;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	Object obLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	float fLocal_68 = 0.f;
	float fLocal_69 = 0.f;
	BOOL bLocal_70 = 0;
	Hash hLocal_71 = 0;
	BOOL bLocal_72 = 0;
	BOOL bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	BOOL bLocal_80 = 0;
	BOOL bLocal_81 = 0;
	BOOL bLocal_82 = 0;
	BOOL bLocal_83 = 0;
	BOOL bLocal_84 = 0;
	BOOL bLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	BOOL bLocal_88 = 0;
	BOOL bLocal_89 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#pragma endregion Local Var

void func_0xE232F460()
{
	int num;

	sLocal_0 = "1.69.07";
	iLocal_19 = -1;
	iLocal_20 = -1;
	uLocal_38 = { 5022.5645f, -5738f, 16.0937f };
	uLocal_41 = { 5033.8535f, -5747.7485f, 20.4291f };
	uLocal_44 = { 5005.5f, -5750.4f, 17.3f };
	fLocal_47 = 2f;
	iLocal_58 = -1;
	iLocal_61 = -1;
	iLocal_74 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	bLocal_84 = true;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	Global_1578030 = MISC::GET_HASH_KEY(sLocal_0);
	func_0x483B9432();

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_0xB401A131();
	
		func_0xE69DADEC();
		func_0x109BC0D6();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693440.f_3)
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
			func_0xFB31BB97();
			func_0x1774FC3F();
			func_0x363E3964();
			func_0x1C714404();
			func_0x313073A8();
			func_0xA66E2814();
			func_0x5B6F3F79();
			func_0x70A5C900();
			func_0xD6C077B5();
			func_0xF8C83443();
			func_0xE581594F();
			func_0xEBB43BC2();
			func_0xECE2040D();
		}
	
		func_0x60E20BC();
		func_0x408B2E23();
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_0xF4189EB7();
			func_0x1F921654();
			func_0xD6E31DD5();
			func_0xD5159B9E();
			func_0x45DA7A3();
			func_0x8566D7EF();
			func_0xC0CFEB4E();
			func_0x466660F2();
		}
		else if (Global_2693440.f_3)
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
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_33))
		OBJECT::DELETE_OBJECT(&obLocal_33);

	if (bLocal_34)
	{
		Global_262145.f_29242 = 20000;
		Global_262145.f_29243 = 99000;
		bLocal_34 = false;
	}

	Global_1058421 = { 0f, 0f, 0f };
	Global_1058116.f_292 = 0;
	bLocal_35 = false;
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

	if (bLocal_35 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) <= 0)
		return;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (!ENTITY::IS_ENTITY_DEAD(ped, false))
	{
		for (i = 0; i <= *Global_4980736.f_88124 - 1; i = i + 1)
		{
			weaponTypeFromPickupType = OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(Global_4980736.f_88133[i].f_15);
		
			if (!WEAPON::IS_WEAPON_VALID(weaponTypeFromPickupType))
			{
			}
			else
			{
				for (j = 0; j <= 5; j = j + 1)
				{
					num = Global_4980736.f_88133[i].f_16[j];
				
					if (!func_0x8054862F(num, weaponTypeFromPickupType))
						Global_4980736.f_88133[i].f_16[j] = 0;
				}
			}
		}
	
		bLocal_35 = true;
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

	if (!func_0x3DC0CE5C() || IS_BIT_SET(Global_262145.f_25296, 2))
		return;

	for (i = 0; i <= *Global_4980736.f_119413 - 1; i = i + 1)
	{
		if (Global_4980736.f_119419[i].f_28 == -624951259)
			Global_4980736.f_119419[i].f_28 = joaat("WEAPON_BAT");
	}

	return;
}

BOOL func_0x3DC0CE5C()
{
	return Global_4718592 == 0 && Global_4718592.f_2 == 6;
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
		num = Global_4980736.f_80137[i].f_100.f_3;
		Global_4980736.f_80137[i].f_100.f_3 = 0;
	
		if (IS_BIT_SET(num, 0))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 0);
	
		if (IS_BIT_SET(num, 1))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 1);
	
		if (IS_BIT_SET(num, 2))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 2);
	
		if (IS_BIT_SET(num, 3))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 3);
	
		if (IS_BIT_SET(num, 4))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 4);
	
		if (IS_BIT_SET(num, 5))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 5);
	
		if (IS_BIT_SET(num, 5))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 6);
	
		if (IS_BIT_SET(num, 5))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 7);
	
		if (IS_BIT_SET(num, 6))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 8);
	
		if (IS_BIT_SET(num, 7))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 9);
	
		if (IS_BIT_SET(num, 8))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 10);
	
		if (IS_BIT_SET(num, 9))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 11);
	
		if (IS_BIT_SET(num, 10))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 12);
	
		if (IS_BIT_SET(num, 11))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 13);
	
		if (IS_BIT_SET(num, 12))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 14);
	
		if (IS_BIT_SET(num, 13))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 15);
	
		if (IS_BIT_SET(num, 14))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 16);
	
		if (IS_BIT_SET(num, 15))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 17);
	
		if (IS_BIT_SET(num, 16))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 18);
	
		if (IS_BIT_SET(num, 17))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 19);
	
		if (IS_BIT_SET(num, 18))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 20);
	
		if (IS_BIT_SET(num, 19))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 21);
	
		if (IS_BIT_SET(num, 20))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 22);
	
		if (IS_BIT_SET(num, 21))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 23);
	
		if (IS_BIT_SET(num, 22))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 24);
	
		if (IS_BIT_SET(num, 23))
			MISC::SET_BIT(&(Global_4980736.f_80137[i].f_100.f_3), 25);
	}

	for (i = 0; i <= 31; i = i + 1)
	{
		num2 = Global_4980736.f_7002[i].f_285.f_3;
		Global_4980736.f_7002[i].f_285.f_3 = 0;
	
		if (IS_BIT_SET(num2, 0))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 0);
	
		if (IS_BIT_SET(num2, 1))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 1);
	
		if (IS_BIT_SET(num2, 2))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 2);
	
		if (IS_BIT_SET(num2, 3))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 3);
	
		if (IS_BIT_SET(num2, 4))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 4);
	
		if (IS_BIT_SET(num2, 5))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 5);
	
		if (IS_BIT_SET(num2, 5))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 6);
	
		if (IS_BIT_SET(num2, 5))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 7);
	
		if (IS_BIT_SET(num2, 6))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 8);
	
		if (IS_BIT_SET(num2, 7))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 9);
	
		if (IS_BIT_SET(num2, 8))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 10);
	
		if (IS_BIT_SET(num2, 9))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 11);
	
		if (IS_BIT_SET(num2, 10))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 12);
	
		if (IS_BIT_SET(num2, 11))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 13);
	
		if (IS_BIT_SET(num2, 12))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 14);
	
		if (IS_BIT_SET(num2, 13))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 15);
	
		if (IS_BIT_SET(num2, 14))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 16);
	
		if (IS_BIT_SET(num2, 15))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 17);
	
		if (IS_BIT_SET(num2, 16))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 18);
	
		if (IS_BIT_SET(num2, 17))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 19);
	
		if (IS_BIT_SET(num2, 18))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 20);
	
		if (IS_BIT_SET(num2, 19))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 21);
	
		if (IS_BIT_SET(num2, 20))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 22);
	
		if (IS_BIT_SET(num2, 21))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 23);
	
		if (IS_BIT_SET(num2, 22))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 24);
	
		if (IS_BIT_SET(num2, 23))
			MISC::SET_BIT(&(Global_4980736.f_7002[i].f_285.f_3), 25);
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

	if (func_0x62114499(4) != *Global_4718592.f_127178)
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_50[i]))
		{
		}
		else
		{
			for (j = 0; j <= 8; j = j + 1)
			{
				closestObjectOfType = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_0x4CB488BA(i), 2f, func_0xC02FF737(j), false, false, true);
			
				if (ENTITY::DOES_ENTITY_EXIST(closestObjectOfType))
					uLocal_50[i] = closestObjectOfType;
			}
		}
	}

	for (i = 0; i <= 3; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_50[i]))
			return;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_55))
	{
		k = 0;
	
		for (k = 0; k <= 31; k = k + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1058116.f_119[k]))
			{
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_1058116.f_119[k]) != 961977741)
			{
			}
			else
			{
				obLocal_55 = Global_1058116.f_119[k];
			}
		}
	}

	flag = true;
	TEXT_LABEL_ASSIGN_STRING(&animDict, "ANIM@SCRIPTED@CBR5@IG3_DRILL_BOX@PATTERN_01@LOCKBOX_04@MALE@", 64);
	TEXT_LABEL_ASSIGN_STRING(&animDict2, "ANIM@SCRIPTED@CBR5@IG3_DRILL_BOX@PATTERN_02@LOCKBOX_04@MALE@", 64);
	TEXT_LABEL_ASSIGN_STRING(&animDict3, "ANIM@SCRIPTED@CBR5@IG3_DRILL_BOX@PATTERN_03@LOCKBOX_04@MALE@", 64);

	for (i = 0; i <= 3; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict, "REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict, "REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict, "REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict2, "REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict2, "REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict2, "REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict3, "REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict3, "REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict3, "REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict2, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict2, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict2, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict3, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict3, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict3, "REWARD_KEYCARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict2, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict2, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict2, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict3, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01ABC", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict3, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01DEF", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_50[i], &animDict3, "NO_REWARD_ch_Prop_CH_Sec_Cabinet_01GHI", 3))
			flag = false;
	}

	if (!flag)
		return;

	if (*Global_4718592.f_186714 != -1)
	{
		num = *Global_4718592.f_186714;
	
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(obLocal_55))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(obLocal_55))
		{
		}
		else
		{
			OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(obLocal_55, PLAYER::PLAYER_PED_ID());
		
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
		return Global_262145.f_33015[iParam0];

	return -1;
}

void func_0x8566D7EF()
{
	if (func_0xFEA78839())
		return;

	if (IS_BIT_SET(*Global_4718592.f_178387, 24) || OBJECT::IS_POINT_IN_ANGLED_AREA(Global_4718592.f_3565, 1552.523f, -5461.145f, -10f, 10200f, -6599.993f, 200f, 3499.965f, false, true))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
			ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1271.2f, -3091.5f, 5.9f, true, false, false, true);
	
		NETWORK::NETWORK_BAIL(1, 0, 0);
	}

	return;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

BOOL func_0xFEA78839()
{
	if (*Global_4718592.f_127755 == 1 || *Global_4718592.f_127755 == 2)
		return true;

	return false;
}

void func_0x45DA7A3()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		return;

	Global_1058421 = { 10.61f, 0.11f, 210.2f };
	MISC::SET_BIT(&(Global_1058116.f_292), 21);
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
							
								if (Global_4980736.f_88133[eventData2.f_13].f_23 == 13)
								{
									Global_262145.f_29242 = 0;
									Global_262145.f_29243 = 0;
									bLocal_34 = true;
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
	if (!Global_2684504.f_24)
		return;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_38, uLocal_41, fLocal_47, false, true, 0) || SYSTEM::VDIST2(uLocal_44, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) <= SYSTEM::POW(3f, 2f))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_33))
	{
		obLocal_33 = OBJECT::CREATE_OBJECT(joaat("prop_const_fence02b"), 5025.56f, -5740.52f, 16f, false, false, false);
		ENTITY::SET_ENTITY_HEADING(obLocal_33, -42.2f);
		ENTITY::SET_ENTITY_ALPHA(obLocal_33, 0, false);
		ENTITY::SET_ENTITY_NOWEAPONDECALS(obLocal_33, true);
	}

	if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		if (func_0x932F3142(uLocal_36, 750, false))
			return;
	else
		_STOPWATCH_RESET(&uLocal_36, false, false);

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

void func_0x1F921654()
{
	Entity entity;
	int i;
	Entity entityIndexOfCutsceneEntity;
	Vector3 vector;
	float groundZ;

	if (func_0x62114499(3) != *Global_4718592.f_127178)
	{
		uLocal_28 = { func_0xA9B5EBA8() };
		_STOPWATCH_DESTROY(&uLocal_31);
		return;
	}

	i = 0;

	for (i = 0; i <= 79; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058116.f_152[i]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_1058116.f_152[i]) != -372985740)
		{
		}
		else
		{
			entity = Global_1058116.f_152[i];
		}
	}

	MISC::SET_BIT(&(Global_4718592.f_174795[0].f_148[1].f_10), 3);

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		entityIndexOfCutsceneEntity = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("HVB_TARGET_01", 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(entityIndexOfCutsceneEntity))
			uLocal_28 = { ENTITY::GET_ENTITY_COORDS(entityIndexOfCutsceneEntity, false) };
	}
	else if (!_IS_NULL_VECTOR(uLocal_28))
	{
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_31))
			_STOPWATCH_INITIALIZE(&uLocal_31, false, false);
	
		if (func_0x932F3142(uLocal_31, 5000, false))
		{
			uLocal_28 = { func_0xA9B5EBA8() };
			_STOPWATCH_DESTROY(&uLocal_31);
		}
	
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entity))
		{
			vector = { uLocal_28 };
			groundZ = 0f;
		
			if (MISC::GET_GROUND_Z_EXCLUDING_OBJECTS_FOR_3D_COORD(vector, &groundZ, false, false))
				vector.f_2 = groundZ;
		
			ENTITY::SET_ENTITY_COORDS(entity, vector, true, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(entity, true, false);
			uLocal_28 = { func_0xA9B5EBA8() };
			_STOPWATCH_DESTROY(&uLocal_31);
		}
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

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0)
{
	return uParam0->f_1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void _STOPWATCH_DESTROY(var uParam0)
{
	uParam0->f_1 = 0;
	return;
}

Vector3 func_0xA9B5EBA8()
{
	return 0f, 0f, 0f;
}

int func_0x62114499(int iParam0)
{
	if (iParam0 != -1)
		return Global_262145.f_35481[iParam0];

	return -1;
}

void func_0xF4189EB7()
{
	if (Global_1956949)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 366, false);
		bLocal_25 = true;
	}
	else if (bLocal_25)
	{
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_26))
			_STOPWATCH_INITIALIZE(&uLocal_26, false, false);
	
		if (func_0x932F3142(uLocal_26, 5000, false))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 366, true);
			bLocal_25 = false;
			_STOPWATCH_DESTROY(&uLocal_26);
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
			bLocal_83 = true;
		}
		else if (bLocal_83)
		{
			bLocal_83 = false;
			bLocal_82 = false;
		}
	
		if (!bLocal_82)
		{
			func_0xCB5B3536();
			bLocal_82 = true;
		}
	
		func_0xF5241D2();
	}
	else if (bLocal_82 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bLocal_82 = false;
	}

	return;
}

void func_0xF5241D2()
{
	int i;

	if (!func_0x47FF56D2() || Global_98800 != 7 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("wardrobe_mp")) == 0 || Global_23831.f_6342 < 0 || Global_23831.f_6342 >= 125)
		return;

	for (i = 0; i < 9; i = i + 1)
	{
		if (!func_0x17120C54(i))
		{
		}
		else if (!Global_4539212[Global_23831.f_6342])
		{
			if (Global_4538960[Global_23831.f_6342] == func_0xC02FF737(i))
				Global_4539212[Global_23831.f_6342] = true;
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
			Global_2750949 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750949 = 1;
		}
	}

	return num;
}

int func_0x47FF56D2()
{
	return Global_1574926;
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
				if (Global_2359296[num].f_681.f_2308[j])
				{
					hashNameForComponent = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 11, Global_2359296[num].f_681.f_1338[j][11], Global_2359296[num].f_681.f_1612[j][11]);
				
					if (hashNameForComponent == func_0xC02FF737(i))
						Global_2359296[num].f_681.f_2308[j] = false;
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
	return Global_101585.f_394 > 0;
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
				if (player == Global_2672855.f_3)
					return Global_2672855.f_2;
				else if (Global_2657971[player] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_0x60E20BC()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !Global_2693440.f_3)
		return;

	if (func_0xDBD936D3())
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true) && !IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID()].f_140, 22))
		{
			if (!bLocal_24 && !Global_76497)
			{
				Global_76497 = true;
				bLocal_24 = true;
			}
		}
		else if (bLocal_24 && Global_76497)
		{
			Global_76497 = false;
			bLocal_24 = false;
		}
	}
	else if (bLocal_24 && Global_76497)
	{
		Global_76497 = false;
		bLocal_24 = false;
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
	return Global_32948;
}

void func_0xECE2040D()
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		return;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_ARCADE")) > 0 && func_0xFE840448(PLAYER::PLAYER_ID()) && func_0x87650690())
		bLocal_89 = true;

	if (bLocal_89 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_ARCADE")) <= 0)
	{
		if (func_0x87650690())
			func_0x14C7EA4A(false);
	
		bLocal_89 = false;
	}

	return;
}

void func_0x14C7EA4A(BOOL bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1943520.f_13, 17))
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				MISC::SET_BIT(&(Global_1943520.f_13), 17);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), KNOCKOFFVEHICLE_NEVER);
			}
		}
	}
	else if (IS_BIT_SET(Global_1943520.f_13, 17))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			MISC::CLEAR_BIT(&(Global_1943520.f_13), 17);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), KNOCKOFFVEHICLE_DEFAULT);
		}
	}

	return;
}

BOOL func_0x87650690()
{
	return IS_BIT_SET(Global_1943520.f_13, 17);
}

BOOL func_0xFE840448(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657971[plParam0].f_322.f_8 != -1)
				return func_0xEE599357(Global_2657971[plParam0].f_322.f_8) == 17;

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

Player _INVALID_PLAYER_INDEX()
{
	return -1;
}

void func_0xEBB43BC2()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		return;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0 && func_0xE8921B44(0))
	{
		if (!IS_BIT_SET(Global_1943520.f_4811, 12))
		{
			bLocal_88 = true;
			MISC::SET_BIT(&(Global_1943520.f_4811), 7);
		}
	}
	else if (bLocal_88)
	{
		bLocal_88 = false;
		MISC::CLEAR_BIT(&(Global_1943520.f_4811), 7);
	}

	return;
}

BOOL func_0xE8921B44(int iParam0)
{
	if (iParam0 == 1)
		if (Global_20930.f_1 > 3)
			if (IS_BIT_SET(Global_8800, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20930.f_1 > 3)
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

	if (func_0xE7AE0A5(&uLocal_86, 5000, false))
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
					if (Global_2709637[j].f_103 == Global_262145.f_33031[i])
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

void func_0xC00D48A9(int iParam0, int iParam1, int iParam2, BOOL bParam3)
{
	Hash statName;

	statName = func_0x505A9F99(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

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

BOOL func_0xDBD936D3()
{
	if (func_0x4228A1C2() == 0)
		return true;

	return false;
}

int func_0x4228A1C2()
{
	return Global_1574633.f_18;
}

BOOL func_0x2F4042DD(Player plParam0)
{
	return Global_1845281[plParam0].f_268.f_498 != 0;
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

	if (!bLocal_85)
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && func_0xDBD936D3())
		{
			if (GET_MP_INT_CHARACTER_STAT(12036, -1) == -1)
			{
				bLocal_85 = true;
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
					
						if (num == *Global_262145.f_33054)
						{
							num7 = Global_2709637[i].f_107;
						
							if (num7 == -1)
							{
								for (j = 0; j < 3; j = j + 1)
								{
									if (Global_262145.f_33031[j] == Global_2709637[i].f_103)
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
		
			bLocal_85 = true;
		}
	}
	else if (!func_0xDBD936D3())
	{
		bLocal_85 = false;
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

	if (bLocal_84)
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
		
			bLocal_84 = false;
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
				bLocal_84 = true;
				break;
		}
	}
	else if (!func_0xDBD936D3())
	{
		bLocal_84 = true;
	}

	return;
}

int func_0x48014DA(Player plParam0)
{
	if (func_0x8B0CDA01(plParam0, false))
		return Global_1887305[plParam0].f_10.f_33;

	return -1;
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

BOOL func_0x8B0CDA01(Player plParam0, BOOL bParam1)
{
	if (Global_1887305[plParam0].f_10.f_33 != -1 || bParam1 && Global_1887305[plParam0].f_10.f_32 != -1)
		return true;

	return false;
}

void func_0x70A5C900()
{
	if (func_0x88D363EA(PLAYER::PLAYER_ID()) && Global_2657971[PLAYER::PLAYER_ID()].f_322.f_11 == PLAYER::PLAYER_ID())
	{
		if (func_0x47FF56D2() == 4 && HUD::GET_WARNING_SCREEN_MESSAGE_HASH() == joaat("BAIL_BADSPONLY"))
		{
			Global_2696206 = 1;
			bLocal_81 = true;
		}
	}
	else if (bLocal_81 && func_0xDBD936D3())
	{
		Global_2696206 = 0;
		bLocal_81 = false;
	}

	return;
}

int func_0x47FF56D2()
{
	return Global_1057440;
}

BOOL func_0x88D363EA(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657971[plParam0].f_322.f_8 != -1)
				return func_0xEE599357(Global_2657971[plParam0].f_322.f_8) == 24;

	return false;
}

void func_0x5B6F3F79()
{
	var string1;

	if (func_0xAB4D17EF(PLAYER::PLAYER_ID()) == 1)
	{
		if (!bLocal_80)
		{
			string1 = { func_0xF0BF0F97() };
		
			if (MISC::ARE_STRINGS_EQUAL(&string1, "TNRP_UE_5A"))
				bLocal_80 = true;
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
		bLocal_80 = false;
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

Player func_0xF661080E(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		return Global_1887305[plParam0].f_10;

	return _INVALID_PLAYER_INDEX();
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

BOOL func_0xB4CE8E51(Player plParam0, BOOL bParam1)
{
	if (!func_0x6A46C9B4(plParam0))
		return false;

	if (!bParam1)
		if (func_0xC62FC261(plParam0))
			return false;

	return func_0x6A46C9B4(Global_1887305[plParam0].f_10);
}

BOOL func_0xC62FC261(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x6A46C9B4(Global_1887305[plParam0].f_10))
			return Global_1887305[plParam0].f_10 == plParam0;

	return false;
}

struct<6> func_0xF0BF0F97()
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_22286 != 0)
		return Global_21905;

	return unk;
}

int func_0xAB4D17EF(Player plParam0)
{
	if (func_0x48014DA(plParam0) == 271)
		return func_0x48014DA(plParam0);

	return -1;
}

int func_0x48014DA(Player plParam0)
{
	if (func_0x8B0CDA01(plParam0, false))
		return Global_1887305[plParam0].f_10.f_182;

	return -1;
}

void func_0xA66E2814()
{
	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !CAM::IS_SCREEN_FADED_OUT() && Global_2696212.f_5 == 1 && Global_2696212.f_27.f_66 == joaat("seasparrow2"))
		Global_2696212.f_5 = 0;

	return;
}

void func_0x313073A8()
{
	if (Global_1980263.f_9 != -1)
	{
		if (!bLocal_73)
		{
			iLocal_74 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD);
			iLocal_75 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD);
			iLocal_76 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1);
			iLocal_77 = PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD);
			iLocal_78 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF);
			iLocal_79 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF);
			bLocal_73 = true;
		}
		else if (iLocal_74 != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD) || iLocal_75 != PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD) || iLocal_76 != PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1) || iLocal_77 != PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD) || iLocal_78 != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF) || iLocal_79 != PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF))
		{
			Global_1980263.f_9 = -1;
			Global_1980263.f_10 = -1;
			bLocal_73 = false;
		}
	}

	return;
}

void func_0x1C714404()
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	if (bLocal_72)
	{
		if (func_0xDBD936D3() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			bLocal_72 = false;
	
		return;
	}

	if (func_0x47FF56D2() == 27 && !func_0xDBD936D3() || func_0xDBD936D3() && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		flag = func_0xCD74A84A(PLAYER::PLAYER_PED_ID());
		flag2 = func_0x84239F5A(PLAYER::PLAYER_PED_ID(), false);
		flag3 = func_0xE9FFFAF1(PLAYER::PLAYER_PED_ID(), -1);
		flag4 = func_0x73B1D6E5(PLAYER::PLAYER_PED_ID());
		Global_1980302 = false;
		func_0xFA1DE813(PLAYER::PLAYER_PED_ID(), flag, flag3, flag2, flag4, false, true);
		bLocal_72 = true;
	}

	return;
}

void func_0xFA1DE813(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6)
{
	int i;
	Hash outComponent;
	var unk15;
	int characterType;
	int num;
	int decorationIndex;

	if (!Global_1980302)
		func_0x925C1493(&pedParam0);

	i = 0;
	characterType = func_0x48F0132B(pedParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		num = Global_1980274[i];
	
		if (num <= -1)
		{
		}
		else if (num < 129)
		{
			if (!bParam5)
				if (func_0xAADB79C4(&unk15, num, characterType, pedParam0, -1))
					if (func_0x69D10458(pedParam0, &unk15, num, unk15.f_4, unk15.f_8, bParam3, bParam1, bParam4, bParam2))
						PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, unk15.f_4, unk15.f_5);
		}
		else if (num == 123)
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
				PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
		}
		else
		{
			decorationIndex = num - 129;
		
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(characterType, decorationIndex, &outComponent))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(outComponent))
				{
					if (func_0x69D10458(pedParam0, &(outComponent.f_7), num, outComponent.f_2, outComponent.f_6, bParam3, bParam1, bParam4, bParam2))
					{
						if (bParam6 || !func_0x88D35F02(outComponent.f_2, outComponent.f_3, num))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, outComponent.f_2, outComponent.f_3);
							func_0xF1FAB61C(pedParam0, outComponent.f_2, outComponent.f_3);
						}
					}
				}
			}
		}
	}

	return;
}

void func_0xF1FAB61C(Ped pedParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1310977332:
			switch (iParam2)
			{
				case -335678317:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1310977332, -745372680);
					break;
			
				case -679031819:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1310977332, 842187071);
					break;
			}
			break;
	
		case 1841427399:
			switch (iParam2)
			{
				case -507124931:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1841427399, -435695677);
					break;
			
				case -2045170715:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1841427399, 1684098164);
					break;
			}
			break;
	
		case joaat("mpSecurity_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Security_Tee_000_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSecurity_overlays"), joaat("MP_Security_Tee_001_M"));
					break;
			
				case joaat("MP_Security_Tee_000_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSecurity_overlays"), joaat("MP_Security_Tee_001_F"));
					break;
			}
			break;
	
		case joaat("mpTuner_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Tuner_Tee_000_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_001_M"));
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
			
				case joaat("MP_Tuner_Tee_002_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
			
				case joaat("MP_Tuner_Tee_003_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_004_M"));
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
			
				case joaat("MP_Tuner_Tee_005_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
			
				case joaat("MP_Tuner_Tee_006_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
			
				case joaat("MP_Tuner_Tee_008_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_M"));
					break;
			
				case joaat("MP_Tuner_Tee_010_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_M"));
					break;
			
				case joaat("MP_Tuner_Tee_000_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_001_F"));
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
			
				case joaat("MP_Tuner_Tee_002_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
			
				case joaat("MP_Tuner_Tee_003_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_004_F"));
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
			
				case joaat("MP_Tuner_Tee_005_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
			
				case joaat("MP_Tuner_Tee_006_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
			
				case joaat("MP_Tuner_Tee_008_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_F"));
					break;
			
				case joaat("MP_Tuner_Tee_010_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_F"));
					break;
			}
			break;
	
		case joaat("mpHeist4_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Heist4_Tee_039_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_040_M"));
					break;
			
				case joaat("MP_Heist4_Tee_041_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_042_M"));
					break;
			
				case joaat("MP_Heist4_Tee_043_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_044_M"));
					break;
			
				case joaat("MP_Heist4_Tee_049_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_050_M"));
					break;
			
				case joaat("MP_Heist4_Tee_051_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_052_M"));
					break;
			
				case joaat("MP_Heist4_Tee_055_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_056_M"));
					break;
			
				case joaat("MP_Heist4_Tee_057_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_058_M"));
					break;
			
				case joaat("MP_Heist4_Tee_059_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_060_M"));
					break;
			
				case joaat("MP_Heist4_Tee_061_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_062_M"));
					break;
			
				case joaat("MP_Heist4_Tee_063_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_064_M"));
					break;
			
				case joaat("MP_Heist4_Tee_065_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_066_M"));
					break;
			
				case joaat("MP_Heist4_Tee_039_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_040_F"));
					break;
			
				case joaat("MP_Heist4_Tee_041_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_042_F"));
					break;
			
				case joaat("MP_Heist4_Tee_043_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_044_F"));
					break;
			
				case joaat("MP_Heist4_Tee_049_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_050_F"));
					break;
			
				case joaat("MP_Heist4_Tee_051_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_052_F"));
					break;
			
				case joaat("MP_Heist4_Tee_055_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_056_F"));
					break;
			
				case joaat("MP_Heist4_Tee_057_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_058_F"));
					break;
			
				case joaat("MP_Heist4_Tee_059_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_060_F"));
					break;
			
				case joaat("MP_Heist4_Tee_061_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_062_F"));
					break;
			
				case joaat("MP_Heist4_Tee_063_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_064_F"));
					break;
			
				case joaat("MP_Heist4_Tee_065_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_066_F"));
					break;
			}
			break;
	
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_0"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
					break;
			
				case joaat("CasinoTop_M_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
			
				case joaat("CasinoTop_M_2"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
			
				case joaat("CasinoTop_M_3"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
			
				case joaat("CasinoTop_M_4"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
			
				case joaat("CasinoTop_M_5"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
			
				case joaat("CasinoTop_M_6"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
			
				case joaat("CasinoTop_M_7"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
					break;
			
				case joaat("CasinoTop_M_8"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
					break;
			
				case joaat("CasinoTop_M_9"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
			
				case joaat("CasinoTop_M_10"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
			
				case joaat("CasinoTop_M_11"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
					break;
			
				case joaat("CasinoTop_M_12"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
					break;
			
				case joaat("CasinoTop_M_13"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
					break;
			
				case joaat("CasinoTop_M_14"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
					break;
			
				case joaat("CasinoTop_M_15"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
					break;
			
				case joaat("CasinoTop_M_16"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
					break;
			
				case joaat("CasinoTop_M_17"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
					break;
			
				case joaat("CasinoTop_M_18"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
					break;
			
				case joaat("CasinoTop_M_19"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
					break;
			
				case joaat("CasinoTop_M_20"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
					break;
			
				case joaat("CasinoTop_M_21"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
			
				case joaat("CasinoTop_M_22"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
			
				case joaat("CasinoTop_M_23"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
					break;
			
				case joaat("CasinoTop_M_24"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
			
				case joaat("CasinoTop_M_25"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
			
				case joaat("CasinoTop_M_26"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
					break;
			
				case joaat("CasinoTop_M_27"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
			
				case joaat("CasinoTop_M_28"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
			
				case joaat("CasinoTop_M_29"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
			
				case joaat("CasinoTop_M_30"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
			
				case joaat("CasinoTop_M_31"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
			
				case joaat("CasinoTop_M_32"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
			
				case joaat("CasinoTop_M_33"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
			
				case joaat("CasinoTop_M_34"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
			
				case joaat("CasinoTop_M_35"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
			
				case joaat("CasinoTop_M_36"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
			
				case joaat("CasinoTop_M_37"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
			
				case joaat("CasinoTop_M_38"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
			
				case joaat("CasinoTop_M_39"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
			
				case joaat("CasinoTop_M_40"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
			
				case joaat("CasinoTop_M_41"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
			
				case joaat("CasinoTop_M_42"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
			
				case joaat("CasinoTop_M_43"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
			
				case joaat("CasinoTop_M_44"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
			}
		
			switch (iParam2)
			{
				case joaat("CasinoTop_F_0"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
					break;
			
				case joaat("CasinoTop_F_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
			
				case joaat("CasinoTop_F_2"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
			
				case joaat("CasinoTop_F_3"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
			
				case joaat("CasinoTop_F_4"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
			
				case joaat("CasinoTop_F_5"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
			
				case joaat("CasinoTop_F_6"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
			
				case joaat("CasinoTop_F_7"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
					break;
			
				case joaat("CasinoTop_F_8"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
					break;
			
				case joaat("CasinoTop_F_9"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
			
				case joaat("CasinoTop_F_10"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
			
				case joaat("CasinoTop_F_11"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
					break;
			
				case joaat("CasinoTop_F_12"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
					break;
			
				case joaat("CasinoTop_F_13"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
					break;
			
				case joaat("CasinoTop_F_14"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
					break;
			
				case joaat("CasinoTop_F_15"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
					break;
			
				case joaat("CasinoTop_F_16"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
					break;
			
				case joaat("CasinoTop_F_17"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
					break;
			
				case joaat("CasinoTop_F_18"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
					break;
			
				case joaat("CasinoTop_F_19"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
					break;
			
				case joaat("CasinoTop_F_20"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
					break;
			
				case joaat("CasinoTop_F_21"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
			
				case joaat("CasinoTop_F_22"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
			
				case joaat("CasinoTop_F_23"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
					break;
			
				case joaat("CasinoTop_F_24"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
			
				case joaat("CasinoTop_F_25"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
			
				case joaat("CasinoTop_F_26"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
					break;
			
				case joaat("CasinoTop_F_27"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
			
				case joaat("CasinoTop_F_28"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
			
				case joaat("CasinoTop_F_29"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
			
				case joaat("CasinoTop_F_30"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
			
				case joaat("CasinoTop_F_31"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
			
				case joaat("CasinoTop_F_32"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
			
				case joaat("CasinoTop_F_33"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
			
				case joaat("CasinoTop_F_34"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
			
				case joaat("CasinoTop_F_35"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
			
				case joaat("CasinoTop_F_36"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
			
				case joaat("CasinoTop_F_37"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
			
				case joaat("CasinoTop_F_38"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
			
				case joaat("CasinoTop_F_39"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
			
				case joaat("CasinoTop_F_40"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
			
				case joaat("CasinoTop_F_41"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
			
				case joaat("CasinoTop_F_42"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
			
				case joaat("CasinoTop_F_43"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
			
				case joaat("CasinoTop_F_44"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
			}
			break;
	
		case joaat("mpBattle_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
					break;
			}
		
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
					break;
			}
			break;
	
		case joaat("mpSmuggler_overlays"):
			switch (iParam2)
			{
				case joaat("M_TankTop_Smug_5_3_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_17_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_10_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_11_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_12_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_13_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_20_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_21_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_23_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_22_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_5_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_18_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_0_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_3_b"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_25_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_7_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_4_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_1_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_9_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
					break;
			}
		
			switch (iParam2)
			{
				case joaat("F_TankTop_Smug_5_3_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_17_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_10_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_11_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_12_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_13_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_20_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_21_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_23_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_22_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_5_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_18_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_0_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_3_b"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_25_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_7_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_4_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_1_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_9_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
					break;
			}
			break;
	
		case joaat("mpGunrunning_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
					break;
			
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
					break;
			}
			break;
	
		case joaat("mpExecutive_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Securoserv_000_Mb"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
					break;
			
				case joaat("MP_Securoserv_000_Fb"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
					break;
			}
			break;
	
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
			
				case joaat("MP_Elite_F_Tshirt_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
	
		case joaat("mpLuxe2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Luxe_Tat_029_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_030_M"));
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_031_M"));
					break;
			
				case joaat("MP_Luxe_Tat_029_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_030_F"));
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_031_F"));
					break;
			}
			break;
	}

	return;
}

BOOL func_0x88D35F02(int iParam0, int iParam1, int iParam2)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	int num15;
	int num16;
	int num17;
	int num18;
	int num19;
	int num20;

	switch (iParam0)
	{
		case 1310977332:
			switch (iParam1)
			{
				case -963296156:
				case 103826309:
					if (_STAT_GET_PACKED_BOOL(41897, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -963296156);
			
				case -1488869771:
				case 654910986:
					if (_STAT_GET_PACKED_BOOL(41899, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -1488869771);
			
				case 72832154:
				case -2075077493:
					if (_STAT_GET_PACKED_BOOL(41898, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == 72832154);
			
				case -953411607:
				case 91788361:
					if (_STAT_GET_PACKED_BOOL(41900, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -953411607);
			
				case -1404922007:
				case 1231573426:
					if (_STAT_GET_PACKED_BOOL(41901, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -1404922007);
			
				case 1560564400:
				case -1647356863:
					if (_STAT_GET_PACKED_BOOL(41902, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == 1560564400);
			
				case -335678317:
				case -679031819:
					if (_STAT_GET_PACKED_BOOL(41894, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -335678317);
			}
			break;
	}

	switch (iParam0)
	{
		case 1841427399:
			switch (iParam1)
			{
				case -507124931:
				case -2045170715:
					if (_STAT_GET_PACKED_BOOL(36717, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -507124931);
			
				case -187038898:
				case 524638244:
					if (_STAT_GET_PACKED_BOOL(36767, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -187038898);
			
				case 1797082704:
				case -757817895:
					if (_STAT_GET_PACKED_BOOL(36766, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == 1797082704);
			
				case 1959890413:
				case 1506629605:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == 1959890413);
			
				case 1167984459:
				case 568901597:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == 1167984459);
			
				case 1006005360:
				case 1403427788:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == 1006005360);
			
				case -1295693571:
				case -1940685798:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -1295693571);
			
				case -1825141795:
				case 1441861967:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -1825141795);
			
				case 61080464:
				case -1941007133:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == 61080464);
			
				case -1622071979:
				case -1216457341:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -1622071979);
			
				case -899024637:
				case 141030546:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -899024637);
			
				case -569499773:
				case 2065160600:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -569499773);
			
				case -665339429:
				case 222569387:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == -665339429);
			
				case 858185772:
				case -1269669251:
					if (*Global_262145.f_33473)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == 858185772);
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpSum2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Sum2_Tee_000_M"):
				case joaat("MP_Sum2_Tee_000_F"):
					if (_STAT_GET_PACKED_BOOL(34505, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_000_M"));
			
				case joaat("MP_Sum2_Tee_001_M"):
				case joaat("MP_Sum2_Tee_001_F"):
					if (_STAT_GET_PACKED_BOOL(34375, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_001_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpTuner_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Tuner_Tee_000_M"):
				case joaat("MP_Tuner_Tee_000_F"):
					if (func_0x5137F6D6(116, -1) >= func_0x80259D9F(116, 5, 9) || _STAT_GET_PACKED_BOOL(31760, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_000_M"));
			
				case joaat("MP_Tuner_Tee_002_M"):
				case joaat("MP_Tuner_Tee_002_F"):
					if (func_0x5137F6D6(123, -1) || _STAT_GET_PACKED_BOOL(31761, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_002_M"));
			
				case joaat("MP_Tuner_Tee_003_M"):
				case joaat("MP_Tuner_Tee_003_F"):
					if (func_0x5137F6D6(124, -1) || _STAT_GET_PACKED_BOOL(31762, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_003_M"));
			
				case joaat("MP_Tuner_Tee_005_M"):
				case joaat("MP_Tuner_Tee_005_F"):
					if (func_0x5137F6D6(125, -1) || _STAT_GET_PACKED_BOOL(31763, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_005_M"));
			
				case joaat("MP_Tuner_Tee_006_M"):
				case joaat("MP_Tuner_Tee_006_F"):
					if (func_0x5137F6D6(126, -1) || _STAT_GET_PACKED_BOOL(31764, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_006_M"));
			
				case joaat("MP_Tuner_Tee_008_M"):
				case joaat("MP_Tuner_Tee_008_F"):
					if (_STAT_GET_PACKED_BOOL(31768, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_008_M"));
			
				case joaat("MP_Tuner_Tee_010_M"):
				case joaat("MP_Tuner_Tee_010_F"):
					if (_STAT_GET_PACKED_BOOL(31769, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_010_M"));
			
				case joaat("MP_Tuner_Tee_011_M"):
				case joaat("MP_Tuner_Tee_011_F"):
					if (_STAT_GET_PACKED_BOOL(31770, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_011_M"));
			
				case joaat("MP_Tuner_Tee_012_M"):
				case joaat("MP_Tuner_Tee_012_F"):
					if (_STAT_GET_PACKED_BOOL(31771, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_012_M"));
			
				case joaat("MP_Tuner_Tee_013_M"):
				case joaat("MP_Tuner_Tee_013_F"):
					if (_STAT_GET_PACKED_BOOL(31772, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_013_M"));
			
				case joaat("MP_Tuner_Tee_014_M"):
				case joaat("MP_Tuner_Tee_014_F"):
					if (_STAT_GET_PACKED_BOOL(31773, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_014_M"));
			
				case joaat("MP_Tuner_Tee_015_M"):
				case joaat("MP_Tuner_Tee_015_F"):
					if (_STAT_GET_PACKED_BOOL(31774, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_015_M"));
			
				case joaat("MP_Tuner_Tee_016_M"):
				case joaat("MP_Tuner_Tee_016_F"):
					if (_STAT_GET_PACKED_BOOL(31775, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_016_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist4_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Heist4_Tee_030_M"):
				case joaat("MP_Heist4_Tee_030_F"):
					if (_STAT_GET_PACKED_BOOL(30533, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_030_M"));
			
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (_STAT_GET_PACKED_BOOL(30534, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_032_M"));
			
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (_STAT_GET_PACKED_BOOL(30535, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_028_M"));
			
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (_STAT_GET_PACKED_BOOL(30536, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_029_M"));
			
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (_STAT_GET_PACKED_BOOL(30537, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_031_M"));
			
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (_STAT_GET_PACKED_BOOL(30538, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_022_M"));
			
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (_STAT_GET_PACKED_BOOL(30539, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_023_M"));
			
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (_STAT_GET_PACKED_BOOL(30540, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_020_M"));
			
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (_STAT_GET_PACKED_BOOL(30541, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_021_M"));
			
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (_STAT_GET_PACKED_BOOL(30542, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_003_M"));
			
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (_STAT_GET_PACKED_BOOL(30543, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_004_M"));
			
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (_STAT_GET_PACKED_BOOL(30544, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_005_M"));
			
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (_STAT_GET_PACKED_BOOL(30545, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_006_M"));
			
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (_STAT_GET_PACKED_BOOL(30546, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_027_M"));
			
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (_STAT_GET_PACKED_BOOL(30547, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_026_M"));
			
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (_STAT_GET_PACKED_BOOL(30548, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_025_M"));
			
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (_STAT_GET_PACKED_BOOL(30549, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_024_M"));
			
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (_STAT_GET_PACKED_BOOL(30550, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_002_M"));
			
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (_STAT_GET_PACKED_BOOL(30551, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_001_M"));
			
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (_STAT_GET_PACKED_BOOL(30552, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_000_M"));
			
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (_STAT_GET_PACKED_BOOL(30553, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_007_M"));
			
				case joaat("ANIML_TPDL_17") /* collision: MP_Heist4_Tee_008_M */:
				case joaat("MP_Heist4_Tee_008_F"):
					if (_STAT_GET_PACKED_BOOL(30554, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("ANIML_TPDL_17") /* collision: MP_Heist4_Tee_008_M */);
			
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (_STAT_GET_PACKED_BOOL(30555, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_009_M"));
			
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (_STAT_GET_PACKED_BOOL(30556, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_010_M"));
			
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (_STAT_GET_PACKED_BOOL(30557, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_011_M"));
			
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (_STAT_GET_PACKED_BOOL(30524, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_012_M"));
			
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (_STAT_GET_PACKED_BOOL(30525, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_013_M"));
			
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (_STAT_GET_PACKED_BOOL(30526, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_014_M"));
			
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (_STAT_GET_PACKED_BOOL(30527, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_015_M"));
			
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (_STAT_GET_PACKED_BOOL(30528, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_016_M"));
			
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (_STAT_GET_PACKED_BOOL(30529, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_017_M"));
			
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (_STAT_GET_PACKED_BOOL(30530, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_018_M"));
			
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (_STAT_GET_PACKED_BOOL(30531, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_019_M"));
			
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (_STAT_GET_PACKED_BOOL(30532, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_033_M"));
			
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (_STAT_GET_PACKED_BOOL(30570, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_045_M"));
			
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (_STAT_GET_PACKED_BOOL(30571, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_046_M"));
			
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (_STAT_GET_PACKED_BOOL(30568, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_048_M"));
			
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (_STAT_GET_PACKED_BOOL(30569, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_047_M"));
			
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (_STAT_GET_PACKED_BOOL(30634, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_049_M"));
			
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (_STAT_GET_PACKED_BOOL(30635, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_051_M"));
			
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (_STAT_GET_PACKED_BOOL(30636, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_053_M"));
			
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (_STAT_GET_PACKED_BOOL(30637, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_054_M"));
			
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (_STAT_GET_PACKED_BOOL(30703, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_055_M"));
			
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (_STAT_GET_PACKED_BOOL(30704, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_057_M"));
			
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (_STAT_GET_PACKED_BOOL(30700, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_059_M"));
			
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (_STAT_GET_PACKED_BOOL(30701, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_061_M"));
			
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (_STAT_GET_PACKED_BOOL(30702, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_063_M"));
			
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (_STAT_GET_PACKED_BOOL(30699, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_065_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_000_M"):
				case joaat("mpSum_Tee_000_F"):
					if (_STAT_GET_PACKED_BOOL(30260, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_000_M"));
			
				case joaat("mpSum_Tee_001_M"):
				case joaat("mpSum_Tee_001_F"):
					if (_STAT_GET_PACKED_BOOL(30261, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_001_M"));
			
				case joaat("mpSum_Tee_002_M"):
				case joaat("mpSum_Tee_002_F"):
					if (_STAT_GET_PACKED_BOOL(30262, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_002_M"));
			
				case joaat("mpSum_Tee_003_M"):
				case joaat("mpSum_Tee_003_F"):
					if (_STAT_GET_PACKED_BOOL(30263, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_003_M"));
			
				case joaat("mpSum_Tee_004_M"):
				case joaat("mpSum_Tee_004_F"):
					if (_STAT_GET_PACKED_BOOL(30264, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_004_M"));
			
				case joaat("mpSum_Tee_005_M"):
				case joaat("mpSum_Tee_005_F"):
					if (_STAT_GET_PACKED_BOOL(30265, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_005_M"));
			
				case joaat("mpSum_Tee_006_M"):
				case joaat("mpSum_Tee_006_F"):
					if (_STAT_GET_PACKED_BOOL(30266, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_006_M"));
			
				case joaat("mpSum_Tee_007_M"):
				case joaat("mpSum_Tee_007_F"):
					if (_STAT_GET_PACKED_BOOL(30267, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_007_M"));
			
				case joaat("mpSum_Tee_008_M"):
				case joaat("mpSum_Tee_008_F"):
					if (_STAT_GET_PACKED_BOOL(30268, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_008_M"));
			
				case joaat("mpSum_Tee_009_M"):
				case joaat("mpSum_Tee_009_F"):
					if (_STAT_GET_PACKED_BOOL(30269, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_009_M"));
			
				case joaat("mpSum_Tee_010_M"):
				case joaat("mpSum_Tee_010_F"):
					if (_STAT_GET_PACKED_BOOL(30270, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_010_M"));
			
				case joaat("mpSum_Tee_011_M"):
				case joaat("mpSum_Tee_011_F"):
					if (_STAT_GET_PACKED_BOOL(30271, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_011_M"));
			
				case joaat("mpSum_Tee_012_M"):
				case joaat("mpSum_Tee_012_F"):
					if (_STAT_GET_PACKED_BOOL(30272, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_012_M"));
			
				case joaat("mpSum_Tee_013_M"):
				case joaat("mpSum_Tee_013_F"):
					if (_STAT_GET_PACKED_BOOL(30273, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_013_M"));
			
				case joaat("mpSum_Tee_014_M"):
				case joaat("mpSum_Tee_014_F"):
					if (_STAT_GET_PACKED_BOOL(30274, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_014_M"));
			
				case joaat("mpSum_Tee_015_M"):
				case joaat("mpSum_Tee_015_F"):
					if (_STAT_GET_PACKED_BOOL(30275, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_015_M"));
			
				case joaat("mpSum_Tee_016_M"):
				case joaat("mpSum_Tee_016_F"):
					if (_STAT_GET_PACKED_BOOL(30276, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_016_M"));
			
				case joaat("mpSum_Tee_017_M"):
				case joaat("mpSum_Tee_017_F"):
					if (_STAT_GET_PACKED_BOOL(30277, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_017_M"));
			
				case joaat("mpSum_Tee_018_M"):
				case joaat("mpSum_Tee_018_F"):
					if (_STAT_GET_PACKED_BOOL(30278, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_018_M"));
			
				case joaat("mpSum_Tee_019_M"):
				case joaat("mpSum_Tee_019_F"):
					if (_STAT_GET_PACKED_BOOL(30279, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_019_M"));
			
				case joaat("mpSum_Tee_020_M"):
				case joaat("mpSum_Tee_020_F"):
					if (_STAT_GET_PACKED_BOOL(30280, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_020_M"));
			
				case joaat("mpSum_Tee_021_M"):
				case joaat("mpSum_Tee_021_F"):
					if (_STAT_GET_PACKED_BOOL(30281, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_021_M"));
			
				case joaat("mpSum_Tee_022_M"):
				case joaat("mpSum_Tee_022_F"):
					if (_STAT_GET_PACKED_BOOL(30282, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_022_M"));
			
				case joaat("mpSum_Tee_023_M"):
				case joaat("mpSum_Tee_023_F"):
					if (_STAT_GET_PACKED_BOOL(30283, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_023_M"));
			
				case joaat("mpSum_Tee_024_M"):
				case joaat("mpSum_Tee_024_F"):
					if (_STAT_GET_PACKED_BOOL(30284, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_024_M"));
			
				case joaat("mpSum_Tee_025_M"):
				case joaat("mpSum_Tee_025_F"):
					if (_STAT_GET_PACKED_BOOL(30285, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_025_M"));
			
				case joaat("mpSum_Tee_026_M"):
				case joaat("mpSum_Tee_026_F"):
					if (_STAT_GET_PACKED_BOOL(30286, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_026_M"));
			
				case joaat("mpSum_Tee_027_M"):
				case joaat("mpSum_Tee_027_F"):
					if (_STAT_GET_PACKED_BOOL(30287, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_027_M"));
			
				case joaat("mpSum_Tee_028_M"):
				case joaat("mpSum_Tee_028_F"):
					if (_STAT_GET_PACKED_BOOL(30288, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_028_M"));
			
				case joaat("mpSum_Tee_029_M"):
				case joaat("mpSum_Tee_029_F"):
					if (_STAT_GET_PACKED_BOOL(30289, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_029_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_030_M"):
				case joaat("mpSum_Tee_030_F"):
					if (_STAT_GET_PACKED_BOOL(28255, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_030_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_031_M"):
				case joaat("mpSum_Tee_031_F"):
					if (func_0x5137F6D6(89, -1) || _STAT_GET_PACKED_BOOL(30254, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_031_M"));
			
				case joaat("mpSum_Tee_032_M"):
				case joaat("mpSum_Tee_032_F"):
					if (func_0x5137F6D6(90, -1) || _STAT_GET_PACKED_BOOL(30255, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_032_M"));
			
				case joaat("mpSum_Tee_033_M"):
				case joaat("mpSum_Tee_033_F"):
					if (func_0x5137F6D6(92, -1) || _STAT_GET_PACKED_BOOL(30256, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_033_M"));
			
				case joaat("mpSum_Tee_034_M"):
				case joaat("mpSum_Tee_034_F"):
					if (func_0x5137F6D6(89, -1) && func_0x5137F6D6(90, -1) && func_0x5137F6D6(92, -1) && func_0x5137F6D6(91, -1) || _STAT_GET_PACKED_BOOL(30257, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_034_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (func_0x5137F6D6(78, -1) || _STAT_GET_PACKED_BOOL(28199, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
			
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (func_0x5137F6D6(77, -1) && func_0x5137F6D6(78, -1) && func_0x5137F6D6(92, -1) >= func_0x80259D9F(92, 5, 9) || _STAT_GET_PACKED_BOOL(28200, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (func_0x5137F6D6(93, -1) >= func_0x80259D9F(93, 5, 9) && func_0x5137F6D6(79, -1) && func_0x5137F6D6(80, -1) || _STAT_GET_PACKED_BOOL(28204, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M") || iParam1 == joaat("mpHeist3_Tee_009_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (func_0x5137F6D6(81, -1) || _STAT_GET_PACKED_BOOL(28206, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
			
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (func_0x5137F6D6(94, -1) >= func_0x80259D9F(94, 5, 9) || _STAT_GET_PACKED_BOOL(28207, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (func_0x5137F6D6(84, -1) && func_0x5137F6D6(85, -1) && func_0x5137F6D6(97, -1) >= func_0x80259D9F(97, 5, 9) || _STAT_GET_PACKED_BOOL(28212, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (_STAT_GET_PACKED_BOOL(28249, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (_STAT_GET_PACKED_BOOL(28183, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
			
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (_STAT_GET_PACKED_BOOL(28182, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
			
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (_STAT_GET_PACKED_BOOL(28184, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
			
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (_STAT_GET_PACKED_BOOL(28181, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
			
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (_STAT_GET_PACKED_BOOL(28178, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
			
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (_STAT_GET_PACKED_BOOL(28177, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
			
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (_STAT_GET_PACKED_BOOL(28176, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
			
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (_STAT_GET_PACKED_BOOL(28180, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
			
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (_STAT_GET_PACKED_BOOL(28179, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
			
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (_STAT_GET_PACKED_BOOL(28176, -1) && _STAT_GET_PACKED_BOOL(28177, -1) && _STAT_GET_PACKED_BOOL(28178, -1) && _STAT_GET_PACKED_BOOL(28179, -1) && _STAT_GET_PACKED_BOOL(28180, -1) && _STAT_GET_PACKED_BOOL(28181, -1) && _STAT_GET_PACKED_BOOL(28182, -1) && _STAT_GET_PACKED_BOOL(28183, -1) && _STAT_GET_PACKED_BOOL(28184, -1) || _STAT_GET_PACKED_BOOL(28221, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (_STAT_GET_PACKED_BOOL(28191, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (_STAT_GET_PACKED_BOOL(28190, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
			
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (_STAT_GET_PACKED_BOOL(28189, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (func_0xD0D50F3D(false, true))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if (func_0x5137F6D6(77, -1) && func_0x5137F6D6(78, -1) && func_0x5137F6D6(92, -1) >= func_0x80259D9F(92, 5, 9) && func_0x5137F6D6(93, -1) >= func_0x80259D9F(93, 5, 9) && func_0x5137F6D6(79, -1) && func_0x5137F6D6(80, -1) && func_0x5137F6D6(81, -1) && func_0x5137F6D6(94, -1) >= func_0x80259D9F(94, 5, 9) && func_0x5137F6D6(95, -1) >= func_0x80259D9F(95, 5, 9) && func_0x5137F6D6(82, -1) && func_0x5137F6D6(83, -1) && func_0x5137F6D6(96, -1) >= func_0x80259D9F(96, 5, 9) && func_0x5137F6D6(84, -1) && func_0x5137F6D6(85, -1) && func_0x5137F6D6(97, -1) >= func_0x80259D9F(97, 5, 9) && func_0x5137F6D6(86, -1) && func_0x5137F6D6(87, -1) && func_0x5137F6D6(88, -1) || _STAT_GET_PACKED_BOOL(28222, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
			
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
			
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (_STAT_GET_PACKED_BOOL(27109, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
			
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (_STAT_GET_PACKED_BOOL(27110, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
			
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (_STAT_GET_PACKED_BOOL(27111, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
			
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (_STAT_GET_PACKED_BOOL(27112, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
			
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (_STAT_GET_PACKED_BOOL(27113, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
			
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (_STAT_GET_PACKED_BOOL(27114, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
			
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (_STAT_GET_PACKED_BOOL(27115, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
			}
			break;
	
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (_STAT_GET_PACKED_BOOL(25032, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
			
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (_STAT_GET_PACKED_BOOL(25033, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
			
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (_STAT_GET_PACKED_BOOL(25034, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
			
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (_STAT_GET_PACKED_BOOL(25035, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
			
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (_STAT_GET_PACKED_BOOL(25036, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
			
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (_STAT_GET_PACKED_BOOL(25037, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
			
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (_STAT_GET_PACKED_BOOL(25038, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
			
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (_STAT_GET_PACKED_BOOL(25039, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
			
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (_STAT_GET_PACKED_BOOL(25040, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
			
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (_STAT_GET_PACKED_BOOL(25041, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
			
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (_STAT_GET_PACKED_BOOL(25042, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
			
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (_STAT_GET_PACKED_BOOL(25043, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
			
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (_STAT_GET_PACKED_BOOL(25044, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
			
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (_STAT_GET_PACKED_BOOL(25045, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
			
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (_STAT_GET_PACKED_BOOL(25046, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
			
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (_STAT_GET_PACKED_BOOL(25047, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
			
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (_STAT_GET_PACKED_BOOL(25048, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
			
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (_STAT_GET_PACKED_BOOL(25049, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
			
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (_STAT_GET_PACKED_BOOL(25050, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
			
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (_STAT_GET_PACKED_BOOL(25051, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
			
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (_STAT_GET_PACKED_BOOL(25052, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
			
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (_STAT_GET_PACKED_BOOL(25053, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
			
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (_STAT_GET_PACKED_BOOL(25054, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
			
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (_STAT_GET_PACKED_BOOL(25055, -1))
						return false;
				
					if (_STAT_GET_PACKED_BOOL(27077, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
			
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (_STAT_GET_PACKED_BOOL(25056, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
			
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (_STAT_GET_PACKED_BOOL(25057, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
			
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (_STAT_GET_PACKED_BOOL(25058, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
			
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (_STAT_GET_PACKED_BOOL(25059, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
			
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (_STAT_GET_PACKED_BOOL(25060, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
			
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (_STAT_GET_PACKED_BOOL(25061, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
			
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (_STAT_GET_PACKED_BOOL(25062, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
			
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (_STAT_GET_PACKED_BOOL(25063, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
			
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (_STAT_GET_PACKED_BOOL(25064, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
			
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (_STAT_GET_PACKED_BOOL(25065, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
			
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (_STAT_GET_PACKED_BOOL(25066, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
			
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (_STAT_GET_PACKED_BOOL(25067, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
			
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (_STAT_GET_PACKED_BOOL(25068, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
			
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (_STAT_GET_PACKED_BOOL(25069, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
			
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (_STAT_GET_PACKED_BOOL(25070, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
			
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (_STAT_GET_PACKED_BOOL(25071, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
			
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (_STAT_GET_PACKED_BOOL(25072, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
			
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (_STAT_GET_PACKED_BOOL(25073, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
			
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (_STAT_GET_PACKED_BOOL(25074, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
			
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (_STAT_GET_PACKED_BOOL(25075, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
			
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (_STAT_GET_PACKED_BOOL(25076, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
			
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (_STAT_GET_PACKED_BOOL(25077, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
			
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (_STAT_GET_PACKED_BOOL(25078, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
			
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (_STAT_GET_PACKED_BOOL(25079, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
			
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (_STAT_GET_PACKED_BOOL(25080, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
			
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (_STAT_GET_PACKED_BOOL(25081, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
			
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (_STAT_GET_PACKED_BOOL(25082, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
			
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (_STAT_GET_PACKED_BOOL(25083, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
			
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (_STAT_GET_PACKED_BOOL(25084, -1) || _STAT_GET_PACKED_BOOL(41781, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
			
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (_STAT_GET_PACKED_BOOL(25085, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
			
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (_STAT_GET_PACKED_BOOL(25086, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
			
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (_STAT_GET_PACKED_BOOL(25087, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
			
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (_STAT_GET_PACKED_BOOL(25088, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
			
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (_STAT_GET_PACKED_BOOL(25089, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
			
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (_STAT_GET_PACKED_BOOL(25090, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
			
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (_STAT_GET_PACKED_BOOL(25091, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
			
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (_STAT_GET_PACKED_BOOL(25092, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
			
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (_STAT_GET_PACKED_BOOL(25093, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
			
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (_STAT_GET_PACKED_BOOL(25094, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
			
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (_STAT_GET_PACKED_BOOL(25095, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
			
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (_STAT_GET_PACKED_BOOL(25096, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
			
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (_STAT_GET_PACKED_BOOL(25097, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
			
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (_STAT_GET_PACKED_BOOL(25098, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
			
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (_STAT_GET_PACKED_BOOL(25099, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
			
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
			}
			break;
	
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (_STAT_GET_PACKED_BOOL(22108, -1) || _STAT_GET_PACKED_BOOL(25006, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
			
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (_STAT_GET_PACKED_BOOL(9481, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
			
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (_STAT_GET_PACKED_BOOL(9470, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
			
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (_STAT_GET_PACKED_BOOL(9475, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
			
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (_STAT_GET_PACKED_BOOL(9472, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
			
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (_STAT_GET_PACKED_BOOL(9465, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
			
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (_STAT_GET_PACKED_BOOL(9463, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
			
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (_STAT_GET_PACKED_BOOL(9464, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
			
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (_STAT_GET_PACKED_BOOL(9468, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
			
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (_STAT_GET_PACKED_BOOL(9469, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
			
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (_STAT_GET_PACKED_BOOL(9479, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
			
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (_STAT_GET_PACKED_BOOL(9473, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
			
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (_STAT_GET_PACKED_BOOL(9480, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
			
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (_STAT_GET_PACKED_BOOL(9476, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
			
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (_STAT_GET_PACKED_BOOL(9477, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
			
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (_STAT_GET_PACKED_BOOL(9471, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
			
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (_STAT_GET_PACKED_BOOL(9474, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
			
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (_STAT_GET_PACKED_BOOL(9467, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
			
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (_STAT_GET_PACKED_BOOL(9478, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
			
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (_STAT_GET_PACKED_BOOL(9462, -1))
						return false;
				
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
						if (_STAT_GET_PACKED_BOOL(27085, -1))
							return false;
					else if (_STAT_GET_PACKED_BOOL(27084, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
			
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (_STAT_GET_PACKED_BOOL(9466, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
			
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (_STAT_GET_PACKED_BOOL(22126, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
			
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (_STAT_GET_PACKED_BOOL(22127, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
			
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (_STAT_GET_PACKED_BOOL(22128, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
			
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (_STAT_GET_PACKED_BOOL(22124, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
			
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (_STAT_GET_PACKED_BOOL(22130, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
			
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (_STAT_GET_PACKED_BOOL(22125, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
			
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (_STAT_GET_PACKED_BOOL(22129, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
			
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (_STAT_GET_PACKED_BOOL(22131, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
			
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (_STAT_GET_PACKED_BOOL(22132, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
			}
		
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (_STAT_GET_PACKED_BOOL(22147, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
			
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (_STAT_GET_PACKED_BOOL(22148, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
			
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (_STAT_GET_PACKED_BOOL(22149, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
			
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (_STAT_GET_PACKED_BOOL(22150, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
			
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (_STAT_GET_PACKED_BOOL(22151, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
			
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (_STAT_GET_PACKED_BOOL(22152, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
			
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (_STAT_GET_PACKED_BOOL(22153, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
			
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (_STAT_GET_PACKED_BOOL(22154, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
			
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (_STAT_GET_PACKED_BOOL(22155, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
			
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (_STAT_GET_PACKED_BOOL(22156, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
			
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (_STAT_GET_PACKED_BOOL(22157, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
			
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (_STAT_GET_PACKED_BOOL(22158, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
			
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (_STAT_GET_PACKED_BOOL(22159, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
			
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (_STAT_GET_PACKED_BOOL(22160, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
			
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (_STAT_GET_PACKED_BOOL(22161, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
			
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (_STAT_GET_PACKED_BOOL(22162, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
			
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (_STAT_GET_PACKED_BOOL(22163, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
			
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (_STAT_GET_PACKED_BOOL(22164, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
			
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (_STAT_GET_PACKED_BOOL(22165, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
			
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (_STAT_GET_PACKED_BOOL(22166, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
			
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (_STAT_GET_PACKED_BOOL(22167, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
			
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (_STAT_GET_PACKED_BOOL(22168, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
			
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (_STAT_GET_PACKED_BOOL(22169, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
			
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (_STAT_GET_PACKED_BOOL(22170, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
			
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (_STAT_GET_PACKED_BOOL(22171, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
			
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (_STAT_GET_PACKED_BOOL(22172, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
			
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (_STAT_GET_PACKED_BOOL(22173, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
			
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (_STAT_GET_PACKED_BOOL(22174, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
			
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (_STAT_GET_PACKED_BOOL(22175, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
			
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (_STAT_GET_PACKED_BOOL(22176, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
			
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (_STAT_GET_PACKED_BOOL(22177, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
			
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (_STAT_GET_PACKED_BOOL(22178, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
			}
			break;
	
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (_STAT_GET_PACKED_BOOL(15426, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
			
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (_STAT_GET_PACKED_BOOL(15422, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
			
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (_STAT_GET_PACKED_BOOL(15423, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
			
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (_STAT_GET_PACKED_BOOL(15421, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
			
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (_STAT_GET_PACKED_BOOL(15427, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
			
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (_STAT_GET_PACKED_BOOL(15419, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
			
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (_STAT_GET_PACKED_BOOL(15420, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
			}
		
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (_STAT_GET_PACKED_BOOL(15394, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
			
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (func_0x5137F6D6(209, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
			
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (_STAT_GET_PACKED_BOOL(15406, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
			
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (_STAT_GET_PACKED_BOOL(15395, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
			
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (func_0x5137F6D6(209, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
			
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (_STAT_GET_PACKED_BOOL(15410, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
			
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (_STAT_GET_PACKED_BOOL(15407, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
			
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (func_0x5137F6D6(209, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
			
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (func_0x5137F6D6(209, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
			
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (_STAT_GET_PACKED_BOOL(15414, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
			
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (_STAT_GET_PACKED_BOOL(15415, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
			
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (_STAT_GET_PACKED_BOOL(15399, -1) || _STAT_GET_PACKED_BOOL(41804, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
			
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (_STAT_GET_PACKED_BOOL(15404, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
			
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (func_0x5137F6D6(209, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
			
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (_STAT_GET_PACKED_BOOL(15392, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
			
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (_STAT_GET_PACKED_BOOL(15390, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
			
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (_STAT_GET_PACKED_BOOL(15402, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
			
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (_STAT_GET_PACKED_BOOL(15416, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
			
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (func_0x5137F6D6(209, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
			}
			break;
	
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (_STAT_GET_PACKED_BOOL(9366, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
			
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (_STAT_GET_PACKED_BOOL(9367, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
			
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (_STAT_GET_PACKED_BOOL(9369, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
			
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (_STAT_GET_PACKED_BOOL(9368, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
			
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (_STAT_GET_PACKED_BOOL(9365, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
			
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (_STAT_GET_PACKED_BOOL(9364, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
			
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (_STAT_GET_PACKED_BOOL(27078, -1))
						return false;
				
					if (_STAT_GET_PACKED_BOOL(9363, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
			
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (_STAT_GET_PACKED_BOOL(9362, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
			
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (_STAT_GET_PACKED_BOOL(9370, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
			
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (_STAT_GET_PACKED_BOOL(9371, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
			
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (_STAT_GET_PACKED_BOOL(9372, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
			
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (_STAT_GET_PACKED_BOOL(9373, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
			
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (_STAT_GET_PACKED_BOOL(9374, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
			
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (_STAT_GET_PACKED_BOOL(9384, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
			
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (_STAT_GET_PACKED_BOOL(9385, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
			}
			break;
	
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (_STAT_GET_PACKED_BOOL(7551, -1) || GET_MP_INT_CHARACTER_STAT(3792, -1) >= Global_262145.f_16706)
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
			
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (_STAT_GET_PACKED_BOOL(7467, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
			
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (_STAT_GET_PACKED_BOOL(7468, -1))
						return false;
				
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
						if (_STAT_GET_PACKED_BOOL(27083, -1))
							return false;
					else if (_STAT_GET_PACKED_BOOL(27086, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
			
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (_STAT_GET_PACKED_BOOL(7469, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
			
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (_STAT_GET_PACKED_BOOL(7470, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
			
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (_STAT_GET_PACKED_BOOL(7471, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
			
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (_STAT_GET_PACKED_BOOL(7472, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
			
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (_STAT_GET_PACKED_BOOL(7473, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
			
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (_STAT_GET_PACKED_BOOL(7474, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
			
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (_STAT_GET_PACKED_BOOL(7475, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
			
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (_STAT_GET_PACKED_BOOL(7476, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
			
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (_STAT_GET_PACKED_BOOL(7477, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
			
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (_STAT_GET_PACKED_BOOL(7478, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
			
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (_STAT_GET_PACKED_BOOL(7479, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
			
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (_STAT_GET_PACKED_BOOL(7480, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
			
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (_STAT_GET_PACKED_BOOL(7481, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
			}
			break;
	
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (_STAT_GET_PACKED_BOOL(4260, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
			
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (_STAT_GET_PACKED_BOOL(4257, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
			
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (_STAT_GET_PACKED_BOOL(4269, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
			
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (_STAT_GET_PACKED_BOOL(4261, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
			
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (_STAT_GET_PACKED_BOOL(4259, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
			
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (_STAT_GET_PACKED_BOOL(4268, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
			
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (_STAT_GET_PACKED_BOOL(4265, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
			
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (_STAT_GET_PACKED_BOOL(4258, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
			
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (_STAT_GET_PACKED_BOOL(4264, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
			
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (_STAT_GET_PACKED_BOOL(4267, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
			
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (_STAT_GET_PACKED_BOOL(4262, -1))
						return false;
				
					if (_STAT_GET_PACKED_BOOL(27079, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
			
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (_STAT_GET_PACKED_BOOL(4263, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
			
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (_STAT_GET_PACKED_BOOL(4266, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
			}
			break;
	
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (GET_MP_INT_CHARACTER_STAT(2934, -1) > 0)
						return false;
				
					if (iParam1 == joaat("MP_Bennys_001_M"))
						if (_STAT_GET_PACKED_BOOL(27068, -1))
							return false;
				
					return !func_0x49421A98(iParam2, iParam1, true);
			
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (GET_MP_INT_CHARACTER_STAT(2934, -1) > 0)
						return false;
				
					if (iParam1 == joaat("MP_Bennys_001_F"))
						if (_STAT_GET_PACKED_BOOL(27068, -1))
							return false;
				
					return !func_0x49421A98(iParam2, iParam1, false);
			}
			break;
	
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (_STAT_GET_PACKED_BOOL(113, -1))
						return false;
				
					return !func_0x49421A98(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
			}
			break;
	
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (_STAT_GET_PACKED_BOOL(27082, -1))
							return false;
					
						if (_STAT_GET_PACKED_BOOL(3770, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (_STAT_GET_PACKED_BOOL(3771, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (_STAT_GET_PACKED_BOOL(3772, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (_STAT_GET_PACKED_BOOL(3773, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (_STAT_GET_PACKED_BOOL(3774, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (_STAT_GET_PACKED_BOOL(3775, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (_STAT_GET_PACKED_BOOL(3776, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (_STAT_GET_PACKED_BOOL(3777, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (_STAT_GET_PACKED_BOOL(3778, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (_STAT_GET_PACKED_BOOL(3779, -1) || _STAT_GET_PACKED_BOOL(27084, -1))
							return false;
					}
				
					return !func_0x49421A98(iParam2, iParam1, true);
			
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (_STAT_GET_PACKED_BOOL(3770, -1))
							return false;
					
						if (_STAT_GET_PACKED_BOOL(27082, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (_STAT_GET_PACKED_BOOL(3771, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (_STAT_GET_PACKED_BOOL(3772, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (_STAT_GET_PACKED_BOOL(3773, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (_STAT_GET_PACKED_BOOL(3774, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (_STAT_GET_PACKED_BOOL(3775, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (_STAT_GET_PACKED_BOOL(3776, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (_STAT_GET_PACKED_BOOL(3777, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (_STAT_GET_PACKED_BOOL(3778, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (_STAT_GET_PACKED_BOOL(3779, -1) || _STAT_GET_PACKED_BOOL(27083, -1))
							return false;
					}
				
					return !func_0x49421A98(iParam2, iParam1, false);
			
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if (_STAT_GET_PACKED_BOOL(3765, -1) && _STAT_GET_PACKED_BOOL(3766, -1) && _STAT_GET_PACKED_BOOL(3767, -1) && _STAT_GET_PACKED_BOOL(3768, -1) && _STAT_GET_PACKED_BOOL(3769, -1))
						return false;
				
					return true;
			}
			break;
	
		case joaat("mpIndependence_overlays"):
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !_STAT_GET_PACKED_BOOL(3593, -1);
			}
		
			if (!Global_262145.f_8423 && !func_0x49421A98(iParam2, iParam1, false))
				return true;
			break;
	
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return true;
			
				case joaat("MP_Award_M_Tshirt_000"):
				case joaat("MP_Award_M_Tshirt_001"):
				case joaat("MP_Award_F_Tshirt_000"):
				case joaat("MP_Award_F_Tshirt_001"):
					return true;
			
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return true;
			
				case joaat("MP_Award_M_Tshirt_002"):
				case joaat("MP_Award_M_Tshirt_003"):
				case joaat("MP_Award_F_Tshirt_002"):
				case joaat("MP_Award_F_Tshirt_003"):
					return true;
			
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return !func_0x5137F6D6(152, -1) && !_STAT_GET_PACKED_BOOL(9440, -1);
			
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return !func_0x5137F6D6(151, -1) && !_STAT_GET_PACKED_BOOL(9430, -1);
			
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9426, -1);
			
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9427, -1);
			
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9428, -1);
			
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9431, -1);
			
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9432, -1);
			
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9433, -1);
			
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9439, -1);
			
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9434, -1);
			
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9435, -1);
			
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9436, -1);
			
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9429, -1);
			
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return !func_0x75CF6A28(iParam2, -1) && !_STAT_GET_PACKED_BOOL(9437, -1);
			
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !IS_ROCKSTAR_DEV();
			}
			break;
	
		case joaat("mpValentines_overlays"):
			if (!Global_262145.f_7134 && !func_0x75CF6A28(iParam2, -1) && !Global_262145.f_12018)
				return true;
			break;
	
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !_STAT_GET_PACKED_BOOL(3608, -1);
			}
			break;
	
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return !_STAT_GET_PACKED_BOOL(3615, -1) && !_STAT_GET_PACKED_BOOL(9438, -1);
			}
			break;
	
		case joaat("mpLuxe_overlays"):
			if (iParam1 == joaat("MP_LUXE_VDG_006_F"))
				return true;
		
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !_STAT_GET_PACKED_BOOL(3783, -1);
			
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !_STAT_GET_PACKED_BOOL(3784, -1);
			
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !_STAT_GET_PACKED_BOOL(3785, -1);
			
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !_STAT_GET_PACKED_BOOL(3786, -1);
			
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !_STAT_GET_PACKED_BOOL(3787, -1);
			
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !_STAT_GET_PACKED_BOOL(3788, -1);
			
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (_STAT_GET_PACKED_BOOL(27081, -1))
						return false;
				
					return !_STAT_GET_PACKED_BOOL(3789, -1);
			
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !_STAT_GET_PACKED_BOOL(3790, -1);
			
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !_STAT_GET_PACKED_BOOL(3791, -1);
			
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !_STAT_GET_PACKED_BOOL(3792, -1);
			
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						num = GET_MP_INT_CHARACTER_STAT(2444, -1);
					
						if (IS_BIT_SET(num, 0))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						num2 = GET_MP_INT_CHARACTER_STAT(2424, -1);
					
						if (IS_BIT_SET(num2, 18))
							return false;
					}
				
					return !_STAT_GET_PACKED_BOOL(3793, -1);
			
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						num3 = GET_MP_INT_CHARACTER_STAT(2444, -1);
					
						if (IS_BIT_SET(num3, 1))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						num4 = GET_MP_INT_CHARACTER_STAT(2424, -1);
					
						if (IS_BIT_SET(num4, 19))
							return false;
					}
				
					return !_STAT_GET_PACKED_BOOL(3794, -1);
			
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						num5 = GET_MP_INT_CHARACTER_STAT(2444, -1);
					
						if (IS_BIT_SET(num5, 2))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						num6 = GET_MP_INT_CHARACTER_STAT(2424, -1);
					
						if (IS_BIT_SET(num6, 20))
							return false;
					}
				
					return !_STAT_GET_PACKED_BOOL(3795, -1);
			
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						num7 = GET_MP_INT_CHARACTER_STAT(2444, -1);
					
						if (IS_BIT_SET(num7, 3))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						num8 = GET_MP_INT_CHARACTER_STAT(2424, -1);
					
						if (IS_BIT_SET(num8, 21))
							return false;
					}
				
					return !_STAT_GET_PACKED_BOOL(3796, -1);
			
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						num9 = GET_MP_INT_CHARACTER_STAT(2444, -1);
					
						if (IS_BIT_SET(num9, 4))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						num10 = GET_MP_INT_CHARACTER_STAT(2424, -1);
					
						if (IS_BIT_SET(num10, 22))
							return false;
					}
				
					return !_STAT_GET_PACKED_BOOL(3797, -1);
			
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						num11 = GET_MP_INT_CHARACTER_STAT(2444, -1);
					
						if (IS_BIT_SET(num11, 5))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						num12 = GET_MP_INT_CHARACTER_STAT(2424, -1);
					
						if (IS_BIT_SET(num12, 23))
							return false;
					}
				
					return !_STAT_GET_PACKED_BOOL(3798, -1);
			
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						num13 = GET_MP_INT_CHARACTER_STAT(2444, -1);
					
						if (IS_BIT_SET(num13, 6))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						num14 = GET_MP_INT_CHARACTER_STAT(2424, -1);
					
						if (IS_BIT_SET(num14, 24))
							return false;
					}
				
					return !_STAT_GET_PACKED_BOOL(3799, -1);
			
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						num15 = GET_MP_INT_CHARACTER_STAT(2444, -1);
					
						if (IS_BIT_SET(num15, 7))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						num16 = GET_MP_INT_CHARACTER_STAT(2424, -1);
					
						if (IS_BIT_SET(num16, 25))
							return false;
					}
				
					return !_STAT_GET_PACKED_BOOL(3800, -1);
			
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						num17 = GET_MP_INT_CHARACTER_STAT(2444, -1);
					
						if (IS_BIT_SET(num17, 8))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						num18 = GET_MP_INT_CHARACTER_STAT(2424, -1);
					
						if (IS_BIT_SET(num18, 26))
							return false;
					}
				
					return !_STAT_GET_PACKED_BOOL(3801, -1);
			
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						num19 = GET_MP_INT_CHARACTER_STAT(2444, -1);
					
						if (IS_BIT_SET(num19, 9))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						num20 = GET_MP_INT_CHARACTER_STAT(2424, -1);
					
						if (IS_BIT_SET(num20, 27))
							return false;
					}
				
					return !_STAT_GET_PACKED_BOOL(3802, -1);
			}
			break;
	
		case joaat("mpLuxe2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Luxe_Tat_030_M"):
				case joaat("MP_Luxe_Tat_031_M"):
					return true;
			
				case joaat("MP_Luxe_Tat_030_F"):
				case joaat("MP_Luxe_Tat_031_F"):
					return true;
			}
			break;
	
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return true;
			}
			break;
	}

	return false;
}

BOOL func_0x75CF6A28(int iParam0, int iParam1)
{
	int num;
	int num2;

	if (func_0xF08C5B2E(iParam0) == 14835)
		return false;

	num = func_0xCC2D4398(iParam0, iParam1);
	num2 = iParam0;
	return IS_BIT_SET(num, func_0x9042BAD4(num2));
}

int func_0x9042BAD4(int iParam0)
{
	return iParam0 % 32;
}

int func_0xCC2D4398(int iParam0, int iParam1)
{
	int num;

	num = GET_MP_INT_CHARACTER_STAT(func_0xF08C5B2E(iParam0), iParam1);
	return num;
}

int func_0xF08C5B2E(int iParam0)
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_0x195EBE32(num);

	if (func_0x21D64237() == 0 || func_0x21D64237() == 0 || func_0x21D64237() == 999 && func_0x21D64237() == 999)
	{
		switch (num2)
		{
			case 0:
				return 1039;
		
			case 1:
				return 1040;
		
			case 2:
				return 1041;
		
			case 3:
				return 1042;
		
			case 4:
				return 1043;
		
			case 5:
				return 1503;
		
			case 6:
				return 1758;
		
			case 7:
				return 1952;
		
			case 8:
				return 1953;
		
			case 9:
				return 1954;
		
			case 10:
				return 1955;
		
			case 11:
				return 1956;
		
			case 12:
				return 1957;
		
			case 13:
				return 2424;
		
			case 14:
				return 2444;
		
			case 15:
				return 2447;
		
			case 16:
				return 2450;
		
			case 17:
				return 2614;
		
			case 18:
				return 2617;
		
			case 19:
				return 2620;
		
			case 20:
				return 3786;
		
			case 21:
				return 3789;
		
			case 22:
				return 3864;
		
			case 23:
				return 3867;
		
			case 24:
				return 3870;
		
			case 25:
				return 3873;
		
			case 26:
				return 5364;
		
			case 27:
				return 5367;
		
			case 28:
				return 5469;
		
			case 29:
				return 5472;
		
			case 30:
				return 6431;
		
			case 31:
				return 6434;
		
			case 32:
				return 7255;
		
			case 33:
				return 7258;
		
			case 34:
				return 7261;
		
			case 35:
				return 7970;
		
			case 36:
				return 7973;
		
			case 37:
				return 7976;
		
			case 38:
				return 7979;
		
			case 39:
				return 8501;
		
			case 40:
				return 8504;
		
			case 41:
				return 8507;
		
			case 42:
				return 8510;
		
			case 43:
				return 8906;
		
			case 44:
				return 8909;
		
			case 45:
				return 8912;
		
			case 46:
				return 10288;
		
			case 47:
				return 10291;
		
			case 48:
				return 10414;
		
			case 49:
				return 10417;
		
			case 50:
				return 11826;
		
			case 51:
				return 11829;
		
			case 52:
				return 12222;
		
			case 53:
				return 12225;
		}
	}

	return 14835;
}

int func_0x21D64237()
{
	return Global_32949;
}

int func_0x195EBE32(int iParam0)
{
	return iParam0 / 32;
}

BOOL func_0x5137F6D6(int iParam0, int iParam1)
{
	Hash statHash;
	BOOL outValue;

	statHash = func_0x1D62A43E(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

BOOL func_0xD0D50F3D(BOOL bParam0, BOOL bParam1)
{
	int num;
	int i;
	int num2;

	num = 20 - 1;

	if (bParam1)
		num = 13;

	for (i = 0; i < num; i = i + 1)
	{
		num2 = i;
	
		if (!func_0xE48228D0(num2) || bParam0)
			if (!func_0x42C22233(PLAYER::PLAYER_ID(), num2, 0))
				return false;
	}

	return true;
}

BOOL func_0x42C22233(Player plParam0, int iParam1, int iParam2)
{
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		num = iParam1;
	
		switch (iParam2)
		{
			case 0:
				return IS_BIT_SET(Global_1845281[plParam0].f_268.f_439, num);
		}
	}

	return true;
}

BOOL func_0xE48228D0(int iParam0)
{
	switch (iParam0)
	{
		case 18:
		case 17:
		case 19:
			return true;
	}

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

int func_0x80259D9F(int iParam0, int iParam1, int iParam2)
{
	iParam2 == 0;

	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 30;
			
				case 4:
					return 60;
			
				case 5:
					return 120;
			
				default:
					break;
			}
			break;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 30;
			
				default:
					break;
			}
			break;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 2;
			
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 2;
			
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 2;
			
				case 4:
					return 3;
			
				case 5:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 2;
			
				case 4:
					return 3;
			
				case 5:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1000;
			
				case 3:
					return 10000;
			
				case 4:
					return 25000;
			
				case 5:
					return 50000;
			
				default:
					break;
			}
			break;
	
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 3;
			
				case 3:
					return 5;
			
				case 4:
					return 7;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 250;
			
				case 4:
					return 500;
			
				case 5:
					return 1000;
			
				default:
					break;
			}
			break;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 148:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 149:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 150:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 151:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 152:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 142:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 143:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 144:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 145:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 146:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 147:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 153:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 154:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 155:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 156:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 157:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 158:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 159:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 160:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 161:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_24846;
			
				case 3:
					return Global_262145.f_24847;
			
				case 4:
					return Global_262145.f_24848;
			
				case 5:
					return Global_262145.f_24849;
			
				default:
					break;
			}
			break;
	
		case 162:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_24846;
			
				case 3:
					return Global_262145.f_24847;
			
				case 4:
					return Global_262145.f_24848;
			
				case 5:
					return Global_262145.f_24849;
			
				default:
					break;
			}
			break;
	
		case 163:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_24846;
			
				case 3:
					return Global_262145.f_24847;
			
				case 4:
					return Global_262145.f_24848;
			
				case 5:
					return Global_262145.f_24849;
			
				default:
					break;
			}
			break;
	
		case 164:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_24846;
			
				case 3:
					return Global_262145.f_24847;
			
				case 4:
					return Global_262145.f_24848;
			
				case 5:
					return Global_262145.f_24849;
			
				default:
					break;
			}
			break;
	
		case 165:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 20;
			
				case 4:
					return 30;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 100000;
			
				case 3:
					return 250000;
			
				case 4:
					return 500000;
			
				case 5:
					return 1000000;
			
				default:
					break;
			}
			break;
	
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1000;
			
				case 3:
					return 3000;
			
				case 4:
					return 15000;
			
				case 5:
					return 55000;
			
				default:
					break;
			}
			break;
	
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 25000;
			
				case 3:
					return 50000;
			
				case 4:
					return 75000;
			
				case 5:
					return 100000;
			
				default:
					break;
			}
			break;
	
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 20;
			
				case 4:
					return 30;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28207;
			
				case 3:
					return Global_262145.f_28208;
			
				case 4:
					return Global_262145.f_28209;
			
				case 5:
					return Global_262145.f_28210;
			
				default:
					break;
			}
			break;
	
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28372;
			
				case 3:
					return Global_262145.f_28373;
			
				case 4:
					return Global_262145.f_28374;
			
				case 5:
					return Global_262145.f_28375;
			
				default:
					break;
			}
			break;
	
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28400;
			
				case 3:
					return Global_262145.f_28401;
			
				case 4:
					return Global_262145.f_28402;
			
				case 5:
					return Global_262145.f_28403;
			
				default:
					break;
			}
			break;
	
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28404;
			
				case 3:
					return Global_262145.f_28405;
			
				case 4:
					return Global_262145.f_28406;
			
				case 5:
					return Global_262145.f_28407;
			
				default:
					break;
			}
			break;
	
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28138;
			
				case 3:
					return Global_262145.f_28139;
			
				case 4:
					return Global_262145.f_28140;
			
				case 5:
					return Global_262145.f_28141;
			
				default:
					break;
			}
			break;
	
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28376;
			
				case 3:
					return Global_262145.f_28377;
			
				case 4:
					return Global_262145.f_28378;
			
				case 5:
					return Global_262145.f_28379;
			
				default:
					break;
			}
			break;
	
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 50000;
			
				case 3:
					return 250000;
			
				case 4:
					return 750000;
			
				case 5:
					return 1000000;
			
				default:
					break;
			}
			break;
	
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1000000;
			
				case 3:
					return 5000000;
			
				case 4:
					return 10000000;
			
				case 5:
					return 20000000;
			
				default:
					break;
			}
			break;
	
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
				
			}
			break;
	
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 30;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 30;
			
				case 3:
					return 60;
			
				case 4:
					return 120;
			
				case 5:
					return 240;
			
				default:
					break;
			}
			break;
	
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 2;
			
				case 4:
					return 3;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 122:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 124:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 125:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 2;
			
				case 4:
					return 3;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 126:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 129:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 130:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 250000;
			
				case 3:
					return 1000000;
			
				case 4:
					return 2500000;
			
				case 5:
					return 5000000;
			
				default:
					break;
			}
			break;
	
		case 131:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 250000;
			
				case 3:
					return 1000000;
			
				case 4:
					return 2500000;
			
				case 5:
					return 5000000;
			
				default:
					break;
			}
			break;
	
		case 132:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 133:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 134:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 135:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 250000;
			
				case 3:
					return 1000000;
			
				case 4:
					return 2500000;
			
				case 5:
					return 5000000;
			
				default:
					break;
			}
			break;
	
		case 136:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 250000;
			
				case 3:
					return 500000;
			
				case 4:
					return 750000;
			
				case 5:
					return 1000000;
			
				default:
					break;
			}
			break;
	
		case 137:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 138:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 139:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 3;
			
				case 3:
					return 5;
			
				case 4:
					return 10;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 140:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 141:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 7;
			
				case 4:
					return 10;
			
				case 5:
					return 15;
			
				default:
					break;
			}
			break;
	}

	return 999;
}

int func_0x5137F6D6(int iParam0, int iParam1)
{
	Hash statHash;
	int outValue;

	statHash = func_0x44FC0648(iParam0, iParam1);

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_0x44FC0648(int iParam0, int iParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, GET_SLOT_NUMBER(iParam1));
}

BOOL func_0x49421A98(int iParam0, int iParam1, BOOL bParam2)
{
	if (iParam0 == -1)
		if (bParam2)
			iParam0 = func_0xF58FDC97(iParam1, 3);
		else
			iParam0 = func_0xF58FDC97(iParam1, 4);

	return func_0x75CF6A28(iParam0, -1) || func_0x37B55199(iParam0, -1);
}

BOOL func_0x37B55199(int iParam0, int iParam1)
{
	return _STAT_GET_PACKED_BOOL(func_0x85CDA395(iParam0), iParam1);
}

int func_0x85CDA395(int iParam0)
{
	int num;
	int num2;
	int num3;

	if (iParam0 <= 480)
	{
		num2 = iParam0;
		num = 3112 + num2;
	}
	else if (iParam0 < 864)
	{
		num2 = iParam0 - 480;
		num = 6029 + num2;
	}
	else if (iParam0 < 1248)
	{
		num2 = iParam0 - 864;
		num = 15562 + num2;
	}
	else if (iParam0 < 1372)
	{
		num2 = iParam0 - 1248;
		num = 28355 + num2;
	}
	else if (iParam0 < 1500)
	{
		num2 = iParam0 - 1372;
		num = 30355 + num2;
	}
	else if (iParam0 < 1564)
	{
		num2 = iParam0 - 1500;
		num = 32411 + num2;
	}
	else if (iParam0 < 1628)
	{
		num2 = iParam0 - 1564;
		num = 41251 + num2;
	}
	else if (iParam0 < 1756)
	{
		num2 = iParam0 - 1628;
		num = 51059 + num2;
	}
	else
	{
		num3 = iParam0;
	}

	return num;
}

int func_0xF58FDC97(int iParam0, Hash hParam1)
{
	int tattooShopDlcItemIndex;

	tattooShopDlcItemIndex = FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(hParam1, -1, iParam0);

	if (tattooShopDlcItemIndex != -1)
		return 129 + tattooShopDlcItemIndex;

	return -1;
}

BOOL func_0x69D10458(Ped pedParam0, const char* sParam1, int iParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8)
{
	Hash entityModel;
	int num;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (hParam4 == 0)
	{
		num = func_0x2D6EA43C(entityModel, sParam1, hParam4);
		hParam4 = MISC::GET_HASH_KEY(func_0xE6862179(num));
	}

	if (iParam3 == joaat("mpDummy"))
		return false;

	switch (hParam4)
	{
		case joaat("CHEST_FULL"):
		case joaat("CHEST_LEFT"):
		case joaat("CHEST_MID"):
		case joaat("CHEST_RIGHT"):
		case joaat("CHEST_STOM"):
		case joaat("CHEST_STOM_FULL"):
		case joaat("SIDE_RIGHT"):
		case joaat("TORSO_SIDE_LEFT"):
		case joaat("TORSO_SIDE_RIGHT"):
		case -1238079313:
		case joaat("STOMACH_FULL"):
		case joaat("STOMACH_LEFT"):
		case joaat("STOMACH_LOWER_LEFT"):
		case joaat("STOMACH_LOWER_RIGHT"):
		case joaat("STOMACH_MID"):
		case joaat("STOMACH_RIGHT"):
			if (bParam5)
				return false;
		
			if (hParam4 == joaat("CHEST_FULL") || hParam4 == joaat("CHEST_MID") && entityModel == joaat("MP_F_Freemode_01") || hParam4 == joaat("CHEST_RIGHT") || hParam4 == joaat("CHEST_STOM") || hParam4 == joaat("CHEST_STOM_FULL"))
			{
				if (!bParam6)
				{
					if (Global_4541414 == -1)
					{
						if (!Global_101585.f_1578)
						{
							if (func_0x562E4F3B(13, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(14, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(15, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(16, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(71, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(72, -1))
							{
							}
						}
					}
					else if (Global_4541414 == 13)
					{
						return false;
					}
					else if (Global_4541414 == 14)
					{
						return false;
					}
					else if (Global_4541414 == 15)
					{
						return false;
					}
					else if (Global_4541414 == 16)
					{
						return false;
					}
					else if (Global_4541414 == 71)
					{
						return false;
					}
					else if (Global_4541414 == 72)
					{
					}
				}
			}
			else if (hParam4 == joaat("CHEST_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4541414 == -1)
					{
						if (!Global_101585.f_1578)
						{
							if (func_0x562E4F3B(13, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(14, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(15, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(16, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(71, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(72, -1))
							{
							}
						}
					}
					else if (Global_4541414 == 13)
					{
						return false;
					}
					else if (Global_4541414 == 14)
					{
						return false;
					}
					else if (Global_4541414 == 15)
					{
						return false;
					}
					else if (Global_4541414 == 16)
					{
						return false;
					}
					else if (Global_4541414 == 71)
					{
						return false;
					}
					else if (Global_4541414 == 72)
					{
					}
				}
			}
			else if (hParam4 == joaat("STOMACH_FULL") || hParam4 == joaat("STOMACH_MID") || hParam4 == joaat("STOMACH_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4541414 == -1)
					{
						if (!Global_101585.f_1578)
						{
							if (func_0x562E4F3B(13, -1))
							{
							}
							else if (func_0x562E4F3B(14, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(15, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(16, -1))
							{
							}
							else if (func_0x562E4F3B(71, -1))
							{
								return false;
							}
							else if (func_0x562E4F3B(72, -1))
							{
							}
						}
					}
					else if (Global_4541414 == 13)
					{
					}
					else if (Global_4541414 == 14)
					{
						return false;
					}
					else if (Global_4541414 == 15)
					{
						return false;
					}
					else if (Global_4541414 == 16)
					{
					}
					else if (Global_4541414 == 71)
					{
						return false;
					}
					else if (Global_4541414 == 72)
					{
					}
				}
			}
			else if (hParam4 == joaat("BACK_UPPER"))
			{
				if (!bParam6)
				{
					if (Global_4541414 == -1)
					{
						if (!Global_101585.f_1578)
						{
							if (func_0x562E4F3B(13, -1))
							{
							}
							else if (func_0x562E4F3B(14, -1))
							{
							}
							else if (func_0x562E4F3B(15, -1))
							{
							}
							else if (func_0x562E4F3B(16, -1))
							{
							}
							else if (func_0x562E4F3B(71, -1))
							{
							}
							else if (func_0x562E4F3B(72, -1))
							{
							}
						}
					}
					else if (Global_4541414 == 13)
					{
					}
					else if (Global_4541414 == 14)
					{
					}
					else if (Global_4541414 == 15)
					{
					}
					else if (Global_4541414 == 16)
					{
					}
					else if (Global_4541414 == 71)
					{
					}
					else if (Global_4541414 == 72)
					{
					}
				}
			}
			break;
	
		case joaat("BACK_1"):
		case joaat("BACK_FULL"):
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
		case joaat("BACK_FULL_SHORT"):
		case joaat("BACK_LOWER"):
		case joaat("BACK_MID"):
		case joaat("BACK_UPPER"):
		case joaat("BACK_UPPER_LEFT"):
		case joaat("BACK_UPPER_RIGHT"):
			if (bParam8)
				return false;
		
			if (!bParam6)
			{
				if (Global_4541414 == -1)
				{
					if (!Global_101585.f_1578)
					{
						if (func_0x562E4F3B(13, -1))
						{
						}
						else if (func_0x562E4F3B(14, -1))
						{
						}
						else if (func_0x562E4F3B(15, -1))
						{
							return false;
						}
						else if (func_0x562E4F3B(16, -1))
						{
						}
						else if (func_0x562E4F3B(71, -1))
						{
						}
						else if (func_0x562E4F3B(72, -1))
						{
							return false;
						}
					}
				}
				else if (Global_4541414 == 13)
				{
				}
				else if (Global_4541414 == 14)
				{
				}
				else if (Global_4541414 == 15)
				{
					return false;
				}
				else if (Global_4541414 == 16)
				{
				}
				else if (Global_4541414 == 71)
				{
				}
				else if (Global_4541414 == 72)
				{
					return false;
				}
			}
			break;
	
		case joaat("crewLogo"):
			if (bParam8)
				if (entityModel == joaat("MP_M_Freemode_01"))
					if (Global_4541414 == -1)
						if (!Global_101585.f_1578)
							if (func_0x562E4F3B(15, -1))
								return false;
					else if (Global_4541414 == 15)
						return false;
		
			if (bParam6)
				return false;
		
			if (bParam5)
			{
				if (Global_4541414 == -1)
				{
					if (!Global_101585.f_1578)
					{
						if (func_0x562E4F3B(13, -1))
						{
							return false;
						}
						else if (func_0x562E4F3B(14, -1))
						{
							return false;
						}
						else if (func_0x562E4F3B(15, -1))
						{
							if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /*Crew Emblem Back*/))
								return false;
						}
						else if (func_0x562E4F3B(16, -1))
						{
						}
						else if (func_0x562E4F3B(71, -1))
						{
						}
						else if (func_0x562E4F3B(72, -1))
						{
						}
					}
				}
				else if (Global_4541414 == 13)
				{
					return false;
				}
				else if (Global_4541414 == 14)
				{
					return false;
				}
				else if (Global_4541414 == 15)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /*Crew Emblem Back*/))
						return false;
				}
				else if (Global_4541414 == 16)
				{
				}
				else if (Global_4541414 == 71)
				{
				}
				else if (Global_4541414 == 72)
				{
				}
			}
			break;
	
		case 0:
		case 2:
		case joaat("rank"):
			if (bParam5)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					switch (MISC::GET_HASH_KEY(sParam1))
					{
						case joaat("TAT_FM_011"):
						case joaat("TAT_FM_012"):
						case joaat("TAT_FM_019"):
						case joaat("TAT_FM_020"):
						case joaat("TAT_FM_021"):
						case joaat("TAT_FM_218"):
						case joaat("TAT_FM_219"):
						case joaat("TAT_FM_220"):
						case joaat("TAT_FM_225"):
						case joaat("TAT_FM_226"):
						case joaat("TAT_FM_230"):
						case joaat("TAT_FM_233"):
						case joaat("TAT_FM_235"):
						case joaat("TAT_FM_237"):
						case joaat("TAT_FM_245"):
							return false;
					}
				}
			}
		
			if (entityModel == joaat("MP_M_Freemode_01"))
			{
			}
			else if (entityModel == joaat("MP_F_Freemode_01"))
			{
				if (!bParam6)
				{
					if (Global_4541414 == -1)
					{
						if (!Global_101585.f_1578)
						{
							if (func_0x562E4F3B(13, -1))
							{
							}
							else if (func_0x562E4F3B(14, -1))
							{
							}
							else if (func_0x562E4F3B(15, -1))
							{
							}
							else if (func_0x562E4F3B(16, -1))
							{
							}
							else if (func_0x562E4F3B(71, -1))
							{
							}
							else if (func_0x562E4F3B(72, -1))
							{
							}
						}
					}
					else if (Global_4541414 == 13)
					{
						return false;
					}
					else if (Global_4541414 == 14)
					{
					}
					else if (Global_4541414 == 15)
					{
						return false;
					}
					else if (Global_4541414 == 16)
					{
					}
					else if (Global_4541414 == 71)
					{
					}
					else if (Global_4541414 == 72)
					{
					}
				}
			}
			break;
	
		case joaat("torsoDecal"):
			if (bParam7)
				return false;
			break;
	}

	return true;
}

BOOL func_0x562E4F3B(int iParam0, int iParam1)
{
	int num;
	int num2;

	if (iParam0 == -1)
		return false;

	num = func_0x63B9C993(iParam0, iParam1);
	num2 = func_0x9042BAD4(iParam0);

	if (num2 < 0 || num2 >= 32)
		return false;

	return IS_BIT_SET(num, num2);
}

int func_0x63B9C993(int iParam0, int iParam1)
{
	int num;
	int num2;

	num = func_0xF08C5B2E(iParam0);

	if (num == 14835)
		if (func_0x21D64237() == 2 && func_0x21D64237() == 2)
			return 0;
		else
			return 0;

	num2 = GET_MP_INT_CHARACTER_STAT(num, iParam1);
	return num2;
}

int func_0xF08C5B2E(int iParam0)
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_0x195EBE32(num);

	if (func_0x21D64237() == 0 || func_0x21D64237() == 0 || func_0x21D64237() == 999 && func_0x21D64237() == 999)
	{
		switch (num2)
		{
			case 0:
				return 1049;
		
			case 1:
				return 1050;
		
			case 2:
				return 1051;
		
			case 3:
				return 1052;
		
			case 4:
				return 1053;
		
			case 5:
				return 1054;
		
			case 6:
				return 1488;
		
			case 7:
				return 1489;
		
			case 8:
				return 1490;
		
			case 9:
				return 1491;
		
			case 10:
				return 1949;
		
			case 11:
				return 1950;
		
			case 12:
				return 1951;
		
			case 13:
				return 2425;
		
			case 14:
				return 2445;
		
			case 15:
				return 2448;
		
			case 16:
				return 2451;
		
			case 17:
				return 2615;
		
			case 18:
				return 2618;
		
			case 19:
				return 2621;
		
			case 20:
				return 3787;
		
			case 21:
				return 3790;
		
			case 22:
				return 3865;
		
			case 23:
				return 3868;
		
			case 24:
				return 3871;
		
			case 25:
				return 3874;
		
			case 26:
				return 5365;
		
			case 27:
				return 5368;
		
			case 28:
				return 5470;
		
			case 29:
				return 5473;
		
			case 30:
				return 6432;
		
			case 31:
				return 6435;
		
			case 32:
				return 7256;
		
			case 33:
				return 7259;
		
			case 34:
				return 7262;
		
			case 35:
				return 7971;
		
			case 36:
				return 7974;
		
			case 37:
				return 7977;
		
			case 38:
				return 7980;
		
			case 39:
				return 8502;
		
			case 40:
				return 8505;
		
			case 41:
				return 8508;
		
			case 42:
				return 8511;
		
			case 43:
				return 8907;
		
			case 44:
				return 8910;
		
			case 45:
				return 8913;
		
			case 46:
				return 10289;
		
			case 47:
				return 10292;
		
			case 48:
				return 10415;
		
			case 49:
				return 10418;
		
			case 50:
				return 11827;
		
			case 51:
				return 11830;
		
			case 52:
				return 12223;
		
			case 53:
				return 12226;
		
			case 54:
				break;
		}
	
		return 14835;
	}

	if (func_0x21D64237() == 2 && func_0x21D64237() == 2)
		return 14835;

	return 14835;
}

char* func_0xE6862179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
	
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
	
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
	
		case 3:
			return "ARM_LEFT_LOWER_INNER";
	
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
	
		case 5:
			return "ARM_LEFT_WRIST";
	
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
	
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
	
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
	
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
	
		case 10:
			return "ARM_LEFT_SHOULDER";
	
		case 11:
			return "ARM_LEFT_ELBOW";
	
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
	
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
	
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
	
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
	
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
	
		case 17:
			return "ARM_RIGHT_WRIST";
	
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
	
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
	
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
	
		case 21:
			return "ARM_RIGHT_UPPER_BICEP";
	
		case 22:
			return "ARM_RIGHT_SHOULDER";
	
		case 23:
			return "ARM_RIGHT_ELBOW";
	
		case 24:
			return "HAND_LEFT";
	
		case 25:
			return "HAND_RIGHT";
	
		case 26:
			return "BACK_FULL";
	
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
	
		case 28:
			return "BACK_FULL_SHORT";
	
		case 29:
			return "BACK_MID";
	
		case 30:
			return "BACK_UPPER";
	
		case 31:
			return "BACK_UPPER_LEFT";
	
		case 32:
			return "BACK_UPPER_RIGHT";
	
		case 33:
			return "BACK_LOWER";
	
		case 34:
			return "BACK_LOWER_LEFT";
	
		case 35:
			return "BACK_LOWER_MID";
	
		case 36:
			return "BACK_LOWER_RIGHT";
	
		case 37:
			return "CHEST_FULL";
	
		case 38:
			return "CHEST_STOM";
	
		case 39:
			return "CHEST_STOM_FULL";
	
		case 40:
			return "CHEST_LEFT";
	
		case 41:
			return "CHEST_UPPER_LEFT";
	
		case 42:
			return "CHEST_RIGHT";
	
		case 43:
			return "CHEST_UPPER_RIGHT";
	
		case 44:
			return "CHEST_MID";
	
		case 45:
			return "TORSO_SIDE_RIGHT";
	
		case 46:
			return "TORSO_SIDE_LEFT";
	
		case 47:
			return "STOMACH_FULL";
	
		case 48:
			return "STOMACH_UPPER";
	
		case 49:
			return "STOMACH_UPPER_LEFT";
	
		case 50:
			return "STOMACH_UPPER_RIGHT";
	
		case 51:
			return "STOMACH_LOWER";
	
		case 52:
			return "STOMACH_LOWER_LEFT";
	
		case 53:
			return "STOMACH_LOWER_RIGHT";
	
		case 54:
			return "STOMACH_LEFT";
	
		case 55:
			return "STOMACH_RIGHT";
	
		case 56:
			return "FACE";
	
		case 57:
			return "HEAD_LEFT";
	
		case 58:
			return "HEAD_RIGHT";
	
		case 59:
			return "NECK_FRONT";
	
		case 60:
			return "NECK_BACK";
	
		case 61:
			return "NECK_LEFT_FULL";
	
		case 62:
			return "NECK_LEFT_BACK";
	
		case 63:
			return "NECK_RIGHT_FULL";
	
		case 64:
			return "NECK_RIGHT_BACK";
	
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
	
		case 66:
			return "LEG_LEFT_FULL_FRONT";
	
		case 67:
			return "LEG_LEFT_FULL_BACK";
	
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
	
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
	
		case 70:
			return "LEG_LEFT_UPPER_BACK";
	
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
	
		case 72:
			return "LEG_LEFT_UPPER_INNER";
	
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
	
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
	
		case 75:
			return "LEG_LEFT_LOWER_BACK";
	
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
	
		case 77:
			return "LEG_LEFT_LOWER_INNER";
	
		case 78:
			return "LEG_LEFT_KNEE";
	
		case 79:
			return "LEG_LEFT_ANKLE";
	
		case 80:
			return "LEG_LEFT_CALF";
	
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
	
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
	
		case 83:
			return "LEG_RIGHT_FULL_BACK";
	
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
	
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
	
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
	
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
	
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
	
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
	
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
	
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
	
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
	
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
	
		case 94:
			return "LEG_RIGHT_KNEE";
	
		case 95:
			return "LEG_RIGHT_ANKLE";
	
		case 96:
			return "LEG_RIGHT_CALF";
	
		case 97:
			return "FOOT_LEFT";
	
		case 98:
			return "FOOT_RIGHT";
	}

	return "";
}

int func_0x2D6EA43C(Hash hParam0, const char* sParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("crewLogo"):
		case joaat("hairOverlay"):
		case joaat("torsoDecal"):
			return -1;
	}

	switch (iParam2)
	{
		case joaat("ARM_LEFT_FULL_SLEEVE"):
			return 0;
	
		case joaat("ARM_LEFT_SHORT_SLEEVE"):
			return 1;
	
		case joaat("ARM_LEFT_LOWER_SLEEVE"):
			return 2;
	
		case joaat("ARM_LEFT_LOWER_INNER"):
			return 3;
	
		case joaat("ARM_LEFT_LOWER_OUTER"):
			return 4;
	
		case joaat("ARM_LEFT_WRIST"):
			return 5;
	
		case joaat("ARM_LEFT_UPPER_SLEEVE"):
			return 6;
	
		case joaat("ARM_LEFT_UPPER_TRICEP"):
			return 7;
	
		case joaat("ARM_LEFT_UPPER_SIDE"):
			return 8;
	
		case joaat("ARM_LEFT_UPPER_BICEP"):
			return 9;
	
		case joaat("ARM_LEFT_SHOULDER"):
			return 10;
	
		case joaat("ARM_LEFT_ELBOW"):
			return 11;
	
		case joaat("ARM_RIGHT_FULL_SLEEVE"):
			return 12;
	
		case joaat("ARM_RIGHT_SHORT_SLEEVE"):
			return 13;
	
		case joaat("ARM_RIGHT_LOWER_SLEEVE"):
			return 14;
	
		case joaat("ARM_RIGHT_LOWER_INNER"):
			return 15;
	
		case joaat("ARM_RIGHT_LOWER_OUTER"):
			return 16;
	
		case joaat("ARM_RIGHT_WRIST"):
			return 17;
	
		case joaat("ARM_RIGHT_UPPER_SLEEVE"):
			return 18;
	
		case joaat("ARM_RIGHT_UPPER_TRICEP"):
			return 19;
	
		case joaat("ARM_RIGHT_UPPER_SIDE"):
			return 20;
	
		case joaat("ARM_RIGHT_UPPER_BICEP"):
			return 21;
	
		case joaat("ARM_RIGHT_SHOULDER"):
			return 22;
	
		case joaat("ARM_RIGHT_ELBOW"):
			return 23;
	
		case joaat("HAND_LEFT"):
			return 24;
	
		case joaat("HAND_RIGHT"):
			return 25;
	
		case joaat("BACK_FULL"):
			return 26;
	
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
			return 27;
	
		case joaat("BACK_FULL_SHORT"):
			return 28;
	
		case joaat("BACK_MID"):
			return 29;
	
		case joaat("BACK_UPPER"):
			return 30;
	
		case joaat("BACK_UPPER_LEFT"):
			return 31;
	
		case joaat("BACK_UPPER_RIGHT"):
			return 32;
	
		case joaat("BACK_LOWER"):
			return 33;
	
		case joaat("BACK_LOWER_LEFT"):
			return 34;
	
		case joaat("BACK_LOWER_MID"):
			return 35;
	
		case joaat("BACK_LOWER_RIGHT"):
			return 36;
	
		case joaat("CHEST_FULL"):
			return 37;
	
		case joaat("CHEST_STOM"):
			return 38;
	
		case joaat("CHEST_STOM_FULL"):
			return 39;
	
		case joaat("CHEST_LEFT"):
			return 40;
	
		case joaat("CHEST_UPPER_LEFT"):
			return 41;
	
		case joaat("CHEST_RIGHT"):
			return 42;
	
		case joaat("CHEST_UPPER_RIGHT"):
			return 43;
	
		case joaat("CHEST_MID"):
			return 44;
	
		case joaat("TORSO_SIDE_RIGHT"):
			return 45;
	
		case joaat("TORSO_SIDE_LEFT"):
			return 46;
	
		case joaat("STOMACH_FULL"):
			return 47;
	
		case joaat("STOMACH_UPPER"):
			return 48;
	
		case joaat("STOMACH_UPPER_LEFT"):
			return 49;
	
		case joaat("STOMACH_UPPER_RIGHT"):
			return 50;
	
		case joaat("STOMACH_LOWER"):
			return 51;
	
		case joaat("STOMACH_LOWER_LEFT"):
			return 52;
	
		case joaat("STOMACH_LOWER_RIGHT"):
			return 53;
	
		case joaat("STOMACH_LEFT"):
			return 54;
	
		case joaat("STOMACH_RIGHT"):
			return 55;
	
		case joaat("Face"):
			return 56;
	
		case joaat("HEAD_LEFT"):
			return 57;
	
		case joaat("HEAD_RIGHT"):
			return 58;
	
		case joaat("NECK_FRONT"):
			return 59;
	
		case joaat("NECK_BACK"):
			return 60;
	
		case joaat("NECK_LEFT_FULL"):
			return 61;
	
		case joaat("NECK_LEFT_BACK"):
			return 62;
	
		case joaat("NECK_RIGHT_FULL"):
			return 63;
	
		case joaat("NECK_RIGHT_BACK"):
			return 64;
	
		case joaat("LEG_LEFT_FULL_SLEEVE"):
			return 65;
	
		case joaat("LEG_LEFT_FULL_FRONT"):
			return 66;
	
		case joaat("LEG_LEFT_FULL_BACK"):
			return 67;
	
		case joaat("LEG_LEFT_UPPER_SLEEVE"):
			return 68;
	
		case joaat("LEG_LEFT_UPPER_FRONT"):
			return 69;
	
		case joaat("LEG_LEFT_UPPER_BACK"):
			return 70;
	
		case joaat("LEG_LEFT_UPPER_OUTER"):
			return 71;
	
		case joaat("LEG_LEFT_UPPER_INNER"):
			return 72;
	
		case joaat("LEG_LEFT_LOWER_SLEEVE"):
			return 73;
	
		case joaat("LEG_LEFT_LOWER_FRONT"):
			return 74;
	
		case joaat("LEG_LEFT_LOWER_BACK"):
			return 75;
	
		case joaat("LEG_LEFT_LOWER_OUTER"):
			return 76;
	
		case joaat("LEG_LEFT_LOWER_INNER"):
			return 77;
	
		case joaat("LEG_LEFT_KNEE"):
			return 78;
	
		case joaat("LEG_LEFT_ANKLE"):
			return 79;
	
		case joaat("LEG_LEFT_CALF"):
			return 80;
	
		case joaat("LEG_RIGHT_FULL_SLEEVE"):
			return 81;
	
		case joaat("LEG_RIGHT_FULL_FRONT"):
			return 82;
	
		case joaat("LEG_RIGHT_FULL_BACK"):
			return 83;
	
		case joaat("LEG_RIGHT_UPPER_SLEEVE"):
			return 84;
	
		case joaat("LEG_RIGHT_UPPER_FRONT"):
			return 85;
	
		case joaat("LEG_RIGHT_UPPER_BACK"):
			return 86;
	
		case joaat("LEG_RIGHT_UPPER_OUTER"):
			return 87;
	
		case joaat("LEG_RIGHT_UPPER_INNER"):
			return 88;
	
		case joaat("LEG_RIGHT_LOWER_SLEEVE"):
			return 89;
	
		case joaat("LEG_RIGHT_LOWER_FRONT"):
			return 90;
	
		case joaat("LEG_RIGHT_LOWER_BACK"):
			return 91;
	
		case joaat("LEG_RIGHT_LOWER_OUTER"):
			return 92;
	
		case joaat("LEG_RIGHT_LOWER_INNER"):
			return 93;
	
		case joaat("LEG_RIGHT_KNEE"):
			return 94;
	
		case joaat("LEG_RIGHT_ANKLE"):
			return 95;
	
		case joaat("LEG_RIGHT_CALF"):
			return 96;
	
		case joaat("FOOT_LEFT"):
			return 97;
	
		case joaat("FOOT_RIGHT"):
			return 98;
	}

	switch (MISC::GET_HASH_KEY(sParam1))
	{
		case joaat("NO_LABEL"):
			return -1;
	
		case joaat("TAT_FM_204"):
			return 12;
	
		case joaat("TAT_FM_205"):
			return 12;
	
		case joaat("TAT_FM_209"):
			if (hParam0 == joaat("MP_M_Freemode_01"))
				return 75;
			else
				return 65;
			break;
	
		case joaat("TAT_FM_221"):
			return 26;
	
		case joaat("TAT_FM_219"):
			return 47;
	
		case joaat("TAT_FM_201"):
			return 1;
	
		case joaat("TAT_FM_222"):
			return 75;
	
		case joaat("TAT_FM_202"):
			return 1;
	
		case joaat("TAT_FM_210"):
			return 89;
	
		case joaat("TAT_FM_211"):
			return 73;
	
		case joaat("TAT_FM_247"):
			return 22;
	
		case joaat("TAT_FM_223"):
			return 91;
	
		case joaat("TAT_FM_213"):
			return 26;
	
		case joaat("TAT_FM_224"):
			return 73;
	
		case joaat("TAT_FM_225"):
			return 38;
	
		case joaat("TAT_FM_218"):
			if (hParam0 == joaat("MP_M_Freemode_01"))
				return 40;
			else
				return 42;
			break;
	
		case joaat("TAT_FM_214"):
			return 31;
	
		case joaat("TAT_FM_226"):
			return 42;
	
		case joaat("TAT_FM_220"):
			return 47;
	
		case joaat("TAT_FM_227"):
			return 75;
	
		case joaat("TAT_FM_228"):
			return 20;
	
		case joaat("TAT_FM_215"):
			return 32;
	
		case joaat("TAT_FM_229"):
			return 14;
	
		case joaat("TAT_FM_230"):
			return 52;
	
		case joaat("TAT_FM_231"):
			return 30;
	
		case joaat("TAT_FM_232"):
			return 6;
	
		case joaat("TAT_FM_233"):
			return 80;
	
		case joaat("TAT_FM_207"):
			return 13;
	
		case joaat("TAT_FM_234"):
			if (hParam0 == joaat("MP_M_Freemode_01"))
				return 67;
			else
				return 75;
			break;
	
		case joaat("TAT_FM_235"):
			if (hParam0 == joaat("MP_M_Freemode_01"))
				return 40;
			else
				return 42;
			break;
	
		case joaat("TAT_FM_236"):
			return 73;
	
		case joaat("TAT_FM_237"):
			return 47;
	
		case joaat("TAT_FM_238"):
			return 73;
	
		case joaat("TAT_FM_203"):
			return 10;
	
		case joaat("TAT_FM_216"):
			return 26;
	
		case joaat("TAT_FM_011"):
			return 42;
	
		case joaat("TAT_FM_212"):
			return 89;
	
		case joaat("TAT_FM_239"):
			return 16;
	
		case joaat("TAT_FM_240"):
			return 91;
	
		case joaat("TAT_FM_241"):
			return 82;
	
		case joaat("TAT_FM_208"):
			return 13;
	
		case joaat("TAT_FM_017"):
			return 75;
	
		case joaat("TAT_FM_217"):
			return 26;
	
		case joaat("TAT_FM_242"):
			return 10;
	
		case joaat("TAT_FM_243"):
			return 90;
	
		case joaat("TAT_FM_244"):
			return 89;
	
		case joaat("TAT_FM_245"):
			return 38;
	
		case joaat("TAT_FM_010"):
			return 20;
	
		case joaat("TAT_FM_246"):
			return 26;
	
		case joaat("TAT_FM_206"):
			return 18;
	
		case joaat("TAT_FM_008"):
			return 56;
	
		case joaat("TAT_FM_009"):
			return 3;
	
		case joaat("TAT_FM_012"):
			return 47;
	
		case joaat("TAT_FM_013"):
			if (hParam0 == joaat("MP_M_Freemode_01"))
				return 28;
			else
				return 26;
			break;
	
		case joaat("TAT_FM_014"):
			return 89;
	
		case joaat("TAT_FM_015"):
			return 6;
	
		case joaat("TAT_FM_016"):
			return 33;
	
		case joaat("TAT_FM_018"):
			return 16;
	
		case joaat("TAT_FM_019"):
			return 40;
	
		case joaat("TAT_FM_020"):
			return 40;
	
		case joaat("TAT_FM_021"):
			return 40;
	
		case joaat("TAT_FM_022"):
			return 33;
	
		case joaat("TAT_FM_023"):
			return 6;
	
		case joaat("TAT_FM_024"):
			if (hParam0 == joaat("MP_M_Freemode_01"))
				return 28;
			else
				return 26;
			break;
	
		case joaat("TAT_FM_025"):
			if (hParam0 == joaat("MP_M_Freemode_01"))
				return 28;
			else
				return 26;
			break;
	
		case joaat("TAT_FM_026"):
			if (hParam0 == joaat("MP_M_Freemode_01"))
				return 28;
			else
				return 26;
			break;
	
		case joaat("TAT_FM_027"):
			if (hParam0 == joaat("MP_M_Freemode_01"))
				return 28;
			else
				return 26;
			break;
	
		case joaat("TAT_BB_000"):
			return 44;
	
		case joaat("TAT_BB_001"):
			return 32;
	
		case joaat("TAT_BB_002"):
			return 3;
	
		case joaat("TAT_BB_003"):
			return 33;
	
		case joaat("TAT_BB_004"):
			return 31;
	
		case joaat("TAT_BB_005"):
			return 33;
	
		case joaat("TAT_BB_006"):
			return 45;
	
		case joaat("TAT_BB_007"):
			return 89;
	
		case joaat("TAT_BB_008"):
			return 64;
	
		case joaat("TAT_BB_009"):
			return 53;
	
		case joaat("TAT_BB_010"):
			return 52;
	
		case joaat("TAT_BB_011"):
			return 30;
	
		case joaat("TAT_BB_012"):
			return 41;
	
		case joaat("TAT_BB_013"):
			return 43;
	
		case joaat("TAT_BB_014"):
			return 52;
	
		case joaat("TAT_BB_015"):
			return 20;
	
		case joaat("TAT_BB_016"):
			return 8;
	
		case joaat("TAT_BB_017"):
			return 10;
	
		case joaat("TAT_BB_018"):
			return 28;
	
		case joaat("TAT_BB_019"):
			return 40;
	
		case joaat("TAT_BB_020"):
			return 42;
	
		case joaat("TAT_BB_021"):
			return 56;
	
		case joaat("TAT_BB_022"):
			return 57;
	
		case joaat("TAT_BB_023"):
			return 52;
	
		case joaat("TAT_BB_024"):
			return 8;
	
		case joaat("TAT_BB_025"):
			return 91;
	
		case joaat("TAT_BB_026"):
			return 20;
	
		case joaat("TAT_BB_027"):
			return 75;
	
		case joaat("TAT_BB_028"):
			return 62;
	
		case joaat("TAT_BB_029"):
			return 63;
	
		case joaat("TAT_BB_030") /* collision: TORSO_P2_4_4 */:
			return 20;
	
		case joaat("TAT_BB_031") /* collision: TORSO_P2_4_5 */:
			return 58;
	
		case joaat("TAT_BB_032") /* collision: TORSO_P2_4_6 */:
			return 47;
	
		case joaat("TAT_BUS_F_002"):
			return 37;
	
		case joaat("TAT_BUS_F_000"):
			return 33;
	
		case joaat("TAT_BUS_F_006"):
			return 80;
	
		case joaat("TAT_BUS_F_007"):
			return 64;
	
		case joaat("TAT_BUS_F_008"):
			return 62;
	
		case joaat("TAT_BUS_F_010"):
			return 96;
	
		case joaat("TAT_BUS_F_009"):
			return 15;
	
		case joaat("TAT_BUS_F_011"):
			return 48;
	
		case joaat("TAT_BUS_F_003"):
			return 37;
	
		case joaat("TAT_BUS_F_001"):
			return 33;
	
		case joaat("TAT_BUS_F_005"):
			return 3;
	
		case joaat("TAT_BUS_F_004"):
			return 41;
	
		case joaat("TAT_BUS_F_012"):
			return 52;
	
		case joaat("TAT_BUS_F_013"):
			return 53;
	
		case joaat("TAT_BUS_005"):
			return 59;
	
		case joaat("TAT_BUS_003"):
			return 3;
	
		case joaat("TAT_BUS_011"):
			return 48;
	
		case joaat("TAT_BUS_000"):
			return 33;
	
		case joaat("TAT_BUS_006"):
			return 64;
	
		case joaat("TAT_BUS_007"):
			return 62;
	
		case joaat("TAT_BUS_008"):
			return 60;
	
		case joaat("TAT_BUS_009"):
			return 20;
	
		case joaat("TAT_BUS_001"):
			return 40;
	
		case joaat("TAT_BUS_002"):
			return 42;
	
		case joaat("TAT_BUS_004"):
			return 11;
	
		case joaat("TAT_BUS_010"):
			return 15;
	
		case joaat("TAT_BUS_012"):
			return 40;
	
		case joaat("TAT_BUS_013"):
			return 22;
	
		case joaat("TAT_BUS_F_014"):
			return 40;
	
		case joaat("TAT_BUS_F_015"):
			return 22;
	
		case joaat("TAT_HP_000"):
			return 30;
	
		case joaat("TAT_HP_001"):
			return 19;
	
		case joaat("TAT_HP_002"):
			return 40;
	
		case joaat("TAT_HP_003"):
			return 4;
	
		case joaat("TAT_HP_004"):
			return 15;
	
		case joaat("TAT_HP_005"):
			return 62;
	
		case joaat("TAT_HP_006"):
			return 45;
	
		case joaat("TAT_HP_007"):
			return 24;
	
		case joaat("TAT_HP_008"):
			return 22;
	
		case joaat("TAT_HP_009"):
			return 80;
	
		case joaat("TAT_HP_010"):
			return 25;
	
		case joaat("TAT_HP_011"):
			return 30;
	
		case joaat("TAT_HP_012"):
			return 30;
	
		case joaat("TAT_HP_013"):
			return 44;
	
		case joaat("TAT_HP_014"):
			return 15;
	
		case joaat("TAT_HP_015"):
			return 9;
	
		case joaat("TAT_HP_016"):
			return 3;
	
		case joaat("TAT_HP_017"):
			return 16;
	
		case joaat("TAT_HP_018"):
			return 17;
	
		case joaat("TAT_HP_019"):
			return 75;
	
		case joaat("TAT_HP_020"):
			return 23;
	
		case joaat("TAT_HP_021"):
			return 64;
	
		case joaat("TAT_HP_022"):
			return 16;
	
		case joaat("TAT_HP_023"):
			return 25;
	
		case joaat("TAT_HP_024"):
			return 32;
	
		case joaat("TAT_HP_025"):
			return 31;
	
		case joaat("TAT_HP_026"):
			return 10;
	
		case joaat("TAT_HP_027"):
			return 5;
	
		case joaat("TAT_HP_028"):
			return 4;
	
		case joaat("TAT_HP_029"):
			return 52;
	
		case joaat("TAT_HP_030"):
			return 35;
	
		case joaat("TAT_HP_031"):
			return 30;
	
		case joaat("TAT_HP_032"):
			return 32;
	
		case joaat("TAT_HP_033"):
			return 38;
	
		case joaat("TAT_HP_034"):
			return 24;
	
		case joaat("TAT_HP_035"):
			return 52;
	
		case joaat("TAT_HP_036"):
			return 20;
	
		case joaat("TAT_HP_037"):
			return 10;
	
		case joaat("TAT_HP_038"):
			return 92;
	
		case joaat("TAT_HP_039"):
			return 0;
	
		case joaat("TAT_HP_040"):
			return 80;
	
		case joaat("TAT_HP_041"):
			return 34;
	
		case joaat("TAT_HP_042"):
			return 91;
	
		case joaat("TAT_HP_043"):
			return 10;
	
		case joaat("TAT_HP_044"):
			return 22;
	
		case joaat("TAT_HP_045"):
			return 14;
	
		case joaat("TAT_HP_046"):
			return 30;
	
		case joaat("TAT_HP_047"):
			return 40;
	
		case joaat("TAT_HP_048"):
			return 24;
	}

	if (iParam2 == 0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return -1;

	switch (iParam2)
	{
		case joaat("rank"):
			return -1;
	}

	return -1;
}

BOOL func_0xAADB79C4(char* sParam0, int iParam1, int iParam2, Ped pedParam3, int iParam4)
{
	Hash entityModel;
	int num;

	func_0xBE814674(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);

	if (ENTITY::DOES_ENTITY_EXIST(pedParam3) && !PED::IS_PED_INJURED(pedParam3))
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam3);

	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
			
				case 1:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
			
				case 2:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
			
				case 3:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
			
				case 4:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
			
				case 5:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
			
				case 6:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
			
				case 7:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
			
				case 8:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
			
				case 9:
					num = 400;
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, num, 2);
					break;
			
				case 10:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
			
				case 11:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
			
				case 12:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
			
				case 13:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
			
				case 14:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
			
				case 15:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
			
				case 16:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
			
				case 17:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
			
				case 18:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
			
				case 19:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
			
				case 20:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
			
				default:
					func_0xC0E60EB1(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					num = 450;
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, num, 0);
					break;
			
				case 1:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
			
				case 2:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
			
				case 3:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
			
				case 4:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
			
				case 5:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
			
				case 6:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
			
				case 7:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
			
				case 8:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
			
				case 9:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
			
				case 10:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
			
				case 11:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
			
				case 12:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
			
				case 13:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
			
				case 14:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
			
				case 15:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
			
				case 16:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
			
				case 17:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
			
				case 18:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
			
				case 19:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
			
				case 20:
					break;
			
				case 21:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
			
				case 22:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
			
				case 23:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
			
				case 24:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
			
				case 25:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
			
				case 26:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
			
				case 27:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
			
				case 28:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
			
				case 29:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
			
				case 30:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
			
				case 31:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
			
				case 32:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
			
				case 33:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
			
				case 34:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
			
				case 35:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
			
				case 36:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
			
				case 37:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
			
				case 38:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
			
				case 39:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
			
				default:
					func_0xC0E60EB1(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
			
				case 1:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
			
				case 2:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
			
				case 3:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
			
				case 4:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
			
				case 5:
					num = 380;
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, num, 3);
					break;
			
				case 6:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
			
				case 7:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
			
				case 8:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
			
				case 9:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
			
				case 10:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
			
				case 11:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
			
				case 12:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
			
				case 13:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
			
				case 14:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
			
				case 15:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
			
				case 16:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
			
				case 17:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
			
				case 18:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
			
				case 19:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
			
				case 20:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
			
				case 21:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
			
				case 22:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
			
				case 23:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
			
				case 24:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
			
				case 25:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
			
				case 26:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
			
				case 27:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
			
				case 28:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
			
				case 29:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
			
				case 30:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
			
				case 31:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
			
				case 32:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
			
				case 33:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
			
				default:
					func_0xC0E60EB1(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
	
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(20000) * Global_262145.f_2825), 0);
					break;
			
				case 1:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1400) * Global_262145.f_2826), 2);
					break;
			
				case 2:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(9750) * Global_262145.f_2827), 3);
					break;
			
				case 3:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2150) * Global_262145.f_2828), 0);
					break;
			
				case 4:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2829), 0);
					break;
			
				case 54:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12400) * Global_262145.f_2830), 1);
					break;
			
				case 5:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3500) * Global_262145.f_2831), 0);
					break;
			
				case 6:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2832), 2);
					break;
			
				case 55:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1350) * Global_262145.f_2833), 1);
					break;
			
				case 7:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1450) * Global_262145.f_2834), 0);
					break;
			
				case 8:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2700) * Global_262145.f_2835), 7);
					break;
			
				case 9:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1200) * Global_262145.f_2836), 0);
					break;
			
				case 10:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1500) * Global_262145.f_2837), 0);
					break;
			
				case 11:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2650) * Global_262145.f_2838), 0);
					break;
			
				case 56:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1900) * Global_262145.f_2839), 1);
					break;
			
				case 12:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2840), 2);
					break;
			
				case 57:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2400) * Global_262145.f_2841), 1);
					break;
			
				case 58:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2842), 1);
					break;
			
				case 59:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7400) * Global_262145.f_2843), 1);
					break;
			
				case 60:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2844), 1);
					break;
			
				case 17:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2400) * Global_262145.f_2849), 2);
					break;
			
				case 18:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2850), 2);
					break;
			
				case 19:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3600) * Global_262145.f_2851), 2);
					break;
			
				case 20:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2852), 3);
					break;
			
				case 21:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12500) * Global_262145.f_2853), 3);
					break;
			
				case 22:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2854), 3);
					break;
			
				case 23:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2855), 3);
					break;
			
				case 24:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2856), 3);
					break;
			
				case 25:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3750) * Global_262145.f_2857), 2);
					break;
			
				case 26:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3750) * Global_262145.f_2858), 3);
					break;
			
				case 27:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4800) * Global_262145.f_2859), 3);
					break;
			
				case 28:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3500) * Global_262145.f_2860), 3);
					break;
			
				case 61:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12350) * Global_262145.f_2861), 1);
					break;
			
				case 62:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1900) * Global_262145.f_2862), 1);
					break;
			
				case 63:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4500) * Global_262145.f_2863), 1);
					break;
			
				case 64:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12250) * Global_262145.f_2864), 1);
					break;
			
				case 65:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12300) * Global_262145.f_2865), 1);
					break;
			
				case 29:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2866), 0);
					break;
			
				case 30:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2867), 0);
					break;
			
				case 31:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2868), 0);
					break;
			
				case 66:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2869), 1);
					break;
			
				case 32:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2870), 2);
					break;
			
				case 33:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7300) * Global_262145.f_2871), 3);
					break;
			
				case 34:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7250) * Global_262145.f_2872), 2);
					break;
			
				case 35:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(11900) * Global_262145.f_2873), 0);
					break;
			
				case 36:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2750) * Global_262145.f_2874), 0);
					break;
			
				case 37:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1750) * Global_262145.f_2875), 0);
					break;
			
				case 38:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7300) * Global_262145.f_2876), 3);
					break;
			
				case 39:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3250) * Global_262145.f_2877), 2);
					break;
			
				case 40:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1000) * Global_262145.f_2878), 0);
					break;
			
				case 67:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2879), 1);
					break;
			
				case 41:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2880), 2);
					break;
			
				case 68:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2881), 1);
					break;
			
				case 42:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5050) * Global_262145.f_2882), 0);
					break;
			
				case 43:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2450) * Global_262145.f_2883), 2);
					break;
			
				case 44:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2884), 0);
					break;
			
				case 45:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2885), 0);
					break;
			
				case 46:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12250) * Global_262145.f_2886), 0);
					break;
			
				case 47:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1150) * Global_262145.f_2887), 3);
					break;
			
				case 48:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2888), 3);
					break;
			
				case 49:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7600) * Global_262145.f_2889), 3);
					break;
			
				case 50:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2600) * Global_262145.f_2890), 2);
					break;
			
				case 51:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2891), 3);
					break;
			
				case 52:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7450) * Global_262145.f_2892), 3);
					break;
			
				case 53:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2893), 0);
					break;
			
				case 69:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2894), 1);
					break;
			
				case 70:
					func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2895), 2);
					break;
			}
		
			if (entityModel == joaat("MP_M_Freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 74:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 75:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 76:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 77:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 78:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 79:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 80:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 81:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 82:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 83:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 84:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 85:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 86:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 90:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 91:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 124:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 125:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 87:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2896), 0);
						break;
				
					case 88:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2897), 0);
						break;
				
					case 89:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2898), 0);
						break;
				
					case 93:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 94:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 95:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 96:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 97:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 98:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 99:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 100:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 101:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 102:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 103:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 104:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 105:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 106:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 107:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 108:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 109:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 110:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 111:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 112:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 113:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 114:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 115:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 116:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 117:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 123:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 13:
						func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2845), 0);
						break;
				
					case 14:
						func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2846), 0);
						break;
				
					case 15:
						func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FMM_CLB" /*Crew Emblem Back*/, "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2847), 2);
						break;
				
					case 16:
						func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2848), 0);
						break;
				
					case 71:
						func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2848), 0);
						break;
				
					case 72:
						func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FMM_CLB" /*Crew Emblem Back*/, "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2848), 0);
						break;
				}
			}
			else if (entityModel == joaat("MP_F_Freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 74:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 75:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 76:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 77:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 78:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 79:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 80:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 81:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 82:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 83:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 84:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 85:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 92:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 87:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2896), 0);
						break;
				
					case 88:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2897), 0);
						break;
				
					case 89:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2898), 0);
						break;
				
					case 93:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 94:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 95:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 96:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 97:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 98:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 99:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 100:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 101:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 102:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 103:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 104:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 105:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 106:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 107:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 108:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 109:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 110:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 111:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 112:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 113:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 114:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 115:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 116:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 117:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 118:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 119:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 120:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 121:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 122:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 123:
						func_0xBE814674(sParam0, iParam1, pedParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 13:
						func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2845), 0);
						break;
				
					case 14:
						func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2846), 0);
						break;
				
					case 15:
						func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2847), 2);
						break;
				
					case 16:
						func_0xBE814674(sParam0, iParam1, pedParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2848), 0);
						break;
				}
			}
			break;
	}

	if (iParam2 == 3 || iParam2 == 4 && iParam1 >= 129)
		func_0xC0E60EB1(sParam0, iParam2, iParam1, 129);

	if (iParam4 == 22)
		sParam0->f_7 = sParam0->f_7 * 2;

	return sParam0->f_11 != -1;
}

void func_0xC0E60EB1(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int decorationIndex;
	int numTattooShopDlcItems;
	Hash outComponent;

	decorationIndex = iParam2 - iParam3;
	numTattooShopDlcItems = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);

	if (numTattooShopDlcItems > 0 && decorationIndex < numTattooShopDlcItems)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, decorationIndex, &outComponent))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(outComponent))
			{
				sParam0->f_11 = iParam2;
				TEXT_LABEL_COPY(sParam0, { outComponent.f_7 }, 4);
				sParam0->f_5 = outComponent.f_3;
				sParam0->f_4 = outComponent.f_2;
				sParam0->f_8 = outComponent.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = outComponent.f_4;
				sParam0->f_9 = iParam2 / 32;
				sParam0->f_10 = iParam2 % 32;
				sParam0->f_12 = outComponent.f_5;
			}
		}
	}

	return;
}

void func_0xBE814674(char* sParam0, int iParam1, Ped pedParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
{
	var unk;

	sParam0->f_11 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(sParam0, sParam3, 16);
	sParam0->f_4 = MISC::GET_HASH_KEY(sParam4);
	sParam0->f_5 = MISC::GET_HASH_KEY(sParam5);
	sParam0->f_8 = MISC::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = iParam1 / 32;
	sParam0->f_10 = iParam1 % 32;
	sParam0->f_12 = iParam9;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam2) && !PED::IS_PED_INJURED(pedParam2))
	{
		if (sParam0->f_6 == 0 || sParam0->f_6 == 1 || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "", 32);
		
			if (sParam0->f_11 == 13 || sParam0->f_11 == 14 || sParam0->f_11 == 15 || sParam0->f_11 == 16 || sParam0->f_11 == 71 || sParam0->f_11 == 72)
			{
				TEXT_LABEL_APPEND_STRING(&unk, "FM_", 32);
				TEXT_LABEL_APPEND_STRING(&unk, "CREW_", 32);
			
				if (ENTITY::GET_ENTITY_MODEL(pedParam2) == joaat("MP_M_Freemode_01"))
					TEXT_LABEL_APPEND_STRING(&unk, "M_", 32);
				else
					TEXT_LABEL_APPEND_STRING(&unk, "F_", 32);
			
				TEXT_LABEL_APPEND_STRING(&unk, sParam5, 32);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay"))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, sParam5, 32);
			}
			else
			{
				if (sParam0->f_11 == 0 || sParam0->f_11 == 1 || sParam0->f_11 == 2 || sParam0->f_11 == 4 || sParam0->f_11 == 3 || sParam0->f_11 == 54 || sParam0->f_11 == 5 || sParam0->f_11 == 6 || sParam0->f_11 == 55 || sParam0->f_11 == 7 || sParam0->f_11 == 8 || sParam0->f_11 == 9 || sParam0->f_11 == 10 || sParam0->f_11 == 11 || sParam0->f_11 == 56 || sParam0->f_11 == 12 || sParam0->f_11 == 57 || sParam0->f_11 == 58 || sParam0->f_11 == 59 || sParam0->f_11 == 60)
					TEXT_LABEL_APPEND_STRING(&unk, "FM_Tat_Award_", 32);
				else
					TEXT_LABEL_APPEND_STRING(&unk, "FM_Tat_", 32);
			
				if (ENTITY::GET_ENTITY_MODEL(pedParam2) == joaat("MP_M_Freemode_01") || sParam0->f_11 == 20)
					TEXT_LABEL_APPEND_STRING(&unk, "M_", 32);
				else
					TEXT_LABEL_APPEND_STRING(&unk, "F_", 32);
			
				TEXT_LABEL_APPEND_STRING(&unk, sParam5, 32);
			}
		
			sParam0->f_5 = MISC::GET_HASH_KEY(&unk);
		
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(sParam0->f_4, sParam0->f_5) == 7)
				sParam0->f_11 = -1;
		}
	}

	return;
}

int func_0x48F0132B(Ped pedParam0)
{
	if (PED::IS_PED_DEAD_OR_DYING(pedParam0, true))
		return 0;

	switch (ENTITY::GET_ENTITY_MODEL(pedParam0))
	{
		case joaat("Player_Zero"):
			return 0;
	
		case joaat("Player_One"):
			return 1;
	
		case joaat("Player_Two"):
			return 2;
	
		case joaat("MP_M_Freemode_01"):
			return 3;
	
		case joaat("MP_F_Freemode_01"):
			return 4;
	}

	return 0;
}

void func_0x925C1493(var uParam0)
{
	int i;
	Hash outComponent;
	int characterType;
	int j;
	int numTattooShopDlcItems;
	int num;

	characterType = func_0x48F0132B(*uParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		Global_1980274[i] = -1;
	}

	i = 0;

	for (i = 0; i < 127; i = i + 1)
	{
		if (func_0x562E4F3B(i, -1))
			func_0x7E796A2F(i, true);
	}

	numTattooShopDlcItems = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(characterType);

	for (j = 0; j < numTattooShopDlcItems; j = j + 1)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(characterType, j, &outComponent))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(outComponent))
			{
				num = 129 + j;
			
				if (func_0x562E4F3B(num, -1))
					func_0x7E796A2F(129 + j, true);
			}
		}
	}

	Global_1980302 = true;
	return;
}

void func_0x7E796A2F(int iParam0, BOOL bParam1)
{
	int num;
	int i;

	num = -1;

	for (i = 26; i >= 0; i = i + -1)
	{
		if (bParam1)
		{
			if (Global_1980274[i] == iParam0)
				return;
			else if (Global_1980274[i] == -1)
				num = i;
		}
		else if (Global_1980274[i] == iParam0)
		{
			Global_1980274[i] = -1;
			return;
		}
	}

	if (bParam1 && num >= 0)
		Global_1980274[num] = iParam0;

	return;
}

BOOL func_0x73B1D6E5(Ped pedParam0)
{
	int pedDrawableVariation;
	int num;
	Hash componentHash;
	Hash hashNameForComponent;
	int num2;
	Hash componentHash2;
	Hash hashNameForComponent2;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam0) != _INVALID_PLAYER_INDEX() && func_0x45D1E788(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam0)))
				return 1;
		
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
		
			if (pedDrawableVariation > 15)
			{
				num = func_0x6AEB8E24(pedParam0, 11, PV_COMP_INVALID);
			
				if (num >= 237)
				{
					componentHash = func_0x3B4EF0B2(joaat("MP_M_Freemode_01"), num, 11, 3);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_11"), 0))
						return 1;
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_17"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_18"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_19"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_20"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_21"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, 83294665, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_DRAW_27"), 0))
						return 1;
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("JUGG_SUIT"), 0))
						return 1;
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("STUNT_DRAW_1"), 0))
						return 1;
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("JUGG_SUIT"), 0))
						return 1;
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("X17_DRAW_6"), 0))
						return 1;
				
					hashNameForComponent = FILES::GET_HASH_NAME_FOR_COMPONENT(pedParam0, 10, PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_DECL), PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_DECL));
				
					if (func_0x925ED3E3(hashNameForComponent, 11, componentHash))
						return 1;
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam0) != _INVALID_PLAYER_INDEX() && func_0x45D1E788(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam0)))
				return 1;
		
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
		
			if (pedDrawableVariation > 15)
			{
				num2 = func_0x6AEB8E24(pedParam0, 11, PV_COMP_INVALID);
			
				if (num2 >= 237)
				{
					componentHash2 = func_0x3B4EF0B2(joaat("MP_F_Freemode_01"), num2, 11, 4);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_DRAW_11"), 0))
						return 1;
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_DRAW_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, 970679185, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, 83294665, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, 382246252, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_DRAW_25"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_DRAW_26"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_DRAW_28"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_DRAW_32"), 0))
						return 1;
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("JUGG_SUIT"), 0))
						return 1;
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("STUNT_DRAW_1"), 0))
						return 1;
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("JUGG_SUIT"), 0))
						return 1;
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("X17_DRAW_6"), 0))
						return 1;
				
					hashNameForComponent2 = FILES::GET_HASH_NAME_FOR_COMPONENT(pedParam0, 10, PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_DECL), PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_DECL));
				
					if (func_0x925ED3E3(hashNameForComponent2, 11, componentHash2))
						return 1;
				}
			}
		}
	}

	return 0;
}

BOOL func_0x925ED3E3(Hash hParam0, int iParam1, Hash hParam2)
{
	int shopPedApparelForcedComponentCount;
	int i;
	Hash nameHash;
	var enumValue;
	int componentType;

	if (hParam0 != -1)
	{
		shopPedApparelForcedComponentCount = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(hParam0);
	
		for (i = 0; i < shopPedApparelForcedComponentCount; i = i + 1)
		{
			FILES::GET_FORCED_COMPONENT(hParam0, i, &nameHash, &enumValue, &componentType);
		
			if (componentType == iParam1 && hParam2 == -1 || hParam2 == nameHash)
				return true;
		}
	}

	return false;
}

Hash func_0x3B4EF0B2(Hash hParam0, int iParam1, int iParam2, int iParam3)
{
	var outProp;
	int componentId;
	int num;
	var outComponent;
	int componentId2;
	int num2;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&outProp);
		componentId = iParam1 - func_0xC0824942(hParam0);
	
		if (componentId < 0)
			return -1;
	
		num = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
	
		if (num <= componentId)
			return -1;
	
		FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
		return outProp.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
		componentId2 = iParam1 - func_0x765E2190(hParam0, func_0xF91DA7A7(iParam2));
	
		if (componentId2 < 0)
			return -1;
	
		if (hParam0 == Global_79322.f_26[iParam2] && iParam1 == Global_79322[iParam2] && Global_79322.f_13[iParam2] != 0)
			return Global_79322.f_13[iParam2];
	
		num2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_0xF91DA7A7(iParam2));
	
		if (num2 <= componentId2)
			return -1;
	
		FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
		Global_79322.f_13[iParam2] = outComponent.f_1;
		Global_79322[iParam2] = iParam1;
		Global_79322.f_26[iParam2] = hParam0;
		return outComponent.f_1;
	}

	return -1;
}

int func_0x765E2190(Hash hParam0, int iParam1)
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 5;
			
				case 2:
					return 6;
			
				case 3:
					return 181;
			
				case 4:
					return 113;
			
				case 5:
					return 14;
			
				case 6:
					return 99;
			
				case 7:
					return 1;
			
				case 8:
					return 24;
			
				case 9:
					return 20;
			
				case 10:
					return 48;
			
				case 11:
					return 45;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 5;
			
				case 2:
					return 21;
			
				case 3:
					return 318;
			
				case 4:
					return 117;
			
				case 5:
					return 7;
			
				case 6:
					return 134;
			
				case 7:
					return 1;
			
				case 8:
					return 77;
			
				case 9:
					return 12;
			
				case 10:
					return 53;
			
				case 11:
					return 63;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 6;
			
				case 2:
					return 9;
			
				case 3:
					return 242;
			
				case 4:
					return 104;
			
				case 5:
					return 7;
			
				case 6:
					return 84;
			
				case 7:
					return 1;
			
				case 8:
					return 18;
			
				case 9:
					return 17;
			
				case 10:
					return 33;
			
				case 11:
					return 1;
			}
			break;
	}

	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 91;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 92;
			
				case 8:
					return 241;
			
				case 9:
					return 46;
			
				case 10:
					return 7;
			
				case 11:
					return 237;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 92;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 55;
			
				case 8:
					return 136;
			
				case 9:
					return 36;
			
				case 10:
					return 6;
			
				case 11:
					return 256;
			}
			break;
	}

	return -99;
}

ePedComponentType func_0xF91DA7A7(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

int func_0xC0824942(Hash hParam0)
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			return 113;
	
		case joaat("Player_One"):
			return 175;
	
		case joaat("Player_Two"):
			return 155;
	}

	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
	
		case joaat("MP_F_Freemode_01"):
			return 327;
	}

	return -99;
}

int func_0x6AEB8E24(Ped pedParam0, int iParam1, ePedComponentType epctParam2)
{
	int i;
	int j;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (iParam1 == 12)
		{
			for (i = 0; i <= 53; i = i + 1)
			{
				if (func_0xEAF08AE1(pedParam0, iParam1, i))
					return i;
			}
		}
		else if (iParam1 == 13)
		{
			for (j = 0; j <= 19; j = j + 1)
			{
				if (func_0xEAF08AE1(pedParam0, iParam1, j))
					return j;
			}
		
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (epctParam2 == PV_COMP_INVALID)
			{
			}
			else
			{
				return func_0xA9FF3076(pedParam0, epctParam2);
			}
		}
		else
		{
			return func_0x5DC76C2F(pedParam0, iParam1);
		}
	}

	return -99;
}

int func_0x5DC76C2F(Ped pedParam0, int iParam1)
{
	ePedComponentType componentId;
	int pedDrawableVariation;
	int pedTextureVariation;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || PED::IS_PED_INJURED(pedParam0))
		return -99;

	componentId = func_0xF91DA7A7(iParam1);
	pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId);
	pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId);
	return func_0x8F4AAD60(pedParam0, pedDrawableVariation, pedTextureVariation, iParam1);
}

int func_0x8F4AAD60(Ped pedParam0, int iParam1, int iParam2, int iParam3)
{
	ePedComponentType componentId;
	int numberOfPedDrawableVariations;
	int num;
	int i;

	componentId = func_0xF91DA7A7(iParam3);
	numberOfPedDrawableVariations = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(pedParam0, componentId);

	for (i = 0; i <= numberOfPedDrawableVariations - 1; i = i + 1)
	{
		if (i != iParam1)
		{
			num = num + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(pedParam0, componentId, i);
		}
		else
		{
			num = num + iParam2;
			return num;
		}
	}

	return -99;
}

int func_0xA9FF3076(Ped pedParam0, ePedComponentType epctParam1)
{
	int pedPropIndex;
	int pedPropTextureIndex;

	if (PED::IS_PED_INJURED(pedParam0))
		return -99;

	pedPropIndex = PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);

	if (pedPropIndex == -1)
		return func_0xEE599357(epctParam1);

	pedPropTextureIndex = PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
	return func_0x3F809B31(pedParam0, pedPropIndex, pedPropTextureIndex, epctParam1);
}

int func_0x3F809B31(Ped pedParam0, int iParam1, int iParam2, ePedComponentType epctParam3)
{
	Hash entityModel;
	Hash hashNameForProp;
	int numberOfPedPropDrawableVariations;
	int num;
	int i;
	int j;
	int numberOfPedPropTextureVariations;

	if (iParam1 == -1)
		return func_0xEE599357(epctParam3);

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	hashNameForProp = FILES::GET_HASH_NAME_FOR_PROP(pedParam0, epctParam3, iParam1, iParam2);

	if (hashNameForProp != -1 && hashNameForProp != 0)
		if (entityModel == joaat("MP_M_Freemode_01"))
			return func_0x37A3B7AE(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 3);
		else if (entityModel == joaat("MP_F_Freemode_01"))
			return func_0x37A3B7AE(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 4);

	numberOfPedPropDrawableVariations = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(pedParam0, epctParam3);

	for (i = 0; i <= numberOfPedPropDrawableVariations - 1; i = i + 1)
	{
		numberOfPedPropTextureVariations = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(pedParam0, epctParam3, i);
	
		if (i != iParam1)
		{
			num = num + numberOfPedPropTextureVariations;
		}
		else
		{
			for (j = 0; j <= numberOfPedPropTextureVariations - 1; j = j + 1)
			{
				if (i == iParam1 && j == iParam2)
				{
					num = num + func_0xB8AC6F7F(pedParam0, epctParam3);
					return num;
				}
				else
				{
					num = num + 1;
				}
			}
		}
	}

	return func_0xEE599357(epctParam3);
}

int func_0xB8AC6F7F(Ped pedParam0, ePedComponentType epctParam1)
{
	Hash entityModel;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	switch (entityModel)
	{
		case joaat("Player_Zero"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 58;
			
				case PV_COMP_HAIR:
					return 112;
			}
			break;
	
		case joaat("Player_One"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 82;
			
				case PV_COMP_HAIR:
					return 158;
			}
			break;
	
		case joaat("Player_Two"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 88;
			
				case PV_COMP_HAIR:
					return 154;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 155;
			
				case PV_COMP_FEET:
					return 319;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 155;
			
				case PV_COMP_FEET:
					return 319;
			}
			break;
	}

	return -99;
}

int func_0x37A3B7AE(Hash hParam0, Hash hParam1, int iParam2, int iParam3)
{
	var outfit;
	int i;
	int num;
	int shopPedQueryPropIndex;
	int shopPedQueryComponentIndex;

	if (iParam2 == 12)
	{
		num = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
	
		for (i = 0; i < num; i = i + 1)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(i, &outfit);
		
			if (outfit.f_1 == hParam1)
				return func_0x3694542E(hParam0) + i;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		shopPedQueryPropIndex = FILES::GET_SHOP_PED_QUERY_PROP_INDEX(hParam1);
	
		if (shopPedQueryPropIndex != -1)
			return func_0xC0824942(hParam0) + shopPedQueryPropIndex;
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_0xF91DA7A7(iParam2));
		shopPedQueryComponentIndex = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(hParam1);
	
		if (shopPedQueryComponentIndex != -1)
			return func_0x765E2190(hParam0, func_0xF91DA7A7(iParam2)) + shopPedQueryComponentIndex;
	}

	return -99;
}

int func_0x3694542E(Hash hParam0)
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			return 53;
	
		case joaat("Player_One"):
			return 47;
	
		case joaat("Player_Two"):
			return 48;
	}

	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 26;
	
		case joaat("MP_F_Freemode_01"):
			return 28;
	}

	return -99;
}

int func_0xEE599357(ePedComponentType epctParam0)
{
	switch (epctParam0)
	{
		case PV_COMP_HEAD:
			return 0;
	
		case PV_COMP_BERD:
			return 1;
	
		case PV_COMP_HAIR:
			return 2;
	
		case PV_COMP_UPPR:
			return 3;
	
		case PV_COMP_LOWR:
			return 4;
	
		case PV_COMP_HAND:
			return 5;
	
		case PV_COMP_FEET:
			return 6;
	
		case PV_COMP_TEEF:
			return 7;
	
		case PV_COMP_ACCS:
			return 8;
	}

	return 0;
}

BOOL func_0xEAF08AE1(Ped pedParam0, int iParam1, int iParam2)
{
	Hash entityModel;
	int num;
	Hash hash;
	Hash hash2;
	int num2;
	ePedComponentType i;
	int j;
	int k;
	var unk;
	var unk18;
	int l;
	var unk28;
	int m;
	Hash nameHash;
	var enumValue;
	var anchorPoint;
	int shopPedApparelVariantPropCount;
	var outProp;
	int num3;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	Global_79172[1] = { func_0x2257F879(entityModel, iParam1, iParam2, -1) };
	hash = Global_2883588;
	hash2 = Global_2883589;

	if (!IS_BIT_SET(Global_79172[1].f_6, 0))
		return false;

	if (iParam1 == 12)
	{
		unk = { func_0x10D20E1D(entityModel, iParam2) };
	
		for (k = 0; k < 7; k = k + 1)
		{
			switch (k)
			{
				case 0:
					num2 = 1;
					break;
			
				case 1:
					num2 = 4;
					break;
			
				case 2:
					num2 = 6;
					break;
			
				case 3:
					num2 = 7;
					break;
			
				case 4:
					num2 = 8;
					break;
			
				case 5:
					num2 = 11;
					break;
			
				case 6:
					num2 = 13;
					break;
			}
		
			if (unk[num2] != -99)
			{
				if (!func_0xEAF08AE1(pedParam0, num2, unk[num2]))
				{
					Global_2883588 = hash;
					Global_2883589 = hash2;
					return false;
				
					if (num2 == 13)
					{
						unk18 = { func_0x2A30F768(entityModel, unk[num2]) };
					
						for (i = 0; i <= 8; i = i + 1)
						{
							if (!func_0xEAF08AE1(pedParam0, 14, unk18[i]))
							{
								for (j = 0; j <= 19; j = j + 1)
								{
									Global_79172[2] = { func_0x2257F879(entityModel, 14, j, -1) };
								
									if (Global_79172[2].f_12 == i)
									{
										if (func_0xEAF08AE1(pedParam0, 14, j))
										{
											if (!func_0x4EAC6644(entityModel, iParam2, 14, j, &unk, &Global_79172[2]))
											{
												Global_2883588 = hash;
												Global_2883589 = hash2;
												return false;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						num = func_0x5DC76C2F(pedParam0, num2);
						Global_79172[2] = { func_0x2257F879(entityModel, num2, num, -1) };
					
						if (!func_0x4EAC6644(entityModel, iParam2, num2, num, &unk, &Global_79172[2]))
						{
							Global_2883588 = hash;
							Global_2883589 = hash2;
							return false;
						}
					}
				}
			}
		}
	
		if (unk[10] != 0 && unk[10] != joaat("0") && unk.f_16)
		{
			if (GET_MP_INT_CHARACTER_STAT(1759, Global_79169) != unk[10])
			{
				Global_2883588 = hash;
				Global_2883589 = hash2;
				return false;
			}
		}
	
		Global_2883588 = hash;
		Global_2883589 = hash2;
		return true;
	}
	else if (iParam1 == 13)
	{
		unk28 = { func_0x2A30F768(entityModel, iParam2) };
	
		for (l = 0; l <= 8; l = l + 1)
		{
			if (!func_0xEAF08AE1(pedParam0, 14, unk28[l]))
				return false;
		}
	
		return true;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(pedParam0, Global_79172[1].f_12, 1) == Global_79172[1].f_3 && PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_79172[1].f_12) == Global_79172[1].f_4 || Global_79172[1].f_3 == -1)
			return true;
	
		if (Global_79172[1].f_12 == PV_COMP_HEAD && IS_BIT_SET(Global_79172[1].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			shopPedApparelVariantPropCount = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
		
			for (m = 0; m < shopPedApparelVariantPropCount; m = m + 1)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, m, &nameHash, &enumValue, &anchorPoint);
			
				if (nameHash != 0 && nameHash != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&outProp);
					FILES::GET_SHOP_PED_PROP(nameHash, &outProp);
				
					if (outProp.f_3 == PED::GET_PED_PROP_INDEX(pedParam0, Global_79172[1].f_12, 1) && outProp.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_79172[1].f_12))
						return true;
				}
			}
		}
	}
	else
	{
		if (Global_79172[1].f_3 == PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_0xF91DA7A7(iParam1)) && Global_79172[1].f_4 == PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_0xF91DA7A7(iParam1)))
			return true;
	
		if (iParam1 == 4)
		{
			Global_79171 = Global_79171 + 1;
		
			if (Global_79171 == 1)
				if (func_0x9FDCB820(entityModel, 11, func_0x5DC76C2F(pedParam0, 11), -1))
					if (func_0x26B2FF44(entityModel, 4, iParam2, &num3))
						return func_0xEAF08AE1(pedParam0, 4, num3);
				else if (func_0x26B2FF44(entityModel, 4, iParam2, &num3))
					return func_0xEAF08AE1(pedParam0, 4, num3);
		
			Global_79171 = Global_79171 - 1;
		}
	}

	return false;
}

BOOL func_0x26B2FF44(Hash hParam0, int iParam1, int iParam2, var uParam3)
{
	Hash componentHash;
	int shopPedApparelVariantComponentCount;
	int i;
	Hash nameHash;
	var enumValue;
	int componentType;

	switch (hParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						componentHash = func_0x3B4EF0B2(hParam0, iParam2, iParam1, 4);
					
						if (componentHash != -1)
						{
							shopPedApparelVariantComponentCount = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(componentHash);
						
							for (i = 0; i < shopPedApparelVariantComponentCount; i = i + 1)
							{
								FILES::GET_VARIANT_COMPONENT(componentHash, i, &nameHash, &enumValue, &componentType);
							
								if (componentType == 4)
								{
									if (nameHash != 0 && nameHash != joaat("0"))
									{
										if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(nameHash, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_0x37A3B7AE(hParam0, nameHash, iParam1, 4);
											return true;
										}
									}
								}
							}
						}
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_0x26B2FF44(Hash hParam0, int iParam1, int iParam2, var uParam3)
{
	Hash componentHash;
	int shopPedApparelVariantComponentCount;
	int i;
	Hash nameHash;
	var enumValue;
	int componentType;

	switch (hParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						componentHash = func_0x3B4EF0B2(hParam0, iParam2, iParam1, 4);
					
						if (componentHash != -1)
						{
							shopPedApparelVariantComponentCount = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(componentHash);
						
							for (i = 0; i < shopPedApparelVariantComponentCount; i = i + 1)
							{
								FILES::GET_VARIANT_COMPONENT(componentHash, i, &nameHash, &enumValue, &componentType);
							
								if (componentType == 4)
								{
									if (nameHash != 0 && nameHash != joaat("0"))
									{
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(nameHash, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_0x37A3B7AE(hParam0, nameHash, iParam1, 4);
											return true;
										}
									}
								}
							}
						}
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_0x9FDCB820(Hash hParam0, int iParam1, int iParam2, Hash hParam3)
{
	switch (hParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (hParam3 == -1)
							hParam3 = func_0x3B4EF0B2(hParam0, iParam2, 11, 4);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_0x4EAC6644(Hash hParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5)
{
	var unk;
	int i;

	if (uParam4->[iParam2] == iParam3)
		return true;

	if (uParam4->[iParam2] == -99 && iParam2 != 14 && iParam2 != 13)
		return true;

	if (iParam2 == 13 || iParam2 == 14 && uParam4->[13] == 31)
		if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 6 || iParam3 == 7 || iParam3 == 8)
			return true;

	if (iParam3 == -99 || iParam5->f_1 == -1)
		return true;

	if (iParam2 == 14)
	{
		unk = { func_0x2A30F768(hParam0, uParam4->[13]) };
	
		for (i = 0; i <= 8; i = i + 1)
		{
			if (unk[i] == iParam3)
				return true;
		}
	}

	if (func_0x1194ADFB(hParam0, iParam2, iParam3))
		return true;

	if (hParam0 == joaat("Player_Zero"))
	{
		if (func_0xAC33D304(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 18 || iParam1 == 50)
				return false;
		
			return true;
		}
		else if (func_0x261C127A(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 0)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_0xCC83E9BC(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50)
				return false;
		
			return true;
		}
	}
	else if (hParam0 == joaat("Player_One"))
	{
		if (func_0xAC33D304(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7)
				return false;
		
			return true;
		}
		else if (func_0x261C127A(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21)
				if (iParam2 == 8)
					if (iParam3 == 9)
						if (iParam1 == 8 || iParam1 == 21)
							return true;
					else
						return false;
				else
					return false;
		
			if (iParam2 == 8)
			{
				if (uParam4->[8] != 26)
					return false;
			}
			else if (iParam2 == 9)
			{
				if (uParam4->[9] != 0)
					return false;
			
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46)
					if (iParam3 >= 5 && iParam3 <= 10)
						return false;
			}
			else if (iParam2 == 14)
			{
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46)
					if (iParam3 >= 26 && iParam3 <= 39)
						return false;
			}
		
			return true;
		}
		else if (func_0xCC83E9BC(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 3 || iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21)
				return false;
		
			return true;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
				return true;
		}
	}
	else if (hParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 2)
			if (iParam2 == 14 && iParam3 == 0)
				return true;
	
		if (func_0xAC33D304(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 6 || iParam1 == 8 || iParam1 == 45 || iParam1 == 12)
				return false;
		
			return true;
		}
		else if (func_0x261C127A(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 || iParam1 == 45 || iParam1 == 12)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 15)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_0xCC83E9BC(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 || iParam1 == 12)
				return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_0xCC83E9BC(Hash hParam0, int iParam1, int iParam2, Hash hParam3)
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 40 || iParam2 >= 41 && iParam2 <= 56 || iParam2 >= 64 && iParam2 <= 79)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 17 && iParam2 <= 18 || iParam2 >= 71 && iParam2 <= 86)
						return true;
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						if (hParam3 == -1)
							hParam3 = func_0x3B4EF0B2(hParam0, iParam2, 14, 3);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_0x3B4EF0B2(hParam0, iParam2, 14, 3), -1842686353, 1);
					}
					break;
			
				case 1:
					if (iParam2 >= 26)
					{
						if (hParam3 == -1)
							hParam3 = func_0x3B4EF0B2(hParam0, iParam2, 1, 3);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_0x3B4EF0B2(hParam0, iParam2, 1, 3), -1842686353, 0);
					}
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						if (hParam3 == -1)
							hParam3 = func_0x3B4EF0B2(hParam0, iParam2, 14, 4);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_0x3B4EF0B2(hParam0, iParam2, 14, 4), -1842686353, 1);
					}
					break;
			
				case 1:
					if (iParam2 >= 26)
					{
						if (hParam3 == -1)
							hParam3 = func_0x3B4EF0B2(hParam0, iParam2, 1, 4);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_0x3B4EF0B2(hParam0, iParam2, 1, 4), -1842686353, 0);
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_0x261C127A(Hash hParam0, int iParam1, int iParam2, Hash hParam3)
{
	if (hParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 6)
			if (iParam2 == 10)
				return true;
		else if (iParam1 == 8)
			if (iParam2 == 9 || iParam2 == 7 || iParam2 == 23)
				return true;
		else if (iParam1 == 9)
			if (iParam2 >= 9 && iParam2 <= 14)
				return true;
		else if (iParam1 == 14)
			if (iParam2 == 12 || iParam2 == 59 || iParam2 == 60 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 == 37 || iParam2 == 38 || iParam2 == 39 || iParam2 == 40 || iParam2 == 41 || iParam2 >= 42 && iParam2 <= 44 || iParam2 == 54 || iParam2 == 55)
				return true;
	}
	else if (hParam0 == joaat("Player_One"))
	{
		if (iParam1 == 2)
			if (iParam2 == 20)
				return true;
		else if (iParam1 == 8)
			if (iParam2 == 3 || iParam2 == 5 || iParam2 == 9)
				return true;
		else if (iParam1 == 9)
			if (iParam2 >= 5 && iParam2 <= 10)
				return true;
		else if (iParam1 == 14)
			if (iParam2 == 82 || iParam2 == 10 || iParam2 == 26 || iParam2 == 27 || iParam2 == 28 || iParam2 == 29 || iParam2 == 30 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 >= 37 && iParam2 <= 39)
				return true;
	}
	else if (hParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 8)
			if (iParam2 == 14 || iParam2 == 7)
				return true;
		else if (iParam1 == 9)
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14 || iParam2 == 15 || iParam2 == 16)
				return true;
		else if (iParam1 == 14)
			if (iParam2 == 88 || iParam2 == 12 || iParam2 == 47 || iParam2 == 48 || iParam2 == 49 || iParam2 == 50 || iParam2 == 51 || iParam2 == 52 || iParam2 == 53 || iParam2 == 54 || iParam2 == 55 || iParam2 == 56 || iParam2 == 57 || iParam2 >= 58 && iParam2 <= 60)
				return true;
	}
	else if (hParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (hParam3 == -1)
						hParam3 = func_0x3B4EF0B2(hParam0, iParam2, 1, 3);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}
	else if (hParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (hParam3 == -1)
						hParam3 = func_0x3B4EF0B2(hParam0, iParam2, 1, 4);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_0xAC33D304(Hash hParam0, int iParam1, int iParam2, Hash hParam3)
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 == 14)
				if (iParam2 == 58 || iParam2 == 61 || iParam2 >= 62 && iParam2 <= 69 || iParam2 >= 70 && iParam2 <= 79 || iParam2 >= 80 && iParam2 <= 89 || iParam2 == 90 || iParam2 >= 91 && iParam2 <= 102 || iParam2 >= 103 && iParam2 <= 110 || iParam2 == 111)
					return true;
			break;
	
		case joaat("Player_One"):
			if (iParam1 == 14)
				if (iParam2 >= 83 && iParam2 <= 92 || iParam2 == 93 || iParam2 == 94 || iParam2 >= 95 && iParam2 <= 101 || iParam2 >= 102 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 121 || iParam2 >= 122 && iParam2 <= 131 || iParam2 >= 132 && iParam2 <= 139 || iParam2 >= 140 && iParam2 <= 149 || iParam2 >= 150 && iParam2 <= 156 || iParam2 == 157)
					return true;
			break;
	
		case joaat("Player_Two"):
			if (iParam1 == 14)
				if (iParam2 == 89 || iParam2 >= 90 && iParam2 <= 99 || iParam2 >= 100 && iParam2 <= 109 || iParam2 == 111 || iParam2 == 112 || iParam2 >= 113 && iParam2 <= 122 || iParam2 >= 123 && iParam2 <= 132 || iParam2 >= 133 && iParam2 <= 142 || iParam2 >= 143 && iParam2 <= 152 || iParam2 == 153)
					return true;
			break;
	
		case joaat("MP_M_Freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					if (hParam3 == -1)
						hParam3 = func_0x3B4EF0B2(hParam0, iParam2, 14, 3);
				
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					if (hParam3 == -1)
						hParam3 = func_0x3B4EF0B2(hParam0, iParam2, 14, 4);
				
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}

	return false;
}

BOOL func_0x1194ADFB(Hash hParam0, int iParam1, int iParam2)
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
						return true;
					break;
			
				case 9:
					if (iParam2 == 6)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
						return true;
					break;
			}
			break;
	}

	return false;
}

struct<10> func_0x2A30F768(Hash hParam0, int iParam1)
{
	int i;
	var unk;

	unk = 9;

	for (i = 0; i <= 8; i = i + 1)
	{
		unk[i] = -99;
	}

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 31:
					func_0xF7320378(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_0xF7320378(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_0xF7320378(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_0xF7320378(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_0xF7320378(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_0xF7320378(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_0xF7320378(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_0xF7320378(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_0xF7320378(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_0xF7320378(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_0xF7320378(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_0xE5FA3D79(&unk, hParam0, iParam1, 10);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 31:
					func_0xF7320378(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_0xF7320378(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_0xF7320378(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_0xF7320378(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_0xF7320378(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_0xF7320378(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_0xF7320378(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_0xF7320378(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_0xF7320378(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_0xF7320378(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_0xE5FA3D79(&unk, hParam0, iParam1, 9);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 31:
					func_0xF7320378(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_0xF7320378(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_0xF7320378(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_0xF7320378(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_0xF7320378(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_0xF7320378(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_0xF7320378(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_0xF7320378(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_0xF7320378(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_0xF7320378(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_0xE5FA3D79(&unk, hParam0, iParam1, 9);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_0xF7320378(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_0xF7320378(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_0xF7320378(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_0xF7320378(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_0xF7320378(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_0xF7320378(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_0xF7320378(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_0xF7320378(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_0xF7320378(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_0xF7320378(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_0xF7320378(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_0xF7320378(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_0xF7320378(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_0xF7320378(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_0xF7320378(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 14:
					func_0xF7320378(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_0xF7320378(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_0xF7320378(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_0xF7320378(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_0xF7320378(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_0xF7320378(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_0xF7320378(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_0xF7320378(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_0xF7320378(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_0xF7320378(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 24:
					func_0xF7320378(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_0xE5FA3D79(&unk, hParam0, iParam1, 25);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_0xF7320378(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_0xF7320378(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_0xF7320378(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_0xF7320378(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_0xF7320378(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_0xF7320378(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_0xF7320378(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_0xF7320378(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_0xF7320378(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_0xF7320378(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_0xF7320378(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_0xF7320378(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_0xF7320378(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_0xF7320378(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_0xF7320378(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
			
				case 14:
					func_0xF7320378(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_0xF7320378(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_0xF7320378(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_0xF7320378(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_0xF7320378(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_0xF7320378(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_0xF7320378(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_0xF7320378(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_0xF7320378(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_0xF7320378(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_0xE5FA3D79(&unk, hParam0, iParam1, 25);
					break;
			}
			break;
	}

	return unk;
}

void func_0xE5FA3D79(var uParam0, Hash hParam1, int iParam2, int iParam3)
{
	int num;
	Hash itemHash;
	Hash outPropVariant;
	int i;

	if (iParam2 != 0 && iParam2 != -99)
	{
		uParam0->[0] = 0;
		uParam0->[1] = 1;
		uParam0->[2] = 2;
		uParam0->[3] = 3;
		uParam0->[4] = 4;
		uParam0->[5] = 5;
		uParam0->[6] = 6;
		uParam0->[7] = 7;
		uParam0->[8] = 8;
		num = 0;
	
		if (hParam1 == joaat("Player_Zero"))
			num = 0;
		else if (hParam1 == joaat("Player_One"))
			num = 1;
		else if (hParam1 == joaat("Player_Two"))
			num = 2;
		else if (hParam1 == joaat("MP_M_Freemode_01"))
			num = 3;
		else if (hParam1 == joaat("MP_F_Freemode_01"))
			num = 4;
	
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &itemHash);
	
		if (!FILES::IS_CONTENT_ITEM_LOCKED(itemHash))
		{
			for (i = 0; i < itemHash.f_3; i = i + 1)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(itemHash.f_1, i, &outPropVariant) && outPropVariant.f_2 != -1)
					if (outPropVariant != 0 && outPropVariant != -1 && outPropVariant != joaat("0"))
						uParam0->[outPropVariant.f_2] = func_0x37A3B7AE(hParam1, outPropVariant, 14, num);
					else if (outPropVariant.f_1 != -1)
						uParam0->[outPropVariant.f_2] = outPropVariant.f_1;
			}
		}
	}

	return;
}

void func_0xF7320378(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	uParam0->[0] = iParam1;
	uParam0->[1] = iParam2;
	uParam0->[2] = iParam3;
	uParam0->[3] = iParam4;
	uParam0->[4] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[6] = iParam7;
	uParam0->[7] = iParam8;
	uParam0->[8] = iParam9;
	return;
}

struct<17> func_0x10D20E1D(Hash hParam0, int iParam1)
{
	int i;
	var unk;

	unk = 15;

	for (i = 0; i <= 14; i = i + 1)
	{
		unk[i] = -99;
	}

	unk.f_16 = 0;

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_113969.f_9088.f_99.f_58[120])
						func_0xEC425A3E(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					else
						func_0xEC425A3E(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_0xEC425A3E(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
			
				case 2:
					func_0xEC425A3E(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
			
				case 3:
					func_0xEC425A3E(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
			
				case 4:
					func_0xEC425A3E(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
			
				case 5:
					func_0xEC425A3E(&unk, -99, -99, Global_113969.f_2366.f_539.f_196[0], Global_113969.f_2366.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
			
				case 6:
					func_0xEC425A3E(&unk, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_0xEC425A3E(&unk, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 8:
					func_0xEC425A3E(&unk, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_0xEC425A3E(&unk, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_0xEC425A3E(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
			
				case 11:
					func_0xEC425A3E(&unk, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_0xEC425A3E(&unk, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_0xEC425A3E(&unk, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_0xEC425A3E(&unk, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
			
				case 15:
					func_0xEC425A3E(&unk, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
			
				case 16:
					func_0xEC425A3E(&unk, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_0xEC425A3E(&unk, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_0xEC425A3E(&unk, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
			
				case 19:
					func_0xEC425A3E(&unk, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_0xEC425A3E(&unk, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_0xEC425A3E(&unk, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_0xEC425A3E(&unk, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_0xEC425A3E(&unk, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_0xEC425A3E(&unk, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_0xEC425A3E(&unk, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_0xEC425A3E(&unk, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_0xEC425A3E(&unk, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_0xEC425A3E(&unk, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_0xEC425A3E(&unk, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_0xEC425A3E(&unk, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_0xEC425A3E(&unk, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
			
				case 32:
					func_0xEC425A3E(&unk, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_0xEC425A3E(&unk, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_0xEC425A3E(&unk, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
			
				case 35:
					func_0xEC425A3E(&unk, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_0xEC425A3E(&unk, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_0xEC425A3E(&unk, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_0xEC425A3E(&unk, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_0xEC425A3E(&unk, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_0xEC425A3E(&unk, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_0xEC425A3E(&unk, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_0xEC425A3E(&unk, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_0xEC425A3E(&unk, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_0xEC425A3E(&unk, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_0xEC425A3E(&unk, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 46:
					func_0xEC425A3E(&unk, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_0xEC425A3E(&unk, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 48:
					func_0xEC425A3E(&unk, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 49:
					func_0xEC425A3E(&unk, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 50:
					func_0xEC425A3E(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
			
				case 51:
					func_0xEC425A3E(&unk, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 52:
					func_0xEC425A3E(&unk, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_0xD805D094(&unk, hParam0, iParam1, 53);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					func_0xEC425A3E(&unk, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_0xEC425A3E(&unk, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 2:
					func_0xEC425A3E(&unk, -99, -99, Global_113969.f_2366.f_539.f_196[1], Global_113969.f_2366.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
			
				case 3:
					func_0xEC425A3E(&unk, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
			
				case 4:
					func_0xEC425A3E(&unk, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
			
				case 5:
					func_0xEC425A3E(&unk, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 6:
					func_0xEC425A3E(&unk, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_0xEC425A3E(&unk, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
			
				case 8:
					func_0xEC425A3E(&unk, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
			
				case 9:
					func_0xEC425A3E(&unk, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_0xEC425A3E(&unk, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_0xEC425A3E(&unk, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 12:
					func_0xEC425A3E(&unk, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_0xEC425A3E(&unk, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_0xEC425A3E(&unk, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_0xEC425A3E(&unk, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_0xEC425A3E(&unk, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_0xEC425A3E(&unk, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_0xEC425A3E(&unk, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
			
				case 19:
					func_0xEC425A3E(&unk, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_0xEC425A3E(&unk, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_0xEC425A3E(&unk, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
			
				case 22:
					func_0xEC425A3E(&unk, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
			
				case 23:
					func_0xEC425A3E(&unk, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
			
				case 24:
					func_0xEC425A3E(&unk, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
			
				case 25:
					func_0xEC425A3E(&unk, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
			
				case 26:
					func_0xEC425A3E(&unk, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
			
				case 27:
					func_0xEC425A3E(&unk, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
			
				case 28:
					func_0xEC425A3E(&unk, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
			
				case 29:
					func_0xEC425A3E(&unk, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
			
				case 30:
					func_0xEC425A3E(&unk, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
			
				case 31:
					func_0xEC425A3E(&unk, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
			
				case 32:
					func_0xEC425A3E(&unk, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
			
				case 33:
					func_0xEC425A3E(&unk, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
			
				case 34:
					func_0xEC425A3E(&unk, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
			
				case 35:
					func_0xEC425A3E(&unk, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
			
				case 36:
					func_0xEC425A3E(&unk, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
			
				case 37:
					func_0xEC425A3E(&unk, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
			
				case 38:
					func_0xEC425A3E(&unk, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_0xEC425A3E(&unk, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_0xEC425A3E(&unk, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_0xEC425A3E(&unk, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_0xEC425A3E(&unk, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_0xEC425A3E(&unk, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
			
				case 44:
					func_0xEC425A3E(&unk, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 45:
					func_0xEC425A3E(&unk, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
			
				case 46:
					func_0xEC425A3E(&unk, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
			
				default:
					func_0xD805D094(&unk, hParam0, iParam1, 47);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					func_0xEC425A3E(&unk, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_0xEC425A3E(&unk, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
			
				case 2:
					func_0xEC425A3E(&unk, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
			
				case 3:
					func_0xEC425A3E(&unk, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
			
				case 4:
					func_0xEC425A3E(&unk, -99, -99, Global_113969.f_2366.f_539.f_196[2], Global_113969.f_2366.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 5:
					func_0xEC425A3E(&unk, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
			
				case 6:
					func_0xEC425A3E(&unk, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
			
				case 7:
					func_0xEC425A3E(&unk, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
			
				case 8:
					func_0xEC425A3E(&unk, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_0xEC425A3E(&unk, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_0xEC425A3E(&unk, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_0xEC425A3E(&unk, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_0xEC425A3E(&unk, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_0xEC425A3E(&unk, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_0xEC425A3E(&unk, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_0xEC425A3E(&unk, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_0xEC425A3E(&unk, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_0xEC425A3E(&unk, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_0xEC425A3E(&unk, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 19:
					func_0xEC425A3E(&unk, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_0xEC425A3E(&unk, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_0xEC425A3E(&unk, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_0xEC425A3E(&unk, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_0xEC425A3E(&unk, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_0xEC425A3E(&unk, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_0xEC425A3E(&unk, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_0xEC425A3E(&unk, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_0xEC425A3E(&unk, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_0xEC425A3E(&unk, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_0xEC425A3E(&unk, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_0xEC425A3E(&unk, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_0xEC425A3E(&unk, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 32:
					func_0xEC425A3E(&unk, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_0xEC425A3E(&unk, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_0xEC425A3E(&unk, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 35:
					func_0xEC425A3E(&unk, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_0xEC425A3E(&unk, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_0xEC425A3E(&unk, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_0xEC425A3E(&unk, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_0xEC425A3E(&unk, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_0xEC425A3E(&unk, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_0xEC425A3E(&unk, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_0xEC425A3E(&unk, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_0xEC425A3E(&unk, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_0xEC425A3E(&unk, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_0xEC425A3E(&unk, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 46:
					func_0xEC425A3E(&unk, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_0xEC425A3E(&unk, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_0xD805D094(&unk, hParam0, iParam1, 48);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_0xEC425A3E(&unk, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
			
				case 1:
					func_0xEC425A3E(&unk, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
			
				case 2:
					func_0xEC425A3E(&unk, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
			
				case 3:
					func_0xEC425A3E(&unk, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
			
				case 4:
					func_0xEC425A3E(&unk, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
			
				case 5:
					func_0xEC425A3E(&unk, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
			
				case 6:
					func_0xEC425A3E(&unk, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
			
				case 7:
					func_0xEC425A3E(&unk, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
			
				case 8:
					func_0xEC425A3E(&unk, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
			
				case 9:
					func_0xEC425A3E(&unk, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
			
				case 10:
					func_0xEC425A3E(&unk, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
			
				case 11:
					func_0xEC425A3E(&unk, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
			
				case 12:
					func_0xEC425A3E(&unk, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
			
				case 13:
					func_0xEC425A3E(&unk, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
			
				case 14:
					func_0xEC425A3E(&unk, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
			
				case 15:
					func_0xEC425A3E(&unk, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
			
				case 16:
					func_0xEC425A3E(&unk, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
			
				case 17:
					func_0xEC425A3E(&unk, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
			
				case 18:
					func_0xEC425A3E(&unk, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
			
				case 19:
					func_0xEC425A3E(&unk, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
			
				case 20:
					func_0xEC425A3E(&unk, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
			
				case 21:
					func_0xEC425A3E(&unk, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
			
				case 22:
					func_0xEC425A3E(&unk, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
			
				case 23:
					func_0xEC425A3E(&unk, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
			
				case 24:
					func_0xEC425A3E(&unk, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
			
				case 25:
					func_0xEC425A3E(&unk, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
			
				default:
					func_0xD805D094(&unk, hParam0, iParam1, 26);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_0xEC425A3E(&unk, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
			
				case 1:
					func_0xEC425A3E(&unk, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
			
				case 2:
					func_0xEC425A3E(&unk, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
			
				case 3:
					func_0xEC425A3E(&unk, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
			
				case 4:
					func_0xEC425A3E(&unk, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
			
				case 5:
					func_0xEC425A3E(&unk, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
			
				case 6:
					func_0xEC425A3E(&unk, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
			
				case 7:
					func_0xEC425A3E(&unk, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
			
				case 8:
					func_0xEC425A3E(&unk, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
			
				case 9:
					func_0xEC425A3E(&unk, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
			
				case 10:
					func_0xEC425A3E(&unk, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
			
				case 11:
					func_0xEC425A3E(&unk, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
			
				case 12:
					func_0xEC425A3E(&unk, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
			
				case 13:
					func_0xEC425A3E(&unk, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
			
				case 14:
					func_0xEC425A3E(&unk, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
			
				case 15:
					func_0xEC425A3E(&unk, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
			
				case 16:
					func_0xEC425A3E(&unk, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
			
				case 17:
					func_0xEC425A3E(&unk, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
			
				case 18:
					func_0xEC425A3E(&unk, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
			
				case 19:
					func_0xEC425A3E(&unk, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
			
				case 20:
					func_0xEC425A3E(&unk, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
			
				case 21:
					func_0xEC425A3E(&unk, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
			
				case 22:
					func_0xEC425A3E(&unk, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
			
				case 23:
					func_0xEC425A3E(&unk, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
			
				case 24:
					func_0xEC425A3E(&unk, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
			
				case 25:
					func_0xEC425A3E(&unk, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
			
				case 26:
					func_0xEC425A3E(&unk, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
			
				case 27:
					func_0xEC425A3E(&unk, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
			
				default:
					func_0xD805D094(&unk, hParam0, iParam1, 28);
					break;
			}
			break;
	}

	return unk;
}

void func_0xD805D094(var uParam0, Hash hParam1, int iParam2, int iParam3)
{
	int num;
	Hash outfit;
	Hash outComponentVariant;
	var outComponent;
	int i;

	uParam0->[0] = 0;
	uParam0->[2] = -99;
	uParam0->[3] = 0;
	uParam0->[4] = 0;
	uParam0->[6] = 0;
	uParam0->[5] = 0;
	uParam0->[8] = 0;
	uParam0->[9] = 0;
	uParam0->[10] = 0;
	uParam0->[1] = 0;
	uParam0->[7] = 0;
	uParam0->[11] = 0;
	uParam0->[13] = -99;
	uParam0->[14] = -99;
	uParam0->f_16 = 0;
	num = 0;

	if (hParam1 == joaat("Player_Zero"))
	{
		num = 0;
		uParam0->[13] = 10 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("Player_One"))
	{
		num = 1;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("Player_Two"))
	{
		num = 2;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("MP_M_Freemode_01"))
	{
		num = 3;
	}
	else if (hParam1 == joaat("MP_F_Freemode_01"))
	{
		num = 4;
	}

	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num, false);
	FILES::GET_SHOP_PED_QUERY_OUTFIT(iParam2 - iParam3, &outfit);

	if (!FILES::IS_CONTENT_ITEM_LOCKED(outfit))
	{
		for (i = 0; i < outfit.f_4; i = i + 1)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(outfit.f_1, i, &outComponentVariant))
			{
				if (outComponentVariant != 0 && outComponentVariant != -1 && outComponentVariant != joaat("0"))
				{
					if (outComponentVariant.f_2 == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
						FILES::GET_SHOP_PED_COMPONENT(outComponentVariant, &outComponent);
					
						if (outComponentVariant != outComponent.f_1)
							uParam0->f_16 = 1;
					}
				
					if (outComponentVariant.f_2 == 10 && uParam0->f_16)
					{
						uParam0->[func_0xF91DA7A7(outComponentVariant.f_2)] = outComponentVariant;
						uParam0->f_16 = 1;
					}
					else
					{
						uParam0->[func_0xF91DA7A7(outComponentVariant.f_2)] = func_0x37A3B7AE(hParam1, outComponentVariant, func_0xF91DA7A7(outComponentVariant.f_2), num);
					}
				}
				else if (outComponentVariant.f_1 != -1)
				{
					uParam0->[func_0xF91DA7A7(outComponentVariant.f_2)] = outComponentVariant.f_1;
				}
			}
		}
	
		if (outfit.f_3 == 0)
			uParam0->[13] = -99;
		else
			uParam0->[13] = outfit.f_1;
	}

	return;
}

int func_0xF91DA7A7(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

void func_0xEC425A3E(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	uParam0->[0] = iParam1;
	uParam0->[2] = iParam2;
	uParam0->[3] = iParam3;
	uParam0->[4] = iParam4;
	uParam0->[6] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[8] = iParam7;
	uParam0->[9] = iParam8;
	uParam0->[10] = iParam9;
	uParam0->[1] = iParam10;
	uParam0->[7] = iParam11;
	uParam0->[11] = iParam12;
	uParam0->[13] = iParam13;
	uParam0->[14] = -99;
	return;
}

struct<14> func_0x2257F879(Hash hParam0, int iParam1, int iParam2, Hash hParam3)
{
	func_0xE5F61993();

	if (hParam0 == joaat("MP_M_Freemode_01"))
		func_0x9AF0DF05(iParam1, iParam2, hParam3);
	else if (hParam0 == joaat("MP_F_Freemode_01"))
		func_0x9AF0DF05(iParam1, iParam2, hParam3);

	return Global_79172[0];
}

void func_0x9AF0DF05(int iParam0, int iParam1, Hash hParam2)
{
	switch (iParam0)
	{
		case 2:
			func_0xA91A09EB(iParam1, hParam2);
			break;
	
		case 11:
			func_0xE6D60F9B(iParam1, hParam2);
			break;
	
		case 8:
			func_0xE646E909(iParam1, hParam2);
			break;
	
		case 9:
			func_0x1DB3E93C(iParam1, hParam2);
			break;
	
		case 3:
			func_0xE0A1579F(iParam1, hParam2);
			break;
	
		case 4:
			func_0xB448FE2B(iParam1, hParam2);
			break;
	
		case 6:
			func_0x49FFFA4C(iParam1, hParam2);
			break;
	
		case 1:
			func_0x8F60B7F6(iParam1, hParam2);
			break;
	
		case 7:
			func_0x31CAA5FE(iParam1, hParam2);
			break;
	
		case 10:
			func_0x532BD76A(iParam1, hParam2);
			break;
	
		case 14:
			func_0x859154FC(iParam1, hParam2);
			break;
	
		case 12:
			func_0x34BAB0FD(iParam1, hParam2);
			break;
	
		case 5:
			func_0x5C1D2F91(iParam1, hParam2);
			break;
	
		case 0:
			func_0xEDA496E8(iParam1, hParam2);
			break;
	
		case 13:
			func_0xB745E49C(iParam1);
			break;
	}

	return;
}

void func_0xB745E49C(int iParam0)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;

	switch (iParam0)
	{
		case 31:
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			break;
	}

	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0xA2DFD38C(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10)
{
	int num;
	int num2;

	iParam0->f_6 = 0;
	*iParam0 = iParam9;
	iParam0->f_1 = iParam2 % 32;
	iParam0->f_2 = iParam2 / 32;
	iParam0->f_3 = iParam4;
	iParam0->f_4 = iParam5;
	iParam0->f_7 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
	iParam0->f_13 = iParam8;
	iParam0->f_12 = func_0xE4C61EBD(iParam8);

	if (iParam0->f_2 >= 10 && iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		!bParam10;
		iParam0->f_2 = 0;
	}

	MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL");

	if (bParam7)
		MISC::SET_BIT(&(iParam0->f_6), 3);

	if (bParam10)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
			MISC::SET_BIT(&(iParam0->f_6), 5);
	
		MISC::SET_BIT(&(iParam0->f_6), 1);
		MISC::SET_BIT(&(iParam0->f_6), 2);
		MISC::SET_BIT(&(iParam0->f_6), 6);
	
		if (func_0x937D8816(14))
			return;
	
		if (iParam1 == 1)
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
				MISC::SET_BIT(&(iParam0->f_6), 7);
	
		if (iParam1 == 12)
		{
			if (!func_0x8D68F96D(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_0x8D68F96D(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_0x8D68F96D(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_0x8D68F96D(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else
		{
			if (!func_0x8D68F96D(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_0x8D68F96D(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
	
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(iParam0->f_6), 1);
			MISC::CLEAR_BIT(&(iParam0->f_6), 0);
		}
	}
	else if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
		MISC::SET_BIT(&(iParam0->f_6), 5);
	
		if (func_0xDF4F0B01(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 1);
	
		if (func_0xDF4F0B01(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 2);
	
		if (!func_0xDF4F0B01(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 4);
	}
	else
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 || iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12)
		{
			if (func_0x937D8816(14))
				return;
		
			num = GET_MP_INT_CHARACTER_STAT(func_0x4CEDF2DA(iParam1, iParam0->f_2), Global_79169);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 1);
		
			num = GET_MP_INT_CHARACTER_STAT(func_0x789572FD(iParam1, iParam0->f_2), Global_79169);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 2);
		
			if (func_0x805F0D09(iParam1, iParam0->f_2, &num2))
			{
				num = GET_MP_INT_CHARACTER_STAT(num2, Global_79169);
			
				if (!IS_BIT_SET(num, iParam0->f_1))
					MISC::SET_BIT(&(iParam0->f_6), 4);
			}
		}
		else
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	return;
}

BOOL func_0x805F0D09(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
			
				case 3:
					*uParam2 = 1430;
					break;
			
				case 4:
					*uParam2 = 996;
					break;
			
				case 6:
					*uParam2 = 1004;
					break;
			
				case 8:
					*uParam2 = 1431;
					break;
			
				case 9:
					*uParam2 = 1439;
					break;
			
				case 10:
					*uParam2 = 1441;
					break;
			
				case 1:
					*uParam2 = 1012;
					break;
			
				case 7:
					*uParam2 = 1442;
					break;
			
				case 11:
					*uParam2 = 988;
					break;
			
				case 14:
					*uParam2 = 1020;
					break;
			
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
			
				case 4:
					*uParam2 = 997;
					break;
			
				case 6:
					*uParam2 = 1005;
					break;
			
				case 8:
					*uParam2 = 1432;
					break;
			
				case 9:
					*uParam2 = 1440;
					break;
			
				case 7:
					*uParam2 = 1443;
					break;
			
				case 11:
					*uParam2 = 989;
					break;
			
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
			
				case 4:
					*uParam2 = 998;
					break;
			
				case 6:
					*uParam2 = 1006;
					break;
			
				case 8:
					*uParam2 = 1433;
					break;
			
				case 7:
					*uParam2 = 1444;
					break;
			
				case 11:
					*uParam2 = 990;
					break;
			
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
			
				case 6:
					*uParam2 = 1007;
					break;
			
				case 8:
					*uParam2 = 1434;
					break;
			
				case 11:
					*uParam2 = 991;
					break;
			
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
			
				case 6:
					*uParam2 = 1008;
					break;
			
				case 8:
					*uParam2 = 1435;
					break;
			
				case 11:
					*uParam2 = 992;
					break;
			
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
			
				case 6:
					*uParam2 = 1009;
					break;
			
				case 8:
					*uParam2 = 1436;
					break;
			
				case 11:
					*uParam2 = 993;
					break;
			
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
			
				case 6:
					*uParam2 = 1010;
					break;
			
				case 8:
					*uParam2 = 1437;
					break;
			
				case 11:
					*uParam2 = 994;
					break;
			
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
			
				case 6:
					*uParam2 = 1011;
					break;
			
				case 8:
					*uParam2 = 1438;
					break;
			
				case 11:
					*uParam2 = 995;
					break;
			
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}

	return *uParam2 != 979;
}

int func_0x789572FD(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
			
				case 3:
					return 1415;
			
				case 4:
					return 944;
			
				case 6:
					return 952;
			
				case 8:
					return 1416;
			
				case 9:
					return 1424;
			
				case 10:
					return 1426;
			
				case 1:
					return 960;
			
				case 7:
					return 1427;
			
				case 11:
					return 936;
			
				case 14:
					return 968;
			
				case 12:
					return 979;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
			
				case 4:
					return 945;
			
				case 6:
					return 953;
			
				case 8:
					return 1417;
			
				case 9:
					return 1425;
			
				case 7:
					return 1428;
			
				case 11:
					return 937;
			
				case 14:
					return 969;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
			
				case 4:
					return 946;
			
				case 6:
					return 954;
			
				case 8:
					return 1418;
			
				case 7:
					return 1429;
			
				case 11:
					return 938;
			
				case 14:
					return 970;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
			
				case 6:
					return 955;
			
				case 8:
					return 1419;
			
				case 11:
					return 939;
			
				case 14:
					return 971;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
			
				case 6:
					return 956;
			
				case 8:
					return 1420;
			
				case 11:
					return 940;
			
				case 14:
					return 972;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
			
				case 6:
					return 957;
			
				case 8:
					return 1421;
			
				case 11:
					return 941;
			
				case 14:
					return 973;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
			
				case 6:
					return 958;
			
				case 8:
					return 1422;
			
				case 11:
					return 942;
			
				case 14:
					return 974;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
			
				case 6:
					return 959;
			
				case 8:
					return 1423;
			
				case 11:
					return 943;
			
				case 14:
					return 975;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
			}
			break;
	}

	return 936;
}

int func_0x4CEDF2DA(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
			
				case 3:
					return 1400;
			
				case 4:
					return 892;
			
				case 6:
					return 900;
			
				case 8:
					return 1401;
			
				case 9:
					return 1409;
			
				case 10:
					return 1411;
			
				case 1:
					return 908;
			
				case 7:
					return 1412;
			
				case 11:
					return 884;
			
				case 14:
					return 916;
			
				case 12:
					return 927;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
			
				case 4:
					return 893;
			
				case 6:
					return 901;
			
				case 8:
					return 1402;
			
				case 9:
					return 1410;
			
				case 7:
					return 1413;
			
				case 11:
					return 885;
			
				case 14:
					return 917;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
			
				case 4:
					return 894;
			
				case 6:
					return 902;
			
				case 8:
					return 1403;
			
				case 7:
					return 1414;
			
				case 11:
					return 886;
			
				case 14:
					return 918;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
			
				case 6:
					return 903;
			
				case 8:
					return 1404;
			
				case 11:
					return 887;
			
				case 14:
					return 919;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
			
				case 6:
					return 904;
			
				case 8:
					return 1405;
			
				case 11:
					return 888;
			
				case 14:
					return 920;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
			
				case 6:
					return 905;
			
				case 8:
					return 1406;
			
				case 11:
					return 889;
			
				case 14:
					return 921;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
			
				case 6:
					return 906;
			
				case 8:
					return 1407;
			
				case 11:
					return 890;
			
				case 14:
					return 922;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
			
				case 6:
					return 907;
			
				case 8:
					return 1408;
			
				case 11:
					return 891;
			
				case 14:
					return 923;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
			}
			break;
	}

	return 884;
}

BOOL func_0xDF4F0B01(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1][iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1][iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_4[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_4[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_8[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_8[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_12[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_12[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_16[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_16[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_20[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_20[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_24[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_24[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_28[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_28[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_32[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_32[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_36[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_36[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_40[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_40[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_44[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_44[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_48[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_48[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_52[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_52[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_56[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_56[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_60[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_60[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_64[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_64[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_68[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_68[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_72[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_72[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_76[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_76[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_80[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_80[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_84[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_84[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_88[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_88[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_92[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_92[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_96[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_96[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_100[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_100[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_104[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_104[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_108[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_108[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_112[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_112[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_116[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_116[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_120[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_120[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_124[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_124[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_128[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_128[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_132[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_132[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_136[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_136[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_140[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_140[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_144[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_144[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_148[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_148[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_152[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_152[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_156[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_156[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1].f_160[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1].f_160[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1].f_160[iParam3], iParam4);
		}
	}

	return false;
}

BOOL func_0x8D68F96D(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4)
{
	int num;
	int num2;
	int num3;
	int num4;

	num = Global_79169;

	if (iParam4 != -1)
		num = iParam4;

	if (func_0x1B8A3878(hParam0, iParam1, &num3, &num2, bParam2, bParam3))
	{
		num4 = GET_MP_INT_CHARACTER_STAT(num3, num);
		return IS_BIT_SET(num4, num2);
	}

	return false;
}

BOOL func_0x1B8A3878(Hash hParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5)
{
	int fmMaleShopPedApparelItemIndex;

	*uParam2 = 14835;

	if (bParam4 && Global_4540270 || !bParam4 && bParam5)
	{
		switch (iParam1)
		{
			case 1:
				switch (hParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return true;
				}
				break;
		
			case 2:
				switch (hParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (hParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				}
				break;
		
			case 2:
				switch (hParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}

	fmMaleShopPedApparelItemIndex = -1;

	if (bParam4)
		if (Global_4540270)
			fmMaleShopPedApparelItemIndex = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
		else
			fmMaleShopPedApparelItemIndex = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
	else if (bParam5)
		fmMaleShopPedApparelItemIndex = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
	else
		fmMaleShopPedApparelItemIndex = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);

	if (fmMaleShopPedApparelItemIndex == -1)
		return false;

	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 0:
					*uParam2 = 1761;
					break;
			
				case 1:
					*uParam2 = 1762;
					break;
			
				case 2:
					*uParam2 = 1763;
					break;
			
				case 3:
					*uParam2 = 1764;
					break;
			
				case 4:
					*uParam2 = 1765;
					break;
			
				case 5:
					*uParam2 = 1766;
					break;
			
				case 6:
					*uParam2 = 1773;
					break;
			
				case 7:
					*uParam2 = 1774;
					break;
			
				case 8:
					*uParam2 = 1775;
					break;
			
				case 9:
					*uParam2 = 1776;
					break;
			
				case 10:
					*uParam2 = 1777;
					break;
			
				case 11:
					*uParam2 = 1778;
					break;
			
				case 12:
					*uParam2 = 1779;
					break;
			
				case 13:
					*uParam2 = 1787;
					break;
			
				case 14:
					*uParam2 = 1788;
					break;
			
				case 15:
					*uParam2 = 1889;
					break;
			
				case 16:
					*uParam2 = 1890;
					break;
			
				case 17:
					*uParam2 = 1921;
					break;
			
				case 18:
					*uParam2 = 1935;
					break;
			
				case 19:
					*uParam2 = 1936;
					break;
			
				case 20:
					*uParam2 = 1937;
					break;
			
				case 21:
					*uParam2 = 1938;
					break;
			
				case 22:
					*uParam2 = 1939;
					break;
			
				case 23:
					*uParam2 = 2043;
					break;
			
				case 24:
					*uParam2 = 2044;
					break;
			
				case 25:
					*uParam2 = 2070;
					break;
			
				case 26:
					*uParam2 = 2071;
					break;
			
				case 27:
					*uParam2 = 2072;
					break;
			
				case 28:
					*uParam2 = 2073;
					break;
			
				case 29:
					*uParam2 = 2074;
					break;
			
				case 30:
					*uParam2 = 2075;
					break;
			
				case 31:
					*uParam2 = 2076;
					break;
			
				case 32:
					*uParam2 = 2077;
					break;
			
				case 33:
					*uParam2 = 2078;
					break;
			
				case 34:
					*uParam2 = 2079;
					break;
			
				case 35:
					*uParam2 = 2326;
					break;
			
				case 36:
					*uParam2 = 2327;
					break;
			
				case 37:
					*uParam2 = 2391;
					break;
			
				case 38:
					*uParam2 = 2392;
					break;
			
				case 39:
					*uParam2 = 2393;
					break;
			
				case 40:
					*uParam2 = 2394;
					break;
			
				case 41:
					*uParam2 = 2453;
					break;
			
				case 42:
					*uParam2 = 2454;
					break;
			
				case 43:
					*uParam2 = 2455;
					break;
			
				case 44:
					*uParam2 = 2456;
					break;
			
				case 45:
					*uParam2 = 2457;
					break;
			
				case 46:
					*uParam2 = 2458;
					break;
			
				case 47:
					*uParam2 = 2459;
					break;
			
				case 48:
					*uParam2 = 2460;
					break;
			
				case 49:
					*uParam2 = 2461;
					break;
			
				case 50:
					*uParam2 = 2462;
					break;
			
				case 51:
					*uParam2 = 2592;
					break;
			
				case 52:
					*uParam2 = 2593;
					break;
			
				case 53:
					*uParam2 = 2594;
					break;
			
				case 54:
					*uParam2 = 2595;
					break;
			
				case 55:
					*uParam2 = 2596;
					break;
			
				case 56:
					*uParam2 = 2597;
					break;
			
				case 57:
					*uParam2 = 2598;
					break;
			
				case 58:
					*uParam2 = 2599;
					break;
			
				case 59:
					*uParam2 = 2600;
					break;
			
				case 60:
					*uParam2 = 2601;
					break;
			
				case 61:
					*uParam2 = 2602;
					break;
			
				case 62:
					*uParam2 = 3199;
					break;
			
				case 63:
					*uParam2 = 3200;
					break;
			
				case 64:
					*uParam2 = 3201;
					break;
			
				case 65:
					*uParam2 = 3202;
					break;
			
				case 66:
					*uParam2 = 3203;
					break;
			
				case 67:
					*uParam2 = 3204;
					break;
			
				case 68:
					*uParam2 = 3672;
					break;
			
				case 69:
					*uParam2 = 3673;
					break;
			
				case 70:
					*uParam2 = 3674;
					break;
			
				case 71:
					*uParam2 = 3675;
					break;
			
				case 72:
					*uParam2 = 3676;
					break;
			
				case 73:
					*uParam2 = 3677;
					break;
			
				case 74:
					*uParam2 = 3678;
					break;
			
				case 75:
					*uParam2 = 3679;
					break;
			
				case 76:
					*uParam2 = 3680;
					break;
			
				case 77:
					*uParam2 = 3681;
					break;
			
				case 78:
					*uParam2 = 3795;
					break;
			
				case 79:
					*uParam2 = 3796;
					break;
			
				case 80:
					*uParam2 = 3797;
					break;
			
				case 81:
					*uParam2 = 3798;
					break;
			
				case 82:
					*uParam2 = 3799;
					break;
			
				case 83:
					*uParam2 = 3800;
					break;
			
				case 84:
					*uParam2 = 3801;
					break;
			
				case 85:
					*uParam2 = 3802;
					break;
			
				case 86:
					*uParam2 = 3905;
					break;
			
				case 87:
					*uParam2 = 3906;
					break;
			
				case 88:
					*uParam2 = 3907;
					break;
			
				case 89:
					*uParam2 = 5340;
					break;
			
				case 90:
					*uParam2 = 5341;
					break;
			
				case 91:
					*uParam2 = 5342;
					break;
			
				case 92:
					*uParam2 = 5343;
					break;
			
				case 93:
					*uParam2 = 5344;
					break;
			
				case 94:
					*uParam2 = 5345;
					break;
			
				case 95:
					*uParam2 = 5346;
					break;
			
				case 96:
					*uParam2 = 5347;
					break;
			
				case 97:
					*uParam2 = 5348;
					break;
			
				case 98:
					*uParam2 = 5349;
					break;
			
				case 99:
					*uParam2 = 5350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 100:
					*uParam2 = 5351;
					break;
			
				case 101:
					*uParam2 = 5397;
					break;
			
				case 102:
					*uParam2 = 5398;
					break;
			
				case 103:
					*uParam2 = 5399;
					break;
			
				case 104:
					*uParam2 = 5400;
					break;
			
				case 105:
					*uParam2 = 5401;
					break;
			
				case 106:
					*uParam2 = 5402;
					break;
			
				case 107:
					*uParam2 = 5403;
					break;
			
				case 108:
					*uParam2 = 5404;
					break;
			
				case 109:
					*uParam2 = 5405;
					break;
			
				case 110:
					*uParam2 = 5406;
					break;
			
				case 111:
					*uParam2 = 5407;
					break;
			
				case 112:
					*uParam2 = 5408;
					break;
			
				case 113:
					*uParam2 = 5409;
					break;
			
				case 114:
					*uParam2 = 5410;
					break;
			
				case 115:
					*uParam2 = 5411;
					break;
			
				case 116:
					*uParam2 = 5412;
					break;
			
				case 117:
					*uParam2 = 5413;
					break;
			
				case 118:
					*uParam2 = 5414;
					break;
			
				case 119:
					*uParam2 = 5415;
					break;
			
				case 120:
					*uParam2 = 5416;
					break;
			
				case 121:
					*uParam2 = 5417;
					break;
			
				case 122:
					*uParam2 = 5418;
					break;
			
				case 123:
					*uParam2 = 5419;
					break;
			
				case 124:
					*uParam2 = 6125;
					break;
			
				case 125:
					*uParam2 = 6126;
					break;
			
				case 126:
					*uParam2 = 6127;
					break;
			
				case 127:
					*uParam2 = 6128;
					break;
			
				case 128:
					*uParam2 = 6129;
					break;
			
				case 129:
					*uParam2 = 6130;
					break;
			
				case 130:
					*uParam2 = 6131;
					break;
			
				case 131:
					*uParam2 = 6132;
					break;
			
				case 132:
					*uParam2 = 6133;
					break;
			
				case 133:
					*uParam2 = 6134;
					break;
			
				case 134:
					*uParam2 = 6135;
					break;
			
				case 135:
					*uParam2 = 6136;
					break;
			
				case 136:
					*uParam2 = 6137;
					break;
			
				case 137:
					*uParam2 = 6138;
					break;
			
				case 138:
					*uParam2 = 6139;
					break;
			
				case 139:
					*uParam2 = 6438;
					break;
			
				case 140:
					*uParam2 = 6439;
					break;
			
				case 141:
					*uParam2 = 6440;
					break;
			
				case 142:
					*uParam2 = 6441;
					break;
			
				case 143:
					*uParam2 = 6442;
					break;
			
				case 144:
					*uParam2 = 6443;
					break;
			
				case 145:
					*uParam2 = 6444;
					break;
			
				case 146:
					*uParam2 = 6445;
					break;
			
				case 147:
					*uParam2 = 6446;
					break;
			
				case 148:
					*uParam2 = 6447;
					break;
			
				case 149:
					*uParam2 = 6448;
					break;
			
				case 150:
					*uParam2 = 6449;
					break;
			
				case 151:
					*uParam2 = 6450;
					break;
			
				case 152:
					*uParam2 = 6451;
					break;
			
				case 153:
					*uParam2 = 6452;
					break;
			
				case 154:
					*uParam2 = 7269;
					break;
			
				case 155:
					*uParam2 = 7270;
					break;
			
				case 156:
					*uParam2 = 7271;
					break;
			
				case 157:
					*uParam2 = 7272;
					break;
			
				case 158:
					*uParam2 = 7273;
					break;
			
				case 159:
					*uParam2 = 7274;
					break;
			
				case 160:
					*uParam2 = 7275;
					break;
			
				case 161:
					*uParam2 = 7882;
					break;
			
				case 162:
					*uParam2 = 7883;
					break;
			
				case 163:
					*uParam2 = 7884;
					break;
			
				case 164:
					*uParam2 = 7885;
					break;
			
				case 165:
					*uParam2 = 7886;
					break;
			
				case 166:
					*uParam2 = 7887;
					break;
			
				case 167:
					*uParam2 = 7888;
					break;
			
				case 168:
					*uParam2 = 7889;
					break;
			
				case 169:
					*uParam2 = 7890;
					break;
			
				case 170:
					*uParam2 = 7891;
					break;
			
				case 171:
					*uParam2 = 7892;
					break;
			
				case 172:
					*uParam2 = 7893;
					break;
			
				case 173:
					*uParam2 = 7894;
					break;
			
				case 174:
					*uParam2 = 7895;
					break;
			
				case 175:
					*uParam2 = 7896;
					break;
			
				case 176:
					*uParam2 = 8302;
					break;
			
				case 177:
					*uParam2 = 8303;
					break;
			
				case 178:
					*uParam2 = 8304;
					break;
			
				case 179:
					*uParam2 = 8305;
					break;
			
				case 180:
					*uParam2 = 8306;
					break;
			
				case 181:
					*uParam2 = 8307;
					break;
			
				case 182:
					*uParam2 = 8308;
					break;
			
				case 183:
					*uParam2 = 8309;
					break;
			
				case 184:
					*uParam2 = 8310;
					break;
			
				case 185:
					*uParam2 = 8311;
					break;
			
				case 186:
					*uParam2 = 8312;
					break;
			
				case 187:
					*uParam2 = 8313;
					break;
			
				case 188:
					*uParam2 = 8314;
					break;
			
				case 189:
					*uParam2 = 8315;
					break;
			
				case 190:
					*uParam2 = 8316;
					break;
			
				case 191:
					*uParam2 = 8317;
					break;
			
				case 192:
					*uParam2 = 8318;
					break;
			
				case 193:
					*uParam2 = 8319;
					break;
			
				case 194:
					*uParam2 = 8320;
					break;
			
				case 195:
					*uParam2 = 8321;
					break;
			
				case 196:
					*uParam2 = 8322;
					break;
			
				case 197:
					*uParam2 = 8323;
					break;
			
				case 198:
					*uParam2 = 8324;
					break;
			
				case 199:
					*uParam2 = 8325;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 200:
					*uParam2 = 8326;
					break;
			
				case 201:
					*uParam2 = 8941;
					break;
			
				case 202:
					*uParam2 = 8942;
					break;
			
				case 203:
					*uParam2 = 8943;
					break;
			
				case 204:
					*uParam2 = 8944;
					break;
			
				case 205:
					*uParam2 = 8945;
					break;
			
				case 206:
					*uParam2 = 9424;
					break;
			
				case 207:
					*uParam2 = 9425;
					break;
			
				case 208:
					*uParam2 = 9426;
					break;
			
				case 209:
					*uParam2 = 9427;
					break;
			
				case 210:
					*uParam2 = 9428;
					break;
			
				case 211:
					*uParam2 = 9429;
					break;
			
				case 212:
					*uParam2 = 9430;
					break;
			
				case 213:
					*uParam2 = 9431;
					break;
			
				case 214:
					*uParam2 = 9432;
					break;
			
				case 215:
					*uParam2 = 9433;
					break;
			
				case 216:
					*uParam2 = 9434;
					break;
			
				case 217:
					*uParam2 = 9435;
					break;
			
				case 218:
					*uParam2 = 9436;
					break;
			
				case 219:
					*uParam2 = 9437;
					break;
			
				case 220:
					*uParam2 = 9438;
					break;
			
				case 221:
					*uParam2 = 9439;
					break;
			
				case 222:
					*uParam2 = 9440;
					break;
			
				case 223:
					*uParam2 = 9441;
					break;
			
				case 224:
					*uParam2 = 9442;
					break;
			
				case 225:
					*uParam2 = 9443;
					break;
			
				case 226:
					*uParam2 = 9444;
					break;
			
				case 227:
					*uParam2 = 9445;
					break;
			
				case 228:
					*uParam2 = 9446;
					break;
			
				case 229:
					*uParam2 = 9447;
					break;
			
				case 230:
					*uParam2 = 9448;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 231:
					*uParam2 = 10304;
					break;
			
				case 232:
					*uParam2 = 10305;
					break;
			
				case 233:
					*uParam2 = 10306;
					break;
			
				case 234:
					*uParam2 = 10307;
					break;
			
				case 235:
					*uParam2 = 10308;
					break;
			
				case 236:
					*uParam2 = 10309;
					break;
			
				case 237:
					*uParam2 = 10310;
					break;
			
				case 238:
					*uParam2 = 10311;
					break;
			
				case 239:
					*uParam2 = 10312;
					break;
			
				case 240:
					*uParam2 = 10313;
					break;
			
				case 241:
					*uParam2 = 10314;
					break;
			
				case 242:
					*uParam2 = 10315;
					break;
			
				case 243:
					*uParam2 = 10316;
					break;
			
				case 244:
					*uParam2 = 10317;
					break;
			
				case 245:
					*uParam2 = 10318;
					break;
			
				case 246:
					*uParam2 = 10319;
					break;
			
				case 247:
					*uParam2 = 10320;
					break;
			
				case 248:
					*uParam2 = 10321;
					break;
			
				case 249:
					*uParam2 = 10322;
					break;
			
				case 250:
					*uParam2 = 10323;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 251:
					*uParam2 = 10420;
					break;
			
				case 252:
					*uParam2 = 10421;
					break;
			
				case 253:
					*uParam2 = 10422;
					break;
			
				case 254:
					*uParam2 = 10423;
					break;
			
				case 255:
					*uParam2 = 10424;
					break;
			
				case 256:
					*uParam2 = 10425;
					break;
			
				case 257:
					*uParam2 = 10426;
					break;
			
				case 258:
					*uParam2 = 10427;
					break;
			
				case 259:
					*uParam2 = 10428;
					break;
			
				case 260:
					*uParam2 = 10429;
					break;
			
				case 261:
					*uParam2 = 11847;
					break;
			
				case 262:
					*uParam2 = 11848;
					break;
			
				case 263:
					*uParam2 = 11849;
					break;
			
				case 264:
					*uParam2 = 11850;
					break;
			
				case 265:
					*uParam2 = 11851;
					break;
			
				case 266:
					*uParam2 = 11852;
					break;
			
				case 267:
					*uParam2 = 11853;
					break;
			
				case 268:
					*uParam2 = 11854;
					break;
			
				case 269:
					*uParam2 = 11855;
					break;
			
				case 270:
					*uParam2 = 11856;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 271:
					*uParam2 = 11878;
					break;
			
				case 272:
					*uParam2 = 11879;
					break;
			
				case 273:
					*uParam2 = 11880;
					break;
			
				case 274:
					*uParam2 = 11881;
					break;
			
				case 275:
					*uParam2 = 11882;
					break;
			
				case 276:
					*uParam2 = 11883;
					break;
			
				case 277:
					*uParam2 = 11884;
					break;
			
				case 278:
					*uParam2 = 11885;
					break;
			
				case 279:
					*uParam2 = 11886;
					break;
			
				case 280:
					*uParam2 = 11887;
					break;
			
				case 281:
					*uParam2 = 11888;
					break;
			
				case 282:
					*uParam2 = 11889;
					break;
			
				case 283:
					*uParam2 = 11976;
					break;
			
				case 284:
					*uParam2 = 11977;
					break;
			
				case 285:
					*uParam2 = 11978;
					break;
			
				case 286:
					*uParam2 = 11979;
					break;
			
				case 287:
					*uParam2 = 11980;
					break;
			
				case 288:
					*uParam2 = 11981;
					break;
			
				case 289:
					*uParam2 = 11982;
					break;
			
				case 290:
					*uParam2 = 11983;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 291:
					*uParam2 = 11984;
					break;
			
				case 292:
					*uParam2 = 11985;
					break;
			
				case 293:
					*uParam2 = 11986;
					break;
			
				case 294:
					*uParam2 = 11987;
					break;
			
				case 295:
					*uParam2 = 11988;
					break;
			
				case 296:
					*uParam2 = 11989;
					break;
			
				case 297:
					*uParam2 = 11990;
					break;
			
				case 298:
					*uParam2 = 12190;
					break;
			
				case 299:
					*uParam2 = 12191;
					break;
			
				case 300:
					*uParam2 = 12192;
					break;
			
				case 301:
					*uParam2 = 12193;
					break;
			
				case 302:
					*uParam2 = 12194;
					break;
			
				case 303:
					*uParam2 = 12195;
					break;
			
				case 304:
					*uParam2 = 12196;
					break;
			
				case 305:
					*uParam2 = 12197;
					break;
			
				case 306:
					*uParam2 = 12332;
					break;
			
				case 307:
					*uParam2 = 12333;
					break;
			
				case 308:
					*uParam2 = 12334;
					break;
			
				case 309:
					*uParam2 = 12335;
					break;
			
				case 310:
					*uParam2 = 12336;
					break;
			}
			break;
	
		case 2:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 0:
					*uParam2 = 1767;
					break;
			
				case 1:
					*uParam2 = 1768;
					break;
			
				case 2:
					*uParam2 = 1769;
					break;
			
				case 3:
					*uParam2 = 1770;
					break;
			
				case 4:
					*uParam2 = 1771;
					break;
			
				case 5:
					*uParam2 = 1772;
					break;
			
				case 6:
					*uParam2 = 1780;
					break;
			
				case 7:
					*uParam2 = 1781;
					break;
			
				case 8:
					*uParam2 = 1782;
					break;
			
				case 9:
					*uParam2 = 1783;
					break;
			
				case 10:
					*uParam2 = 1784;
					break;
			
				case 11:
					*uParam2 = 1785;
					break;
			
				case 12:
					*uParam2 = 1786;
					break;
			
				case 13:
					*uParam2 = 1789;
					break;
			
				case 14:
					*uParam2 = 1790;
					break;
			
				case 15:
					*uParam2 = 1891;
					break;
			
				case 16:
					*uParam2 = 1892;
					break;
			
				case 17:
					*uParam2 = 1922;
					break;
			
				case 18:
					*uParam2 = 1940;
					break;
			
				case 19:
					*uParam2 = 1941;
					break;
			
				case 20:
					*uParam2 = 1942;
					break;
			
				case 21:
					*uParam2 = 1943;
					break;
			
				case 22:
					*uParam2 = 1944;
					break;
			
				case 23:
					*uParam2 = 2045;
					break;
			
				case 24:
					*uParam2 = 2046;
					break;
			
				case 25:
					*uParam2 = 2080;
					break;
			
				case 26:
					*uParam2 = 2081;
					break;
			
				case 27:
					*uParam2 = 2082;
					break;
			
				case 28:
					*uParam2 = 2083;
					break;
			
				case 29:
					*uParam2 = 2084;
					break;
			
				case 30:
					*uParam2 = 2085;
					break;
			
				case 31:
					*uParam2 = 2086;
					break;
			
				case 32:
					*uParam2 = 2087;
					break;
			
				case 33:
					*uParam2 = 2088;
					break;
			
				case 34:
					*uParam2 = 2089;
					break;
			
				case 35:
					*uParam2 = 2328;
					break;
			
				case 36:
					*uParam2 = 2329;
					break;
			
				case 37:
					*uParam2 = 2395;
					break;
			
				case 38:
					*uParam2 = 2396;
					break;
			
				case 39:
					*uParam2 = 2397;
					break;
			
				case 40:
					*uParam2 = 2398;
					break;
			
				case 41:
					*uParam2 = 2463;
					break;
			
				case 42:
					*uParam2 = 2464;
					break;
			
				case 43:
					*uParam2 = 2465;
					break;
			
				case 44:
					*uParam2 = 2466;
					break;
			
				case 45:
					*uParam2 = 2467;
					break;
			
				case 46:
					*uParam2 = 2468;
					break;
			
				case 47:
					*uParam2 = 2469;
					break;
			
				case 48:
					*uParam2 = 2470;
					break;
			
				case 49:
					*uParam2 = 2471;
					break;
			
				case 50:
					*uParam2 = 2472;
					break;
			
				case 51:
					*uParam2 = 2603;
					break;
			
				case 52:
					*uParam2 = 2604;
					break;
			
				case 53:
					*uParam2 = 2605;
					break;
			
				case 54:
					*uParam2 = 2606;
					break;
			
				case 55:
					*uParam2 = 2607;
					break;
			
				case 56:
					*uParam2 = 2608;
					break;
			
				case 57:
					*uParam2 = 2609;
					break;
			
				case 58:
					*uParam2 = 2610;
					break;
			
				case 59:
					*uParam2 = 2611;
					break;
			
				case 60:
					*uParam2 = 2612;
					break;
			
				case 61:
					*uParam2 = 2613;
					break;
			
				case 62:
					*uParam2 = 3205;
					break;
			
				case 63:
					*uParam2 = 3206;
					break;
			
				case 64:
					*uParam2 = 3207;
					break;
			
				case 65:
					*uParam2 = 3208;
					break;
			
				case 66:
					*uParam2 = 3209;
					break;
			
				case 67:
					*uParam2 = 3210;
					break;
			
				case 68:
					*uParam2 = 3682;
					break;
			
				case 69:
					*uParam2 = 3683;
					break;
			
				case 70:
					*uParam2 = 3684;
					break;
			
				case 71:
					*uParam2 = 3685;
					break;
			
				case 72:
					*uParam2 = 3686;
					break;
			
				case 73:
					*uParam2 = 3687;
					break;
			
				case 74:
					*uParam2 = 3688;
					break;
			
				case 75:
					*uParam2 = 3689;
					break;
			
				case 76:
					*uParam2 = 3690;
					break;
			
				case 77:
					*uParam2 = 3691;
					break;
			
				case 78:
					*uParam2 = 3803;
					break;
			
				case 79:
					*uParam2 = 3804;
					break;
			
				case 80:
					*uParam2 = 3805;
					break;
			
				case 81:
					*uParam2 = 3806;
					break;
			
				case 82:
					*uParam2 = 3807;
					break;
			
				case 83:
					*uParam2 = 3808;
					break;
			
				case 84:
					*uParam2 = 3809;
					break;
			
				case 85:
					*uParam2 = 3810;
					break;
			
				case 86:
					*uParam2 = 3908;
					break;
			
				case 87:
					*uParam2 = 3909;
					break;
			
				case 88:
					*uParam2 = 3910;
					break;
			
				case 89:
					*uParam2 = 5352;
					break;
			
				case 90:
					*uParam2 = 5353;
					break;
			
				case 91:
					*uParam2 = 5354;
					break;
			
				case 92:
					*uParam2 = 5355;
					break;
			
				case 93:
					*uParam2 = 5356;
					break;
			
				case 94:
					*uParam2 = 5357;
					break;
			
				case 95:
					*uParam2 = 5358;
					break;
			
				case 96:
					*uParam2 = 5359;
					break;
			
				case 97:
					*uParam2 = 5360;
					break;
			
				case 98:
					*uParam2 = 5361;
					break;
			
				case 99:
					*uParam2 = 5362;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 100:
					*uParam2 = 5363;
					break;
			
				case 101:
					*uParam2 = 5420;
					break;
			
				case 102:
					*uParam2 = 5421;
					break;
			
				case 103:
					*uParam2 = 5422;
					break;
			
				case 104:
					*uParam2 = 5423;
					break;
			
				case 105:
					*uParam2 = 5424;
					break;
			
				case 106:
					*uParam2 = 5425;
					break;
			
				case 107:
					*uParam2 = 5426;
					break;
			
				case 108:
					*uParam2 = 5427;
					break;
			
				case 109:
					*uParam2 = 5428;
					break;
			
				case 110:
					*uParam2 = 5429;
					break;
			
				case 111:
					*uParam2 = 5430;
					break;
			
				case 112:
					*uParam2 = 5431;
					break;
			
				case 113:
					*uParam2 = 5432;
					break;
			
				case 114:
					*uParam2 = 5433;
					break;
			
				case 115:
					*uParam2 = 5434;
					break;
			
				case 116:
					*uParam2 = 5435;
					break;
			
				case 117:
					*uParam2 = 5436;
					break;
			
				case 118:
					*uParam2 = 5437;
					break;
			
				case 119:
					*uParam2 = 5438;
					break;
			
				case 120:
					*uParam2 = 5439;
					break;
			
				case 121:
					*uParam2 = 5440;
					break;
			
				case 122:
					*uParam2 = 5441;
					break;
			
				case 123:
					*uParam2 = 5442;
					break;
			
				case 124:
					*uParam2 = 6140;
					break;
			
				case 125:
					*uParam2 = 6141;
					break;
			
				case 126:
					*uParam2 = 6142;
					break;
			
				case 127:
					*uParam2 = 6143;
					break;
			
				case 128:
					*uParam2 = 6144;
					break;
			
				case 129:
					*uParam2 = 6145;
					break;
			
				case 130:
					*uParam2 = 6146;
					break;
			
				case 131:
					*uParam2 = 6147;
					break;
			
				case 132:
					*uParam2 = 6148;
					break;
			
				case 133:
					*uParam2 = 6149;
					break;
			
				case 134:
					*uParam2 = 6150;
					break;
			
				case 135:
					*uParam2 = 6151;
					break;
			
				case 136:
					*uParam2 = 6152;
					break;
			
				case 137:
					*uParam2 = 6153;
					break;
			
				case 138:
					*uParam2 = 6154;
					break;
			
				case 139:
					*uParam2 = 6453;
					break;
			
				case 140:
					*uParam2 = 6454;
					break;
			
				case 141:
					*uParam2 = 6455;
					break;
			
				case 142:
					*uParam2 = 6456;
					break;
			
				case 143:
					*uParam2 = 6457;
					break;
			
				case 144:
					*uParam2 = 6458;
					break;
			
				case 145:
					*uParam2 = 6459;
					break;
			
				case 146:
					*uParam2 = 6460;
					break;
			
				case 147:
					*uParam2 = 6461;
					break;
			
				case 148:
					*uParam2 = 6462;
					break;
			
				case 149:
					*uParam2 = 6463;
					break;
			
				case 150:
					*uParam2 = 6464;
					break;
			
				case 151:
					*uParam2 = 6465;
					break;
			
				case 152:
					*uParam2 = 6466;
					break;
			
				case 153:
					*uParam2 = 6467;
					break;
			
				case 154:
					*uParam2 = 7276;
					break;
			
				case 155:
					*uParam2 = 7277;
					break;
			
				case 156:
					*uParam2 = 7278;
					break;
			
				case 157:
					*uParam2 = 7279;
					break;
			
				case 158:
					*uParam2 = 7280;
					break;
			
				case 159:
					*uParam2 = 7281;
					break;
			
				case 160:
					*uParam2 = 7282;
					break;
			
				case 161:
					*uParam2 = 7897;
					break;
			
				case 162:
					*uParam2 = 7898;
					break;
			
				case 163:
					*uParam2 = 7899;
					break;
			
				case 164:
					*uParam2 = 7900;
					break;
			
				case 165:
					*uParam2 = 7901;
					break;
			
				case 166:
					*uParam2 = 7902;
					break;
			
				case 167:
					*uParam2 = 7903;
					break;
			
				case 168:
					*uParam2 = 7904;
					break;
			
				case 169:
					*uParam2 = 7905;
					break;
			
				case 170:
					*uParam2 = 7906;
					break;
			
				case 171:
					*uParam2 = 7907;
					break;
			
				case 172:
					*uParam2 = 7908;
					break;
			
				case 173:
					*uParam2 = 7909;
					break;
			
				case 174:
					*uParam2 = 7910;
					break;
			
				case 175:
					*uParam2 = 7911;
					break;
			
				case 176:
					*uParam2 = 8327;
					break;
			
				case 177:
					*uParam2 = 8328;
					break;
			
				case 178:
					*uParam2 = 8329;
					break;
			
				case 179:
					*uParam2 = 8330;
					break;
			
				case 180:
					*uParam2 = 8331;
					break;
			
				case 181:
					*uParam2 = 8332;
					break;
			
				case 182:
					*uParam2 = 8333;
					break;
			
				case 183:
					*uParam2 = 8334;
					break;
			
				case 184:
					*uParam2 = 8335;
					break;
			
				case 185:
					*uParam2 = 8336;
					break;
			
				case 186:
					*uParam2 = 8337;
					break;
			
				case 187:
					*uParam2 = 8338;
					break;
			
				case 188:
					*uParam2 = 8339;
					break;
			
				case 189:
					*uParam2 = 8340;
					break;
			
				case 190:
					*uParam2 = 8341;
					break;
			
				case 191:
					*uParam2 = 8342;
					break;
			
				case 192:
					*uParam2 = 8343;
					break;
			
				case 193:
					*uParam2 = 8344;
					break;
			
				case 194:
					*uParam2 = 8345;
					break;
			
				case 195:
					*uParam2 = 8346;
					break;
			
				case 196:
					*uParam2 = 8347;
					break;
			
				case 197:
					*uParam2 = 8348;
					break;
			
				case 198:
					*uParam2 = 8349;
					break;
			
				case 199:
					*uParam2 = 8350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 200:
					*uParam2 = 8351;
					break;
			
				case 201:
					*uParam2 = 8946;
					break;
			
				case 202:
					*uParam2 = 8947;
					break;
			
				case 203:
					*uParam2 = 8948;
					break;
			
				case 204:
					*uParam2 = 8949;
					break;
			
				case 205:
					*uParam2 = 8950;
					break;
			
				case 206:
					*uParam2 = 9449;
					break;
			
				case 207:
					*uParam2 = 9450;
					break;
			
				case 208:
					*uParam2 = 9451;
					break;
			
				case 209:
					*uParam2 = 9452;
					break;
			
				case 210:
					*uParam2 = 9453;
					break;
			
				case 211:
					*uParam2 = 9454;
					break;
			
				case 212:
					*uParam2 = 9455;
					break;
			
				case 213:
					*uParam2 = 9456;
					break;
			
				case 214:
					*uParam2 = 9457;
					break;
			
				case 215:
					*uParam2 = 9458;
					break;
			
				case 216:
					*uParam2 = 9459;
					break;
			
				case 217:
					*uParam2 = 9460;
					break;
			
				case 218:
					*uParam2 = 9461;
					break;
			
				case 219:
					*uParam2 = 9462;
					break;
			
				case 220:
					*uParam2 = 9463;
					break;
			
				case 221:
					*uParam2 = 9464;
					break;
			
				case 222:
					*uParam2 = 9465;
					break;
			
				case 223:
					*uParam2 = 9466;
					break;
			
				case 224:
					*uParam2 = 9467;
					break;
			
				case 225:
					*uParam2 = 9468;
					break;
			
				case 226:
					*uParam2 = 9469;
					break;
			
				case 227:
					*uParam2 = 9470;
					break;
			
				case 228:
					*uParam2 = 9471;
					break;
			
				case 229:
					*uParam2 = 9472;
					break;
			
				case 230:
					*uParam2 = 9473;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 231:
					*uParam2 = 10324;
					break;
			
				case 232:
					*uParam2 = 10325;
					break;
			
				case 233:
					*uParam2 = 10326;
					break;
			
				case 234:
					*uParam2 = 10327;
					break;
			
				case 235:
					*uParam2 = 10328;
					break;
			
				case 236:
					*uParam2 = 10329;
					break;
			
				case 237:
					*uParam2 = 10330;
					break;
			
				case 238:
					*uParam2 = 10331;
					break;
			
				case 239:
					*uParam2 = 10332;
					break;
			
				case 240:
					*uParam2 = 10333;
					break;
			
				case 241:
					*uParam2 = 10334;
					break;
			
				case 242:
					*uParam2 = 10335;
					break;
			
				case 243:
					*uParam2 = 10336;
					break;
			
				case 244:
					*uParam2 = 10337;
					break;
			
				case 245:
					*uParam2 = 10338;
					break;
			
				case 246:
					*uParam2 = 10339;
					break;
			
				case 247:
					*uParam2 = 10340;
					break;
			
				case 248:
					*uParam2 = 10341;
					break;
			
				case 249:
					*uParam2 = 10342;
					break;
			
				case 250:
					*uParam2 = 10343;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 251:
					*uParam2 = 10430;
					break;
			
				case 252:
					*uParam2 = 10431;
					break;
			
				case 253:
					*uParam2 = 10432;
					break;
			
				case 254:
					*uParam2 = 10433;
					break;
			
				case 255:
					*uParam2 = 10434;
					break;
			
				case 256:
					*uParam2 = 10435;
					break;
			
				case 257:
					*uParam2 = 10436;
					break;
			
				case 258:
					*uParam2 = 10437;
					break;
			
				case 259:
					*uParam2 = 10438;
					break;
			
				case 260:
					*uParam2 = 10439;
					break;
			
				case 261:
					*uParam2 = 11857;
					break;
			
				case 262:
					*uParam2 = 11858;
					break;
			
				case 263:
					*uParam2 = 11859;
					break;
			
				case 264:
					*uParam2 = 11860;
					break;
			
				case 265:
					*uParam2 = 11861;
					break;
			
				case 266:
					*uParam2 = 11862;
					break;
			
				case 267:
					*uParam2 = 11863;
					break;
			
				case 268:
					*uParam2 = 11864;
					break;
			
				case 269:
					*uParam2 = 11865;
					break;
			
				case 270:
					*uParam2 = 11866;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 271:
					*uParam2 = 11890;
					break;
			
				case 272:
					*uParam2 = 11891;
					break;
			
				case 273:
					*uParam2 = 11892;
					break;
			
				case 274:
					*uParam2 = 11893;
					break;
			
				case 275:
					*uParam2 = 11894;
					break;
			
				case 276:
					*uParam2 = 11895;
					break;
			
				case 277:
					*uParam2 = 11896;
					break;
			
				case 278:
					*uParam2 = 11897;
					break;
			
				case 279:
					*uParam2 = 11898;
					break;
			
				case 280:
					*uParam2 = 11899;
					break;
			
				case 281:
					*uParam2 = 11900;
					break;
			
				case 282:
					*uParam2 = 11901;
					break;
			
				case 283:
					*uParam2 = 11991;
					break;
			
				case 284:
					*uParam2 = 11992;
					break;
			
				case 285:
					*uParam2 = 11993;
					break;
			
				case 286:
					*uParam2 = 11994;
					break;
			
				case 287:
					*uParam2 = 11995;
					break;
			
				case 288:
					*uParam2 = 11996;
					break;
			
				case 289:
					*uParam2 = 11997;
					break;
			
				case 290:
					*uParam2 = 11998;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 291:
					*uParam2 = 11999;
					break;
			
				case 292:
					*uParam2 = 12000;
					break;
			
				case 293:
					*uParam2 = 12001;
					break;
			
				case 294:
					*uParam2 = 12002;
					break;
			
				case 295:
					*uParam2 = 12003;
					break;
			
				case 296:
					*uParam2 = 12004;
					break;
			
				case 297:
					*uParam2 = 12005;
					break;
			
				case 298:
					*uParam2 = 12198;
					break;
			
				case 299:
					*uParam2 = 12199;
					break;
			
				case 300:
					*uParam2 = 12200;
					break;
			
				case 301:
					*uParam2 = 12201;
					break;
			
				case 302:
					*uParam2 = 12202;
					break;
			
				case 303:
					*uParam2 = 12203;
					break;
			
				case 304:
					*uParam2 = 12204;
					break;
			
				case 305:
					*uParam2 = 12205;
					break;
			
				case 306:
					*uParam2 = 12337;
					break;
			
				case 307:
					*uParam2 = 12338;
					break;
			
				case 308:
					*uParam2 = 12339;
					break;
			
				case 309:
					*uParam2 = 12340;
					break;
			
				case 310:
					*uParam2 = 12341;
					break;
			}
			break;
	}

	*uParam3 = fmMaleShopPedApparelItemIndex % 32;
	return *uParam2 != 14835;
}

BOOL func_0x937D8816(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_0xE4C61EBD(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
	
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	}

	return 0;
}

void func_0xEDA496E8(int iParam0, Hash hParam1)
{
	int num;

	num = 0;
	Global_79172[0].f_5 = 4;
	func_0xE3509264(num, iParam0, 0, hParam1);
	return;
}

void func_0xE3509264(int iParam0, int iParam1, int iParam2, Hash hParam3)
{
	int num;
	int num2;
	Hash outfit;
	int outfitIndex;
	int num3;
	Hash outProp;
	int num4;
	int componentId;
	int num5;
	Hash outComponent;
	int componentId2;
	int num6;

	num = iParam1 - iParam2;
	num = num;

	if (num < 0)
		return;

	num2 = Global_79172[0].f_5;

	if (iParam0 == 12)
	{
		outfitIndex = iParam1 - iParam2;
	
		if (outfitIndex >= 0)
		{
			num3 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num2, false);
		
			if (num3 > outfitIndex)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(outfitIndex, &outfit);
				Global_2883588 = outfit.f_1;
				Global_2883589 = outfit;
				func_0xA2DFD38C(&Global_79172[0], iParam0, iParam1, &(outfit.f_7), 0, 0, outfit.f_2, false, -1, 2, true);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_0xA2DFD38C(&Global_79172[0], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&outProp);
		componentId = iParam1 - iParam2;
	
		if (componentId >= 0)
		{
			num5 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, true, -1, -1);
		
			if (num5 > componentId)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
			
				if (outProp.f_6 == 0)
					num4 = 9;
				else if (outProp.f_6 == 1)
					num4 = 10;
				else if (outProp.f_6 == 2)
					num4 = 2;
				else if (outProp.f_6 == 3)
					num4 = 3;
				else if (outProp.f_6 == 4)
					num4 = 4;
				else if (outProp.f_6 == 5)
					num4 = 5;
				else if (outProp.f_6 == 6)
					num4 = 6;
				else if (outProp.f_6 == 7)
					num4 = 7;
				else if (outProp.f_6 == 8)
					num4 = 8;
				else
					num4 = -1;
			
				Global_2883588 = outProp.f_1;
				Global_2883589 = outProp;
				func_0xA2DFD38C(&Global_79172[0], iParam0, iParam1, &(outProp.f_9), outProp.f_3, outProp.f_4, outProp.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outProp.f_1, joaat("OUTFIT_ONLY"), 0), num4, 2, outProp.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
	
		if (hParam3 != -1 && Global_79370)
		{
			FILES::GET_SHOP_PED_COMPONENT(hParam3, &outComponent);
			Global_2883588 = outComponent.f_1;
			Global_2883589 = outComponent;
			func_0xA2DFD38C(&Global_79172[0], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 != 0);
			return;
		}
	
		componentId2 = iParam1 - iParam2;
	
		if (componentId2 >= 0)
		{
			num6 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, false, -1, func_0xF91DA7A7(iParam0));
		
			if (num6 > componentId2)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
				Global_2883588 = outComponent.f_1;
				Global_2883589 = outComponent;
				func_0xA2DFD38C(&Global_79172[0], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 != 0);
				return;
			}
		}
	}

	return;
}

void func_0x5C1D2F91(int iParam0, Hash hParam1)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		default:
			Global_79172[0].f_5 = 4;
			func_0xE3509264(num6, iParam0, 9, hParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "HA_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num3, 16);
	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0x34BAB0FD(int iParam0, Hash hParam1)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S1" /*The Indie Heart*/, 16);
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S2" /*The Kitten*/, 16);
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S3" /*The Vacation*/, 16);
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S4" /*The Girly*/, 16);
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S5" /*The Standout*/, 16);
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S6" /*The Streetwise*/, 16);
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S7" /*The Butterfly*/, 16);
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S8" /*The Festival*/, 16);
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P1" /*The Interview*/, 16);
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P2" /*The Red Hot*/, 16);
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P3" /*The Upmarket*/, 16);
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P4" /*The Power Suit*/, 16);
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P5" /*The Versatile*/, 16);
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P6" /*The Egyptian*/, 16);
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P7" /*The Chalet*/, 16);
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P8" /*The Cougar*/, 16);
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P9" /*The Spring Break*/, 16);
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P10" /*The Yacht Club*/, 16);
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B1" /*The Holla Over*/, 16);
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B2" /*The Tough Chick*/, 16);
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B3" /*The Chica*/, 16);
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B4" /*The Tomboy*/, 16);
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B5" /*The Basics*/, 16);
			break;
	
		case 24:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B6" /*The Young Luck*/, 16);
			break;
	
		case 25:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B7" /*The Workout*/, 16);
			break;
	
		case 26:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B8" /*The She Devil*/, 16);
			break;
	
		case 27:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B9" /*The Beach Beauty*/, 16);
			break;
	
		default:
			Global_79172[0].f_5 = 4;
			func_0xE3509264(num6, iParam0, 28, hParam1);
			return;
	}

	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0x859154FC(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 14;
	num6 = 0;

	switch (iParam0)
	{
		case 0:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 0;
			break;
	
		case 1:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 1;
			break;
	
		case 2:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 2;
			break;
	
		case 3:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 3;
			break;
	
		case 4:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 4;
			break;
	
		case 5:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 5;
			break;
	
		case 6:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 6;
			break;
	
		case 7:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 7;
			break;
	
		case 8:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_0" /*Red Ear Defenders*/, 16);
			num = 0;
			num2 = 0;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_1" /*Magenta Ear Defenders*/, 16);
			num = 0;
			num2 = 1;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_2" /*Green Ear Defenders*/, 16);
			num = 0;
			num2 = 2;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_3" /*Yellow Ear Defenders*/, 16);
			num = 0;
			num2 = 3;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_4" /*Desert Camo Ear Defenders*/, 16);
			num = 0;
			num2 = 4;
			value = 235;
			num3 = 0;
			num6 = 1;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_5" /*Blue Ear Defenders*/, 16);
			num = 0;
			num2 = 5;
			value = 80;
			num3 = 0;
			num6 = 1;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_6" /*Pale Blue Ear Defenders*/, 16);
			num = 0;
			num2 = 6;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_7" /*Orange Ear Defenders*/, 16);
			num = 0;
			num2 = 7;
			value = 90;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_1_0", 16);
			num = 1;
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_0", 16);
			num = 2;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_1" /*Pink Accent Cowgirl Hat*/, 16);
			num = 2;
			num2 = 1;
			value = 5000;
			num3 = 0;
			num6 = 1;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_2", 16);
			num = 2;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_3", 16);
			num = 2;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_4", 16);
			num = 2;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_5", 16);
			num = 2;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_6", 16);
			num = 2;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_7", 16);
			num = 2;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_0", 16);
			num = 3;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_1", 16);
			num = 3;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_2", 16);
			num = 3;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_3", 16);
			num = 3;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_4", 16);
			num = 3;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_5", 16);
			num = 3;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_6", 16);
			num = 3;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_7" /*Gray Plaid Canvas Hat*/, 16);
			num = 3;
			num2 = 7;
			value = 120;
			num3 = 0;
			num6 = 1;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_0" /*Black LS Fitted Cap*/, 16);
			num = 4;
			num2 = 0;
			value = 400;
			num3 = 0;
			num6 = 1;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_1" /*Fruntalot Fitted Cap*/, 16);
			num = 4;
			num2 = 1;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_2" /*Broker Fitted Cap*/, 16);
			num = 4;
			num2 = 2;
			value = 375;
			num3 = 0;
			num6 = 1;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_3" /*SA Fitted Cap*/, 16);
			num = 4;
			num2 = 3;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_4" /*SA Boars Fitted Cap*/, 16);
			num = 4;
			num2 = 4;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_5" /*Stank Fitted Cap*/, 16);
			num = 4;
			num2 = 5;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_6" /*Red Mist XI Fitted Cap*/, 16);
			num = 4;
			num2 = 6;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_7" /*LS Corkers Fitted Cap*/, 16);
			num = 4;
			num2 = 7;
			value = 325;
			num3 = 0;
			num6 = 1;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_0" /*Rearwall Black Beanie*/, 16);
			num = 5;
			num2 = 0;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_1" /*Crevis Ash Beanie*/, 16);
			num = 5;
			num2 = 1;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_2" /*Crevis Pink Beanie*/, 16);
			num = 5;
			num2 = 2;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_3" /*LS Panic Beanie*/, 16);
			num = 5;
			num2 = 3;
			value = 40;
			num3 = 0;
			num6 = 1;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_4" /*SA Beanie*/, 16);
			num = 5;
			num2 = 4;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_5" /*Hawaiian Snow Blue Beanie*/, 16);
			num = 5;
			num2 = 5;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_6" /*Rearwall Lime Beanie*/, 16);
			num = 5;
			num2 = 6;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_7" /*Hawaiian Snow Plaid Beanie*/, 16);
			num = 5;
			num2 = 7;
			value = 255;
			num3 = 0;
			num6 = 1;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_0" /*Black Military Cap*/, 16);
			num = 6;
			num2 = 0;
			value = 360;
			num3 = 0;
			num6 = 1;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_1" /*Green Military Cap*/, 16);
			num = 6;
			num2 = 1;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_2" /*Leopard Military Cap*/, 16);
			num = 6;
			num2 = 2;
			value = 3970;
			num3 = 0;
			num6 = 1;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_3" /*Tan Military Cap*/, 16);
			num = 6;
			num2 = 3;
			value = 135;
			num3 = 0;
			num6 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_4" /*Denim Military Cap*/, 16);
			num = 6;
			num2 = 4;
			value = 1355;
			num3 = 0;
			num6 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_5" /*Field Camo Military Cap*/, 16);
			num = 6;
			num2 = 5;
			value = 110;
			num3 = 0;
			num6 = 1;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_6" /*Desert Camo Military Cap*/, 16);
			num = 6;
			num2 = 6;
			value = 140;
			num3 = 0;
			num6 = 1;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_7" /*Woodland Camo Military Cap*/, 16);
			num = 6;
			num2 = 7;
			value = 130;
			num3 = 0;
			num6 = 1;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_0" /*Navy Flat Cap*/, 16);
			num = 7;
			num2 = 0;
			value = 230;
			num3 = 0;
			num6 = 1;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_1" /*White Flat Cap*/, 16);
			num = 7;
			num2 = 1;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_2" /*Gray Plaid Flat Cap*/, 16);
			num = 7;
			num2 = 2;
			value = 515;
			num3 = 0;
			num6 = 1;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_3" /*Brown Plaid Flat Cap*/, 16);
			num = 7;
			num2 = 3;
			value = 545;
			num3 = 0;
			num6 = 1;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_4" /*Red Flat Cap*/, 16);
			num = 7;
			num2 = 4;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_5" /*Pink Flat Cap*/, 16);
			num = 7;
			num2 = 5;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_6" /*Green Plaid Flat Cap*/, 16);
			num = 7;
			num2 = 6;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_7" /*Fruity Plaid Flat Cap*/, 16);
			num = 7;
			num2 = 7;
			value = 1440;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_0", 16);
			num = 8;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_1", 16);
			num = 8;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_2", 16);
			num = 8;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_3", 16);
			num = 8;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_4", 16);
			num = 8;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_5", 16);
			num = 8;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_6", 16);
			num = 8;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_7", 16);
			num = 8;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_0" /*Fruit Cap*/, 16);
			num = 9;
			num2 = 0;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_1" /*247 Cap*/, 16);
			num = 9;
			num2 = 1;
			value = 25;
			num3 = 0;
			num6 = 1;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_2" /*Fred's Cap*/, 16);
			num = 9;
			num2 = 2;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_3" /*US Post LS Cap*/, 16);
			num = 9;
			num2 = 3;
			value = 25;
			num3 = 0;
			num6 = 1;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_4" /*Swallow Cap*/, 16);
			num = 9;
			num2 = 4;
			value = 50;
			num3 = 0;
			num6 = 1;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_5" /*CNT Cap*/, 16);
			num = 9;
			num2 = 5;
			value = 40;
			num3 = 0;
			num6 = 1;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_6" /*Peachy Chics Snakeskin Cap*/, 16);
			num = 9;
			num2 = 6;
			value = 575;
			num3 = 0;
			num6 = 1;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_7" /*Peachy Chics Leopard Cap*/, 16);
			num = 9;
			num2 = 7;
			value = 605;
			num3 = 0;
			num6 = 1;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_0", 16);
			num = 10;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_1", 16);
			num = 10;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_2", 16);
			num = 10;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_3", 16);
			num = 10;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_4", 16);
			num = 10;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_5", 16);
			num = 10;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_6", 16);
			num = 10;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_7" /*Tan Patterned Cap*/, 16);
			num = 10;
			num2 = 7;
			value = 285;
			num3 = 0;
			num6 = 1;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_0", 16);
			num = 11;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_1" /*Black Sun Hat*/, 16);
			num = 11;
			num2 = 1;
			value = 2125;
			num3 = 0;
			num6 = 1;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_2", 16);
			num = 11;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_3", 16);
			num = 11;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_4", 16);
			num = 11;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_5", 16);
			num = 11;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_6", 16);
			num = 11;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_7", 16);
			num = 11;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_0" /*Black Saggy Beanie*/, 16);
			num = 12;
			num2 = 0;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_1", 16);
			num = 12;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_2", 16);
			num = 12;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_3", 16);
			num = 12;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_4", 16);
			num = 12;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_5", 16);
			num = 12;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_6" /*Hawaiian Snow Saggy Beanie*/, 16);
			num = 12;
			num2 = 6;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_7" /*Yeti Saggy Beanie*/, 16);
			num = 12;
			num2 = 7;
			value = 295;
			num3 = 0;
			num6 = 1;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_0" /*Tan Straw Hat*/, 16);
			num = 13;
			num2 = 0;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_1" /*Two-Tone Straw Hat*/, 16);
			num = 13;
			num2 = 1;
			value = 200;
			num3 = 0;
			num6 = 1;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_2" /*Brown Straw Hat*/, 16);
			num = 13;
			num2 = 2;
			value = 160;
			num3 = 0;
			num6 = 1;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_3" /*Safari Straw Hat*/, 16);
			num = 13;
			num2 = 3;
			value = 855;
			num3 = 0;
			num6 = 1;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_4" /*Gray Patterned Straw Hat*/, 16);
			num = 13;
			num2 = 4;
			value = 1615;
			num3 = 0;
			num6 = 1;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_5" /*Brown Striped Straw Hat*/, 16);
			num = 13;
			num2 = 5;
			value = 1130;
			num3 = 0;
			num6 = 1;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_6" /*Gray Straw Hat*/, 16);
			num = 13;
			num2 = 6;
			value = 165;
			num3 = 0;
			num6 = 1;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_7" /*Navy Straw Hat*/, 16);
			num = 13;
			num2 = 7;
			value = 215;
			num3 = 0;
			num6 = 1;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_0" /*Black Beret*/, 16);
			num = 14;
			num2 = 0;
			value = 145;
			num3 = 0;
			num6 = 1;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_1" /*Cherry Beret*/, 16);
			num = 14;
			num2 = 1;
			value = 250;
			num3 = 0;
			num6 = 1;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_2" /*Purple Beret*/, 16);
			num = 14;
			num2 = 2;
			value = 110;
			num3 = 0;
			num6 = 1;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_3" /*White Beret*/, 16);
			num = 14;
			num2 = 3;
			value = 145;
			num3 = 0;
			num6 = 1;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_4" /*Gray Beret*/, 16);
			num = 14;
			num2 = 4;
			value = 105;
			num3 = 0;
			num6 = 1;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_5" /*Navy Beret*/, 16);
			num = 14;
			num2 = 5;
			value = 105;
			num3 = 0;
			num6 = 1;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_6" /*Tan Beret*/, 16);
			num = 14;
			num2 = 6;
			value = 115;
			num3 = 0;
			num6 = 1;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_7" /*Magenta Beret*/, 16);
			num = 14;
			num2 = 7;
			value = 115;
			num3 = 0;
			num6 = 1;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_0" /*Beat Off White Headphones*/, 16);
			num = 15;
			num2 = 0;
			value = 390;
			num3 = 0;
			num6 = 1;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_1" /*Beat Off Black Headphones*/, 16);
			num = 15;
			num2 = 1;
			value = 395;
			num3 = 0;
			num6 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_2" /*Beat Off Red Headphones*/, 16);
			num = 15;
			num2 = 2;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_3" /*Beat Off Gray Headphones*/, 16);
			num = 15;
			num2 = 3;
			value = 425;
			num3 = 0;
			num6 = 1;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_4" /*Beat Off Navy Headphones*/, 16);
			num = 15;
			num2 = 4;
			value = 600;
			num3 = 0;
			num6 = 1;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_5" /*Beat Off Purple Headphones*/, 16);
			num = 15;
			num2 = 5;
			value = 590;
			num3 = 0;
			num6 = 1;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_6" /*Beat Off Pink Headphones*/, 16);
			num = 15;
			num2 = 6;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_7" /*Beat Off Orange Headphones*/, 16);
			num = 15;
			num2 = 7;
			value = 555;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_0" /*Western MC Yellow Helmet*/, 16);
			num = 16;
			num2 = 0;
			value = 1060;
			num3 = 0;
			num6 = 2;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_1" /*Steel Horse Blue Helmet*/, 16);
			num = 16;
			num2 = 1;
			value = 1400;
			num3 = 0;
			num6 = 2;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_2" /*Steel Horse Orange Helmet*/, 16);
			num = 16;
			num2 = 2;
			value = 1315;
			num3 = 0;
			num6 = 2;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_3" /*Western MC Green Helmet*/, 16);
			num = 16;
			num2 = 3;
			value = 1230;
			num3 = 0;
			num6 = 2;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_4" /*Western MC Red Helmet*/, 16);
			num = 16;
			num2 = 4;
			value = 1145;
			num3 = 0;
			num6 = 2;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_5" /*Steel Horse Black Helmet*/, 16);
			num = 16;
			num2 = 5;
			value = 8450;
			num3 = 0;
			num6 = 2;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_6" /*Black Helmet*/, 16);
			num = 16;
			num2 = 6;
			value = 675;
			num3 = 0;
			num6 = 2;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_7" /*Western MC Lilac Helmet*/, 16);
			num = 16;
			num2 = 7;
			value = 8750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_0" /*Blue Open-Face Helmet*/, 16);
			num = 17;
			num2 = 0;
			value = 975;
			num3 = 0;
			num6 = 2;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_1" /*Orange Open-Face Helmet*/, 16);
			num = 17;
			num2 = 1;
			value = 750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_2" /*Pale Blue Open-Face Helmet*/, 16);
			num = 17;
			num2 = 2;
			value = 865;
			num3 = 0;
			num6 = 2;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_3" /*Red Open-Face Helmet*/, 16);
			num = 17;
			num2 = 3;
			value = 890;
			num3 = 0;
			num6 = 2;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_4" /*Gray Open-Face Helmet*/, 16);
			num = 17;
			num2 = 4;
			value = 730;
			num3 = 0;
			num6 = 2;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_5" /*Black Open-Face Helmet*/, 16);
			num = 17;
			num2 = 5;
			value = 650;
			num3 = 0;
			num6 = 2;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_6" /*Pink Open-Face Helmet*/, 16);
			num = 17;
			num2 = 6;
			value = 645;
			num3 = 0;
			num6 = 2;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_7" /*White Open-Face Helmet*/, 16);
			num = 17;
			num2 = 7;
			value = 755;
			num3 = 0;
			num6 = 2;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_0" /*Shatter Pattern Helmet*/, 16);
			num = 18;
			num2 = 0;
			value = 13850;
			num3 = 0;
			num6 = 2;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_1" /*Stars Helmet*/, 16);
			num = 18;
			num2 = 1;
			value = 2900;
			num3 = 0;
			num6 = 2;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_2" /*Squared Helmet*/, 16);
			num = 18;
			num2 = 2;
			value = 2895;
			num3 = 0;
			num6 = 2;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_3" /*Crimson Helmet*/, 16);
			num = 18;
			num2 = 3;
			value = 12500;
			num3 = 0;
			num6 = 2;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_4" /*Skull Helmet*/, 16);
			num = 18;
			num2 = 4;
			value = 15000;
			num3 = 0;
			num6 = 2;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_5" /*Ace of Spades Helmet*/, 16);
			num = 18;
			num2 = 5;
			value = 14750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_6" /*Flamejob Helmet*/, 16);
			num = 18;
			num2 = 6;
			value = 13150;
			num3 = 0;
			num6 = 2;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_7" /*White Helmet*/, 16);
			num = 18;
			num2 = 7;
			value = 2925;
			num3 = 0;
			num6 = 2;
			break;
	}

	switch (iParam0)
	{
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_0" /*Hornet Sports Shades*/, 16);
			num = 0;
			num2 = 0;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_1" /*Two-Tone Sports Shades*/, 16);
			num = 0;
			num2 = 1;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_2" /*Orange Sports Shades*/, 16);
			num = 0;
			num2 = 2;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_3" /*Blue Sports Shades*/, 16);
			num = 0;
			num2 = 3;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_4" /*Marble Sports Shades*/, 16);
			num = 0;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_5" /*Purple Sports Shades*/, 16);
			num = 0;
			num2 = 5;
			value = 80;
			num3 = 1;
			num6 = 3;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_6" /*Topaz Sports Shades*/, 16);
			num = 0;
			num2 = 6;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_7" /*Beige Sports Shades*/, 16);
			num = 0;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_8", 16);
			num = 0;
			num2 = 8;
			value = 820;
			num3 = 1;
			num6 = 3;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_9", 16);
			num = 0;
			num2 = 9;
			value = 435;
			num3 = 1;
			num6 = 3;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_10", 16);
			num = 0;
			num2 = 10;
			value = 500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_0" /*Copper Marbles*/, 16);
			num = 1;
			num2 = 0;
			value = 160;
			num3 = 1;
			num6 = 3;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_1" /*Blue Tint Marbles*/, 16);
			num = 1;
			num2 = 1;
			value = 165;
			num3 = 1;
			num6 = 3;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_2" /*Black Marbles*/, 16);
			num = 1;
			num2 = 2;
			value = 170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_3" /*Purple Marbles*/, 16);
			num = 1;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_4" /*Teal Marbles*/, 16);
			num = 1;
			num2 = 4;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_5" /*Red Tint Marbles*/, 16);
			num = 1;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_6" /*White Marbles*/, 16);
			num = 1;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_7" /*Pink Tint Marbles*/, 16);
			num = 1;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_8", 16);
			num = 1;
			num2 = 8;
			value = 970;
			num3 = 1;
			num6 = 3;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_9", 16);
			num = 1;
			num2 = 9;
			value = 585;
			num3 = 1;
			num6 = 3;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_10", 16);
			num = 1;
			num2 = 10;
			value = 650;
			num3 = 1;
			num6 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_0" /*Marble Mademoiselles*/, 16);
			num = 2;
			num2 = 0;
			value = 180;
			num3 = 1;
			num6 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_1" /*Copper Mademoiselles*/, 16);
			num = 2;
			num2 = 1;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_2" /*Orange Tint Mademoiselles*/, 16);
			num = 2;
			num2 = 2;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_3" /*Pink Tint Mademoiselles*/, 16);
			num = 2;
			num2 = 3;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_4" /*Walnut Mademoiselles*/, 16);
			num = 2;
			num2 = 4;
			value = 595;
			num3 = 1;
			num6 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_5" /*Black Mademoiselles*/, 16);
			num = 2;
			num2 = 5;
			value = 160;
			num3 = 1;
			num6 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_6" /*Vintage Red Mademoiselles*/, 16);
			num = 2;
			num2 = 6;
			value = 545;
			num3 = 1;
			num6 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_7" /*Gold Mademoiselles*/, 16);
			num = 2;
			num2 = 7;
			value = 590;
			num3 = 1;
			num6 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_8", 16);
			num = 2;
			num2 = 8;
			value = 1125;
			num3 = 1;
			num6 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_9", 16);
			num = 2;
			num2 = 9;
			value = 740;
			num3 = 1;
			num6 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_10", 16);
			num = 2;
			num2 = 10;
			value = 805;
			num3 = 1;
			num6 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_0" /*Zebra Shields*/, 16);
			num = 3;
			num2 = 0;
			value = 6250;
			num3 = 1;
			num6 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_1" /*Ombre Shields*/, 16);
			num = 3;
			num2 = 1;
			value = 4065;
			num3 = 1;
			num6 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_2" /*Flame Shields*/, 16);
			num = 3;
			num2 = 2;
			value = 3585;
			num3 = 1;
			num6 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_3" /*Violet Shields*/, 16);
			num = 3;
			num2 = 3;
			value = 4075;
			num3 = 1;
			num6 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_4" /*Sun Shields*/, 16);
			num = 3;
			num2 = 4;
			value = 4935;
			num3 = 1;
			num6 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_5" /*Silver Accent Shields*/, 16);
			num = 3;
			num2 = 5;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_6" /*Party Shields*/, 16);
			num = 3;
			num2 = 6;
			value = 5600;
			num3 = 1;
			num6 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_7" /*Gold Shields*/, 16);
			num = 3;
			num2 = 7;
			value = 4790;
			num3 = 1;
			num6 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_8", 16);
			num = 3;
			num2 = 8;
			value = 2315;
			num3 = 1;
			num6 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_9", 16);
			num = 3;
			num2 = 9;
			value = 1930;
			num3 = 1;
			num6 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_10", 16);
			num = 3;
			num2 = 10;
			value = 1995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_0" /*Deep Walnut Retro*/, 16);
			num = 4;
			num2 = 0;
			value = 2245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_1" /*Marble Retro*/, 16);
			num = 4;
			num2 = 1;
			value = 250;
			num3 = 1;
			num6 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_2" /*Beige Retro*/, 16);
			num = 4;
			num2 = 2;
			value = 210;
			num3 = 1;
			num6 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_3" /*Aqua Retro*/, 16);
			num = 4;
			num2 = 3;
			value = 245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_4" /*Dice Retro*/, 16);
			num = 4;
			num2 = 4;
			value = 1205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_5" /*Black Retro*/, 16);
			num = 4;
			num2 = 5;
			value = 205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_6" /*Toffee Retro*/, 16);
			num = 4;
			num2 = 6;
			value = 2215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_7" /*Red Retro*/, 16);
			num = 4;
			num2 = 7;
			value = 215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_8", 16);
			num = 4;
			num2 = 8;
			value = 2835;
			num3 = 1;
			num6 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_9", 16);
			num = 4;
			num2 = 9;
			value = 2450;
			num3 = 1;
			num6 = 3;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_10", 16);
			num = 4;
			num2 = 10;
			value = 2515;
			num3 = 1;
			num6 = 3;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_0", 16);
			num = 5;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_1", 16);
			num = 5;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_2", 16);
			num = 5;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_3", 16);
			num = 5;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_4", 16);
			num = 5;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_5", 16);
			num = 5;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_6", 16);
			num = 5;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_7", 16);
			num = 5;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_8", 16);
			num = 5;
			num2 = 8;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_9", 16);
			num = 5;
			num2 = 9;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_10", 16);
			num = 5;
			num2 = 10;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_0" /*Purple Tint Bugs*/, 16);
			num = 6;
			num2 = 0;
			value = 5000;
			num3 = 1;
			num6 = 3;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_1", 16);
			num = 6;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_2", 16);
			num = 6;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_3", 16);
			num = 6;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_4", 16);
			num = 6;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_5", 16);
			num = 6;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_6", 16);
			num = 6;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_7", 16);
			num = 6;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_8", 16);
			num = 6;
			num2 = 8;
			value = 2820;
			num3 = 1;
			num6 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_9", 16);
			num = 6;
			num2 = 9;
			value = 2435;
			num3 = 1;
			num6 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_10", 16);
			num = 6;
			num2 = 10;
			value = 2500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_0" /*Champagne Figure 8s*/, 16);
			num = 7;
			num2 = 0;
			value = 4815;
			num3 = 1;
			num6 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_1" /*Platinum Figure 8s*/, 16);
			num = 7;
			num2 = 1;
			value = 4795;
			num3 = 1;
			num6 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_2" /*Sapphire Figure 8s*/, 16);
			num = 7;
			num2 = 2;
			value = 4305;
			num3 = 1;
			num6 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_3" /*Amethyst Figure 8s*/, 16);
			num = 7;
			num2 = 3;
			value = 4305;
			num3 = 1;
			num6 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_4" /*Gold Figure 8s*/, 16);
			num = 7;
			num2 = 4;
			value = 4965;
			num3 = 1;
			num6 = 3;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_5" /*White Figure 8s*/, 16);
			num = 7;
			num2 = 5;
			value = 480;
			num3 = 1;
			num6 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_6" /*Gray Figure 8s*/, 16);
			num = 7;
			num2 = 6;
			value = 465;
			num3 = 1;
			num6 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_7" /*Garnet Figure 8s*/, 16);
			num = 7;
			num2 = 7;
			value = 4320;
			num3 = 1;
			num6 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_8", 16);
			num = 7;
			num2 = 8;
			value = 2390;
			num3 = 1;
			num6 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_9", 16);
			num = 7;
			num2 = 9;
			value = 2005;
			num3 = 1;
			num6 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_10", 16);
			num = 7;
			num2 = 10;
			value = 2070;
			num3 = 1;
			num6 = 3;
			break;
	}

	switch (iParam0)
	{
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_0" /*Orange Tint Squared*/, 16);
			num = 8;
			num2 = 0;
			value = 500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_1", 16);
			num = 8;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_2", 16);
			num = 8;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_3", 16);
			num = 8;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_4", 16);
			num = 8;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_5", 16);
			num = 8;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_6", 16);
			num = 8;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_7", 16);
			num = 8;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_8", 16);
			num = 8;
			num2 = 8;
			value = 645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_9", 16);
			num = 8;
			num2 = 9;
			value = 260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_10", 16);
			num = 8;
			num2 = 10;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_0" /*Lime Tint Shooters*/, 16);
			num = 9;
			num2 = 0;
			value = 70;
			num3 = 1;
			num6 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_1" /*Orange Tint Shooters*/, 16);
			num = 9;
			num2 = 1;
			value = 60;
			num3 = 1;
			num6 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_2" /*Blue Shooters*/, 16);
			num = 9;
			num2 = 2;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_3" /*Tropic Shooters*/, 16);
			num = 9;
			num2 = 3;
			value = 570;
			num3 = 1;
			num6 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_4" /*Fly Shooters*/, 16);
			num = 9;
			num2 = 4;
			value = 525;
			num3 = 1;
			num6 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_5" /*Crimson Shooters*/, 16);
			num = 9;
			num2 = 5;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_6" /*Green Tint Shooters*/, 16);
			num = 9;
			num2 = 6;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_7" /*Pink Shooters*/, 16);
			num = 9;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_8", 16);
			num = 9;
			num2 = 8;
			value = 645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_9", 16);
			num = 9;
			num2 = 9;
			value = 260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_10", 16);
			num = 9;
			num2 = 10;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_0" /*Luxury Ice Sports*/, 16);
			num = 10;
			num2 = 0;
			value = 4065;
			num3 = 1;
			num6 = 3;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_1" /*Black Sports*/, 16);
			num = 10;
			num2 = 1;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_2" /*Green Sports*/, 16);
			num = 10;
			num2 = 2;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_3" /*Luxury Cowhide Sports*/, 16);
			num = 10;
			num2 = 3;
			value = 4275;
			num3 = 1;
			num6 = 3;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_4" /*Orange Sports*/, 16);
			num = 10;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_5" /*Black Pattern Sports*/, 16);
			num = 10;
			num2 = 5;
			value = 80;
			num3 = 1;
			num6 = 3;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_6" /*Blue Pattern Sports*/, 16);
			num = 10;
			num2 = 6;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_7" /*Pink Pattern Sports*/, 16);
			num = 10;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_8", 16);
			num = 10;
			num2 = 8;
			value = 2315;
			num3 = 1;
			num6 = 3;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_9", 16);
			num = 10;
			num2 = 9;
			value = 1930;
			num3 = 1;
			num6 = 3;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_10", 16);
			num = 10;
			num2 = 10;
			value = 1995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 276:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_0" /*Pewter Aviators*/, 16);
			num = 11;
			num2 = 0;
			value = 3660;
			num3 = 1;
			num6 = 3;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_1" /*Steel Aviators*/, 16);
			num = 11;
			num2 = 1;
			value = 4165;
			num3 = 1;
			num6 = 3;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_2" /*Bronze Aviators*/, 16);
			num = 11;
			num2 = 2;
			value = 3670;
			num3 = 1;
			num6 = 3;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_3" /*Black Aviators*/, 16);
			num = 11;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_4" /*Neon Aviators*/, 16);
			num = 11;
			num2 = 4;
			value = 3620;
			num3 = 1;
			num6 = 3;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_5" /*Copper Aviators*/, 16);
			num = 11;
			num2 = 5;
			value = 3610;
			num3 = 1;
			num6 = 3;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_6" /*Gold Aviators*/, 16);
			num = 11;
			num2 = 6;
			value = 4140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_7" /*Slate Aviators*/, 16);
			num = 11;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_0", 16);
			num = 12;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_1", 16);
			num = 12;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_2", 16);
			num = 12;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_3", 16);
			num = 12;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_4", 16);
			num = 12;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_5", 16);
			num = 12;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_6", 16);
			num = 12;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_7", 16);
			num = 12;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_0", 16);
			num = 13;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_1", 16);
			num = 13;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_2", 16);
			num = 13;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_3", 16);
			num = 13;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_4", 16);
			num = 13;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_5", 16);
			num = 13;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_6", 16);
			num = 13;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_7", 16);
			num = 13;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_0" /*Black Cat Eyes*/, 16);
			num = 14;
			num2 = 0;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_1" /*Brown Marble Cat Eyes*/, 16);
			num = 14;
			num2 = 1;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_2" /*Pink Cat Eyes*/, 16);
			num = 14;
			num2 = 2;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_3" /*Green Marble Cat Eyes*/, 16);
			num = 14;
			num2 = 3;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_4" /*Red Cat Eyes*/, 16);
			num = 14;
			num2 = 4;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_5" /*Teal Cat Eyes*/, 16);
			num = 14;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_6" /*Purple Cat Eyes*/, 16);
			num = 14;
			num2 = 6;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_7" /*Blue Cat Eyes*/, 16);
			num = 14;
			num2 = 7;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_8", 16);
			num = 14;
			num2 = 8;
			value = 1490;
			num3 = 1;
			num6 = 3;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_9", 16);
			num = 14;
			num2 = 9;
			value = 1105;
			num3 = 1;
			num6 = 3;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_10", 16);
			num = 14;
			num2 = 10;
			value = 1170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_0", 16);
			num = 15;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_1", 16);
			num = 15;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_2", 16);
			num = 15;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_3", 16);
			num = 15;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_4", 16);
			num = 15;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_5", 16);
			num = 15;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_6", 16);
			num = 15;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 318:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_7", 16);
			num = 15;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 319:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_0", 16);
			num = 0;
			num2 = 0;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 320:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_1", 16);
			num = 0;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 321:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_2", 16);
			num = 0;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 322:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_3", 16);
			num = 0;
			num2 = 3;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 323:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_4" /*Pewter Watch*/, 16);
			num = 0;
			num2 = 4;
			value = 825;
			num3 = 6;
			num6 = 4;
			break;
	
		case 324:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_0", 16);
			num = 1;
			num2 = 0;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 325:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_1", 16);
			num = 1;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 326:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_2", 16);
			num = 1;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	}

	if (num6 == 1)
	{
		num7 = iParam0 - 10;
	
		if (num7 >= 0 && num7 < 121)
		{
			if (num7 > 8)
				num7 = num7 - 1;
		
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2039[num7] * Global_298067.f_20);
		}
	}
	else if (num6 == 2)
	{
		num8 = iParam0 - 131;
	
		if (num8 >= 0 && num8 < 24)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2160[num8] * Global_298067.f_21);
	}
	else if (num6 == 3)
	{
		num9 = iParam0 - 155;
	
		if (num9 >= 0 && num9 < 128)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2185[num9] * Global_298067.f_44);
	}
	else if (num6 == 4)
	{
		num10 = iParam0 - 319;
	
		if (num10 >= 0 && num10 < 10)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2314[num10] * Global_298067.f_22);
	}

	if (iParam0 >= 327)
	{
		Global_79172[0].f_5 = 4;
		func_0xE3509264(num5, iParam0, 327, hParam1);
	
		if (Global_79172[0].f_7 > 0)
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1))
				Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_20);
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1))
				Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_44);
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1))
				Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_22);
	}
	else
	{
		func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_0x532BD76A(int iParam0, Hash hParam1)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_0_0" /*No Crew Emblem*/, 16);
			num2 = 0;
			num3 = 0;
			num = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 1;
			num3 = 0;
			num = 10000;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
			num2 = 2;
			num3 = 0;
			num = 5000;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 3;
			num3 = 0;
			num = 10000;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
			num2 = 4;
			num3 = 0;
			num = 5000;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 5;
			num3 = 0;
			num = 10000;
			break;
	
		default:
			Global_79172[0].f_5 = 4;
			func_0xE3509264(num6, iParam0, 6, hParam1);
			return;
	}

	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0x31CAA5FE(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 7;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
		
			if (Global_262145.f_3853 != -1)
				value = Global_262145.f_3853;
			else
				value = 310;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
		
			if (Global_262145.f_3854 != -1)
				value = Global_262145.f_3854;
			else
				value = 125;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
		
			if (Global_262145.f_3855 != -1)
				value = Global_262145.f_3855;
			else
				value = 145;
			break;
	
		case 4:
			num = 1;
			num2 = 3;
		
			if (Global_262145.f_3856 != -1)
				value = Global_262145.f_3856;
			else
				value = 130;
			break;
	
		case 5:
			num = 1;
			num2 = 4;
		
			if (Global_262145.f_3857 != -1)
				value = Global_262145.f_3857;
			else
				value = 265;
			break;
	
		case 6:
			num = 1;
			num2 = 5;
		
			if (Global_262145.f_3858 != -1)
				value = Global_262145.f_3858;
			else
				value = 280;
			break;
	
		case 7:
			num = 2;
			num2 = 0;
		
			if (Global_262145.f_3859 != -1)
				value = Global_262145.f_3859;
			else
				value = 295;
			break;
	
		case 8:
			num = 2;
			num2 = 1;
		
			if (Global_262145.f_3860 != -1)
				value = Global_262145.f_3860;
			else
				value = 95;
			break;
	
		case 9:
			num = 2;
			num2 = 2;
		
			if (Global_262145.f_3861 != -1)
				value = Global_262145.f_3861;
			else
				value = 85;
			break;
	
		case 10:
			num = 2;
			num2 = 3;
		
			if (Global_262145.f_3862 != -1)
				value = Global_262145.f_3862;
			else
				value = 95;
			break;
	
		case 11:
			num = 2;
			num2 = 4;
		
			if (Global_262145.f_3863 != -1)
				value = Global_262145.f_3863;
			else
				value = 105;
			break;
	
		case 12:
			num = 2;
			num2 = 5;
		
			if (Global_262145.f_3864 != -1)
				value = Global_262145.f_3864;
			else
				value = 95;
			break;
	
		case 13:
			num = 3;
			num2 = 0;
		
			if (Global_262145.f_3865 != -1)
				value = Global_262145.f_3865;
			else
				value = 35;
			break;
	
		case 14:
			num = 3;
			num2 = 1;
		
			if (Global_262145.f_3866 != -1)
				value = Global_262145.f_3866;
			else
				value = 35;
			break;
	
		case 15:
			num = 3;
			num2 = 2;
		
			if (Global_262145.f_3867 != -1)
				value = Global_262145.f_3867;
			else
				value = 30;
			break;
	
		case 16:
			num = 3;
			num2 = 3;
		
			if (Global_262145.f_3868 != -1)
				value = Global_262145.f_3868;
			else
				value = 40;
			break;
	
		case 17:
			num = 3;
			num2 = 4;
		
			if (Global_262145.f_3869 != -1)
				value = Global_262145.f_3869;
			else
				value = 35;
			break;
	
		case 18:
			num = 3;
			num2 = 5;
		
			if (Global_262145.f_3870 != -1)
				value = Global_262145.f_3870;
			else
				value = 35;
			break;
	
		case 19:
			num = 4;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 20:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 21:
			num = 4;
			num2 = 2;
		
			if (Global_262145.f_3871 != -1)
				value = Global_262145.f_3871;
			else
				value = 355;
			break;
	
		case 22:
			num = 4;
			num2 = 3;
		
			if (Global_262145.f_3872 != -1)
				value = Global_262145.f_3872;
			else
				value = 370;
			break;
	
		case 23:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 24:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 25:
			num = 5;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 26:
			num = 5;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 28:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 29:
			num = 5;
			num2 = 4;
		
			if (Global_262145.f_3873 != -1)
				value = Global_262145.f_3873;
			else
				value = 110;
			break;
	
		case 30:
			num = 5;
			num2 = 5;
		
			if (Global_262145.f_3874 != -1)
				value = Global_262145.f_3874;
			else
				value = 160;
			break;
	
		case 31:
			num = 6;
			num2 = 0;
		
			if (Global_262145.f_3875 != -1)
				value = Global_262145.f_3875;
			else
				value = 385;
			break;
	
		case 32:
			num = 6;
			num2 = 1;
		
			if (Global_262145.f_3876 != -1)
				value = Global_262145.f_3876;
			else
				value = 190;
			break;
	
		case 33:
			num = 6;
			num2 = 2;
		
			if (Global_262145.f_3877 != -1)
				value = Global_262145.f_3877;
			else
				value = 235;
			break;
	
		case 34:
			num = 6;
			num2 = 3;
		
			if (Global_262145.f_3878 != -1)
				value = Global_262145.f_3878;
			else
				value = 220;
			break;
	
		case 35:
			num = 6;
			num2 = 4;
		
			if (Global_262145.f_3879 != -1)
				value = Global_262145.f_3879;
			else
				value = 250;
			break;
	
		case 36:
			num = 6;
			num2 = 5;
		
			if (Global_262145.f_3880 != -1)
				value = Global_262145.f_3880;
			else
				value = 205;
			break;
	
		case 37:
			num = 7;
			num2 = 0;
		
			if (Global_262145.f_3881 != -1)
				value = Global_262145.f_3881;
			else
				value = 445;
			break;
	
		case 38:
			num = 7;
			num2 = 1;
		
			if (Global_262145.f_3882 != -1)
				value = Global_262145.f_3882;
			else
				value = 175;
			break;
	
		case 39:
			num = 7;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 7;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 7;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 7;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 8;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 8;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 8;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 8;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 8;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 49:
			num = 9;
			num2 = 0;
		
			if (Global_262145.f_3883 != -1)
				value = Global_262145.f_3883;
			else
				value = 340;
			break;
	
		case 50:
			num = 9;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 51:
			num = 9;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 52:
			num = 9;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 53:
			num = 9;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 54:
			num = 9;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		default:
			Global_79172[0].f_5 = 4;
			func_0xE3509264(num5, iParam0, 55, hParam1);
		
			if (Global_79172[0].f_7 > 0)
				Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_46);
		
			return;
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_298067.f_46);
	TEXT_LABEL_ASSIGN_STRING(&unk, "T_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_0x8F60B7F6(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 965;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 960;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 9500;
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 975;
			break;
	
		case 5:
			num = 2;
			num2 = 0;
			value = 1185;
			break;
	
		case 6:
			num = 2;
			num2 = 1;
			value = 15000;
			break;
	
		case 7:
			num = 2;
			num2 = 2;
			value = 1115;
			break;
	
		case 8:
			num = 2;
			num2 = 3;
			value = 1105;
			break;
	
		case 9:
			num = 3;
			num2 = 0;
			value = 25000;
			break;
	
		case 10:
			num = 4;
			num2 = 0;
			value = 510;
			break;
	
		case 11:
			num = 4;
			num2 = 1;
			value = 530;
			break;
	
		case 12:
			num = 4;
			num2 = 2;
			value = 5500;
			break;
	
		case 13:
			num = 4;
			num2 = 3;
			value = 535;
			break;
	
		case 14:
			num = 5;
			num2 = 0;
			value = 1510;
			break;
	
		case 15:
			num = 5;
			num2 = 1;
			value = 1530;
			break;
	
		case 16:
			num = 5;
			num2 = 2;
			value = 14500;
			break;
	
		case 17:
			num = 5;
			num2 = 3;
			value = 13000;
			break;
	
		case 18:
			num = 6;
			num2 = 0;
			value = 8000;
			break;
	
		case 19:
			num = 6;
			num2 = 1;
			value = 1265;
			break;
	
		case 20:
			num = 6;
			num2 = 2;
			value = 8500;
			break;
	
		case 21:
			num = 6;
			num2 = 3;
			value = 1210;
			break;
	
		case 22:
			num = 7;
			num2 = 0;
			value = 2360;
			break;
	
		case 23:
			num = 7;
			num2 = 1;
			value = 22500;
			break;
	
		case 24:
			num = 7;
			num2 = 2;
			value = 2375;
			break;
	
		case 25:
			num = 7;
			num2 = 3;
			value = 2485;
			break;
	
		default:
			Global_79172[0].f_5 = 4;
			func_0xE3509264(num5, iParam0, 26, hParam1);
		
			if (Global_79172[0].f_7 > 0)
				Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_23);
		
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "M_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = iParam0 - 1;

	if (num6 >= 0 && num6 < 26)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2012[num6] * Global_298067.f_23);

	func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_0x49FFFA4C(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 6;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 1765;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 760;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 760;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 765;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 85;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 80;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 90;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 90;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 95;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 100;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 60;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 55;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 100;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 1255;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 65;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 1050;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 1895;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 185;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 190;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 115;
			break;
	}

	switch (iParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 415;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 115;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 135;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 125;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 105;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 130;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 3530;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 2610;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 1295;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 120;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 160;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 160;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 145;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 105;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 115;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 150;
			break;
	
		case 48:
			num = 3;
			num2 = 0;
			value = 540;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 115;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 110;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 120;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 460;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 120;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 120;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 415;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 135;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 140;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 160;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 120;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 1025;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 1560;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 145;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 120;
			break;
	}

	switch (iParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 365;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 100;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 65;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 85;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 5;
			num2 = 0;
			value = 50;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 35;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 50;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 50;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 2395;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 3675;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 320;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 3875;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 112:
			num = 7;
			num2 = 0;
			value = 2050;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 375;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 2105;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 345;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 380;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 340;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 385;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 4135;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 370;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 375;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 385;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 365;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 325;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 325;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 370;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 330;
			break;
	}

	switch (iParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 1025;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 390;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 400;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 390;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 365;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 410;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 4125;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 4365;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 5365;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 6225;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 3755;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 405;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 4115;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 2240;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 3850;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 3110;
			break;
	
		case 144:
			num = 9;
			num2 = 0;
			value = 1950;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 455;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 405;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 410;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 415;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 4425;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 160:
			num = 10;
			num2 = 0;
			value = 115;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 65;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 85;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 75;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 176:
			num = 11;
			num2 = 0;
			value = 115;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 360;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 135;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 175;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 192:
			num = 12;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 675;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 100;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 400;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 340;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 195;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 215;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 120;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 165;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 100;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 1040;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 100;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 120;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 210;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 205;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 200;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 100;
			break;
	
		case 224:
			num = 14;
			num2 = 0;
			value = 1420;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 445;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 435;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 420;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 425;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 435;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 425;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 430;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 3215;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 3320;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 440;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 440;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 445;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 450;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 450;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 1255;
			break;
	
		case 240:
			num = 15;
			num2 = 0;
			value = 750;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 165;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 460;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 190;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 195;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 200;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 205;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 210;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 215;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 220;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 455;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 175;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 800;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 790;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 175;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 190;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "F_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = iParam0;

	if (num6 >= 0 && num6 < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1755[num6] * Global_298067.f_19);

	if (iParam0 >= 256)
	{
		Global_79172[0].f_5 = 4;
		func_0xE3509264(num5, iParam0, 256, hParam1);
	
		if (Global_79172[0].f_7 > 0)
			Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_19);
	}
	else
	{
		func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_0xB448FE2B(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 4;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 270;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 750;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 450;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 4875;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 1760;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 1090;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 2465;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 305;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 290;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 410;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 255;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 255;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 405;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 5000;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 4480;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 4335;
			break;
	}

	switch (iParam0)
	{
		case 16:
			num = 1;
			num2 = 0;
			value = 375;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 265;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 275;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 280;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 300;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 265;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 255;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 250;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 260;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 250;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 225;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 230;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 215;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 650;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 425;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 345;
			break;
	}

	switch (iParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 115;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 110;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 250;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 48:
			num = 3;
			num2 = 0;
			value = 290;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 115;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 135;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 125;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 120;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 130;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 110;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 525;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 115;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 535;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 135;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 120;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 130;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 140;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 130;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 520;
			break;
	}

	switch (iParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 215;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 220;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 225;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 245;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 215;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 630;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 250;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 260;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 200;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 225;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 230;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 725;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 650;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 230;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 230;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 280;
			break;
	}

	switch (iParam0)
	{
		case 80:
			num = 5;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 330;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 320;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 315;
			break;
	}

	switch (iParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 850;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 535;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 530;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 112:
			num = 7;
			num2 = 0;
			value = 890;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 440;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 455;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 295;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 180;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 150;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 150;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 155;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 840;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 205;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 150;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 950;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 580;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 200;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 665;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 780;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 615;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 250;
			break;
	}

	switch (iParam0)
	{
		case 144:
			num = 9;
			num2 = 0;
			value = 495;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 435;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 420;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 390;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 485;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 380;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 1295;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 1135;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 1425;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 1645;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 1925;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 2250;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 365;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 360;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 2245;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 2170;
			break;
	
		case 160:
			num = 10;
			num2 = 0;
			value = 50;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 100;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 65;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 176:
			num = 11;
			num2 = 0;
			value = 275;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 300;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 145;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 150;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 110;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 95;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 155;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 155;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 510;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 165;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 465;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 250;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 110;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 470;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 480;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 155;
			break;
	
		case 192:
			num = 12;
			num2 = 0;
			value = 275;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 395;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 285;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 560;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 595;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 295;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 230;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 215;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 270;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 295;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 285;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 215;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 210;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 290;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 230;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 215;
			break;
	}

	switch (iParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 224:
			num = 14;
			num2 = 0;
			value = 90;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 105;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 100;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 105;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 240:
			num = 15;
			num2 = 0;
			value = 230;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 130;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 350;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 335;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "L_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = iParam0;

	if (num6 >= 0 && num6 < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1241[num6] * Global_298067.f_17);

	if (iParam0 >= 256)
	{
		Global_79172[0].f_5 = 4;
		func_0xE3509264(num5, iParam0, 256, hParam1);
	
		if (Global_79172[0].f_7 > 0)
			Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_17);
	}
	else
	{
		func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_0xE0A1579F(int iParam0, Hash hParam1)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		case 9:
			num2 = 9;
			num3 = 0;
			break;
	
		case 10:
			num2 = 10;
			num3 = 0;
			break;
	
		case 11:
			num2 = 11;
			num3 = 0;
			break;
	
		case 12:
			num2 = 12;
			num3 = 0;
			break;
	
		case 13:
			num2 = 13;
			num3 = 0;
			break;
	
		case 14:
			num2 = 14;
			num3 = 0;
			break;
	
		case 15:
			num2 = 15;
			num3 = 0;
			break;
	}

	if (iParam0 >= 16)
	{
		Global_79172[0].f_5 = 4;
		func_0xE3509264(num6, iParam0, 16, hParam1);
		return;
	}

	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0x1DB3E93C(int iParam0, Hash hParam1)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			num2 = 1;
			num3 = 4;
			break;
	
		case 6:
			num2 = 2;
			num3 = 0;
			break;
	
		case 7:
			num2 = 2;
			num3 = 1;
			break;
	
		case 8:
			num2 = 2;
			num3 = 2;
			break;
	
		case 9:
			num2 = 2;
			num3 = 3;
			break;
	
		case 10:
			num2 = 2;
			num3 = 4;
			break;
	
		case 11:
			num2 = 3;
			num3 = 0;
			break;
	
		case 12:
			num2 = 3;
			num3 = 1;
			break;
	
		case 13:
			num2 = 3;
			num3 = 2;
			break;
	
		case 14:
			num2 = 3;
			num3 = 3;
			break;
	
		case 15:
			num2 = 3;
			num3 = 4;
			break;
	
		case 16:
			num2 = 4;
			num3 = 0;
			break;
	
		case 17:
			num2 = 4;
			num3 = 1;
			break;
	
		case 18:
			num2 = 4;
			num3 = 2;
			break;
	
		case 19:
			num2 = 4;
			num3 = 3;
			break;
	
		case 20:
			num2 = 4;
			num3 = 4;
			break;
	
		case 21:
			num2 = 5;
			num3 = 0;
			break;
	
		case 22:
			num2 = 5;
			num3 = 1;
			break;
	
		case 23:
			num2 = 5;
			num3 = 2;
			break;
	
		case 24:
			num2 = 5;
			num3 = 3;
			break;
	
		case 25:
			num2 = 5;
			num3 = 4;
			break;
	
		case 26:
			num2 = 6;
			num3 = 0;
			break;
	
		case 27:
			num2 = 6;
			num3 = 1;
			break;
	
		case 28:
			num2 = 6;
			num3 = 2;
			break;
	
		case 29:
			num2 = 6;
			num3 = 3;
			break;
	
		case 30:
			num2 = 6;
			num3 = 4;
			break;
	
		case 31:
			num2 = 7;
			num3 = 0;
			break;
	
		case 32:
			num2 = 7;
			num3 = 1;
			break;
	
		case 33:
			num2 = 7;
			num3 = 2;
			break;
	
		case 34:
			num2 = 7;
			num3 = 3;
			break;
	
		case 35:
			num2 = 7;
			num3 = 4;
			break;
	}

	if (iParam0 >= 36)
	{
		Global_79172[0].f_5 = 4;
		func_0xE3509264(num6, iParam0, 36, hParam1);
		return;
	}

	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0xE646E909(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 8;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_0" /*Crew T-Shirt*/, 16);
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_1" /*Salamanders T-Shirt*/, 16);
			num = 0;
			num2 = 1;
			value = 225;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_2" /*The Feud T-Shirt*/, 16);
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_3" /*Yellow T-Shirt*/, 16);
			num = 0;
			num2 = 3;
			value = 40;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_4" /*Red T-Shirt*/, 16);
			num = 0;
			num2 = 4;
			value = 40;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_5" /*Cyan T-Shirt*/, 16);
			num = 0;
			num2 = 5;
			value = 40;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_6" /*Blue T-Shirt*/, 16);
			num = 0;
			num2 = 6;
			value = 40;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_7" /*Tan T-Shirt*/, 16);
			num = 0;
			num2 = 7;
			value = 45;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_8" /*Pink T-Shirt*/, 16);
			num = 0;
			num2 = 8;
			value = 40;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_9" /*Mint T-Shirt*/, 16);
			num = 0;
			num2 = 9;
			value = 40;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_10" /*Ash T-Shirt*/, 16);
			num = 0;
			num2 = 10;
			value = 135;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_11" /*Gray T-Shirt*/, 16);
			num = 0;
			num2 = 11;
			value = 60;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_12" /*Leopard T-Shirt*/, 16);
			num = 0;
			num2 = 12;
			value = 220;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_13" /*Two-Tone T-Shirt*/, 16);
			num = 0;
			num2 = 13;
			value = 45;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_14" /*Baby Blue T-Shirt*/, 16);
			num = 0;
			num2 = 14;
			value = 45;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_15" /*Two-Tone Striped T-Shirt*/, 16);
			num = 0;
			num2 = 15;
			value = 125;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_0" /*Crew T-Shirt*/, 16);
			num = 1;
			num2 = 0;
			value = 250;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_1" /*Salamanders T-Shirt*/, 16);
			num = 1;
			num2 = 1;
			value = 60;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_2" /*The Feud T-Shirt*/, 16);
			num = 1;
			num2 = 2;
			value = 50;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_3" /*Yellow T-Shirt*/, 16);
			num = 1;
			num2 = 3;
			value = 40;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_4" /*Red T-Shirt*/, 16);
			num = 1;
			num2 = 4;
			value = 40;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_5" /*Cyan T-Shirt*/, 16);
			num = 1;
			num2 = 5;
			value = 40;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_6" /*Blue T-Shirt*/, 16);
			num = 1;
			num2 = 6;
			value = 40;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_7" /*Tan T-Shirt*/, 16);
			num = 1;
			num2 = 7;
			value = 45;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_8" /*Pink T-Shirt*/, 16);
			num = 1;
			num2 = 8;
			value = 40;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_9" /*Mint T-Shirt*/, 16);
			num = 1;
			num2 = 9;
			value = 40;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_10" /*Ash T-Shirt*/, 16);
			num = 1;
			num2 = 10;
			value = 135;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_11" /*Gray T-Shirt*/, 16);
			num = 1;
			num2 = 11;
			value = 60;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_12" /*Leopard T-Shirt*/, 16);
			num = 1;
			num2 = 12;
			value = 220;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_13" /*Two-Tone T-Shirt*/, 16);
			num = 1;
			num2 = 13;
			value = 45;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_14" /*Baby Blue T-Shirt*/, 16);
			num = 1;
			num2 = 14;
			value = 45;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_15" /*Two-Tone Striped T-Shirt*/, 16);
			num = 1;
			num2 = 15;
			value = 125;
			break;
	
		case 32:
			num = 2;
			num2 = 0;
			break;
	
		case 33:
			num = 3;
			num2 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_0", 16);
			num = 4;
			num2 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_1", 16);
			num = 4;
			num2 = 1;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_2", 16);
			num = 4;
			num2 = 2;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_3", 16);
			num = 4;
			num2 = 3;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_4", 16);
			num = 4;
			num2 = 4;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_5", 16);
			num = 4;
			num2 = 5;
			flag = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_6", 16);
			num = 4;
			num2 = 6;
			flag = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_7", 16);
			num = 4;
			num2 = 7;
			flag = true;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_8", 16);
			num = 4;
			num2 = 8;
			flag = true;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_9", 16);
			num = 4;
			num2 = 9;
			flag = true;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_10", 16);
			num = 4;
			num2 = 10;
			flag = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_11", 16);
			num = 4;
			num2 = 11;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_12", 16);
			num = 4;
			num2 = 12;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_13" /*Red Two-Tone Tank*/, 16);
			num = 4;
			num2 = 13;
			value = 40;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[77]);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_14" /*Two-Tone Tank*/, 16);
			num = 4;
			num2 = 14;
			value = 40;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[78]);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_15", 16);
			num = 4;
			num2 = 15;
			flag = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_0" /*Off-White Cropped Tank*/, 16);
			num = 5;
			num2 = 0;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[80]);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_1" /*Ash Cropped Tank*/, 16);
			num = 5;
			num2 = 1;
			value = 60;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[81]);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_2", 16);
			num = 5;
			num2 = 2;
			flag = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_3", 16);
			num = 5;
			num2 = 3;
			flag = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_4", 16);
			num = 5;
			num2 = 4;
			flag = true;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_5", 16);
			num = 5;
			num2 = 5;
			flag = true;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_6", 16);
			num = 5;
			num2 = 6;
			flag = true;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_7" /*Snakeskin Cropped Tank*/, 16);
			num = 5;
			num2 = 7;
			value = 375;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[87]);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_8", 16);
			num = 5;
			num2 = 8;
			flag = true;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_9" /*White Stripe Cropped Tank*/, 16);
			num = 5;
			num2 = 9;
			value = 90;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[89]);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_10", 16);
			num = 5;
			num2 = 10;
			flag = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_11", 16);
			num = 5;
			num2 = 11;
			flag = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_12", 16);
			num = 5;
			num2 = 12;
			flag = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_13", 16);
			num = 5;
			num2 = 13;
			flag = true;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_14", 16);
			num = 5;
			num2 = 14;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_15", 16);
			num = 5;
			num2 = 15;
			flag = true;
			break;
	
		case 66:
			num = 6;
			num2 = 0;
			break;
	
		case 67:
			num = 7;
			num2 = 0;
			break;
	
		case 68:
			num = 8;
			num2 = 0;
			break;
	
		case 69:
			num = 9;
			num2 = 0;
			break;
	
		case 70:
			num = 10;
			num2 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_0" /*Sky Blue Racerback*/, 16);
			num = 11;
			num2 = 0;
			value = 90;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[176]);
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_1" /*Purple Racerback*/, 16);
			num = 11;
			num2 = 1;
			value = 95;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[177]);
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_2" /*Gray Racerback*/, 16);
			num = 11;
			num2 = 2;
			value = 95;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[178]);
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_3", 16);
			num = 11;
			num2 = 3;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_4", 16);
			num = 11;
			num2 = 4;
			flag = true;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_5", 16);
			num = 11;
			num2 = 5;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_6", 16);
			num = 11;
			num2 = 6;
			flag = true;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_7", 16);
			num = 11;
			num2 = 7;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_8", 16);
			num = 11;
			num2 = 8;
			flag = true;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_9", 16);
			num = 11;
			num2 = 9;
			flag = true;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_10" /*Los Santos 01 Racerback*/, 16);
			num = 11;
			num2 = 10;
			value = 150;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[186]);
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_11" /*LS Racerback*/, 16);
			num = 11;
			num2 = 11;
			value = 65;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[187]);
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_12", 16);
			num = 11;
			num2 = 12;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_13", 16);
			num = 11;
			num2 = 13;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_14", 16);
			num = 11;
			num2 = 14;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_15" /*LC Penetrators Racerback*/, 16);
			num = 11;
			num2 = 15;
			value = 145;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[191]);
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_0", 16);
			num = 12;
			num2 = 0;
			flag = true;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_1", 16);
			num = 12;
			num2 = 1;
			flag = true;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_2", 16);
			num = 12;
			num2 = 2;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_3", 16);
			num = 12;
			num2 = 3;
			flag = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_4", 16);
			num = 12;
			num2 = 4;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_5", 16);
			num = 12;
			num2 = 5;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_6", 16);
			num = 12;
			num2 = 6;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_7" /*Neon Camisole*/, 16);
			num = 12;
			num2 = 7;
			value = 1560;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[199]);
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_8" /*Red Spotted Camisole*/, 16);
			num = 12;
			num2 = 8;
			value = 195;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[200]);
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_9" /*Black Spotted Camisole*/, 16);
			num = 12;
			num2 = 9;
			value = 200;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[201]);
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_10", 16);
			num = 12;
			num2 = 10;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_11", 16);
			num = 12;
			num2 = 11;
			flag = true;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_12", 16);
			num = 12;
			num2 = 12;
			flag = true;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_13", 16);
			num = 12;
			num2 = 13;
			flag = true;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_14", 16);
			num = 12;
			num2 = 14;
			flag = true;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_15", 16);
			num = 12;
			num2 = 15;
			flag = true;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_0" /*Black Bustier*/, 16);
			num = 13;
			num2 = 0;
			value = 975;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[208]);
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_1" /*Pink Rose Bustier*/, 16);
			num = 13;
			num2 = 1;
			value = 2670;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[209]);
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_2" /*Olive Bustier*/, 16);
			num = 13;
			num2 = 2;
			value = 480;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[210]);
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_3" /*Gray Bustier*/, 16);
			num = 13;
			num2 = 3;
			value = 400;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[211]);
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_4" /*Floral Bustier*/, 16);
			num = 13;
			num2 = 4;
			value = 2500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[212]);
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_5" /*Red Plaid Bustier*/, 16);
			num = 13;
			num2 = 5;
			value = 2060;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[213]);
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_6" /*Studded Bustier*/, 16);
			num = 13;
			num2 = 6;
			value = 2620;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[214]);
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_7" /*Pink Bustier*/, 16);
			num = 13;
			num2 = 7;
			value = 475;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[215]);
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_8" /*White Bustier*/, 16);
			num = 13;
			num2 = 8;
			value = 490;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[216]);
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_9" /*Vivid Blue Bustier*/, 16);
			num = 13;
			num2 = 9;
			value = 2280;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[217]);
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_10" /*Denim Bustier*/, 16);
			num = 13;
			num2 = 10;
			value = 485;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[218]);
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_11" /*Pink Tribal Bustier*/, 16);
			num = 13;
			num2 = 11;
			value = 2390;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[219]);
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_12" /*Camo Bustier*/, 16);
			num = 13;
			num2 = 12;
			value = 2610;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[220]);
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_13" /*Blue Bustier*/, 16);
			num = 13;
			num2 = 13;
			value = 1450;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[221]);
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_14" /*Black & White Bustier*/, 16);
			num = 13;
			num2 = 14;
			value = 2720;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[222]);
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_15" /*Leopard Bustier*/, 16);
			num = 13;
			num2 = 15;
			value = 4995;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[223]);
			break;
	
		case 119:
			num = 14;
			num2 = 0;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_0" /*Black Bikini*/, 16);
			num = 15;
			num2 = 0;
			value = 325;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[240]);
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_1", 16);
			num = 15;
			num2 = 1;
			flag = true;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_2", 16);
			num = 15;
			num2 = 2;
			flag = true;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_3" /*Gray Bikini*/, 16);
			num = 15;
			num2 = 3;
			value = 130;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[243]);
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_4", 16);
			num = 15;
			num2 = 4;
			flag = true;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_5", 16);
			num = 15;
			num2 = 5;
			flag = true;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_6", 16);
			num = 15;
			num2 = 6;
			flag = true;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_7", 16);
			num = 15;
			num2 = 7;
			flag = true;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_8", 16);
			num = 15;
			num2 = 8;
			flag = true;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_9", 16);
			num = 15;
			num2 = 9;
			flag = true;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_10" /*Aqua Bikini*/, 16);
			num = 15;
			num2 = 10;
			value = 450;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[250]);
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_11" /*Orange Bikini*/, 16);
			num = 15;
			num2 = 11;
			value = 465;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[251]);
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_12", 16);
			num = 15;
			num2 = 12;
			flag = true;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_13", 16);
			num = 15;
			num2 = 13;
			flag = true;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_14", 16);
			num = 15;
			num2 = 14;
			flag = true;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_15", 16);
			num = 15;
			num2 = 15;
			flag = true;
			break;
	
		default:
			Global_79172[0].f_5 = 4;
			func_0xE3509264(num5, iParam0, 136, hParam1);
		
			if (Global_79172[0].f_7 > 0)
				Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_18);
		
			return;
	}

	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_0x75CF6A28(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2898);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1498[4]);
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2897);
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_0x75CF6A28(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2896);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1498[9]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		num6 = iParam0;
	
		if (num6 >= 0 && num6 < 256)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[num6]);
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		num7 = iParam0 - 16;
	
		if (num7 >= 0 && num7 < 256)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[num7]);
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_298067.f_18);
	func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_0xE6D60F9B(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 11;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 225;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 40;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 40;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 40;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 40;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 45;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 40;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 40;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 135;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 60;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 220;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 45;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 45;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 125;
			break;
	}

	switch (iParam0)
	{
		case 16:
			num = 1;
			num2 = 0;
			value = 390;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 230;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 355;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 5000;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 2725;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 3265;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 3625;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 4220;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 310;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 45;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 210;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 75;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 50;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 60;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 50;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 295;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 80;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 75;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 2250;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 275;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 445;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 50;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 40;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 45;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 470;
			break;
	}

	switch (iParam0)
	{
		case 48:
			num = 3;
			num2 = 0;
			value = 95;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 95;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 360;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 100;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 60;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 295;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 460;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 1980;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 2110;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 95;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 40;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 40;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 80:
			num = 5;
			num2 = 0;
			value = 45;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 60;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 375;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 90;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 900;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 1000;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 1050;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 1000;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 112:
			num = 7;
			num2 = 0;
			value = 2975;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 1100;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 1825;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 1750;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 1025;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 1075;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 2805;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 2250;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 144:
			num = 9;
			num2 = 0;
			value = 495;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 95;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 95;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 525;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 100;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 110;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 100;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 110;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 130;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 560;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 295;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 975;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 160;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 100;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 1700;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 160:
			num = 10;
			num2 = 0;
			value = 380;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 95;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 95;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 110;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 95;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 90;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 85;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 215;
			break;
	}

	switch (iParam0)
	{
		case 176:
			num = 11;
			num2 = 0;
			value = 90;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 95;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 95;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 150;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 65;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 145;
			break;
	}

	switch (iParam0)
	{
		case 192:
			num = 12;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 1560;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 195;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 200;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 975;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 2670;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 480;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 400;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 2500;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 2060;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 2620;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 475;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 490;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 2280;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 485;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 2390;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 2610;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 1450;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 2720;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 4995;
			break;
	}

	switch (iParam0)
	{
		case 224:
			num = 14;
			num2 = 0;
			value = 265;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 385;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 345;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 330;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 430;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 375;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 375;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 295;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 360;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 325;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 340;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 435;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 300;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 315;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 415;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 420;
			break;
	}

	switch (iParam0)
	{
		case 240:
			num = 15;
			num2 = 0;
			value = 325;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 130;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 450;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 465;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);

	if (iParam0 == 4)
	{
		if (func_0x75CF6A28(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2898 * Global_298067.f_18);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1498[4] * Global_298067.f_18);
		}
	}
	else if (iParam0 == 7)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2897 * Global_298067.f_18);
	}
	else if (iParam0 == 9)
	{
		if (func_0x75CF6A28(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2896 * Global_298067.f_18);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1498[9] * Global_298067.f_18);
		}
	}
	else
	{
		num6 = iParam0;
	
		if (num6 >= 0 && num6 < 256)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1498[num6] * Global_298067.f_18);
	}

	if (iParam0 >= 256)
	{
		Global_79172[0].f_5 = 4;
		func_0xE3509264(num5, iParam0, 256, hParam1);
	
		if (Global_79172[0].f_7 > 0)
			Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_18);
	}
	else
	{
		func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_0xA91A09EB(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 2;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[0]);
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[1]);
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 495;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[2]);
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 490;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[3]);
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 485;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[4]);
			break;
	
		case 5:
			num = 1;
			num2 = 4;
			value = 480;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[5]);
			break;
	
		case 6:
			num = 1;
			num2 = 5;
			value = 0;
			break;
	
		case 7:
			num = 2;
			num2 = 0;
			value = 440;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[6]);
			break;
	
		case 8:
			num = 2;
			num2 = 1;
			value = 435;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[7]);
			break;
	
		case 9:
			num = 2;
			num2 = 2;
			value = 430;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[8]);
			break;
	
		case 10:
			num = 2;
			num2 = 3;
			value = 425;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[9]);
			break;
	
		case 11:
			num = 2;
			num2 = 4;
			value = 420;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[10]);
			break;
	
		case 12:
			num = 2;
			num2 = 5;
			value = 0;
			break;
	
		case 13:
			num = 3;
			num2 = 0;
			value = 190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[11]);
			break;
	
		case 14:
			num = 3;
			num2 = 1;
			value = 185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[12]);
			break;
	
		case 15:
			num = 3;
			num2 = 2;
			value = 180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[13]);
			break;
	
		case 16:
			num = 3;
			num2 = 3;
			value = 175;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[14]);
			break;
	
		case 17:
			num = 3;
			num2 = 4;
			value = 170;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[15]);
			break;
	
		case 18:
			num = 4;
			num2 = 0;
			value = 295;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[16]);
			break;
	
		case 19:
			num = 4;
			num2 = 1;
			value = 290;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[17]);
			break;
	
		case 20:
			num = 4;
			num2 = 2;
			value = 285;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[18]);
			break;
	
		case 21:
			num = 4;
			num2 = 3;
			value = 280;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[19]);
			break;
	
		case 22:
			num = 4;
			num2 = 4;
			value = 275;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[20]);
			break;
	
		case 23:
			num = 4;
			num2 = 5;
			value = 0;
			break;
	
		case 24:
			num = 5;
			num2 = 0;
			value = 2000;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[21]);
			break;
	
		case 25:
			num = 5;
			num2 = 1;
			value = 1995;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[22]);
			break;
	
		case 26:
			num = 5;
			num2 = 2;
			value = 1990;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[23]);
			break;
	
		case 27:
			num = 5;
			num2 = 3;
			value = 1985;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[24]);
			break;
	
		case 28:
			num = 5;
			num2 = 4;
			value = 1980;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[25]);
			break;
	
		case 29:
			num = 5;
			num2 = 5;
			value = 0;
			break;
	
		case 30:
			num = 6;
			num2 = 0;
			value = 1150;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[26]);
			break;
	
		case 31:
			num = 6;
			num2 = 1;
			value = 1145;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[27]);
			break;
	
		case 32:
			num = 6;
			num2 = 2;
			value = 1140;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[28]);
			break;
	
		case 33:
			num = 6;
			num2 = 3;
			value = 1135;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[29]);
			break;
	
		case 34:
			num = 6;
			num2 = 4;
			value = 1130;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[30]);
			break;
	
		case 35:
			num = 7;
			num2 = 0;
			value = 550;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[31]);
			break;
	
		case 36:
			num = 7;
			num2 = 1;
			value = 545;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[32]);
			break;
	
		case 37:
			num = 7;
			num2 = 2;
			value = 540;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[33]);
			break;
	
		case 38:
			num = 7;
			num2 = 3;
			value = 535;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[34]);
			break;
	
		case 39:
			num = 7;
			num2 = 4;
			value = 530;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[35]);
			break;
	
		case 40:
			num = 7;
			num2 = 5;
			value = 0;
			break;
	
		case 41:
			num = 8;
			num2 = 0;
			value = 580;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[36]);
			break;
	
		case 42:
			num = 8;
			num2 = 1;
			value = 575;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[37]);
			break;
	
		case 43:
			num = 8;
			num2 = 2;
			value = 570;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[38]);
			break;
	
		case 44:
			num = 8;
			num2 = 3;
			value = 565;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[39]);
			break;
	
		case 45:
			num = 8;
			num2 = 4;
			value = 560;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[40]);
			break;
	
		case 46:
			num = 8;
			num2 = 5;
			value = 0;
			break;
	
		case 47:
			num = 9;
			num2 = 0;
			value = 1100;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[41]);
			break;
	
		case 48:
			num = 9;
			num2 = 1;
			value = 1095;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[42]);
			break;
	
		case 49:
			num = 9;
			num2 = 2;
			value = 1090;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[43]);
			break;
	
		case 50:
			num = 9;
			num2 = 3;
			value = 1085;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[44]);
			break;
	
		case 51:
			num = 9;
			num2 = 4;
			value = 1080;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[45]);
			break;
	
		case 52:
			num = 9;
			num2 = 5;
			value = 0;
			break;
	
		case 53:
			num = 10;
			num2 = 0;
			value = 520;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[46]);
			break;
	
		case 54:
			num = 10;
			num2 = 1;
			value = 515;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[47]);
			break;
	
		case 55:
			num = 10;
			num2 = 2;
			value = 510;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[48]);
			break;
	
		case 56:
			num = 10;
			num2 = 3;
			value = 505;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[49]);
			break;
	
		case 57:
			num = 10;
			num2 = 4;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[50]);
			break;
	
		case 58:
			num = 10;
			num2 = 5;
			value = 0;
			break;
	
		case 59:
			num = 10;
			num2 = 6;
			value = 0;
			break;
	
		case 60:
			num = 11;
			num2 = 0;
			value = 395;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[51]);
			break;
	
		case 61:
			num = 11;
			num2 = 1;
			value = 390;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[52]);
			break;
	
		case 62:
			num = 11;
			num2 = 2;
			value = 385;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[53]);
			break;
	
		case 63:
			num = 11;
			num2 = 3;
			value = 380;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[54]);
			break;
	
		case 64:
			num = 11;
			num2 = 4;
			value = 375;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[55]);
			break;
	
		case 65:
			num = 11;
			num2 = 5;
			value = 0;
			break;
	
		case 66:
			num = 11;
			num2 = 6;
			value = 0;
			break;
	
		case 67:
			num = 12;
			num2 = 0;
			value = 1050;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[56]);
			break;
	
		case 68:
			num = 12;
			num2 = 1;
			value = 1045;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[57]);
			break;
	
		case 69:
			num = 12;
			num2 = 2;
			value = 1040;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[58]);
			break;
	
		case 70:
			num = 12;
			num2 = 3;
			value = 1035;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[59]);
			break;
	
		case 71:
			num = 12;
			num2 = 4;
			value = 1030;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[60]);
			break;
	
		case 72:
			num = 12;
			num2 = 5;
			value = 0;
			break;
	
		case 73:
			num = 13;
			num2 = 0;
			value = 1200;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[61]);
			break;
	
		case 74:
			num = 13;
			num2 = 1;
			value = 1195;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[62]);
			break;
	
		case 75:
			num = 13;
			num2 = 2;
			value = 1190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[63]);
			break;
	
		case 76:
			num = 13;
			num2 = 3;
			value = 1185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[64]);
			break;
	
		case 77:
			num = 13;
			num2 = 4;
			value = 1180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[65]);
			break;
	
		case 78:
			num = 13;
			num2 = 5;
			value = 0;
			break;
	
		case 79:
			num = 14;
			num2 = 0;
			value = 475;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[66]);
			break;
	
		case 80:
			num = 14;
			num2 = 1;
			value = 470;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[67]);
			break;
	
		case 81:
			num = 14;
			num2 = 2;
			value = 465;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[68]);
			break;
	
		case 82:
			num = 14;
			num2 = 3;
			value = 460;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[69]);
			break;
	
		case 83:
			num = 14;
			num2 = 4;
			value = 455;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[70]);
			break;
	
		case 84:
			num = 14;
			num2 = 5;
			value = 0;
			break;
	
		case 85:
			num = 15;
			num2 = 0;
			value = 950;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[71]);
			break;
	
		case 86:
			num = 15;
			num2 = 1;
			value = 945;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[72]);
			break;
	
		case 87:
			num = 15;
			num2 = 2;
			value = 940;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[73]);
			break;
	
		case 88:
			num = 15;
			num2 = 3;
			value = 935;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[74]);
			break;
	
		case 89:
			num = 15;
			num2 = 4;
			value = 930;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2435[75]);
			break;
	
		case 90:
			num = 15;
			num2 = 5;
			value = 0;
			break;
	
		case 91:
			num = 15;
			num2 = 6;
			value = 0;
			break;
	
		default:
			Global_79172[0].f_5 = 4;
			func_0xE3509264(num5, iParam0, 92, hParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "H_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_0x9AF0DF05(int iParam0, int iParam1, Hash hParam2)
{
	switch (iParam0)
	{
		case 2:
			func_0xA91A09EB(iParam1, hParam2);
			break;
	
		case 11:
			func_0xE6D60F9B(iParam1, hParam2);
			break;
	
		case 8:
			func_0xE646E909(iParam1, hParam2);
			break;
	
		case 9:
			func_0x1DB3E93C(iParam1, hParam2);
			break;
	
		case 3:
			func_0xE0A1579F(iParam1, hParam2);
			break;
	
		case 4:
			func_0xB448FE2B(iParam1, hParam2);
			break;
	
		case 6:
			func_0x154FE8B3(iParam1, hParam2);
			break;
	
		case 1:
			func_0x8F60B7F6(iParam1, hParam2);
			break;
	
		case 7:
			func_0x31CAA5FE(iParam1, hParam2);
			break;
	
		case 10:
			func_0x532BD76A(iParam1, hParam2);
			break;
	
		case 14:
			func_0x859154FC(iParam1, hParam2);
			break;
	
		case 12:
			func_0x34BAB0FD(iParam1, hParam2);
			break;
	
		case 5:
			func_0x5C1D2F91(iParam1, hParam2);
			break;
	
		case 0:
			func_0x24B9D800(iParam1, hParam2);
			break;
	
		case 13:
			func_0xB745E49C(iParam1);
			break;
	}

	return;
}

void func_0xB745E49C(int iParam0)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;

	switch (iParam0)
	{
		case 31:
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			num2 = 0;
			num3 = 0;
			break;
	}

	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0x24B9D800(int iParam0, Hash hParam1)
{
	int num;

	num = 0;
	Global_79172[0].f_5 = 3;
	func_0xE3509264(num, iParam0, 0, hParam1);
	return;
}

void func_0x5C1D2F91(int iParam0, Hash hParam1)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		default:
			Global_79172[0].f_5 = 3;
			func_0xE3509264(num6, iParam0, 9, hParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "HA_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num3, 16);
	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0x34BAB0FD(int iParam0, Hash hParam1)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S1" /*The Beat Maker*/, 16);
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S2" /*The Brand*/, 16);
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S3" /*The Skater*/, 16);
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S4" /*The Roller*/, 16);
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S5" /*The Camo Kid*/, 16);
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S6" /*The Vibe*/, 16);
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S7" /*The Color Junky*/, 16);
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S8" /*The Classic T*/, 16);
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S9" /*The Worker*/, 16);
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P1" /*The Ladies Man*/, 16);
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P2" /*The Office*/, 16);
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P3" /*The After Party*/, 16);
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P4" /*The Rebel*/, 16);
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P5" /*The Trendsetter*/, 16);
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P6" /*The Artist*/, 16);
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P7" /*The Icon*/, 16);
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P8" /*The Nightlife*/, 16);
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B1" /*The Sun Bather*/, 16);
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B2" /*The Stoop*/, 16);
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B3" /*The Street G*/, 16);
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B4" /*The Effortless*/, 16);
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B5" /*The Everyday*/, 16);
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B6" /*The Hood*/, 16);
			break;
	
		case 24:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B7" /*The Jock*/, 16);
			break;
	
		case 25:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B8" /*The Pounders Fan*/, 16);
			break;
	
		default:
			Global_79172[0].f_5 = 3;
			func_0xE3509264(num6, iParam0, 26, hParam1);
			return;
	}

	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0x859154FC(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 14;
	num6 = 0;

	switch (iParam0)
	{
		case 0:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 0;
			break;
	
		case 1:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 1;
			break;
	
		case 2:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 2;
			break;
	
		case 3:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 3;
			break;
	
		case 4:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 4;
			break;
	
		case 5:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 5;
			break;
	
		case 6:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 6;
			break;
	
		case 7:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 7;
			break;
	
		case 8:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_0" /*Red Ear Defenders*/, 16);
			num = 0;
			num2 = 0;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_1" /*Blue Ear Defenders*/, 16);
			num = 0;
			num2 = 1;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_2" /*Green Ear Defenders*/, 16);
			num = 0;
			num2 = 2;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_3" /*Yellow Ear Defenders*/, 16);
			num = 0;
			num2 = 3;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_4" /*Desert Camo Ear Defenders*/, 16);
			num = 0;
			num2 = 4;
			value = 235;
			num3 = 0;
			num6 = 1;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_5" /*Black Ear Defenders*/, 16);
			num = 0;
			num2 = 5;
			value = 80;
			num3 = 0;
			num6 = 1;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_6" /*Gray Ear Defenders*/, 16);
			num = 0;
			num2 = 6;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_7" /*White Ear Defenders*/, 16);
			num = 0;
			num2 = 7;
			value = 90;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_1_0" /*White Dunce Cap*/, 16);
			num = 1;
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_0" /*Black Winter Hat*/, 16);
			num = 2;
			num2 = 0;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_1" /*Gray Winter Hat*/, 16);
			num = 2;
			num2 = 1;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_2" /*Blue Winter Hat*/, 16);
			num = 2;
			num2 = 2;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_3" /*Rasta Winter Hat*/, 16);
			num = 2;
			num2 = 3;
			value = 320;
			num3 = 0;
			num6 = 1;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_4" /*Gray Striped Winter Hat*/, 16);
			num = 2;
			num2 = 4;
			value = 185;
			num3 = 0;
			num6 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_5" /*Trio Knit Winter Hat*/, 16);
			num = 2;
			num2 = 5;
			value = 245;
			num3 = 0;
			num6 = 1;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_6" /*White Winter Hat*/, 16);
			num = 2;
			num2 = 6;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_7" /*Maroon Winter Hat*/, 16);
			num = 2;
			num2 = 7;
			value = 40;
			num3 = 0;
			num6 = 1;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_0", 16);
			num = 3;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_1" /*Black Canvas Hat*/, 16);
			num = 3;
			num2 = 1;
			value = 60;
			num3 = 0;
			num6 = 1;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_2" /*Tan Canvas Hat*/, 16);
			num = 3;
			num2 = 2;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_3", 16);
			num = 3;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_4", 16);
			num = 3;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_5", 16);
			num = 3;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_6", 16);
			num = 3;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_7", 16);
			num = 3;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_0" /*Black LS Fitted Cap*/, 16);
			num = 4;
			num2 = 0;
			value = 415;
			num3 = 0;
			num6 = 1;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_1" /*Gray LS Fitted Cap*/, 16);
			num = 4;
			num2 = 1;
			value = 315;
			num3 = 0;
			num6 = 1;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_2", 16);
			num = 4;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_3", 16);
			num = 4;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_4", 16);
			num = 4;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_5", 16);
			num = 4;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_6", 16);
			num = 4;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_7", 16);
			num = 4;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_0" /*Black Saggy Beanie*/, 16);
			num = 5;
			num2 = 0;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_1" /*Gray Saggy Beanie*/, 16);
			num = 5;
			num2 = 1;
			value = 60;
			num3 = 0;
			num6 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_2", 16);
			num = 5;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_3", 16);
			num = 5;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_4", 16);
			num = 5;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_5", 16);
			num = 5;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_6", 16);
			num = 5;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_7", 16);
			num = 5;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_0" /*Green Army Cap*/, 16);
			num = 6;
			num2 = 0;
			value = 160;
			num3 = 0;
			num6 = 1;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_1" /*Black Army Cap*/, 16);
			num = 6;
			num2 = 1;
			value = 265;
			num3 = 0;
			num6 = 1;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_2" /*Gray Army Cap*/, 16);
			num = 6;
			num2 = 2;
			value = 170;
			num3 = 0;
			num6 = 1;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_3" /*Blue Army Cap*/, 16);
			num = 6;
			num2 = 3;
			value = 135;
			num3 = 0;
			num6 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_4" /*Desert Army Cap*/, 16);
			num = 6;
			num2 = 4;
			value = 570;
			num3 = 0;
			num6 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_5" /*Woodland Army Cap*/, 16);
			num = 6;
			num2 = 5;
			value = 560;
			num3 = 0;
			num6 = 1;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_6" /*Ranch Beige Army Cap*/, 16);
			num = 6;
			num2 = 6;
			value = 140;
			num3 = 0;
			num6 = 1;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_7" /*Ranch Brown Army Cap*/, 16);
			num = 6;
			num2 = 7;
			value = 130;
			num3 = 0;
			num6 = 1;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_0" /*White Flat Cap*/, 16);
			num = 7;
			num2 = 0;
			value = 260;
			num3 = 0;
			num6 = 1;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_1" /*Gray Flat Cap*/, 16);
			num = 7;
			num2 = 1;
			value = 215;
			num3 = 0;
			num6 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_2" /*Black Flat Cap*/, 16);
			num = 7;
			num2 = 2;
			value = 430;
			num3 = 0;
			num6 = 1;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_3" /*Navy Flat Cap*/, 16);
			num = 7;
			num2 = 3;
			value = 160;
			num3 = 0;
			num6 = 1;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_4" /*Red Flat Cap*/, 16);
			num = 7;
			num2 = 4;
			value = 200;
			num3 = 0;
			num6 = 1;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_5" /*Brown Flat Cap*/, 16);
			num = 7;
			num2 = 5;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_6" /*Green Flat Cap*/, 16);
			num = 7;
			num2 = 6;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_7" /*Yellow Flat Cap*/, 16);
			num = 7;
			num2 = 7;
			value = 165;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_0", 16);
			num = 8;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_1", 16);
			num = 8;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_2", 16);
			num = 8;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_3", 16);
			num = 8;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_4", 16);
			num = 8;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_5", 16);
			num = 8;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_6", 16);
			num = 8;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_7", 16);
			num = 8;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_0", 16);
			num = 9;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_1", 16);
			num = 9;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_2", 16);
			num = 9;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_3", 16);
			num = 9;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_4", 16);
			num = 9;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_5" /*Fruntalot Green Cap*/, 16);
			num = 9;
			num2 = 5;
			value = 100;
			num3 = 0;
			num6 = 1;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_6", 16);
			num = 9;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_7" /*Stank Purple Cap*/, 16);
			num = 9;
			num2 = 7;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_0", 16);
			num = 10;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_1", 16);
			num = 10;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_2", 16);
			num = 10;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_3", 16);
			num = 10;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_4", 16);
			num = 10;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_5" /*Fruntalot Green Cap*/, 16);
			num = 10;
			num2 = 5;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_6", 16);
			num = 10;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_7" /*Stank Purple Cap*/, 16);
			num = 10;
			num2 = 7;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_0", 16);
			num = 11;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_1" /*Black Pork Pie*/, 16);
			num = 11;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_2", 16);
			num = 11;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_3" /*Olive Pork Pie*/, 16);
			num = 11;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_4", 16);
			num = 11;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_5", 16);
			num = 11;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_6" /*Blue Pork Pie*/, 16);
			num = 11;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_7", 16);
			num = 11;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_0" /*Black Fedora*/, 16);
			num = 12;
			num2 = 0;
			value = 1715;
			num3 = 0;
			num6 = 1;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_1" /*White Fedora*/, 16);
			num = 12;
			num2 = 1;
			value = 3900;
			num3 = 0;
			num6 = 1;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_2" /*Ash Fedora*/, 16);
			num = 12;
			num2 = 2;
			value = 1550;
			num3 = 0;
			num6 = 1;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_3", 16);
			num = 12;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_4" /*Brown Fedora*/, 16);
			num = 12;
			num2 = 4;
			value = 4250;
			num3 = 0;
			num6 = 1;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_5", 16);
			num = 12;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_6" /*Green Fedora*/, 16);
			num = 12;
			num2 = 6;
			value = 4460;
			num3 = 0;
			num6 = 1;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_7" /*Navy Fedora*/, 16);
			num = 12;
			num2 = 7;
			value = 4970;
			num3 = 0;
			num6 = 1;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_0" /*Black Cowboy Hat*/, 16);
			num = 13;
			num2 = 0;
			value = 290;
			num3 = 0;
			num6 = 1;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_1" /*Brown Cowboy Hat*/, 16);
			num = 13;
			num2 = 1;
			value = 305;
			num3 = 0;
			num6 = 1;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_2" /*Chocolate Cowboy Hat*/, 16);
			num = 13;
			num2 = 2;
			value = 4170;
			num3 = 0;
			num6 = 1;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_3" /*White Cowboy Hat*/, 16);
			num = 13;
			num2 = 3;
			value = 335;
			num3 = 0;
			num6 = 1;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_4" /*Chestnut Cowboy Hat*/, 16);
			num = 13;
			num2 = 4;
			value = 4940;
			num3 = 0;
			num6 = 1;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_5" /*Beige Cowboy Hat*/, 16);
			num = 13;
			num2 = 5;
			value = 275;
			num3 = 0;
			num6 = 1;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_6" /*Red Cowboy Hat*/, 16);
			num = 13;
			num2 = 6;
			value = 5000;
			num3 = 0;
			num6 = 1;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_7" /*Tan Cowboy Hat*/, 16);
			num = 13;
			num2 = 7;
			value = 3620;
			num3 = 0;
			num6 = 1;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_0" /*White Paisley Bandana*/, 16);
			num = 14;
			num2 = 0;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_1" /*Black Paisley Bandana*/, 16);
			num = 14;
			num2 = 1;
			value = 25;
			num3 = 0;
			num6 = 1;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_2" /*Navy Bandana*/, 16);
			num = 14;
			num2 = 2;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_3" /*Red Bandana*/, 16);
			num = 14;
			num2 = 3;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_4" /*Green Bandana*/, 16);
			num = 14;
			num2 = 4;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_5" /*Purple Bandana*/, 16);
			num = 14;
			num2 = 5;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_6" /*Camo Bandana*/, 16);
			num = 14;
			num2 = 6;
			value = 350;
			num3 = 0;
			num6 = 1;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_7" /*Yellow Bandana*/, 16);
			num = 14;
			num2 = 7;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_0" /*Beat Off White Headphones*/, 16);
			num = 15;
			num2 = 0;
			value = 365;
			num3 = 0;
			num6 = 1;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_1" /*Beat Off Black Headphones*/, 16);
			num = 15;
			num2 = 1;
			value = 380;
			num3 = 0;
			num6 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_2" /*Beat Off Red Headphones*/, 16);
			num = 15;
			num2 = 2;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_3" /*Beat Off Blue Headphones*/, 16);
			num = 15;
			num2 = 3;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_4" /*Beat Off Yellow Headphones*/, 16);
			num = 15;
			num2 = 4;
			value = 600;
			num3 = 0;
			num6 = 1;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_5" /*Beat Off Purple Headphones*/, 16);
			num = 15;
			num2 = 5;
			value = 590;
			num3 = 0;
			num6 = 1;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_6" /*Beat Off Gray Headphones*/, 16);
			num = 15;
			num2 = 6;
			value = 395;
			num3 = 0;
			num6 = 1;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_7" /*Beat Off Green Headphones*/, 16);
			num = 15;
			num2 = 7;
			value = 555;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_0" /*Western MC Yellow Helmet*/, 16);
			num = 16;
			num2 = 0;
			value = 1060;
			num3 = 0;
			num6 = 2;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_1" /*Steel Horse Blue Helmet*/, 16);
			num = 16;
			num2 = 1;
			value = 1400;
			num3 = 0;
			num6 = 2;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_2" /*Steel Horse Orange Helmet*/, 16);
			num = 16;
			num2 = 2;
			value = 1315;
			num3 = 0;
			num6 = 2;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_3" /*Western MC Green Helmet*/, 16);
			num = 16;
			num2 = 3;
			value = 1230;
			num3 = 0;
			num6 = 2;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_4" /*Western MC Red Helmet*/, 16);
			num = 16;
			num2 = 4;
			value = 1145;
			num3 = 0;
			num6 = 2;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_5" /*Steel Horse Black Helmet*/, 16);
			num = 16;
			num2 = 5;
			value = 8450;
			num3 = 0;
			num6 = 2;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_6" /*Black Helmet*/, 16);
			num = 16;
			num2 = 6;
			value = 675;
			num3 = 0;
			num6 = 2;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_7" /*Western MC Lilac Helmet*/, 16);
			num = 16;
			num2 = 7;
			value = 8750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_0" /*Blue Open-Face Helmet*/, 16);
			num = 17;
			num2 = 0;
			value = 975;
			num3 = 0;
			num6 = 2;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_1" /*Orange Open-Face Helmet*/, 16);
			num = 17;
			num2 = 1;
			value = 750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_2" /*Pale Blue Open-Face Helmet*/, 16);
			num = 17;
			num2 = 2;
			value = 865;
			num3 = 0;
			num6 = 2;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_3" /*Red Open-Face Helmet*/, 16);
			num = 17;
			num2 = 3;
			value = 890;
			num3 = 0;
			num6 = 2;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_4" /*Gray Open-Face Helmet*/, 16);
			num = 17;
			num2 = 4;
			value = 730;
			num3 = 0;
			num6 = 2;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_5" /*Black Open-Face Helmet*/, 16);
			num = 17;
			num2 = 5;
			value = 650;
			num3 = 0;
			num6 = 2;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_6" /*Pink Open-Face Helmet*/, 16);
			num = 17;
			num2 = 6;
			value = 645;
			num3 = 0;
			num6 = 2;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_7" /*White Open-Face Helmet*/, 16);
			num = 17;
			num2 = 7;
			value = 755;
			num3 = 0;
			num6 = 2;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_0" /*Shatter Pattern Helmet*/, 16);
			num = 18;
			num2 = 0;
			value = 13850;
			num3 = 0;
			num6 = 2;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_1" /*Stars Helmet*/, 16);
			num = 18;
			num2 = 1;
			value = 2900;
			num3 = 0;
			num6 = 2;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_2" /*Squared Helmet*/, 16);
			num = 18;
			num2 = 2;
			value = 2895;
			num3 = 0;
			num6 = 2;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_3" /*Crimson Helmet*/, 16);
			num = 18;
			num2 = 3;
			value = 12500;
			num3 = 0;
			num6 = 2;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_4" /*Skull Helmet*/, 16);
			num = 18;
			num2 = 4;
			value = 15000;
			num3 = 0;
			num6 = 2;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_5" /*Ace of Spades Helmet*/, 16);
			num = 18;
			num2 = 5;
			value = 14750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_6" /*Flamejob Helmet*/, 16);
			num = 18;
			num2 = 6;
			value = 13150;
			num3 = 0;
			num6 = 2;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_7" /*White Helmet*/, 16);
			num = 18;
			num2 = 7;
			value = 2925;
			num3 = 0;
			num6 = 2;
			break;
	}

	switch (iParam0)
	{
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_0", 16);
			num = 0;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_1", 16);
			num = 0;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_2", 16);
			num = 0;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_3", 16);
			num = 0;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_4", 16);
			num = 0;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_5", 16);
			num = 0;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_6", 16);
			num = 0;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_7", 16);
			num = 0;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_8", 16);
			num = 0;
			num2 = 8;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_9", 16);
			num = 0;
			num2 = 9;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_10", 16);
			num = 0;
			num2 = 10;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_0", 16);
			num = 1;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_1" /*Black Wraparounds*/, 16);
			num = 1;
			num2 = 1;
			value = 180;
			num3 = 1;
			num6 = 3;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_2", 16);
			num = 1;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_3", 16);
			num = 1;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_4", 16);
			num = 1;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_5", 16);
			num = 1;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_6", 16);
			num = 1;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_7", 16);
			num = 1;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_0" /*Black Winter Shades*/, 16);
			num = 2;
			num2 = 0;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_1" /*White Silver Shades*/, 16);
			num = 2;
			num2 = 1;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_2" /*Crimson Polarized Shades*/, 16);
			num = 2;
			num2 = 2;
			value = 380;
			num3 = 1;
			num6 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_3" /*Black Summer Shades*/, 16);
			num = 2;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_4" /*Black Autumn Shades*/, 16);
			num = 2;
			num2 = 4;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_5" /*White Rust Shades*/, 16);
			num = 2;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_6" /*White Steel Shades*/, 16);
			num = 2;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_7" /*Green Polarized Shades*/, 16);
			num = 2;
			num2 = 7;
			value = 390;
			num3 = 1;
			num6 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_8", 16);
			num = 2;
			num2 = 8;
			value = 950;
			num3 = 1;
			num6 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_9", 16);
			num = 2;
			num2 = 9;
			value = 565;
			num3 = 1;
			num6 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_10", 16);
			num = 2;
			num2 = 10;
			value = 630;
			num3 = 1;
			num6 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_0" /*Slate Janitor Frames*/, 16);
			num = 3;
			num2 = 0;
			value = 70;
			num3 = 1;
			num6 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_1" /*Black Janitor Frames*/, 16);
			num = 3;
			num2 = 1;
			value = 60;
			num3 = 1;
			num6 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_2" /*Gray Janitor Frames*/, 16);
			num = 3;
			num2 = 2;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_3" /*Ash Janitor Frames*/, 16);
			num = 3;
			num2 = 3;
			value = 95;
			num3 = 1;
			num6 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_4" /*Tan Janitor Frames*/, 16);
			num = 3;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_5" /*Smoke Janitor Frames*/, 16);
			num = 3;
			num2 = 5;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_6" /*Charcoal Janitor Frames*/, 16);
			num = 3;
			num2 = 6;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_7" /*White Janitor Frames*/, 16);
			num = 3;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_8", 16);
			num = 3;
			num2 = 8;
			value = 650;
			num3 = 1;
			num6 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_9", 16);
			num = 3;
			num2 = 9;
			value = 265;
			num3 = 1;
			num6 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_10", 16);
			num = 3;
			num2 = 10;
			value = 330;
			num3 = 1;
			num6 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_0" /*Enema Brown Glasses*/, 16);
			num = 4;
			num2 = 0;
			value = 245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_1" /*Enema Gray Glasses*/, 16);
			num = 4;
			num2 = 1;
			value = 250;
			num3 = 1;
			num6 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_2" /*Enema Black Glasses*/, 16);
			num = 4;
			num2 = 2;
			value = 210;
			num3 = 1;
			num6 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_3" /*Enema Tortoiseshell Glasses*/, 16);
			num = 4;
			num2 = 3;
			value = 245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_4" /*Enema Walnut Glasses*/, 16);
			num = 4;
			num2 = 4;
			value = 205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_5" /*Enema Marble Glasses*/, 16);
			num = 4;
			num2 = 5;
			value = 205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_6" /*Enema Smoke Glasses*/, 16);
			num = 4;
			num2 = 6;
			value = 215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_7" /*Enema Smoke Shades*/, 16);
			num = 4;
			num2 = 7;
			value = 215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_8", 16);
			num = 4;
			num2 = 8;
			value = 995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_9", 16);
			num = 4;
			num2 = 9;
			value = 610;
			num3 = 1;
			num6 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_10", 16);
			num = 4;
			num2 = 10;
			value = 675;
			num3 = 1;
			num6 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_0" /*Gold Aviators*/, 16);
			num = 5;
			num2 = 0;
			value = 4050;
			num3 = 1;
			num6 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_1" /*Steel Aviators*/, 16);
			num = 5;
			num2 = 1;
			value = 4060;
			num3 = 1;
			num6 = 3;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_2" /*Silver Aviators, Brown Tint*/, 16);
			num = 5;
			num2 = 2;
			value = 170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_3" /*Gray Aviators, Green Tint*/, 16);
			num = 5;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_4" /*Silver Aviators, Blue Tint*/, 16);
			num = 5;
			num2 = 4;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_5" /*Tan Aviators, Dark Tint*/, 16);
			num = 5;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_6" /*Steel Aviators, Blue Tint*/, 16);
			num = 5;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_7" /*Silver Aviators, Copper Tint*/, 16);
			num = 5;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_8", 16);
			num = 5;
			num2 = 8;
			value = 1760;
			num3 = 1;
			num6 = 3;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_9", 16);
			num = 5;
			num2 = 9;
			value = 1375;
			num3 = 1;
			num6 = 3;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_10", 16);
			num = 5;
			num2 = 10;
			value = 1440;
			num3 = 1;
			num6 = 3;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_0", 16);
			num = 6;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_1", 16);
			num = 6;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_2", 16);
			num = 6;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_3", 16);
			num = 6;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_4", 16);
			num = 6;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_5", 16);
			num = 6;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_6", 16);
			num = 6;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_7", 16);
			num = 6;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_0" /*Black Casuals*/, 16);
			num = 7;
			num2 = 0;
			value = 180;
			num3 = 1;
			num6 = 3;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_1" /*Zap Casuals*/, 16);
			num = 7;
			num2 = 1;
			value = 500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_2" /*Tortoiseshell Casuals*/, 16);
			num = 7;
			num2 = 2;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_3" /*Red Casuals*/, 16);
			num = 7;
			num2 = 3;
			value = 220;
			num3 = 1;
			num6 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_4" /*White Casuals*/, 16);
			num = 7;
			num2 = 4;
			value = 185;
			num3 = 1;
			num6 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_5" /*Camo Collection Casuals*/, 16);
			num = 7;
			num2 = 5;
			value = 1445;
			num3 = 1;
			num6 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_6" /*Lemon Casuals*/, 16);
			num = 7;
			num2 = 6;
			value = 530;
			num3 = 1;
			num6 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_7" /*Blood Casuals*/, 16);
			num = 7;
			num2 = 7;
			value = 650;
			num3 = 1;
			num6 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_8", 16);
			num = 7;
			num2 = 8;
			value = 1170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_9", 16);
			num = 7;
			num2 = 9;
			value = 785;
			num3 = 1;
			num6 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_10", 16);
			num = 7;
			num2 = 10;
			value = 850;
			num3 = 1;
			num6 = 3;
			break;
	}

	switch (iParam0)
	{
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_0" /*Brown Eyewear*/, 16);
			num = 8;
			num2 = 0;
			value = 4260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_1" /*Silver Eyewear*/, 16);
			num = 8;
			num2 = 1;
			value = 4310;
			num3 = 1;
			num6 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_2" /*Gray Eyewear*/, 16);
			num = 8;
			num2 = 2;
			value = 4130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_3" /*Smoke Cop Frames*/, 16);
			num = 8;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_4" /*Coffee Cop Frames*/, 16);
			num = 8;
			num2 = 4;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_5" /*Black Cop Frames*/, 16);
			num = 8;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_6" /*Slate Cop Frames*/, 16);
			num = 8;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_7" /*Charcoal Cop Frames*/, 16);
			num = 8;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_8", 16);
			num = 8;
			num2 = 8;
			value = 1885;
			num3 = 1;
			num6 = 3;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_9", 16);
			num = 8;
			num2 = 9;
			value = 1500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_10", 16);
			num = 8;
			num2 = 10;
			value = 1565;
			num3 = 1;
			num6 = 3;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_0" /*Hawaiian Snow Black*/, 16);
			num = 9;
			num2 = 0;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_1" /*Hawaiian Snow Gray*/, 16);
			num = 9;
			num2 = 1;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_2" /*Hawaiian Snow White*/, 16);
			num = 9;
			num2 = 2;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_3" /*Hawaiian Snow Ash*/, 16);
			num = 9;
			num2 = 3;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_4" /*Hawaiian Snow Copper*/, 16);
			num = 9;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_5" /*Hawaiian Snow Tortoiseshell*/, 16);
			num = 9;
			num2 = 5;
			value = 4290;
			num3 = 1;
			num6 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_6" /*Hawaiian Snow Marble*/, 16);
			num = 9;
			num2 = 6;
			value = 4150;
			num3 = 1;
			num6 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_7" /*Hawaiian Snow Walnut*/, 16);
			num = 9;
			num2 = 7;
			value = 4295;
			num3 = 1;
			num6 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_8", 16);
			num = 9;
			num2 = 8;
			value = 2315;
			num3 = 1;
			num6 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_9", 16);
			num = 9;
			num2 = 9;
			value = 1930;
			num3 = 1;
			num6 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_10", 16);
			num = 9;
			num2 = 10;
			value = 1995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_0" /*Gold Bull Emic*/, 16);
			num = 10;
			num2 = 0;
			value = 6240;
			num3 = 1;
			num6 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_1" /*Gray Bull Emic*/, 16);
			num = 10;
			num2 = 1;
			value = 4955;
			num3 = 1;
			num6 = 3;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_2" /*Silver Bull Emic*/, 16);
			num = 10;
			num2 = 2;
			value = 5590;
			num3 = 1;
			num6 = 3;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_3" /*Black Bull Emic*/, 16);
			num = 10;
			num2 = 3;
			value = 4920;
			num3 = 1;
			num6 = 3;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_4" /*Brown Bull Emic*/, 16);
			num = 10;
			num2 = 4;
			value = 4990;
			num3 = 1;
			num6 = 3;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_5" /*Slate Bull Emic*/, 16);
			num = 10;
			num2 = 5;
			value = 4780;
			num3 = 1;
			num6 = 3;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_6" /*White Bull Emic*/, 16);
			num = 10;
			num2 = 6;
			value = 4775;
			num3 = 1;
			num6 = 3;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_7" /*Purple Tint Bull Emic*/, 16);
			num = 10;
			num2 = 7;
			value = 4800;
			num3 = 1;
			num6 = 3;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_8", 16);
			num = 10;
			num2 = 8;
			value = 2835;
			num3 = 1;
			num6 = 3;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_9", 16);
			num = 10;
			num2 = 9;
			value = 2450;
			num3 = 1;
			num6 = 3;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_10", 16);
			num = 10;
			num2 = 10;
			value = 2515;
			num3 = 1;
			num6 = 3;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_0", 16);
			num = 11;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_1", 16);
			num = 11;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_2", 16);
			num = 11;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_3", 16);
			num = 11;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_4", 16);
			num = 11;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_5", 16);
			num = 11;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_7", 16);
			num = 11;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_0" /*Orange Elvis*/, 16);
			num = 12;
			num2 = 0;
			value = 385;
			num3 = 1;
			num6 = 3;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_1" /*Gray Elvis*/, 16);
			num = 12;
			num2 = 1;
			value = 310;
			num3 = 1;
			num6 = 3;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_2" /*Slate Elvis*/, 16);
			num = 12;
			num2 = 2;
			value = 3655;
			num3 = 1;
			num6 = 3;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_3" /*Black Elvis*/, 16);
			num = 12;
			num2 = 3;
			value = 4055;
			num3 = 1;
			num6 = 3;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_4" /*White Elvis*/, 16);
			num = 12;
			num2 = 4;
			value = 3595;
			num3 = 1;
			num6 = 3;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_5" /*Blue Tint Elvis*/, 16);
			num = 12;
			num2 = 5;
			value = 3605;
			num3 = 1;
			num6 = 3;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_6" /*Pink Tint Elvis*/, 16);
			num = 12;
			num2 = 6;
			value = 3645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_7" /*Copper Elvis*/, 16);
			num = 12;
			num2 = 7;
			value = 320;
			num3 = 1;
			num6 = 3;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_8", 16);
			num = 12;
			num2 = 8;
			value = 2820;
			num3 = 1;
			num6 = 3;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_9", 16);
			num = 12;
			num2 = 9;
			value = 2435;
			num3 = 1;
			num6 = 3;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_10", 16);
			num = 12;
			num2 = 10;
			value = 2500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_0" /*Broker Black Hipsters*/, 16);
			num = 13;
			num2 = 0;
			value = 230;
			num3 = 1;
			num6 = 3;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_1" /*White Polarized Hipsters*/, 16);
			num = 13;
			num2 = 1;
			value = 1605;
			num3 = 1;
			num6 = 3;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_2" /*Choco Polarized Hipsters*/, 16);
			num = 13;
			num2 = 2;
			value = 2230;
			num3 = 1;
			num6 = 3;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_3" /*Slate Hipsters*/, 16);
			num = 13;
			num2 = 3;
			value = 220;
			num3 = 1;
			num6 = 3;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_4" /*Charcoal Hipsters*/, 16);
			num = 13;
			num2 = 4;
			value = 185;
			num3 = 1;
			num6 = 3;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_5" /*Olive Polarized Hipsters*/, 16);
			num = 13;
			num2 = 5;
			value = 2070;
			num3 = 1;
			num6 = 3;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_6" /*Gold Polarized Hipsters*/, 16);
			num = 13;
			num2 = 6;
			value = 2205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_7" /*Candy Polarized Hipsters*/, 16);
			num = 13;
			num2 = 7;
			value = 1690;
			num3 = 1;
			num6 = 3;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_8", 16);
			num = 13;
			num2 = 8;
			value = 2715;
			num3 = 1;
			num6 = 3;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_9", 16);
			num = 13;
			num2 = 9;
			value = 2330;
			num3 = 1;
			num6 = 3;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_10", 16);
			num = 13;
			num2 = 10;
			value = 2395;
			num3 = 1;
			num6 = 3;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_0", 16);
			num = 14;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_1", 16);
			num = 14;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_2", 16);
			num = 14;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_3", 16);
			num = 14;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_4", 16);
			num = 14;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_5", 16);
			num = 14;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_6", 16);
			num = 14;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_7", 16);
			num = 14;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_0" /*Yellow Guns*/, 16);
			num = 15;
			num2 = 0;
			value = 515;
			num3 = 1;
			num6 = 3;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_1" /*White Guns*/, 16);
			num = 15;
			num2 = 1;
			value = 60;
			num3 = 1;
			num6 = 3;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_2" /*Gray Guns*/, 16);
			num = 15;
			num2 = 2;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_3" /*Red Guns*/, 16);
			num = 15;
			num2 = 3;
			value = 95;
			num3 = 1;
			num6 = 3;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_4" /*Blue Guns*/, 16);
			num = 15;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_5" /*Hornet Guns*/, 16);
			num = 15;
			num2 = 5;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_6" /*Orange Guns*/, 16);
			num = 15;
			num2 = 6;
			value = 485;
			num3 = 1;
			num6 = 3;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_7" /*Pink Guns*/, 16);
			num = 15;
			num2 = 7;
			value = 545;
			num3 = 1;
			num6 = 3;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_8", 16);
			num = 15;
			num2 = 8;
			value = 645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_9", 16);
			num = 15;
			num2 = 9;
			value = 260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 318:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_10", 16);
			num = 15;
			num2 = 10;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	}

	switch (iParam0)
	{
		case 319:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_0" /*Deep Sea Watch*/, 16);
			num = 0;
			num2 = 0;
			value = 5000;
			num3 = 6;
			num6 = 4;
			break;
	
		case 320:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_1" /*Gold Watch*/, 16);
			num = 0;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 321:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_2" /*Silver Watch*/, 16);
			num = 0;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 322:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_3" /*Black Watch*/, 16);
			num = 0;
			num2 = 3;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 323:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_4" /*Gold Faced Silver Watch*/, 16);
			num = 0;
			num2 = 4;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 324:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_0" /*White LED, Black Strap*/, 16);
			num = 1;
			num2 = 0;
			value = 695;
			num3 = 6;
			num6 = 4;
			break;
	
		case 325:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_1" /*Red LED, White Strap*/, 16);
			num = 1;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 326:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_2" /*Red LED, Brown Strap*/, 16);
			num = 1;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	}

	if (num6 == 1)
	{
		num7 = iParam0 - 10;
	
		if (num7 >= 0 && num7 < 121)
		{
			if (num7 > 8)
				num7 = num7 - 1;
		
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_950[num7] * Global_298067.f_12);
		}
	}
	else if (num6 == 2)
	{
		num8 = iParam0 - 131;
	
		if (num8 >= 0 && num8 < 24)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1071[num8] * Global_298067.f_13);
	}
	else if (num6 == 3)
	{
		num9 = iParam0 - 155;
	
		if (num9 >= 0 && num9 < 128)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1096[num9] * Global_298067.f_14);
	}
	else if (num6 == 4)
	{
		num10 = iParam0 - 319;
	
		if (num10 >= 0 && num10 < 15)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1225[num10] * Global_298067.f_15);
	}

	if (iParam0 >= 327)
	{
		Global_79172[0].f_5 = 3;
		func_0xE3509264(num5, iParam0, 327, hParam1);
	
		if (Global_79172[0].f_7 > 0)
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1))
				Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_12);
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1))
				Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_14);
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1))
				Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_15);
	}
	else
	{
		func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_0x532BD76A(int iParam0, Hash hParam1)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_0_0" /*No Crew Emblem*/, 16);
			num2 = 0;
			num3 = 0;
			num = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
			num2 = 1;
			num3 = 0;
			num = 5000;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 2;
			num3 = 0;
			num = 10000;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
			num2 = 3;
			num3 = 0;
			num = 5000;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 4;
			num3 = 0;
			num = 10000;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
			num2 = 5;
			num3 = 0;
			num = 5000;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 6;
			num3 = 0;
			num = 10000;
			break;
	
		default:
			Global_79172[0].f_5 = 3;
			func_0xE3509264(num6, iParam0, 7, hParam1);
			return;
	}

	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0x31CAA5FE(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 7;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 4:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 5:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 6:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 3;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 8:
			num = 3;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 9:
			num = 3;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 4;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 11:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 12:
			num = 4;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 17:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 18:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 19:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 20:
			num = 4;
			num2 = 10;
			flag = true;
			break;
	
		case 21:
			num = 4;
			num2 = 11;
			flag = true;
			break;
	
		case 22:
			num = 4;
			num2 = 12;
			flag = true;
			break;
	
		case 23:
			num = 4;
			num2 = 13;
			flag = true;
			break;
	
		case 24:
			num = 4;
			num2 = 14;
			flag = true;
			break;
	
		case 25:
			num = 4;
			num2 = 15;
			flag = true;
			break;
	
		case 26:
			num = 5;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 5;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 28:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 29:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 30:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 31:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 32:
			num = 6;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 6;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 6;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 7;
			num2 = 0;
			break;
	
		case 39:
			num = 8;
			num2 = 0;
			break;
	
		case 40:
			num = 9;
			num2 = 0;
			break;
	
		case 41:
			num = 10;
			num2 = 0;
		
			if (Global_262145.f_3884 != -1)
				value = Global_262145.f_3884;
			else
				value = 115;
			break;
	
		case 42:
			num = 10;
			num2 = 1;
		
			if (Global_262145.f_3885 != -1)
				value = Global_262145.f_3885;
			else
				value = 125;
			break;
	
		case 43:
			num = 10;
			num2 = 2;
		
			if (Global_262145.f_3886 != -1)
				value = Global_262145.f_3886;
			else
				value = 130;
			break;
	
		case 44:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 49:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 50:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 51:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 52:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 53:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 54:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 55:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 56:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 57:
			num = 11;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 58:
			num = 11;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 59:
			num = 11;
			num2 = 2;
		
			if (Global_262145.f_3890 != -1)
				value = Global_262145.f_3890;
			else
				value = 725;
			break;
	
		case 60:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 61:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 62:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 63:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 64:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 65:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 66:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 67:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 12;
			num2 = 0;
		
			if (Global_262145.f_3887 != -1)
				value = Global_262145.f_3887;
			else
				value = 65;
			break;
	
		case 74:
			num = 12;
			num2 = 1;
		
			if (Global_262145.f_3888 != -1)
				value = Global_262145.f_3888;
			else
				value = 65;
			break;
	
		case 75:
			num = 12;
			num2 = 2;
		
			if (Global_262145.f_3889 != -1)
				value = Global_262145.f_3889;
			else
				value = 95;
			break;
	
		case 76:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 12;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 12;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 12;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 81:
			num = 12;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 82:
			num = 12;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 13;
			num2 = 0;
			break;
	
		case 90:
			num = 14;
			num2 = 0;
			break;
	
		case 91:
			num = 15;
			num2 = 0;
			break;
	
		default:
			Global_79172[0].f_5 = 3;
			func_0xE3509264(num5, iParam0, 92, hParam1);
		
			if (Global_79172[0].f_7 > 0)
				Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_45);
		
			return;
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_298067.f_45);
	TEXT_LABEL_ASSIGN_STRING(&unk, "T_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_0x8F60B7F6(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 965;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 960;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 9500;
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 975;
			break;
	
		case 5:
			num = 2;
			num2 = 0;
			value = 1185;
			break;
	
		case 6:
			num = 2;
			num2 = 1;
			value = 15000;
			break;
	
		case 7:
			num = 2;
			num2 = 2;
			value = 1115;
			break;
	
		case 8:
			num = 2;
			num2 = 3;
			value = 1105;
			break;
	
		case 9:
			num = 3;
			num2 = 0;
			value = 25000;
			break;
	
		case 10:
			num = 4;
			num2 = 0;
			value = 510;
			break;
	
		case 11:
			num = 4;
			num2 = 1;
			value = 530;
			break;
	
		case 12:
			num = 4;
			num2 = 2;
			value = 5500;
			break;
	
		case 13:
			num = 4;
			num2 = 3;
			value = 535;
			break;
	
		case 14:
			num = 5;
			num2 = 0;
			value = 1510;
			break;
	
		case 15:
			num = 5;
			num2 = 1;
			value = 1530;
			break;
	
		case 16:
			num = 5;
			num2 = 2;
			value = 14500;
			break;
	
		case 17:
			num = 5;
			num2 = 3;
			value = 13000;
			break;
	
		case 18:
			num = 6;
			num2 = 0;
			value = 8000;
			break;
	
		case 19:
			num = 6;
			num2 = 1;
			value = 1265;
			break;
	
		case 20:
			num = 6;
			num2 = 2;
			value = 8500;
			break;
	
		case 21:
			num = 6;
			num2 = 3;
			value = 1210;
			break;
	
		case 22:
			num = 7;
			num2 = 0;
			value = 2360;
			break;
	
		case 23:
			num = 7;
			num2 = 1;
			value = 22500;
			break;
	
		case 24:
			num = 7;
			num2 = 2;
			value = 2375;
			break;
	
		case 25:
			num = 7;
			num2 = 3;
			value = 2485;
			break;
	
		default:
			Global_79172[0].f_5 = 3;
			func_0xE3509264(num5, iParam0, 26, hParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "M_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = iParam0 - 1;

	if (num6 >= 0 && num6 < 26)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_923[num6] * Global_298067.f_16);

	func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_0x154FE8B3(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 6;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 300;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 285;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 180;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 190;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 190;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 165;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 200;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 480;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 155;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 350;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 290;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 165;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 165;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 170;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 155;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 165;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 165;
			break;
	}

	switch (iParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 160;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 205;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 3;
			num2 = 0;
			value = 560;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 275;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 290;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 300;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 360;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 270;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 265;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 295;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 355;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 340;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 285;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 310;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 350;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 305;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 280;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 320;
			break;
	}

	switch (iParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 115;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 115;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 110;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 125;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 5;
			num2 = 0;
			value = 50;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 35;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 50;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 50;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 65;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 65;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 112:
			num = 7;
			num2 = 0;
			value = 165;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 165;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 185;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 175;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 185;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 460;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 185;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 190;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 165;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 165;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 185;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 175;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 235;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 445;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 185;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 190;
			break;
	}

	switch (iParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 175;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 215;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 225;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 230;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 235;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 215;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 205;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 245;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 225;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 215;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 225;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 230;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 235;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 215;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 425;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 245;
			break;
	
		case 144:
			num = 9;
			num2 = 0;
			value = 225;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 135;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 130;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 110;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 140;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 95;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 100;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 110;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 95;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 105;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 105;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 115;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 115;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 115;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 500;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 440;
			break;
	}

	switch (iParam0)
	{
		case 160:
			num = 10;
			num2 = 0;
			value = 1090;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 600;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 1865;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 490;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 176:
			num = 11;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 470;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 1795;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 1830;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 455;
			break;
	}

	switch (iParam0)
	{
		case 192:
			num = 12;
			num2 = 0;
			value = 455;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 2110;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 380;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 1655;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 2500;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 415;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 730;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 445;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 425;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 410;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 480;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 485;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 480;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 395;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 495;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 2090;
			break;
	
		case 208:
			num = 13;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 224:
			num = 14;
			num2 = 0;
			value = 450;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 685;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 420;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 365;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 465;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 405;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 400;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 440;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 385;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 435;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 375;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 390;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 475;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 430;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 490;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 490;
			break;
	
		case 240:
			num = 15;
			num2 = 0;
			value = 615;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 315;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 415;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 425;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 435;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 445;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 640;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 460;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 465;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 745;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 845;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 1420;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 475;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 470;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 1000;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 690;
			break;
	}

	num6 = iParam0;

	if (num6 >= 0 && num6 < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_666[num6] * Global_298067.f_11);

	TEXT_LABEL_ASSIGN_STRING(&unk, "F_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);

	if (iParam0 >= 256)
	{
		Global_79172[0].f_5 = 3;
		func_0xE3509264(num5, iParam0, 256, hParam1);
	
		if (Global_79172[0].f_7 > 0)
			Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_11);
	}
	else
	{
		func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_0xB448FE2B(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 4;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 335;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 460;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 455;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 470;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 650;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 385;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 455;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 2150;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 375;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 2190;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 285;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 295;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 445;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 2240;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 465;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 1740;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 1415;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 325;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 345;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 355;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 395;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 315;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 275;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 265;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 305;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 255;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 235;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 245;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 215;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 1865;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 450;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 415;
			break;
	
		case 32:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 100;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 48:
			num = 3;
			num2 = 0;
			value = 55;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 60;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 100;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 65;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 65;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 100;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 100;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 65;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 90;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 75;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 65;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 100;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 100;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 225;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 205;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 215;
			break;
	
		case 64:
			num = 4;
			num2 = 0;
			value = 490;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 485;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 2500;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 485;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 80:
			num = 5;
			num2 = 0;
			value = 100;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 105;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 80;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 90;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 100;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 95;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 100;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 90;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 85;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 80;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 80;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 100;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 95;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 440;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 380;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 80;
			break;
	
		case 96:
			num = 6;
			num2 = 0;
			value = 115;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 140;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 135;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 255;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 112:
			num = 7;
			num2 = 0;
			value = 325;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 115;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 135;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 125;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 120;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 130;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 110;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 345;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 745;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 120;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 135;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 345;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 130;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 140;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 130;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 660;
			break;
	
		case 128:
			num = 8;
			num2 = 0;
			value = 150;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 150;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 150;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 150;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 144:
			num = 9;
			num2 = 0;
			value = 75;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 90;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 145;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 150;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 110;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 95;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 155;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 255;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 165;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 1150;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 1150;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 1210;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 1125;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 1135;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 1145;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 1145;
			break;
	
		case 160:
			num = 10;
			num2 = 0;
			value = 845;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 480;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 475;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 176:
			num = 11;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 192:
			num = 12;
			num2 = 0;
			value = 220;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 100;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 65;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 50;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 100;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 460;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 475;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 470;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 224:
			num = 14;
			num2 = 0;
			value = 50;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 100;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 100;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 100;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 240:
			num = 15;
			num2 = 0;
			value = 90;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 105;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 100;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 240;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 95;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 95;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 100;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 105;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 100;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 295;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 250;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 285;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 275;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 105;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 100;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 95;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "L_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = iParam0;

	if (num6 >= 0 && num6 < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_171[num6] * Global_298067.f_9);

	if (iParam0 >= 256)
	{
		Global_79172[0].f_5 = 3;
		func_0xE3509264(num5, iParam0, 256, hParam1);
	
		if (Global_79172[0].f_7 > 0)
			Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_9);
	}
	else
	{
		func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_0xE0A1579F(int iParam0, Hash hParam1)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		case 9:
			num2 = 9;
			num3 = 0;
			break;
	
		case 10:
			num2 = 10;
			num3 = 0;
			break;
	
		case 11:
			num2 = 11;
			num3 = 0;
			break;
	
		case 12:
			num2 = 12;
			num3 = 0;
			break;
	
		case 13:
			num2 = 13;
			num3 = 0;
			break;
	
		case 14:
			num2 = 14;
			num3 = 0;
			break;
	
		case 15:
			num2 = 15;
			num3 = 0;
			break;
	
		default:
			Global_79172[0].f_5 = 3;
			func_0xE3509264(num6, iParam0, 16, hParam1);
			return;
	}

	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0x1DB3E93C(int iParam0, Hash hParam1)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			num2 = 1;
			num3 = 4;
			break;
	
		case 6:
			num2 = 2;
			num3 = 0;
			break;
	
		case 7:
			num2 = 2;
			num3 = 1;
			break;
	
		case 8:
			num2 = 2;
			num3 = 2;
			break;
	
		case 9:
			num2 = 2;
			num3 = 3;
			break;
	
		case 10:
			num2 = 2;
			num3 = 4;
			break;
	
		case 11:
			num2 = 3;
			num3 = 0;
			break;
	
		case 12:
			num2 = 3;
			num3 = 1;
			break;
	
		case 13:
			num2 = 3;
			num3 = 2;
			break;
	
		case 14:
			num2 = 3;
			num3 = 3;
			break;
	
		case 15:
			num2 = 3;
			num3 = 4;
			break;
	
		case 16:
			num2 = 4;
			num3 = 0;
			break;
	
		case 17:
			num2 = 4;
			num3 = 1;
			break;
	
		case 18:
			num2 = 4;
			num3 = 2;
			break;
	
		case 19:
			num2 = 4;
			num3 = 3;
			break;
	
		case 20:
			num2 = 4;
			num3 = 4;
			break;
	
		case 21:
			num2 = 5;
			num3 = 0;
			break;
	
		case 22:
			num2 = 5;
			num3 = 1;
			break;
	
		case 23:
			num2 = 5;
			num3 = 2;
			break;
	
		case 24:
			num2 = 5;
			num3 = 3;
			break;
	
		case 25:
			num2 = 5;
			num3 = 4;
			break;
	
		case 26:
			num2 = 6;
			num3 = 0;
			break;
	
		case 27:
			num2 = 6;
			num3 = 1;
			break;
	
		case 28:
			num2 = 6;
			num3 = 2;
			break;
	
		case 29:
			num2 = 6;
			num3 = 3;
			break;
	
		case 30:
			num2 = 6;
			num3 = 4;
			break;
	
		case 31:
			num2 = 7;
			num3 = 0;
			break;
	
		case 32:
			num2 = 7;
			num3 = 1;
			break;
	
		case 33:
			num2 = 7;
			num3 = 2;
			break;
	
		case 34:
			num2 = 7;
			num3 = 3;
			break;
	
		case 35:
			num2 = 7;
			num3 = 4;
			break;
	
		case 36:
			num2 = 8;
			num3 = 0;
			break;
	
		case 37:
			num2 = 8;
			num3 = 1;
			break;
	
		case 38:
			num2 = 8;
			num3 = 2;
			break;
	
		case 39:
			num2 = 8;
			num3 = 3;
			break;
	
		case 40:
			num2 = 8;
			num3 = 4;
			break;
	
		case 41:
			num2 = 9;
			num3 = 0;
			break;
	
		case 42:
			num2 = 9;
			num3 = 1;
			break;
	
		case 43:
			num2 = 9;
			num3 = 2;
			break;
	
		case 44:
			num2 = 9;
			num3 = 3;
			break;
	
		case 45:
			num2 = 9;
			num3 = 4;
			break;
	
		default:
			Global_79172[0].f_5 = 3;
			func_0xE3509264(num6, iParam0, 46, hParam1);
			return;
	}

	func_0xA2DFD38C(&Global_79172[0], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_0xE646E909(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 8;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_0" /*Crew T-Shirt*/, 16);
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_1" /*Yeti T-Shirt*/, 16);
			num = 0;
			num2 = 1;
			value = 210;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_2" /*Charcoal T-Shirt*/, 16);
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_3" /*Stank T-Shirt*/, 16);
			num = 0;
			num2 = 3;
			value = 90;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_4" /*Ranch T-Shirt*/, 16);
			num = 0;
			num2 = 4;
			value = 210;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_5" /*Pikeys T-Shirt*/, 16);
			num = 0;
			num2 = 5;
			value = 200;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_6", 16);
			num = 0;
			num2 = 6;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_7" /*Multi-Logo T-Shirt*/, 16);
			num = 0;
			num2 = 7;
			value = 130;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_8" /*Sweatbox T-Shirt*/, 16);
			num = 0;
			num2 = 8;
			value = 220;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_9", 16);
			num = 0;
			num2 = 9;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_10", 16);
			num = 0;
			num2 = 10;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_11" /*Eris T-Shirt*/, 16);
			num = 0;
			num2 = 11;
			value = 220;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_12", 16);
			num = 0;
			num2 = 12;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_13", 16);
			num = 0;
			num2 = 13;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_14", 16);
			num = 0;
			num2 = 14;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_15", 16);
			num = 0;
			num2 = 15;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_0" /*White V Neck*/, 16);
			num = 1;
			num2 = 0;
			value = 45;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_1" /*Ash V Neck*/, 16);
			num = 1;
			num2 = 1;
			value = 60;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_2", 16);
			num = 1;
			num2 = 2;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_3" /*Swallow V Neck*/, 16);
			num = 1;
			num2 = 3;
			value = 40;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_4" /*Harsh Souls V Neck*/, 16);
			num = 1;
			num2 = 4;
			value = 315;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_5" /*Broker V Neck*/, 16);
			num = 1;
			num2 = 5;
			value = 215;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_6" /*Hip-Hop Royalty V Neck*/, 16);
			num = 1;
			num2 = 6;
			value = 265;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_7" /*Green V Neck*/, 16);
			num = 1;
			num2 = 7;
			value = 45;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_8" /*G&B V Neck*/, 16);
			num = 1;
			num2 = 8;
			value = 205;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_9", 16);
			num = 1;
			num2 = 9;
			flag = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_10", 16);
			num = 1;
			num2 = 10;
			flag = true;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_11" /*Orange V Neck*/, 16);
			num = 1;
			num2 = 11;
			value = 60;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_12" /*Brown V Neck*/, 16);
			num = 1;
			num2 = 12;
			value = 55;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_13", 16);
			num = 1;
			num2 = 13;
			flag = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_14" /*Signs V Neck*/, 16);
			num = 1;
			num2 = 14;
			value = 170;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_15" /*Blue Striped V Neck*/, 16);
			num = 1;
			num2 = 15;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_0" /*Crew T-Shirt*/, 16);
			num = 2;
			num2 = 0;
			value = 250;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_1" /*Yeti T-Shirt*/, 16);
			num = 2;
			num2 = 1;
			value = 210;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_2" /*Charcoal T-Shirt*/, 16);
			num = 2;
			num2 = 2;
			value = 50;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_3" /*Stank T-Shirt*/, 16);
			num = 2;
			num2 = 3;
			value = 90;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_4" /*Ranch T-Shirt*/, 16);
			num = 2;
			num2 = 4;
			value = 210;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_5" /*Pikeys T-Shirt*/, 16);
			num = 2;
			num2 = 5;
			value = 200;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_6", 16);
			num = 2;
			num2 = 6;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_7" /*Multi-Logo T-Shirt*/, 16);
			num = 2;
			num2 = 7;
			value = 130;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_8" /*Sweatbox T-Shirt*/, 16);
			num = 2;
			num2 = 8;
			value = 220;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_9", 16);
			num = 2;
			num2 = 9;
			flag = true;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_10", 16);
			num = 2;
			num2 = 10;
			flag = true;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_11" /*Eris T-Shirt*/, 16);
			num = 2;
			num2 = 11;
			value = 220;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_12", 16);
			num = 2;
			num2 = 12;
			flag = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_13", 16);
			num = 2;
			num2 = 13;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_14", 16);
			num = 2;
			num2 = 14;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_15", 16);
			num = 2;
			num2 = 15;
			flag = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_0" /*Black Vest*/, 16);
			num = 3;
			num2 = 0;
		
			if (Global_262145.f_3893 != -1)
				value = Global_262145.f_3893;
			else
				value = 165;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_1" /*Gray Vest*/, 16);
			num = 3;
			num2 = 1;
		
			if (Global_262145.f_3901 != -1)
				value = Global_262145.f_3901;
			else
				value = 120;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_2" /*Blue Vest*/, 16);
			num = 3;
			num2 = 2;
		
			if (Global_262145.f_3896 != -1)
				value = Global_262145.f_3896;
			else
				value = 115;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_3", 16);
			num = 3;
			num2 = 3;
			flag = true;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_4", 16);
			num = 3;
			num2 = 4;
			flag = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_5", 16);
			num = 3;
			num2 = 5;
			flag = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_6", 16);
			num = 3;
			num2 = 6;
			flag = true;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_7", 16);
			num = 3;
			num2 = 7;
			flag = true;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_8", 16);
			num = 3;
			num2 = 8;
			flag = true;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_9", 16);
			num = 3;
			num2 = 9;
			flag = true;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_10", 16);
			num = 3;
			num2 = 10;
			flag = true;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_11", 16);
			num = 3;
			num2 = 11;
			flag = true;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_12", 16);
			num = 3;
			num2 = 12;
			flag = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_13", 16);
			num = 3;
			num2 = 13;
			flag = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_14", 16);
			num = 3;
			num2 = 14;
			flag = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_15", 16);
			num = 3;
			num2 = 15;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_0" /*Black Vest*/, 16);
			num = 4;
			num2 = 0;
		
			if (Global_262145.f_3893 != -1)
				value = Global_262145.f_3893;
			else
				value = 165;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_1" /*Gray Vest*/, 16);
			num = 4;
			num2 = 1;
		
			if (Global_262145.f_3901 != -1)
				value = Global_262145.f_3901;
			else
				value = 120;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_2" /*Blue Vest*/, 16);
			num = 4;
			num2 = 2;
		
			if (Global_262145.f_3896 != -1)
				value = Global_262145.f_3896;
			else
				value = 115;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_3", 16);
			num = 4;
			num2 = 3;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_4", 16);
			num = 4;
			num2 = 4;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_5", 16);
			num = 4;
			num2 = 5;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_6", 16);
			num = 4;
			num2 = 6;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_7", 16);
			num = 4;
			num2 = 7;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_8", 16);
			num = 4;
			num2 = 8;
			flag = true;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_9", 16);
			num = 4;
			num2 = 9;
			flag = true;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_10", 16);
			num = 4;
			num2 = 10;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_11", 16);
			num = 4;
			num2 = 11;
			flag = true;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_12", 16);
			num = 4;
			num2 = 12;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_13", 16);
			num = 4;
			num2 = 13;
			flag = true;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_14", 16);
			num = 4;
			num2 = 14;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_15", 16);
			num = 4;
			num2 = 15;
			flag = true;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_0" /*White Tank*/, 16);
			num = 5;
			num2 = 0;
			value = 80;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[80]);
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_1" /*Gray Tank*/, 16);
			num = 5;
			num2 = 1;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[81]);
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_2" /*Black Tank*/, 16);
			num = 5;
			num2 = 2;
			value = 50;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[82]);
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_3", 16);
			num = 5;
			num2 = 3;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_4", 16);
			num = 5;
			num2 = 4;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_5", 16);
			num = 5;
			num2 = 5;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_6", 16);
			num = 5;
			num2 = 6;
			flag = true;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_7" /*Red Tank*/, 16);
			num = 5;
			num2 = 7;
			value = 50;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[87]);
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_8", 16);
			num = 5;
			num2 = 8;
			flag = true;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_9", 16);
			num = 5;
			num2 = 9;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_10", 16);
			num = 5;
			num2 = 10;
			flag = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_11", 16);
			num = 5;
			num2 = 11;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_12", 16);
			num = 5;
			num2 = 12;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_13", 16);
			num = 5;
			num2 = 13;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_14", 16);
			num = 5;
			num2 = 14;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_15", 16);
			num = 5;
			num2 = 15;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_0" /*White Shirt*/, 16);
			num = 6;
			num2 = 0;
		
			if (Global_262145.f_3914 != -1)
				value = Global_262145.f_3914;
			else
				value = 420;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_1" /*Silver Shirt*/, 16);
			num = 6;
			num2 = 1;
		
			if (Global_262145.f_3912 != -1)
				value = Global_262145.f_3912;
			else
				value = 415;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_2" /*Charcoal Shirt*/, 16);
			num = 6;
			num2 = 2;
		
			if (Global_262145.f_3892 != -1)
				value = Global_262145.f_3892;
			else
				value = 440;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_3" /*Pale Blue Shirt*/, 16);
			num = 6;
			num2 = 3;
		
			if (Global_262145.f_3906 != -1)
				value = Global_262145.f_3906;
			else
				value = 400;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_4" /*Barely Blue Shirt*/, 16);
			num = 6;
			num2 = 4;
		
			if (Global_262145.f_3891 != -1)
				value = Global_262145.f_3891;
			else
				value = 400;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_5" /*Pink Check Shirt*/, 16);
			num = 6;
			num2 = 5;
		
			if (Global_262145.f_3908 != -1)
				value = Global_262145.f_3908;
			else
				value = 410;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_6" /*Salmon Shirt*/, 16);
			num = 6;
			num2 = 6;
		
			if (Global_262145.f_3911 != -1)
				value = Global_262145.f_3911;
			else
				value = 435;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_7" /*Pale Olive Shirt*/, 16);
			num = 6;
			num2 = 7;
		
			if (Global_262145.f_3907 != -1)
				value = Global_262145.f_3907;
			else
				value = 425;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_8" /*Fuchsia Shirt*/, 16);
			num = 6;
			num2 = 8;
		
			if (Global_262145.f_3900 != -1)
				value = Global_262145.f_3900;
			else
				value = 435;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_9" /*Off-White Shirt*/, 16);
			num = 6;
			num2 = 9;
		
			if (Global_262145.f_3905 != -1)
				value = Global_262145.f_3905;
			else
				value = 420;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_10" /*Mint Shirt*/, 16);
			num = 6;
			num2 = 10;
		
			if (Global_262145.f_3903 != -1)
				value = Global_262145.f_3903;
			else
				value = 425;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_11" /*Tan Shirt*/, 16);
			num = 6;
			num2 = 11;
		
			if (Global_262145.f_3913 != -1)
				value = Global_262145.f_3913;
			else
				value = 425;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_12" /*Dark Salmon Shirt*/, 16);
			num = 6;
			num2 = 12;
		
			if (Global_262145.f_3899 != -1)
				value = Global_262145.f_3899;
			else
				value = 435;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_13" /*Blue Check Shirt*/, 16);
			num = 6;
			num2 = 13;
		
			if (Global_262145.f_3894 != -1)
				value = Global_262145.f_3894;
			else
				value = 750;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_14" /*Pink Shirt*/, 16);
			num = 6;
			num2 = 14;
		
			if (Global_262145.f_3909 != -1)
				value = Global_262145.f_3909;
			else
				value = 400;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_15" /*Lemon Shirt*/, 16);
			num = 6;
			num2 = 15;
		
			if (Global_262145.f_3902 != -1)
				value = Global_262145.f_3902;
			else
				value = 435;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_0" /*White Shirt*/, 16);
			num = 7;
			num2 = 0;
		
			if (Global_262145.f_3914 != -1)
				value = Global_262145.f_3914;
			else
				value = 420;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_1" /*Silver Shirt*/, 16);
			num = 7;
			num2 = 1;
		
			if (Global_262145.f_3912 != -1)
				value = Global_262145.f_3912;
			else
				value = 415;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_2" /*Charcoal Shirt*/, 16);
			num = 7;
			num2 = 2;
		
			if (Global_262145.f_3892 != -1)
				value = Global_262145.f_3892;
			else
				value = 440;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_3" /*Pale Blue Shirt*/, 16);
			num = 7;
			num2 = 3;
		
			if (Global_262145.f_3906 != -1)
				value = Global_262145.f_3906;
			else
				value = 400;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_4" /*Barely Blue Shirt*/, 16);
			num = 7;
			num2 = 4;
		
			if (Global_262145.f_3891 != -1)
				value = Global_262145.f_3891;
			else
				value = 400;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_5" /*Pink Check Shirt*/, 16);
			num = 7;
			num2 = 5;
		
			if (Global_262145.f_3908 != -1)
				value = Global_262145.f_3908;
			else
				value = 410;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_6" /*Salmon Shirt*/, 16);
			num = 7;
			num2 = 6;
		
			if (Global_262145.f_3911 != -1)
				value = Global_262145.f_3911;
			else
				value = 435;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_7" /*Pale Olive Shirt*/, 16);
			num = 7;
			num2 = 7;
		
			if (Global_262145.f_3907 != -1)
				value = Global_262145.f_3907;
			else
				value = 425;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_8" /*Fuchsia Shirt*/, 16);
			num = 7;
			num2 = 8;
		
			if (Global_262145.f_3900 != -1)
				value = Global_262145.f_3900;
			else
				value = 435;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_9" /*Off-White Shirt*/, 16);
			num = 7;
			num2 = 9;
		
			if (Global_262145.f_3905 != -1)
				value = Global_262145.f_3905;
			else
				value = 420;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_10" /*Mint Shirt*/, 16);
			num = 7;
			num2 = 10;
		
			if (Global_262145.f_3903 != -1)
				value = Global_262145.f_3903;
			else
				value = 425;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_11" /*Tan Shirt*/, 16);
			num = 7;
			num2 = 11;
		
			if (Global_262145.f_3913 != -1)
				value = Global_262145.f_3913;
			else
				value = 425;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_12" /*Dark Salmon Shirt*/, 16);
			num = 7;
			num2 = 12;
		
			if (Global_262145.f_3899 != -1)
				value = Global_262145.f_3899;
			else
				value = 435;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_13" /*Blue Check Shirt*/, 16);
			num = 7;
			num2 = 13;
		
			if (Global_262145.f_3894 != -1)
				value = Global_262145.f_3894;
			else
				value = 750;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_14" /*Pink Shirt*/, 16);
			num = 7;
			num2 = 14;
		
			if (Global_262145.f_3909 != -1)
				value = Global_262145.f_3909;
			else
				value = 400;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_15" /*Lemon Shirt*/, 16);
			num = 7;
			num2 = 15;
		
			if (Global_262145.f_3902 != -1)
				value = Global_262145.f_3902;
			else
				value = 435;
			break;
	}

	switch (iParam0)
	{
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_0" /*Red Accent Tee*/, 16);
			num = 8;
			num2 = 0;
			value = 45;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_1", 16);
			num = 8;
			num2 = 1;
			flag = true;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_2", 16);
			num = 8;
			num2 = 2;
			flag = true;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_3", 16);
			num = 8;
			num2 = 3;
			flag = true;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_4", 16);
			num = 8;
			num2 = 4;
			flag = true;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_5", 16);
			num = 8;
			num2 = 5;
			flag = true;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_6", 16);
			num = 8;
			num2 = 6;
			flag = true;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_7", 16);
			num = 8;
			num2 = 7;
			flag = true;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_8", 16);
			num = 8;
			num2 = 8;
			flag = true;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_9", 16);
			num = 8;
			num2 = 9;
			flag = true;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_10" /*Sky Blue Tee*/, 16);
			num = 8;
			num2 = 10;
			value = 65;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_11", 16);
			num = 8;
			num2 = 11;
			flag = true;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_12", 16);
			num = 8;
			num2 = 12;
			flag = true;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_13" /*Slate Tee*/, 16);
			num = 8;
			num2 = 13;
			value = 40;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_14" /*Gray Two-Tone Tee*/, 16);
			num = 8;
			num2 = 14;
			value = 45;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_15", 16);
			num = 8;
			num2 = 15;
			flag = true;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_0" /*White Striped Polo Shirt*/, 16);
			num = 9;
			num2 = 0;
			value = 265;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_1" /*Metal Polo Shirt*/, 16);
			num = 9;
			num2 = 1;
			value = 340;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_2" /*Night Polo Shirt*/, 16);
			num = 9;
			num2 = 2;
			value = 335;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_3" /*Cupcake Polo Shirt*/, 16);
			num = 9;
			num2 = 3;
			value = 330;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_4" /*Blue Polo Shirt*/, 16);
			num = 9;
			num2 = 4;
			value = 345;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_5" /*Vibe Polo Shirt*/, 16);
			num = 9;
			num2 = 5;
			value = 550;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_6" /*Salmon Polo Shirt*/, 16);
			num = 9;
			num2 = 6;
			value = 340;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_7" /*Royale Polo Shirt*/, 16);
			num = 9;
			num2 = 7;
			value = 295;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_8", 16);
			num = 9;
			num2 = 8;
			flag = true;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_9", 16);
			num = 9;
			num2 = 9;
			flag = true;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_10" /*Pro Lite Polo Shirt*/, 16);
			num = 9;
			num2 = 10;
			value = 545;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_11" /*Ice Polo Shirt*/, 16);
			num = 9;
			num2 = 11;
			value = 345;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_12" /*Money Polo Shirt*/, 16);
			num = 9;
			num2 = 12;
			value = 315;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_13" /*Hunter Polo Shirt*/, 16);
			num = 9;
			num2 = 13;
			value = 520;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_14" /*Red Polo Shirt*/, 16);
			num = 9;
			num2 = 14;
			value = 325;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_15" /*Sunshine Polo Shirt*/, 16);
			num = 9;
			num2 = 15;
			value = 330;
			break;
	}

	switch (iParam0)
	{
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_0" /*White Shirt*/, 16);
			num = 10;
			num2 = 0;
		
			if (Global_262145.f_3914 != -1)
				value = Global_262145.f_3914;
			else
				value = 405;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_1" /*Silver Shirt*/, 16);
			num = 10;
			num2 = 1;
		
			if (Global_262145.f_3912 != -1)
				value = Global_262145.f_3912;
			else
				value = 400;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_2" /*Charcoal Shirt*/, 16);
			num = 10;
			num2 = 2;
		
			if (Global_262145.f_3898 != -1)
				value = Global_262145.f_3898;
			else
				value = 425;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_3" /*Pale Blue Shirt*/, 16);
			num = 10;
			num2 = 3;
		
			if (Global_262145.f_3906 != -1)
				value = Global_262145.f_3906;
			else
				value = 385;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_4" /*Barely Blue Shirt*/, 16);
			num = 10;
			num2 = 4;
		
			if (Global_262145.f_3891 != -1)
				value = Global_262145.f_3891;
			else
				value = 385;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_5" /*Pink Check Shirt*/, 16);
			num = 10;
			num2 = 5;
		
			if (Global_262145.f_3908 != -1)
				value = Global_262145.f_3908;
			else
				value = 395;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_6" /*Blue Woven Shirt*/, 16);
			num = 10;
			num2 = 6;
		
			if (Global_262145.f_3897 != -1)
				value = Global_262145.f_3897;
			else
				value = 500;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_7" /*Salmon Shirt*/, 16);
			num = 10;
			num2 = 7;
		
			if (Global_262145.f_3911 != -1)
				value = Global_262145.f_3911;
			else
				value = 420;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_8" /*Pale Olive Shirt*/, 16);
			num = 10;
			num2 = 8;
		
			if (Global_262145.f_3907 != -1)
				value = Global_262145.f_3907;
			else
				value = 410;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_9" /*Fuchsia Shirt*/, 16);
			num = 10;
			num2 = 9;
		
			if (Global_262145.f_3900 != -1)
				value = Global_262145.f_3900;
			else
				value = 420;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_10" /*Off-White Shirt*/, 16);
			num = 10;
			num2 = 10;
		
			if (Global_262145.f_3905 != -1)
				value = Global_262145.f_3905;
			else
				value = 405;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_11" /*Mint Shirt*/, 16);
			num = 10;
			num2 = 11;
		
			if (Global_262145.f_3903 != -1)
				value = Global_262145.f_3903;
			else
				value = 410;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_12" /*Blue Striped Shirt*/, 16);
			num = 10;
			num2 = 12;
		
			if (Global_262145.f_3895 != -1)
				value = Global_262145.f_3895;
			else
				value = 420;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_13" /*Pink Striped Shirt*/, 16);
			num = 10;
			num2 = 13;
		
			if (Global_262145.f_3910 != -1)
				value = Global_262145.f_3910;
			else
				value = 420;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_14" /*Tan Shirt*/, 16);
			num = 10;
			num2 = 14;
		
			if (Global_262145.f_3913 != -1)
				value = Global_262145.f_3913;
			else
				value = 410;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_15" /*Ocean Stripe Shirt*/, 16);
			num = 10;
			num2 = 15;
		
			if (Global_262145.f_3904 != -1)
				value = Global_262145.f_3904;
			else
				value = 460;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_0" /*White Shirt*/, 16);
			num = 11;
			num2 = 0;
		
			if (Global_262145.f_3914 != -1)
				value = Global_262145.f_3914;
			else
				value = 405;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_1" /*Silver Shirt*/, 16);
			num = 11;
			num2 = 1;
		
			if (Global_262145.f_3912 != -1)
				value = Global_262145.f_3912;
			else
				value = 400;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_2" /*Charcoal Shirt*/, 16);
			num = 11;
			num2 = 2;
		
			if (Global_262145.f_3898 != -1)
				value = Global_262145.f_3898;
			else
				value = 425;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_3" /*Pale Blue Shirt*/, 16);
			num = 11;
			num2 = 3;
		
			if (Global_262145.f_3906 != -1)
				value = Global_262145.f_3906;
			else
				value = 385;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_4" /*Barely Blue Shirt*/, 16);
			num = 11;
			num2 = 4;
		
			if (Global_262145.f_3891 != -1)
				value = Global_262145.f_3891;
			else
				value = 385;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_5" /*Pink Check Shirt*/, 16);
			num = 11;
			num2 = 5;
		
			if (Global_262145.f_3908 != -1)
				value = Global_262145.f_3908;
			else
				value = 395;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_6" /*Blue Woven Shirt*/, 16);
			num = 11;
			num2 = 6;
		
			if (Global_262145.f_3897 != -1)
				value = Global_262145.f_3897;
			else
				value = 500;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_7" /*Salmon Shirt*/, 16);
			num = 11;
			num2 = 7;
		
			if (Global_262145.f_3911 != -1)
				value = Global_262145.f_3911;
			else
				value = 420;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_8" /*Pale Olive Shirt*/, 16);
			num = 11;
			num2 = 8;
		
			if (Global_262145.f_3907 != -1)
				value = Global_262145.f_3907;
			else
				value = 410;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_9" /*Fuchsia Shirt*/, 16);
			num = 11;
			num2 = 9;
		
			if (Global_262145.f_3900 != -1)
				value = Global_262145.f_3900;
			else
				value = 420;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_10" /*Off-White Shirt*/, 16);
			num = 11;
			num2 = 10;
		
			if (Global_262145.f_3905 != -1)
				value = Global_262145.f_3905;
			else
				value = 405;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_11" /*Mint Shirt*/, 16);
			num = 11;
			num2 = 11;
		
			if (Global_262145.f_3903 != -1)
				value = Global_262145.f_3903;
			else
				value = 410;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_12" /*Blue Striped Shirt*/, 16);
			num = 11;
			num2 = 12;
		
			if (Global_262145.f_3895 != -1)
				value = Global_262145.f_3895;
			else
				value = 420;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_13" /*Pink Striped Shirt*/, 16);
			num = 11;
			num2 = 13;
		
			if (Global_262145.f_3910 != -1)
				value = Global_262145.f_3910;
			else
				value = 420;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_14" /*Tan Shirt*/, 16);
			num = 11;
			num2 = 14;
		
			if (Global_262145.f_3913 != -1)
				value = Global_262145.f_3913;
			else
				value = 410;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_15" /*Ocean Stripe Shirt*/, 16);
			num = 11;
			num2 = 15;
		
			if (Global_262145.f_3904 != -1)
				value = Global_262145.f_3904;
			else
				value = 460;
			break;
	}

	switch (iParam0)
	{
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_0" /*White Untucked*/, 16);
			num = 12;
			num2 = 0;
			value = 420;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_1" /*Steel Untucked*/, 16);
			num = 12;
			num2 = 1;
			value = 415;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_2" /*Black Untucked*/, 16);
			num = 12;
			num2 = 2;
			value = 695;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_3" /*Sky Untucked*/, 16);
			num = 12;
			num2 = 3;
			value = 385;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_4" /*Navy Untucked*/, 16);
			num = 12;
			num2 = 4;
			value = 330;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_5" /*Red Untucked*/, 16);
			num = 12;
			num2 = 5;
			value = 345;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_6" /*Moss Untucked*/, 16);
			num = 12;
			num2 = 6;
			value = 340;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_7" /*Ash Untucked*/, 16);
			num = 12;
			num2 = 7;
			value = 450;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_8" /*Mustard Untucked*/, 16);
			num = 12;
			num2 = 8;
			value = 295;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_9" /*Butter Untucked*/, 16);
			num = 12;
			num2 = 9;
			value = 340;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_10" /*Forest Untucked*/, 16);
			num = 12;
			num2 = 10;
			value = 1060;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_11" /*Azure Untucked*/, 16);
			num = 12;
			num2 = 11;
			value = 1040;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_12", 16);
			num = 12;
			num2 = 12;
			flag = true;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_13", 16);
			num = 12;
			num2 = 13;
			flag = true;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_14", 16);
			num = 12;
			num2 = 14;
			flag = true;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_15", 16);
			num = 12;
			num2 = 15;
			flag = true;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_0" /*White Tucked*/, 16);
			num = 13;
			num2 = 0;
			value = 420;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_1" /*Silver Tucked*/, 16);
			num = 13;
			num2 = 1;
			value = 415;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_2" /*Black Tucked*/, 16);
			num = 13;
			num2 = 2;
			value = 680;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_3" /*Blue Tucked*/, 16);
			num = 13;
			num2 = 3;
			value = 385;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_4", 16);
			num = 13;
			num2 = 4;
			flag = true;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_5" /*Burgundy Tucked*/, 16);
			num = 13;
			num2 = 5;
			value = 345;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_6", 16);
			num = 13;
			num2 = 6;
			flag = true;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_7", 16);
			num = 13;
			num2 = 7;
			flag = true;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_8", 16);
			num = 13;
			num2 = 8;
			flag = true;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_9", 16);
			num = 13;
			num2 = 9;
			flag = true;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_10", 16);
			num = 13;
			num2 = 10;
			flag = true;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_11", 16);
			num = 13;
			num2 = 11;
			flag = true;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_12", 16);
			num = 13;
			num2 = 12;
			flag = true;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_13" /*Green Plaid Tucked*/, 16);
			num = 13;
			num2 = 13;
			value = 1065;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_14", 16);
			num = 13;
			num2 = 14;
			flag = true;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_15", 16);
			num = 13;
			num2 = 15;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_0" /*White V Neck*/, 16);
			num = 14;
			num2 = 0;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[16]);
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_1" /*Ash V Neck*/, 16);
			num = 14;
			num2 = 1;
			value = 60;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[17]);
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_2", 16);
			num = 14;
			num2 = 2;
			flag = true;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_3" /*Swallow V Neck*/, 16);
			num = 14;
			num2 = 3;
			value = 40;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[19]);
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_4" /*Harsh Souls V Neck*/, 16);
			num = 14;
			num2 = 4;
			value = 315;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[20]);
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_5" /*Broker V Neck*/, 16);
			num = 14;
			num2 = 5;
			value = 215;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[21]);
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_6" /*Hip-Hop Royalty V Neck*/, 16);
			num = 14;
			num2 = 6;
			value = 265;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[22]);
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_7" /*Green V Neck*/, 16);
			num = 14;
			num2 = 7;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[23]);
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_8" /*G&B V Neck*/, 16);
			num = 14;
			num2 = 8;
			value = 205;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[24]);
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_9", 16);
			num = 14;
			num2 = 9;
			flag = true;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_10", 16);
			num = 14;
			num2 = 10;
			flag = true;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_11" /*Orange V Neck*/, 16);
			num = 14;
			num2 = 11;
			value = 60;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[27]);
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_12" /*Brown V Neck*/, 16);
			num = 14;
			num2 = 12;
			value = 55;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[28]);
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_13", 16);
			num = 14;
			num2 = 13;
			flag = true;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_14" /*Signs V Neck*/, 16);
			num = 14;
			num2 = 14;
			value = 170;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[30]);
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_15" /*Blue Striped V Neck*/, 16);
			num = 14;
			num2 = 15;
			flag = true;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_15_0", 16);
			num = 15;
			num2 = 0;
			value = 0;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[32]);
			break;
	}

	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_0x75CF6A28(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2898);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(45) * Global_262145.f_428[23]);
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2897);
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_0x75CF6A28(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2896);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(55) * Global_262145.f_428[28]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		num6 = iParam0;
	
		if (num6 >= 0 && num6 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[num6]);
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		num7 = iParam0 - 32;
	
		if (num7 >= 0 && num7 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[num7]);
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		num8 = (iParam0 - 160) + 124;
	
		if (num8 >= 0 && num8 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[num8]);
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		num9 = (iParam0 - 160) + 188;
	
		if (num9 >= 0 && num9 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[num9]);
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_298067.f_10);

	if (iParam0 >= 241)
	{
		Global_79172[0].f_5 = 3;
		func_0xE3509264(num5, iParam0, 241, hParam1);
	
		if (Global_79172[0].f_7 > 0)
			Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_10);
	}
	else
	{
		func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_0xE6D60F9B(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 11;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 210;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 90;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 210;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 200;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 130;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 220;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 220;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 45;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 60;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 40;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 315;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 215;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 265;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 45;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 205;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 60;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 55;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 170;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 160;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 3;
			num2 = 0;
			value = 205;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 110;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 150;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 115;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 115;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 150;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 150;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 115;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 140;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 125;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 115;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 150;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 150;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 275;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 460;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 260;
			break;
	}

	switch (iParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 965;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 2520;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 350;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 150;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 3125;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 5;
			num2 = 0;
			value = 80;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 45;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 50;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 50;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 2485;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 535;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 2945;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 3080;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 2990;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 3750;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 515;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 530;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 2810;
			break;
	
		case 108:
			num = 7;
			num2 = 0;
			value = 150;
			break;
	
		case 109:
			num = 7;
			num2 = 1;
			value = 155;
			break;
	
		case 110:
			num = 7;
			num2 = 2;
			value = 320;
			break;
	
		case 111:
			num = 7;
			num2 = 3;
			value = 140;
			break;
	
		case 112:
			num = 7;
			num2 = 4;
			value = 150;
			break;
	
		case 113:
			num = 7;
			num2 = 5;
			value = 145;
			break;
	
		case 114:
			num = 7;
			num2 = 6;
			value = 150;
			break;
	
		case 115:
			num = 7;
			num2 = 7;
			value = 140;
			break;
	
		case 116:
			num = 7;
			num2 = 8;
			value = 135;
			break;
	
		case 117:
			num = 7;
			num2 = 9;
			value = 130;
			break;
	
		case 118:
			num = 7;
			num2 = 10;
			value = 130;
			break;
	
		case 119:
			num = 7;
			num2 = 11;
			value = 150;
			break;
	
		case 120:
			num = 7;
			num2 = 12;
			value = 145;
			break;
	
		case 121:
			num = 7;
			num2 = 13;
			value = 740;
			break;
	
		case 122:
			num = 7;
			num2 = 14;
			value = 790;
			break;
	
		case 123:
			num = 7;
			num2 = 15;
			value = 130;
			break;
	}

	switch (iParam0)
	{
		case 124:
			num = 8;
			num2 = 0;
			value = 45;
			break;
	
		case 125:
			num = 8;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 126:
			num = 8;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 127:
			num = 8;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 128:
			num = 8;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 129:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 130:
			num = 8;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 131:
			num = 8;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 132:
			num = 8;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 133:
			num = 8;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 134:
			num = 8;
			num2 = 10;
			value = 65;
			break;
	
		case 135:
			num = 8;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 136:
			num = 8;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 137:
			num = 8;
			num2 = 13;
			value = 40;
			break;
	
		case 138:
			num = 8;
			num2 = 14;
			value = 45;
			break;
	
		case 139:
			num = 8;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 140:
			num = 9;
			num2 = 0;
			value = 265;
			break;
	
		case 141:
			num = 9;
			num2 = 1;
			value = 340;
			break;
	
		case 142:
			num = 9;
			num2 = 2;
			value = 335;
			break;
	
		case 143:
			num = 9;
			num2 = 3;
			value = 330;
			break;
	
		case 144:
			num = 9;
			num2 = 4;
			value = 345;
			break;
	
		case 145:
			num = 9;
			num2 = 5;
			value = 550;
			break;
	
		case 146:
			num = 9;
			num2 = 6;
			value = 340;
			break;
	
		case 147:
			num = 9;
			num2 = 7;
			value = 295;
			break;
	
		case 148:
			num = 9;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 149:
			num = 9;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 150:
			num = 9;
			num2 = 10;
			value = 545;
			break;
	
		case 151:
			num = 9;
			num2 = 11;
			value = 345;
			break;
	
		case 152:
			num = 9;
			num2 = 12;
			value = 315;
			break;
	
		case 153:
			num = 9;
			num2 = 13;
			value = 520;
			break;
	
		case 154:
			num = 9;
			num2 = 14;
			value = 325;
			break;
	
		case 155:
			num = 9;
			num2 = 15;
			value = 330;
			break;
	}

	switch (iParam0)
	{
		case 156:
			num = 10;
			num2 = 0;
			value = 505;
			break;
	
		case 157:
			num = 10;
			num2 = 1;
			value = 470;
			break;
	
		case 158:
			num = 10;
			num2 = 2;
			value = 475;
			break;
	
		case 159:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 160:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 161:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 162:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 163:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 11;
			num2 = 0;
			value = 120;
			break;
	
		case 173:
			num = 11;
			num2 = 1;
			value = 360;
			break;
	
		case 174:
			num = 11;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 176:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 177:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 178:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 179:
			num = 11;
			num2 = 7;
			value = 90;
			break;
	
		case 180:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 14;
			value = 2450;
			break;
	
		case 187:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 188:
			num = 12;
			num2 = 0;
			value = 420;
			break;
	
		case 189:
			num = 12;
			num2 = 1;
			value = 415;
			break;
	
		case 190:
			num = 12;
			num2 = 2;
			value = 695;
			break;
	
		case 191:
			num = 12;
			num2 = 3;
			value = 385;
			break;
	
		case 192:
			num = 12;
			num2 = 4;
			value = 330;
			break;
	
		case 193:
			num = 12;
			num2 = 5;
			value = 345;
			break;
	
		case 194:
			num = 12;
			num2 = 6;
			value = 340;
			break;
	
		case 195:
			num = 12;
			num2 = 7;
			value = 450;
			break;
	
		case 196:
			num = 12;
			num2 = 8;
			value = 295;
			break;
	
		case 197:
			num = 12;
			num2 = 9;
			value = 340;
			break;
	
		case 198:
			num = 12;
			num2 = 10;
			value = 1060;
			break;
	
		case 199:
			num = 12;
			num2 = 11;
			value = 1040;
			break;
	
		case 200:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 201:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 202:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 13;
			num2 = 0;
			value = 420;
			break;
	
		case 205:
			num = 13;
			num2 = 1;
			value = 415;
			break;
	
		case 206:
			num = 13;
			num2 = 2;
			value = 680;
			break;
	
		case 207:
			num = 13;
			num2 = 3;
			value = 385;
			break;
	
		case 208:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 209:
			num = 13;
			num2 = 5;
			value = 345;
			break;
	
		case 210:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 211:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 13;
			value = 1065;
			break;
	
		case 218:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 220:
			num = 14;
			num2 = 0;
			value = 420;
			break;
	
		case 221:
			num = 14;
			num2 = 1;
			value = 415;
			break;
	
		case 222:
			num = 14;
			num2 = 2;
			value = 440;
			break;
	
		case 223:
			num = 14;
			num2 = 3;
			value = 385;
			break;
	
		case 224:
			num = 14;
			num2 = 4;
			value = 330;
			break;
	
		case 225:
			num = 14;
			num2 = 5;
			value = 445;
			break;
	
		case 226:
			num = 14;
			num2 = 6;
			value = 340;
			break;
	
		case 227:
			num = 14;
			num2 = 7;
			value = 440;
			break;
	
		case 228:
			num = 14;
			num2 = 8;
			value = 295;
			break;
	
		case 229:
			num = 14;
			num2 = 9;
			value = 340;
			break;
	
		case 230:
			num = 14;
			num2 = 10;
			value = 325;
			break;
	
		case 231:
			num = 14;
			num2 = 11;
			value = 435;
			break;
	
		case 232:
			num = 14;
			num2 = 12;
			value = 445;
			break;
	
		case 233:
			num = 14;
			num2 = 13;
			value = 440;
			break;
	
		case 234:
			num = 14;
			num2 = 14;
			value = 325;
			break;
	
		case 235:
			num = 14;
			num2 = 15;
			value = 325;
			break;
	
		case 236:
			num = 15;
			num2 = 0;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);

	if (iParam0 == 23)
	{
		if (func_0x75CF6A28(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2898 * Global_298067.f_10);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(45) * Global_262145.f_428[23] * Global_298067.f_10);
		}
	}
	else if (iParam0 == 17)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2897 * Global_298067.f_10);
	}
	else if (iParam0 == 28)
	{
		if (func_0x75CF6A28(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2896 * Global_298067.f_10);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(55) * Global_262145.f_428[28] * Global_298067.f_10);
		}
	}
	else
	{
		num6 = iParam0;
	
		if (num6 >= 0 && num6 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_428[num6] * Global_298067.f_10);
	}

	if (iParam0 >= 237)
	{
		Global_79172[0].f_5 = 3;
		func_0xE3509264(num5, iParam0, 237, hParam1);
	
		if (Global_79172[0].f_7 > 0)
			Global_79172[0].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79172[0].f_7) * Global_298067.f_10);
	}
	else
	{
		func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_0xA91A09EB(int iParam0, Hash hParam1)
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 2;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[0]);
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[1]);
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[2]);
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[3]);
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 175;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[4]);
			break;
	
		case 5:
			num = 1;
			num2 = 4;
			value = 170;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[5]);
			break;
	
		case 6:
			num = 1;
			num2 = 5;
			value = 0;
			break;
	
		case 7:
			num = 2;
			num2 = 0;
			value = 580;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[6]);
			break;
	
		case 8:
			num = 2;
			num2 = 1;
			value = 575;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[7]);
			break;
	
		case 9:
			num = 2;
			num2 = 2;
			value = 570;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[8]);
			break;
	
		case 10:
			num = 2;
			num2 = 3;
			value = 565;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[9]);
			break;
	
		case 11:
			num = 2;
			num2 = 4;
			value = 560;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[10]);
			break;
	
		case 12:
			num = 2;
			num2 = 5;
			value = 0;
			break;
	
		case 13:
			num = 3;
			num2 = 0;
			value = 1100;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[11]);
			break;
	
		case 14:
			num = 3;
			num2 = 1;
			value = 1095;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[12]);
			break;
	
		case 15:
			num = 3;
			num2 = 2;
			value = 1090;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[13]);
			break;
	
		case 16:
			num = 3;
			num2 = 3;
			value = 1085;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[14]);
			break;
	
		case 17:
			num = 3;
			num2 = 4;
			value = 1080;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[15]);
			break;
	
		case 18:
			num = 3;
			num2 = 5;
			value = 0;
			break;
	
		case 19:
			num = 4;
			num2 = 0;
			value = 520;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[16]);
			break;
	
		case 20:
			num = 4;
			num2 = 1;
			value = 515;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[17]);
			break;
	
		case 21:
			num = 4;
			num2 = 2;
			value = 510;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[18]);
			break;
	
		case 22:
			num = 4;
			num2 = 3;
			value = 505;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[19]);
			break;
	
		case 23:
			num = 4;
			num2 = 4;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[20]);
			break;
	
		case 24:
			num = 4;
			num2 = 5;
			value = 0;
			break;
	
		case 25:
			num = 4;
			num2 = 6;
			value = 0;
			break;
	
		case 26:
			num = 5;
			num2 = 0;
			value = 295;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[21]);
			break;
	
		case 27:
			num = 5;
			num2 = 1;
			value = 290;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[22]);
			break;
	
		case 28:
			num = 5;
			num2 = 2;
			value = 285;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[23]);
			break;
	
		case 29:
			num = 5;
			num2 = 3;
			value = 280;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[24]);
			break;
	
		case 30:
			num = 5;
			num2 = 4;
			value = 275;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[25]);
			break;
	
		case 31:
			num = 5;
			num2 = 5;
			value = 0;
			break;
	
		case 32:
			num = 6;
			num2 = 0;
			value = 950;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[26]);
			break;
	
		case 33:
			num = 6;
			num2 = 1;
			value = 945;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[27]);
			break;
	
		case 34:
			num = 6;
			num2 = 2;
			value = 940;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[28]);
			break;
	
		case 35:
			num = 6;
			num2 = 3;
			value = 935;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[29]);
			break;
	
		case 36:
			num = 6;
			num2 = 4;
			value = 930;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[30]);
			break;
	
		case 37:
			num = 6;
			num2 = 5;
			value = 0;
			break;
	
		case 38:
			num = 7;
			num2 = 0;
			value = 440;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[31]);
			break;
	
		case 39:
			num = 7;
			num2 = 1;
			value = 435;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[32]);
			break;
	
		case 40:
			num = 7;
			num2 = 2;
			value = 430;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[33]);
			break;
	
		case 41:
			num = 7;
			num2 = 3;
			value = 425;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[34]);
			break;
	
		case 42:
			num = 7;
			num2 = 4;
			value = 420;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[35]);
			break;
	
		case 43:
			num = 7;
			num2 = 5;
			value = 0;
			break;
	
		case 44:
			num = 7;
			num2 = 6;
			value = 0;
			break;
	
		case 45:
			num = 8;
			num2 = 0;
			value = 1150;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[36]);
			break;
	
		case 46:
			num = 8;
			num2 = 1;
			value = 1145;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[37]);
			break;
	
		case 47:
			num = 8;
			num2 = 2;
			value = 1140;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[38]);
			break;
	
		case 48:
			num = 8;
			num2 = 3;
			value = 1135;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[39]);
			break;
	
		case 49:
			num = 8;
			num2 = 4;
			value = 1130;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[40]);
			break;
	
		case 50:
			num = 9;
			num2 = 0;
			value = 395;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[41]);
			break;
	
		case 51:
			num = 9;
			num2 = 1;
			value = 390;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[42]);
			break;
	
		case 52:
			num = 9;
			num2 = 2;
			value = 385;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[43]);
			break;
	
		case 53:
			num = 9;
			num2 = 3;
			value = 380;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[44]);
			break;
	
		case 54:
			num = 9;
			num2 = 4;
			value = 375;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[45]);
			break;
	
		case 55:
			num = 9;
			num2 = 5;
			value = 0;
			break;
	
		case 56:
			num = 9;
			num2 = 6;
			value = 0;
			break;
	
		case 57:
			num = 10;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[46]);
			break;
	
		case 58:
			num = 10;
			num2 = 1;
			value = 495;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[47]);
			break;
	
		case 59:
			num = 10;
			num2 = 2;
			value = 490;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[48]);
			break;
	
		case 60:
			num = 10;
			num2 = 3;
			value = 485;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[49]);
			break;
	
		case 61:
			num = 10;
			num2 = 4;
			value = 480;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[50]);
			break;
	
		case 62:
			num = 10;
			num2 = 5;
			value = 0;
			break;
	
		case 63:
			num = 11;
			num2 = 0;
			value = 1050;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[51]);
			break;
	
		case 64:
			num = 11;
			num2 = 1;
			value = 1045;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[52]);
			break;
	
		case 65:
			num = 11;
			num2 = 2;
			value = 1040;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[53]);
			break;
	
		case 66:
			num = 11;
			num2 = 3;
			value = 1035;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[54]);
			break;
	
		case 67:
			num = 11;
			num2 = 4;
			value = 1030;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[55]);
			break;
	
		case 68:
			num = 11;
			num2 = 5;
			value = 0;
			break;
	
		case 69:
			num = 12;
			num2 = 0;
			value = 550;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[56]);
			break;
	
		case 70:
			num = 12;
			num2 = 1;
			value = 545;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[57]);
			break;
	
		case 71:
			num = 12;
			num2 = 2;
			value = 540;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[58]);
			break;
	
		case 72:
			num = 12;
			num2 = 3;
			value = 535;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[59]);
			break;
	
		case 73:
			num = 12;
			num2 = 4;
			value = 530;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[60]);
			break;
	
		case 74:
			num = 13;
			num2 = 0;
			value = 1200;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[61]);
			break;
	
		case 75:
			num = 13;
			num2 = 1;
			value = 1195;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[62]);
			break;
	
		case 76:
			num = 13;
			num2 = 2;
			value = 1190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[63]);
			break;
	
		case 77:
			num = 13;
			num2 = 3;
			value = 1185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[64]);
			break;
	
		case 78:
			num = 13;
			num2 = 4;
			value = 1180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[65]);
			break;
	
		case 79:
			num = 13;
			num2 = 5;
			value = 0;
			break;
	
		case 80:
			num = 14;
			num2 = 0;
			value = 2000;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[66]);
			break;
	
		case 81:
			num = 14;
			num2 = 1;
			value = 1995;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[67]);
			break;
	
		case 82:
			num = 14;
			num2 = 2;
			value = 1990;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[68]);
			break;
	
		case 83:
			num = 14;
			num2 = 3;
			value = 1985;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[69]);
			break;
	
		case 84:
			num = 14;
			num2 = 4;
			value = 1980;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[70]);
			break;
	
		case 85:
			num = 15;
			num2 = 0;
			value = 475;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[71]);
			break;
	
		case 86:
			num = 15;
			num2 = 1;
			value = 470;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[72]);
			break;
	
		case 87:
			num = 15;
			num2 = 2;
			value = 465;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[73]);
			break;
	
		case 88:
			num = 15;
			num2 = 3;
			value = 460;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[74]);
			break;
	
		case 89:
			num = 15;
			num2 = 4;
			value = 455;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2512[75]);
			break;
	
		case 90:
			num = 15;
			num2 = 5;
			value = 0;
			break;
	
		default:
			Global_79172[0].f_5 = 3;
			func_0xE3509264(num5, iParam0, 91, hParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "H_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_0xA2DFD38C(&Global_79172[0], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_0xE5F61993()
{
	Global_79172[0].f_1 = -1;
	Global_79172[0].f_2 = -1;
	Global_79172[0].f_5 = -1;
	Global_79172[0].f_3 = -1;
	Global_79172[0].f_4 = -1;
	Global_79172[0].f_7 = 0;
	Global_79172[0].f_6 = 0;
	Global_79172[0].f_13 = -1;
	Global_79172[0].f_12 = 0;
	Global_79172[0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_79172[0].f_8), "NO_LABEL", 16);
	return;
}

BOOL func_0x45D1E788(Player plParam0)
{
	return func_0x7CD5054C(plParam0, 10);
}

BOOL func_0x7CD5054C(Player plParam0, int iParam1)
{
	return IS_BIT_SET(Global_1887305[plParam0].f_10.f_4, iParam1);
}

BOOL func_0xE9FFFAF1(Ped pedParam0, int iParam1)
{
	int pedDrawableVariation;
	int pedTextureVariation;
	int num;
	int num2;
	Hash componentHash;
	int num3;
	Hash componentHash2;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("MP_M_Freemode_01"))
		{
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
			num = GET_MP_INT_CHARACTER_STAT(1759, -1);
		
			if (iParam1 != -1)
				num = iParam1;
		
			if (pedDrawableVariation > 15)
			{
				num2 = func_0x6AEB8E24(pedParam0, 11, PV_COMP_INVALID);
			
				if (num2 >= 237)
				{
					componentHash = func_0x3B4EF0B2(joaat("MP_M_Freemode_01"), num2, 11, 3);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (num)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
							case -507124931:
								return 1;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
				
					return 0;
				}
			}
		
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("MP_F_Freemode_01"))
		{
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
			pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_JBIB);
			num = GET_MP_INT_CHARACTER_STAT(1759, -1);
		
			if (iParam1 != -1)
				num = iParam1;
		
			if (pedDrawableVariation == 3)
			{
				if (pedTextureVariation == 14)
					return 1;
			}
			else if (pedDrawableVariation > 15)
			{
				num3 = func_0x6AEB8E24(pedParam0, 11, PV_COMP_INVALID);
			
				if (num3 >= 256)
				{
					componentHash2 = func_0x3B4EF0B2(joaat("MP_F_Freemode_01"), num3, 11, 4);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (num)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
							case -2045170715:
								return 1;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
				
					return 0;
				}
			}
		
			return 0;
		}
	}

	return 0;
}

BOOL func_0x84239F5A(Ped pedParam0, BOOL bParam1)
{
	int pedDrawableVariation;
	int pedTextureVariation;
	int num;
	int num2;
	Hash componentHash;
	int num3;
	Hash componentHash2;
	int num4;
	int num5;
	Hash componentHash3;
	int num6;
	int num7;
	int num8;
	Hash componentHash4;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("MP_M_Freemode_01"))
		{
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
			pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_JBIB);
		
			switch (pedDrawableVariation)
			{
				case 0:
					switch (pedTextureVariation)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
					}
					break;
			
				case 1:
					switch (pedTextureVariation)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
					
						case 1:
						case 7:
						case 12:
							num = func_0x4C455E56(joaat("MP_M_Freemode_01"), 11, func_0x6AEB8E24(pedParam0, 11, PV_COMP_INVALID), 0);
						
							if (pedTextureVariation == 1 && num == 88 || pedTextureVariation == 7 && num == 89 || pedTextureVariation == 12 && num == 87)
								return 1;
							break;
					}
					break;
			
				case 2:
					switch (pedTextureVariation)
					{
						case 9:
							return 1;
					}
					break;
			
				case 5:
					if (!bParam1)
					{
						if (func_0x562E4F3B(13, -1))
						{
							return 1;
						}
						else if (func_0x562E4F3B(14, -1))
						{
							return 1;
						}
						else if (func_0x562E4F3B(15, -1))
						{
							return 1;
						}
						else if (func_0x562E4F3B(16, -1))
						{
							return 1;
						}
						else if (func_0x562E4F3B(71, -1))
						{
							return 1;
						}
						else if (func_0x562E4F3B(72, -1))
						{
						}
						else if (func_0xB4D52F0E(PLAYER::PLAYER_ID(), true) && Global_1887305[PLAYER::PLAYER_ID()].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
			
				default:
					if (pedDrawableVariation > 15)
					{
						num2 = func_0x6AEB8E24(pedParam0, 11, PV_COMP_INVALID);
					
						if (num2 >= 237)
						{
							componentHash = func_0x3B4EF0B2(joaat("MP_M_Freemode_01"), num2, 11, 3);
						
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL_NO_SAVE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("COMBAT_TOP"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("HEIST_DRAW_12"), 0))
								return 1;
						}
					}
					break;
			}
		
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_ACCS);
			pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_ACCS);
		
			switch (pedDrawableVariation)
			{
				case 0:
					switch (pedTextureVariation)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
					}
					break;
			
				case 1:
					switch (pedTextureVariation)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
					}
					break;
			
				case 2:
					switch (pedTextureVariation)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
					}
					break;
			
				case 14:
					switch (pedTextureVariation)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
					}
					break;
			
				default:
					if (pedDrawableVariation > 15)
					{
						num3 = func_0x6AEB8E24(pedParam0, 8, PV_COMP_INVALID);
					
						if (num3 >= 241)
						{
							componentHash2 = func_0x3B4EF0B2(joaat("MP_M_Freemode_01"), num3, 8, 3);
						
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL_NO_SAVE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("COMBAT_TOP"), 0))
								return 1;
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("MP_F_Freemode_01"))
		{
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
			pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_JBIB);
		
			switch (pedDrawableVariation)
			{
				case 0:
					switch (pedTextureVariation)
					{
						case 1:
						case 2:
							return 1;
					
						case 7:
						case 4:
						case 9:
							num4 = func_0x4C455E56(joaat("MP_F_Freemode_01"), 11, func_0x6AEB8E24(pedParam0, 11, PV_COMP_INVALID), 0);
						
							if (pedTextureVariation == 7 && num4 == 88 || pedTextureVariation == 4 && num4 == 89 || pedTextureVariation == 9 && num4 == 87)
								return 1;
							break;
					}
					break;
			
				case 2:
					switch (pedTextureVariation)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
					}
					break;
			
				case 3:
					switch (pedTextureVariation)
					{
						case 14:
							return 1;
					}
					break;
			
				case 11:
					switch (pedTextureVariation)
					{
						case 10:
						case 11:
						case 15:
							return 1;
					}
					break;
			
				default:
					if (pedDrawableVariation > 15)
					{
						num5 = func_0x6AEB8E24(pedParam0, 11, PV_COMP_INVALID);
					
						if (num5 >= 256)
						{
							componentHash3 = func_0x3B4EF0B2(joaat("MP_F_Freemode_01"), num5, 11, 4);
						
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("TAT_DECL_NO_SAVE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("COMBAT_TOP"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("HEIST_DRAW_13"), 0))
								return 1;
						}
					}
					break;
			}
		
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_ACCS);
			pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_ACCS);
		
			switch (pedDrawableVariation)
			{
				case 0:
					switch (pedTextureVariation)
					{
						case 1:
						case 2:
							return 1;
					
						case 7:
						case 4:
						case 9:
							num6 = func_0x4C455E56(joaat("MP_F_Freemode_01"), 11, func_0x6AEB8E24(pedParam0, 11, PV_COMP_INVALID), 0);
						
							if (pedTextureVariation == 7 && num6 == 88 || pedTextureVariation == 4 && num6 == 89 || pedTextureVariation == 9 && num6 == 87)
								return 1;
							break;
					}
					break;
			
				case 1:
					switch (pedTextureVariation)
					{
						case 1:
						case 2:
							return 1;
					
						case 7:
						case 4:
						case 9:
							num7 = func_0x4C455E56(joaat("MP_F_Freemode_01"), 11, func_0x6AEB8E24(pedParam0, 11, PV_COMP_INVALID), 0);
						
							if (pedTextureVariation == 7 && num7 == 88 || pedTextureVariation == 4 && num7 == 89 || pedTextureVariation == 9 && num7 == 87)
								return 1;
							break;
					}
					break;
			
				case 2:
					switch (pedTextureVariation)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
					}
					break;
			
				case 11:
					switch (pedTextureVariation)
					{
						case 10:
						case 11:
						case 15:
							return 1;
					}
					break;
			
				case 14:
					switch (pedTextureVariation)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
					}
					break;
			
				default:
					if (pedDrawableVariation > 15)
					{
						num8 = func_0x6AEB8E24(pedParam0, 8, PV_COMP_INVALID);
					
						if (num8 >= 136)
						{
							componentHash4 = func_0x3B4EF0B2(joaat("MP_F_Freemode_01"), num8, 8, 4);
						
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("TAT_DECL_NO_SAVE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("COMBAT_TOP"), 0))
								return 1;
						}
					}
					break;
			}
		}
	}

	return 0;
}

BOOL func_0xB4D52F0E(Player plParam0, BOOL bParam1)
{
	return func_0x55931638(plParam0, bParam1, 1);
}

BOOL func_0x55931638(Player plParam0, BOOL bParam1, int iParam2)
{
	Player player;

	if (!func_0x6A46C9B4(plParam0))
		return 0;

	if (!bParam1)
		if (func_0xEA053375(plParam0, iParam2))
			return 0;

	player = Global_1887305[plParam0].f_10;

	if (func_0x6A46C9B4(player) && Global_1887305[player].f_10.f_430 == iParam2)
		return 1;

	return 0;
}

BOOL func_0xEA053375(Player plParam0, int iParam1)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x6A46C9B4(Global_1887305[plParam0].f_10))
			if (Global_1887305[plParam0].f_10 == plParam0 && Global_1887305[plParam0].f_10.f_430 == iParam1)
				return true;

	return false;
}

int func_0x4C455E56(Hash hParam0, int iParam1, int iParam2, int iParam3)
{
	Hash componentHash;
	int shopPedApparelForcedComponentCount;
	int i;
	int nameHash;
	int enumValue;
	int componentType;
	Hash componentHash2;
	int shopPedApparelForcedComponentCount2;
	int j;
	int nameHash2;
	int enumValue2;
	int componentType2;
	Hash componentHash3;
	int shopPedApparelForcedComponentCount3;
	int k;
	int nameHash3;
	int enumValue3;
	int componentType3;
	Hash componentHash4;
	int shopPedApparelForcedComponentCount4;
	int l;
	int nameHash4;
	int enumValue4;
	int componentType4;

	if (hParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_0x75CF6A28(89, -1))
					return 89;
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_0x75CF6A28(87, -1))
					return 87;
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				componentHash = func_0x3B4EF0B2(hParam0, iParam2, 11, 3);
			
				if (componentHash != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						shopPedApparelForcedComponentCount = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash);
					
						for (i = 0; i < shopPedApparelForcedComponentCount; i = i + 1)
						{
							FILES::GET_FORCED_COMPONENT(componentHash, i, &nameHash, &enumValue, &componentType);
						
							if (componentType == 10)
								if (nameHash != 0 && nameHash != joaat("0"))
									return func_0xF58FDC97(nameHash, 3);
								else
									return enumValue;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
							iParam3 = GET_MP_INT_CHARACTER_STAT(1759, -1);
					
						return func_0xF58FDC97(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_0x75CF6A28(89, -1))
					return 89;
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_0x75CF6A28(87, -1))
					return 87;
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_0x75CF6A28(89, -1))
					return 89;
			}
			else if (iParam2 == 225)
			{
				return 88;
			}
			else if (iParam2 == 236)
			{
				if (func_0x75CF6A28(87, -1))
					return 87;
			}
			else if (iParam2 >= 241)
			{
				componentHash2 = func_0x3B4EF0B2(hParam0, iParam2, 8, 3);
			
				if (componentHash2 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						shopPedApparelForcedComponentCount2 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash2);
					
						for (j = 0; j < shopPedApparelForcedComponentCount2; j = j + 1)
						{
							FILES::GET_FORCED_COMPONENT(componentHash2, j, &nameHash2, &enumValue2, &componentType2);
						
							if (componentType2 == 10)
								if (nameHash2 != 0 && nameHash2 != joaat("0"))
									return func_0xF58FDC97(nameHash2, 3);
								else
									return enumValue2;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
							iParam3 = GET_MP_INT_CHARACTER_STAT(1759, -1);
					
						return func_0xF58FDC97(iParam3, 3);
					}
				}
			}
		}
	}
	else if (hParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_0x75CF6A28(89, -1))
					return 89;
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_0x75CF6A28(87, -1))
					return 87;
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				componentHash3 = func_0x3B4EF0B2(hParam0, iParam2, 11, 4);
			
				if (componentHash3 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						shopPedApparelForcedComponentCount3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash3);
					
						for (k = 0; k < shopPedApparelForcedComponentCount3; k = k + 1)
						{
							FILES::GET_FORCED_COMPONENT(componentHash3, k, &nameHash3, &enumValue3, &componentType3);
						
							if (componentType3 == 10)
								if (nameHash3 != 0 && nameHash3 != joaat("0"))
									return func_0xF58FDC97(nameHash3, 4);
								else
									return enumValue3;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
							iParam3 = GET_MP_INT_CHARACTER_STAT(1759, -1);
					
						return func_0xF58FDC97(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_0x75CF6A28(89, -1))
					return 89;
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_0x75CF6A28(87, -1))
					return 87;
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_0x75CF6A28(89, -1))
					return 89;
			}
			else if (iParam2 == 23)
			{
				return 88;
			}
			else if (iParam2 == 25)
			{
				if (func_0x75CF6A28(87, -1))
					return 87;
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				componentHash4 = func_0x3B4EF0B2(hParam0, iParam2, 8, 4);
			
				if (componentHash4 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						shopPedApparelForcedComponentCount4 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash4);
					
						for (l = 0; l < shopPedApparelForcedComponentCount4; l = l + 1)
						{
							FILES::GET_FORCED_COMPONENT(componentHash4, l, &nameHash4, &enumValue4, &componentType4);
						
							if (componentType4 == 10)
								if (nameHash4 != 0 && nameHash4 != joaat("0"))
									return func_0xF58FDC97(nameHash4, 4);
								else
									return enumValue4;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
							iParam3 = GET_MP_INT_CHARACTER_STAT(1759, -1);
					
						return func_0xF58FDC97(iParam3, 4);
					}
				}
			}
		}
	}

	return -1;
}

BOOL func_0xCD74A84A(Ped pedParam0)
{
	int num;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		num = Global_1845281[PLAYER::PLAYER_ID()].f_97.f_28;
	
		if (num != -1 && num < 4)
			if (func_0x62D06D8F(num) != -1 && func_0x62D06D8F(num) != 0)
				return 1;
	}

	if (!PED::IS_PED_INJURED(pedParam0))
		if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("MP_M_Freemode_01"))
			if (PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB) == 15)
				return 1;

	return 0;
}

int func_0x62D06D8F(int iParam0)
{
	if (func_0x25DF5B1D(true))
		return Global_1680309;

	if (iParam0 <= -1 || iParam0 >= 4)
		return -1;

	return Global_2685444.f_6363[iParam0];
}

BOOL func_0x25DF5B1D(BOOL bParam0)
{
	if (func_0x54BEFA8F(bParam0) || func_0x39484892() || func_0x22B3D50D(*Global_4718592.f_185586))
		return true;

	return false;
}

BOOL func_0x22B3D50D(int iParam0)
{
	return iParam0 == 87;
}

BOOL func_0x39484892()
{
	return func_0x9CB2DA77(*Global_4718592.f_127178);
}

int func_0x9CB2DA77(int iParam0)
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_30347[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_0x54BEFA8F(BOOL bParam0)
{
	if (bParam0)
		return IS_BIT_SET(*Global_4718592.f_178389, 12) && func_0xFEA78839();

	return IS_BIT_SET(*Global_4718592.f_178389, 12);
}

BOOL func_0xFEA78839()
{
	if (*Global_4718592.f_127755 == 1 || *Global_4718592.f_127755 == 2)
		return true;

	return false;
}

int func_0x47FF56D2()
{
	return Global_1575011;
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
		if (hLocal_71 != 0)
			hLocal_71 = 0;
	
		if (bLocal_70)
			bLocal_70 = false;
	
		return;
	}

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(playersLastVehicle))
		hLocal_71 = ENTITY::GET_ENTITY_MODEL(playersLastVehicle);

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

	if (!bLocal_70)
	{
		closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(0f, 0f, -50f, 1f, hLocal_71, 2);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(closestVehicle))
		{
			ENTITY::SET_ENTITY_COORDS(closestVehicle, entityCoords, false, false, false, false);
			ENTITY::SET_ENTITY_HEADING(closestVehicle, entityHeading);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(closestVehicle, 1084227584);
			bLocal_70 = true;
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

	if (iLocal_61 != num || bLocal_60 != flag)
	{
		func_0xDEB37B1F(num, &uLocal_62, &uLocal_65, &fLocal_68, &fLocal_69);
		iLocal_61 = num;
		bLocal_60 = flag;
	}

	if (Global_1943520.f_4811.f_4 == -1 && Global_1943520.f_4811.f_4 != iLocal_61)
		Global_1943520.f_4811.f_4 = iLocal_61;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_62, uLocal_65, fLocal_68, false, true, 0))
	{
		entityHeading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		num2 = MISC::ABSF(fLocal_69 - entityHeading);
		flag2 = num2 < 60f || num2 > 300f;
	
		if (!flag2)
			return;
	
		for (i = 0; i < 32; i = i + 1)
		{
			if (func_0x8ACF6631(i, iLocal_61))
				num3 = num3 + 1;
		}
	
		if (num3 == 0 || num3 == 1 && func_0x8ACF6631(_GET_BOSS_OF_LOCAL_PLAYER(), iLocal_61))
			if (func_0x67F162DB())
				func_0xD40A0568(iLocal_61);
	}

	return;
}

void func_0xD40A0568(int iParam0)
{
	if (bLocal_60)
		func_0xE47D2A15(_GET_BOSS_OF_LOCAL_PLAYER());

	Global_1943520.f_3893 = 1;
	Global_1943520.f_3894 = iParam0;
	Global_1943520.f_3895 = 0;
	Global_1943520.f_3900 = 1;
	Global_2657971[PLAYER::PLAYER_ID()].f_322.f_29 = 0;
	return;
}

void func_0xE47D2A15(Player plParam0)
{
	Global_1943520.f_3547 = plParam0;
	return;
}

BOOL func_0x67F162DB()
{
	if (!Global_1943520.f_5025.f_51)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		return false;

	if (!func_0xDBD936D3())
		return false;

	if (func_0xEDAE0057() || func_0x1A7B661A())
		return false;

	if (func_0xB24070EF(PLAYER::PLAYER_ID()) || Global_1943520.f_3893 || Global_1943513 != 0 || HUD::IS_WARNING_MESSAGE_ACTIVE() || func_0x3BED6F11(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
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

	if (Global_1943520.f_4811.f_2 != 0)
		return false;

	if (func_0x44A439DC() || func_0x8E975DBA())
		return false;

	if (Global_1943520.f_3902 || Global_1887305[PLAYER::PLAYER_ID()].f_10.f_32 == 148 || Global_1962263 || func_0xE8921B44(0) || func_0xB72C022E() || _IS_PLAYER_A_BEAST(PLAYER::PLAYER_ID()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		return false;

	return true;
}

BOOL _IS_PLAYER_A_BEAST(Player plParam0)
{
	if (func_0x8EC56FC1(plParam0) == 146)
		if (plParam0 == Global_2738934.f_5171)
			return true;

	return false;
}

int func_0x8EC56FC1(Player plParam0)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1887305[player];

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
	if (Global_2672855.f_990.f_5 == -1)
		return 0;

	return 1;
}

BOOL func_0x44A439DC()
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

BOOL func_0x14C810F0()
{
	return Global_1943520.f_4821.f_1 != -1;
}

BOOL func_0xC2ABD0AE()
{
	return Global_1943520.f_4821 != -1;
}

BOOL func_0x42FA397()
{
	return IS_BIT_SET(Global_1943520, 6);
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

BOOL func_0xE40D6326(Player plParam0)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_0x7CD5054C(plParam0, 9);

	return false;
}

BOOL func_0x295F4323(Player plParam0)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1887305[player].f_1, 0);

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
		return IS_BIT_SET(Global_2657971[plParam0].f_322, 3);

	return false;
}

BOOL func_0xB24070EF(Player plParam0)
{
	BOOL flag;

	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true) || Global_2635563.f_2980)
	{
		flag = IS_BIT_SET(Global_2657971[plParam0].f_322, 1);
		return flag;
	}

	return false;
}

BOOL func_0x1A7B661A()
{
	return IS_BIT_SET(Global_2684504.f_3, 7);
}

BOOL func_0xEDAE0057()
{
	return IS_BIT_SET(Global_2684504.f_2, 11);
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
			if (Global_2657971[plParam0].f_322.f_8 != -1 && func_0xEE599357(Global_2657971[plParam0].f_322.f_8) == 29)
				return Global_2657971[plParam0].f_322.f_8 == iParam1;

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
		return Global_1845281[plParam0].f_268.f_525;

	return 0;
}

Player _GET_BOSS_OF_LOCAL_PLAYER()
{
	return Global_1887305[PLAYER::PLAYER_ID()].f_10;
}

BOOL func_0xCA2EA26D(BOOL bParam0)
{
	return func_0xB4CE8E51(PLAYER::PLAYER_ID(), bParam0);
}

void func_0xFB31BB97()
{
	int num;
	BOOL flag;

	if (IS_BIT_SET(Global_2738934.f_460.f_5, 0))
		bLocal_59 = true;
	else
		bLocal_59 = false;

	if (bLocal_59)
	{
		num = -1;
		flag = false;
		num = func_0x54874B4C("GR_ENTERAOC" /*Press ~a~ to enter your Avenger with this vehicle.*/);
	
		if (num > -1 && num < 6)
			if (Global_44799[num] == 1)
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

	if (Global_44799[iParam0].f_6)
		return false;

	flag = false;

	if (!Global_44799[iParam0].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44799[iParam0].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44994);
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44799[iParam0].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44994);
	
		if (Global_44799[iParam0].f_30)
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_44799[iParam0].f_13));
		else
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_44799[iParam0].f_13));
	
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}

	return flag;
}

int func_0x54874B4C(char* sParam0)
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_44799[i].f_8)) && MISC::ARE_STRINGS_EQUAL(&(Global_44799[i].f_8), sParam0))
			return i;
	}

	return -1;
}

void func_0x6AF3BC1C()
{
	int num;

	num = func_0xE3A3D5D5(PLAYER::PLAYER_ID());

	if (num != -1 && iLocal_58 != num)
		iLocal_58 = num;

	if (iLocal_58 == -1)
		return;

	Global_262145.f_35477 = 500f;
	Global_262145.f_35478 = 500f;
	Global_262145.f_35479 = 500f;
	Global_262145.f_35480 = 500f;

	switch (iLocal_58)
	{
		case 0:
			Global_262145.f_35477 = 10000f;
			break;
	
		case 1:
			Global_262145.f_35478 = 10000f;
			break;
	
		case 2:
			Global_262145.f_35479 = 10000f;
			break;
	
		case 3:
			Global_262145.f_35480 = 10000f;
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

BOOL func_0xCFD5B39D()
{
	if (Global_76498 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
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

	if (Global_2738934.f_6841 != 9)
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
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_56))
			_STOPWATCH_INITIALIZE(&uLocal_56, false, false);
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_56, 10000, false))
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
	else if (_STOPWATCH_IS_INITIALIZED(&uLocal_56))
		_STOPWATCH_DESTROY(&uLocal_56);

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

int func_0xE3A3D5D5(Player plParam0)
{
	if (func_0x48014DA(plParam0) == 317)
		return func_0xE22E8209(plParam0, 317);

	return -1;
}

void func_0xB333D603()
{
	if (!IS_BIT_SET(Global_1943520.f_13, 11))
		return;

	if (!func_0x70532CF7(PLAYER::PLAYER_ID()) && !func_0x3BED6F11(PLAYER::PLAYER_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("GB_DELIVERY")) == 0)
		MISC::CLEAR_BIT(&(Global_1943520.f_13), 11);

	return;
}

BOOL func_0x70532CF7(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657971[plParam0].f_322.f_8 != -1)
				return func_0xEE599357(Global_2657971[plParam0].f_322.f_8) == 29;

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

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_13))
	{
		MISC::SET_BIT(&Global_8801, 2);
	
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_13, 60000, false))
		{
			_STOPWATCH_RESET(&uLocal_13, false, false);
			_STOPWATCH_DESTROY(&uLocal_13);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_11) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_11, 1000, false))
	{
		if (iLocal_20 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_20 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_20, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_11, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
				AUDIO::STOP_SOUND(iLocal_20);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_20);
			iLocal_20 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			_STOPWATCH_RESET(&uLocal_11, false, false);
			_STOPWATCH_DESTROY(&uLocal_11);
		}
	}

	if (!bLocal_5 && !func_0x48656DF7())
		return;

	bLocal_5 = true;
	MISC::SET_BIT(&Global_8801, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_4))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_4, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_4, 8000);
			num = GET_MP_INT_CHARACTER_STAT(7869, -1);
			func_0xC00D48A9(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_15 = { ENTITY::GET_ENTITY_COORDS(obLocal_4, false) };
			iLocal_18 = 0;
		}
	}
	else
	{
		CHILIADWAKEUP_ROTATE_OBJECT();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_19 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_19 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_19, "07", obLocal_4, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_6)
			{
				if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_7, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_4, false);
					_STOPWATCH_RESET(&uLocal_7, false, false);
					_STOPWATCH_DESTROY(&uLocal_7);
					_STOPWATCH_INITIALIZE(&uLocal_9, false, false);
					bLocal_6 = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_9, false, false)) / SYSTEM::TO_FLOAT(func_0x729E933());
				num3 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_7, false, false)) / SYSTEM::TO_FLOAT(CHILIADWAKEUP_GET_LERP_TIME());
				num3 = num3 * num2;
				vector = { LERP_VECTOR(uLocal_15, CHILIADWAKEUP_GET_LERP_END_COORD(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_4, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_18 = iLocal_18 + 1;
					uLocal_15 = { ENTITY::GET_ENTITY_COORDS(obLocal_4, false) };
					_STOPWATCH_RESET(&uLocal_7, false, false);
					_STOPWATCH_DESTROY(&uLocal_7);
				
					if (CHILIADWAKEUP_GET_LERP_TIME() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_4);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_19))
							AUDIO::STOP_SOUND(iLocal_19);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_19);
						iLocal_19 = -1;
						_STOPWATCH_INITIALIZE(&uLocal_11, false, false);
						_STOPWATCH_INITIALIZE(&uLocal_13, false, false);
						_STOPWATCH_RESET(&uLocal_9, false, false);
						_STOPWATCH_DESTROY(&uLocal_9);
						uLocal_15 = { 0f, 0f, 0f };
						iLocal_18 = 0;
						bLocal_5 = false;
						bLocal_6 = false;
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
	switch (iLocal_18)
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
	switch (iLocal_18)
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

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_4, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_4, entityRotation, 2, true);
	return;
}

BOOL func_0x48656DF7()
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_2640096 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_0x52131E1C(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2685444.f_3078.f_178 >= 1 && Global_2685444.f_3078.f_178 < 4 && func_0xC61AA4B9() && func_0x97C9EE39())
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
	if (!bLocal_3)
	{
		if (Global_1836472)
		{
			if (IS_REPEAT_OFFENDER_X_0() || IS_REPEAT_OFFENDER_X())
				Global_262145.f_19912 = 1;
			else
				Global_262145.f_19912 = 0;
		
			bLocal_3 = true;
		}
	}
	else if (!Global_1836472)
	{
		bLocal_3 = false;
	}

	return;
}

int IS_REPEAT_OFFENDER_X()
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10716)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10712 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10716)
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

	if (num < Global_262145.f_10715)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10711 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10715)
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
			MISC::SET_BIT(&(Global_1845281[i].f_826), 1);
		}
	}

	return;
}

void func_0x109BC0D6()
{
	if (func_0x8BB4165B())
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_49))
		{
			ENTITY::SET_ENTITY_VISIBLE(obLocal_49, false, false);
		}
		else
		{
			hLocal_48 = joaat("apa_heist_apart2_door");
		
			if (func_0x350793CC(hLocal_48))
			{
				obLocal_49 = OBJECT::CREATE_OBJECT(hLocal_48, 122.271f, 12.916f, 67.282f, false, false, true);
			
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_49))
				{
					ENTITY::SET_ENTITY_COORDS(obLocal_49, 122.271f, 12.916f, 67.282f, false, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(obLocal_49, 0f, 90.525f, 70.35f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_49, true);
					ENTITY::SET_ENTITY_VISIBLE(obLocal_49, false, false);
					ENTITY::SET_ENTITY_PROOFS(obLocal_49, true, true, true, true, true, true, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_48);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(obLocal_49))
	{
		OBJECT::DELETE_OBJECT(&obLocal_49);
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

	if (!Global_2693440.f_3)
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

BOOL _IS_FMMC_ACTIVE()
{
	return Global_1845281[PLAYER::PLAYER_ID()].f_193 != 0;
}

void func_0xE69DADEC()
{
	if (MISC::IS_PC_VERSION())
		return;

	switch (iLocal_21)
	{
		case 0:
			if (func_0xFA31F4FF())
				if (func_0x4BEFF6D3())
					if (Global_2359296[func_0xF9396AAC()].f_681.f_1275 == 0)
						func_0x28DF00E8(1);
					else
						func_0x28DF00E8(5);
				else
					func_0x28DF00E8(5);
			break;
	
		case 1:
			if (func_0xFA31F4FF())
			{
				if (Global_2359296[func_0xF9396AAC()].f_681.f_1275 != 0)
				{
					_STOPWATCH_RESET(&uLocal_22, true, false);
					func_0x28DF00E8(2);
				}
			}
			else
			{
				func_0x28DF00E8(0);
			}
			break;
	
		case 2:
			if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_22, 60000, true))
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
	iLocal_21 = iParam0;
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
	if (bLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		DISPLAY_TEXT_WITH_LITERAL_STRING_FOR_RELEASE_F9(0.69f, 0.06f, "STRING", sLocal_0);
	}

	if (!bLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
					{
						bLocal_1 = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					bLocal_1 = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
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
		Global_1979332[i] = 0;
		Global_1979301[i] = func_0xB8EC44B7(i);
	
		if (Global_1979301[i] != 0)
		{
			num = num + 1;
			Global_1979332[i] = 1;
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

