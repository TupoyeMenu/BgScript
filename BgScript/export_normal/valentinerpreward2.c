#pragma region Local Var
	char* sLocal_0 = 0;
	BOOL bLocal_1 = 0;
	int iLocal_2 = 0;
	BOOL bLocal_3 = 0;
	int iLocal_4 = 0;
	Object obLocal_5 = 0;
	BOOL bLocal_6 = 0;
	BOOL bLocal_7 = 0;
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
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	Object obLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0.f;
	BOOL bLocal_32 = 0;
	int iLocal_33 = 0;
	BOOL bLocal_34 = 0;
	BOOL bLocal_35 = 0;
	BOOL bLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	BOOL bLocal_39 = 0;
	BOOL bLocal_40 = 0;
	BOOL bLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	Vehicle veLocal_44 = 0;
	BOOL bLocal_45 = 0;
	BOOL bLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	BOOL bLocal_52 = 0;
	BOOL bLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	BOOL bLocal_63 = 0;
	BOOL bLocal_64 = 0;
	Vehicle veLocal_65 = 0;
	Vehicle veLocal_66 = 0;
	BOOL bLocal_67 = 0;
	Vehicle veLocal_68 = 0;
	int iLocal_69 = -1;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	BOOL bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	Ped pedLocal_76 = 0;
	Object obLocal_77 = 0;
	BOOL bLocal_78 = 0;
	BOOL bLocal_79 = 0;
	BOOL bLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	BOOL bLocal_87 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#pragma endregion Local Var

void func_0xB608DC9B()
{
	int num;

	sLocal_0 = "1.70.09";
	iLocal_20 = -1;
	iLocal_21 = -1;
	uLocal_25 = { 5022.5645f, -5738f, 16.0937f };
	uLocal_28 = { 5033.8535f, -5747.7485f, 20.4291f };
	fLocal_31 = 2f;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	Global_1578043 = MISC::GET_HASH_KEY(sLocal_0);

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_0xB401A131();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && /*Global_2693671*/g_sCURRENT_UGC_STATUS.f_3)
		{
			FIX_FOR_3280561();
			FIX_FOR_3533670();
			FIX_FOR_5092622();
			func_0x157D2892();
			CHILIADWAKEUP_MAINTAIN();
			func_0xF10EB7D2();
			func_0xA5075A65();
			func_0xBEEE0798();
			func_0x715AA924();
			func_0x7AA5C38A();
			func_0x6826C142();
			func_0x605F91F9();
			func_0x662FBD38();
			func_0x943E3046();
			func_0xD8967A8D();
			func_0xD9928548();
			func_0xD90CE4E3();
			func_0x426AB617();
			func_0x6EC4327F();
			func_0xC65DAA2();
			func_0xDC07884();
			func_0x700552DE();
			func_0xA7D24319();
			func_0xBBCE879B();
			func_0xB5EBCEEA();
			func_0xFBC7D388();
			func_0x8684453B();
			func_0x639BDC70();
			func_0x385C521D();
			func_0x73D9E663();
			func_0xAE8C651D();
			func_0xF8C83443();
			func_0x6A7CE34();
		}
	
		func_0x97BB330A();
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_0x4C6D28F8();
			func_0x3F875410();
			func_0xFDBFAFDD();
			func_0x77FBC123();
			func_0xD24A47AF();
			func_0x19506A7C();
		}
		else
		{
			func_0x13AAE849();
		}
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_0x13AAE849()
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_22))
		OBJECT::DELETE_OBJECT(&obLocal_22);

	return;
}

void func_0x19506A7C()
{
	if (*/*Global_4718592*/g_FMMC_STRUCT.f_128476 != /*Global_262145*/g_sMPTunables.f_35972[0])
		return;

	if (/*Global_1058116*/gBG_MC_serverBD_VARS.f_14[0] == 0 && !ENTITY::DOES_ENTITY_EXIST(obLocal_77))
		obLocal_77 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2819.4253f, 5964.834f, 348.5099f, 10f, -1515988677, false, false, false);

	if (/*Global_1058116*/gBG_MC_serverBD_VARS.f_14[0] != 5)
		return;

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_77) && ENTITY::IS_ENTITY_VISIBLE(obLocal_77) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(obLocal_77))
		ENTITY::SET_ENTITY_VISIBLE(obLocal_77, false, false);

	return;
}

void func_0xD24A47AF()
{
	Ped ped;

	if (*/*Global_4718592*/g_FMMC_STRUCT.f_128476 != /*Global_262145*/g_sMPTunables.f_35972[2])
		return;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(ped))
		return;

	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(ped, "anim@scripted@mfh3@ig2_shark_attk@male@", "ATTACK_LOOP", 2) && !ENTITY::IS_ENTITY_PLAYING_ANIM(ped, "anim@scripted@mfh3@ig2_shark_attk@male@", "ATTACK_LOOP_HIT", 2) && !ENTITY::IS_ENTITY_PLAYING_ANIM(ped, "anim@scripted@mfh3@ig2_shark_attk@male@", "ATTACK_EXIT_SUCCESS", 2) && !ENTITY::IS_ENTITY_PLAYING_ANIM(ped, "anim@scripted@mfh3@ig2_shark_attk@male@", "ATTACK_EXIT", 2))
	{
		if (iLocal_74 != 0)
		{
			iLocal_74 = 0;
			pedLocal_76 = 0;
		}
	
		return;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_76))
	{
		if (!PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(ped, true), 2f, false, true, &pedLocal_76, false, true, -1) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_76) || ENTITY::GET_ENTITY_MODEL(pedLocal_76) != joaat("A_C_SharkTiger"))
		{
			if (iLocal_74 != 0 && NETWORK::GET_NETWORK_TIME_ACCURATE() - iLocal_74 > 5000)
				ENTITY::SET_ENTITY_HEALTH(ped, 0, 0, 0);
		
			pedLocal_76 = 0;
			return;
		}
	}

	if (iLocal_74 == 0)
	{
		iLocal_74 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		iLocal_75 = ENTITY::GET_ENTITY_HEALTH(ped);
	}
	else if (NETWORK::GET_NETWORK_TIME_ACCURATE() - iLocal_74 > 5000)
	{
		if (iLocal_75 == ENTITY::GET_ENTITY_HEALTH(ped))
		{
			ENTITY::SET_ENTITY_HEALTH(pedLocal_76, 0, 0, 0);
			iLocal_74 = 0;
			pedLocal_76 = 0;
		}
		else
		{
			iLocal_74 = 0;
		}
	}

	return;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
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
				if (player == /*Global_2672939*/MPGlobals.f_3)
					return /*Global_2672939*/MPGlobals.f_2;
				else if (/*Global_2657991*/GlobalplayerBD[player] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_0x77FBC123()
{
	Vehicle closestVehicle;

	if (*/*Global_4718592*/g_FMMC_STRUCT.f_128476 != -1972038144 && */*Global_4718592*/g_FMMC_STRUCT.f_128476 != -1937411331 && */*Global_4718592*/g_FMMC_STRUCT.f_128476 != 1797002074)
		return;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		func_0xE2CBB13F(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("penumbra2"), 12);
	}
	else
	{
		closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(CAM::GET_GAMEPLAY_CAM_COORD(), 32f, joaat("penumbra2"), 2);
		func_0xE2CBB13F(closestVehicle, joaat("penumbra2"), 12);
	}

	return;
}

void func_0xE2CBB13F(Vehicle veParam0, Hash hParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && ENTITY::GET_ENTITY_MODEL(veParam0) == hParam1)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0))
			return;
	
		if (VEHICLE::GET_VEHICLE_LIVERY(veParam0) == iParam2)
			return;
	
		if (Global_1685268 || func_0x83A76AF3(veParam0, true))
			return;
	
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
			VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		VEHICLE::SET_VEHICLE_MOD(veParam0, 48, func_0x9F665460(veParam0, 48, iParam2), false);
	}

	return;
}

int func_0x9F665460(Vehicle veParam0, int iParam1, int iParam2)
{
	int num;

	if (STREAMING::IS_MODEL_VALID(Global_153027) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_153027) && Global_153028 == iParam1)
		return Global_153029;

	num = iParam2;
	func_0x1D7642BB(num, -1, VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1);

	while (num >= 0 && func_0x206208ED(veParam0, iParam1, num))
	{
		num = num - 1;
	}

	return num;
}

BOOL func_0x206208ED(Vehicle veParam0, int iParam1, int iParam2)
{
	if (!func_0x98B7EFDD() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(veParam0, iParam1, iParam2))
		return true;

	return false;
}

BOOL func_0x98B7EFDD()
{
	return false;
}

int func_0x1D7642BB(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_0x83A76AF3(Vehicle veParam0, BOOL bParam1)
{
	if (/*Global_79539*/g_bInMultiplayer)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))
				return true;

	return false;
}

void func_0xFDBFAFDD()
{
	if (/*Global_262145*/g_sMPTunables.f_35972[0] != */*Global_4718592*/g_FMMC_STRUCT.f_128476)
		return;

	/*Global_4718592*/g_FMMC_STRUCT.f_176834[0].f_90 = 99999;
	return;
}

void func_0x3F875410()
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(/*Global_1058116*/gBG_MC_serverBD_VARS.f_233[i]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(/*Global_1058116*/gBG_MC_serverBD_VARS.f_233[i]) != 858355070)
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(/*Global_1058116*/gBG_MC_serverBD_VARS.f_233[i]))
		{
		}
		else
		{
			unk_0xDD8A2D3337F04196(/*Global_1058116*/gBG_MC_serverBD_VARS.f_233[i], 0);
		}
	}

	return;
}

void func_0x4C6D28F8()
{
	if (!/*Global_2684718*/Join_session_trigger.f_24)
		return;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_25, uLocal_28, fLocal_31, false, true, 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_22))
	{
		obLocal_22 = OBJECT::CREATE_OBJECT(joaat("prop_const_fence02b"), 5025.56f, -5740.52f, 16f, false, false, false);
		ENTITY::SET_ENTITY_HEADING(obLocal_22, -42.2f);
		ENTITY::SET_ENTITY_ALPHA(obLocal_22, 0, false);
		ENTITY::SET_ENTITY_NOWEAPONDECALS(obLocal_22, true);
	}

	if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		if (func_0x932F3142(uLocal_23, 750, false))
			return;
	else
		_STOPWATCH_RESET(&uLocal_23, false, false);

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

void func_0x97BB330A()
{
	int i;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		bLocal_73 = true;
		return;
	}

	if (bLocal_73)
	{
		i = 0;
	
		for (i = 0; i <= 31; i = i + 1)
		{
			/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_99616[i].f_120 = 0;
		}
	
		bLocal_73 = false;
	}

	return;
}

void func_0x6A7CE34()
{
	if (Global_1942475 && !HUD::IS_PAUSE_MENU_ACTIVE())
		if (!func_0x1C1E0F7E(/*Global_23970*/g_sMenuData.f_5821))
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION, true);

	if (IS_BIT_SET(/*Global_2739811*/MPGlobalsAmbience.f_972, 0) && _STAT_GET_PACKED_BOOL(51351, -1) == false)
	{
		if (Global_2750353 == 0 || Global_2750353 == 1)
		{
			MISC::SET_BIT(&Global_2750356, 2);
			Global_2750355 = 5;
			MISC::SET_BIT(&Global_2750356, 0);
			Global_2750353 = 6;
			MISC::SET_BIT(&Global_2750356, 1);
			Global_2750354 = 0;
			MISC::CLEAR_BIT(&(/*Global_2739811*/MPGlobalsAmbience.f_972), 0);
			MISC::CLEAR_BIT(&(/*Global_2739811*/MPGlobalsAmbience.f_971), 0);
			MISC::CLEAR_BIT(&(/*Global_2739811*/MPGlobalsAmbience.f_971), 1);
			MISC::CLEAR_BIT(&(/*Global_2739811*/MPGlobalsAmbience.f_971), 2);
			MISC::CLEAR_BIT(&(/*Global_2739811*/MPGlobalsAmbience.f_971), 3);
			func_0xF7D3FBB9(81);
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
			_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), true, 0, false);
		}
	}

	return;
}

void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3)
{
	eSetPlayerControlFlags flags;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL toggle;
	BOOL toggle2;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	Ped playerPed;
	eSetPlayerControlFlags flags2;

	if (bParam1)
		if (SCRIPT::GET_NO_LOADING_SCREEN())
			SCRIPT::SET_NO_LOADING_SCREEN(false);

	if (func_0xEBB0E6F7())
		if (bParam1)
			return;
		else
			bParam3 = true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		flags = espcfParam2;
		PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		toggle = espcfParam2 & 32768 != 0;
		toggle2 = espcfParam2 & 65536 != 0;
		flag16 = espcfParam2 & 131072 != 0;
		flag17 = espcfParam2 & 262144 != 0;
		flag18 = espcfParam2 & 524288 != 0;
		flag19 = espcfParam2 & 1048576 != 0;
		flag20 = espcfParam2 & 2097152 != 0;
		flag21 = espcfParam2 & 4194304 != 0;
		flag22 = espcfParam2 & 8388608 != 0;
		flag23 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			flag = false;
	
		if (!func_0xDBD936D3())
		{
			flag24 = false;
		
			if (bParam1 == true)
				flag24 = true;
		
			if (toggle == false && !flag19)
				flag24 = true;
		
			if (flag10 == true)
				flag24 = true;
		
			if (flag24)
				return;
		}
	
		flag16;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && PLAYER::IS_PLAYER_PLAYING(plParam0) || bParam3 == true)
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false))
				return;
		
			playerPed = PLAYER::GET_PLAYER_PED(plParam0);
		
			if (!flag18)
			{
				if (flag17 && bParam1 == false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				else if (flag14 || !func_0x1A32E11A(PLAYER::PLAYER_ID(), 0) && !func_0xA525B2F4() && !func_0x68897CDD(PLAYER::PLAYER_ID()))
					ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
			
				if (!flag14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17)
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
				
					/*Global_2657991*/GlobalplayerBD[plParam0].f_257 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_0x19FE7AFC(false, 0, 0);
				
					if (flag23)
						STREAMING::CLEAR_FOCUS();
				}
			
				if (!func_0x93DB01D2(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
			
				if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
				{
					if (!flag19)
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
				}
				else if (!flag19)
				{
					ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				}
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, true);
				PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(plParam0, false);
			
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(playerPed) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(playerPed))
					PED::FINALIZE_HEAD_BLEND(playerPed);
			
				PED::SET_PED_CAN_RAGDOLL(playerPed, true);
			
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == false)
				{
					func_0x5FEB45C4();
					func_0xBC63612E();
				}
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					!flag21;
			
				STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
				/*Global_2657991*/GlobalplayerBD[plParam0].f_258 = 0;
			
				if (!flag22)
					flag3 = true;
			
				if (Global_2697787)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697787 = false;
				}
			
				if (Global_2635516.f_2982)
					Global_2635516.f_2982 = 0;
			}
			else
			{
				if (!func_0x93DB01D2(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
				{
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
				
					if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
					{
						if (!flag19)
							ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
					
						if (!toggle)
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
					}
				
					if (func_0xFB453256(*/*Global_4718592*/g_FMMC_STRUCT.f_187633))
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
				}
			
				if (/*Global_1575056*/g_Private_IsMultiplayerCreatorRunning)
					flag10 = false;
			
				if (flag10)
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				else
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, true);
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, toggle2);
			
				if (flag3)
					if (!PED::IS_PED_FATALLY_INJURED(playerPed) && !PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
			}
		
			flags2 = 0;
		
			if (flag2)
				flags2 = flags2 | SPC_AMBIENT_SCRIPT;
		
			if (flag3)
				flags2 = flags2 | SPC_CLEAR_TASKS;
		
			if (flag4)
				flags2 = flags2 | SPC_REMOVE_FIRES;
		
			if (flag5)
				flags2 = flags2 | SPC_REMOVE_EXPLOSIONS;
		
			if (flag6)
				flags2 = flags2 | SPC_REMOVE_PROJECTILES;
		
			if (flag7)
				flags2 = flags2 | SPC_DEACTIVATE_GADGETS;
		
			if (flag8)
				flags2 = flags2 | SPC_REENABLE_CONTROL_ON_DEATH;
		
			if (flag9)
				flags2 = flags2 | SPC_LEAVE_CAMERA_CONTROL_ON;
		
			if (flag10)
				flags2 = flags2 | SPC_ALLOW_PLAYER_DAMAGE;
		
			if (flag11)
				flags2 = flags2 | SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER;
		
			if (flag12)
				flags2 = flags2 | SPC_PREVENT_EVERYBODY_BACKOFF;
		
			if (flag13)
				flags2 = flags2 | SPC_ALLOW_PAD_SHAKE;
		
			PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags2);
		}
	}

	return;
}

BOOL func_0xFB453256(int iParam0)
{
	return iParam0 == 17;
}

void func_0xBC63612E()
{
	var unk;

	/*Global_2672939*/MPGlobals.f_1100 = 0;
	/*Global_2672939*/MPGlobals.f_1101 = 0;
	/*Global_2672939*/MPGlobals.f_1102 = { 9999.9f, 9999.9f, 9999.9f };
	/*Global_2672939*/MPGlobals.f_1107 = -1;
	/*Global_2672939*/MPGlobals.f_1108 = 0;
	Global_2635516.f_2993 = { unk };
	return;
}

void func_0x5FEB45C4()
{
	Global_2635516.f_703 = 0;
	Global_2635516.f_3036 = 0;
	Global_2635516.f_516 = 0;
	Global_2635516.f_607 = 0;
	/*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_220 = 0;
	Global_2635516.f_2991 = 0;
	return;
}

BOOL func_0x93DB01D2(Ped pedParam0)
{
	int scriptTaskStatus;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
	{
		return true;
	}
	else
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
	
		if (scriptTaskStatus == 0)
			return true;
	}

	return false;
}

void func_0x19FE7AFC(BOOL bParam0, Ped pedParam1, int iParam2)
{
	int num;
	eViewModeContext i;

	ENTITY::IS_ENTITY_DEAD(pedParam1, false);

	if (bParam0 == true)
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
			if (PED::IS_PED_A_PLAYER(pedParam1))
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == true)
			{
				func_0xEFF6029E();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = ON_FOOT; i < 8; i = i + 1)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(i, Global_2621446.f_58[i]);
					}
				}
			
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_0x1A32E11A(PLAYER::PLAYER_ID(), 0))
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
		else
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
	
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
		_MPPLY_STAT_SET_BOOL(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}

	return;
}

void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, true);

	return;
}

void func_0xEFF6029E()
{
	eViewModeContext i;

	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = ON_FOOT; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(i);
			}
		
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_0x68897CDD(Player plParam0)
{
	if (func_0x1A32E11A(plParam0, 0))
		return true;

	if (func_0xA525B2F4())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[plParam0].f_202, 2))
		return true;

	return false;
}

BOOL func_0xA525B2F4()
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_0x1A32E11A(Player plParam0, int iParam1)
{
	BOOL flag;

	if (!func_0x6A46C9B4(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_0x1DCD393E(-1, false) == 8;
	else
		flag = /*Global_1845221*/GlobalplayerBD_FM[plParam0].f_206 == 8;

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

	if (Global_1575064[num2] == 1)
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

int func_0x47FF56D2()
{
	return /*Global_1574926*/g_Private_ACTIVE_CHARACTER;
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

BOOL func_0xEBB0E6F7()
{
	if (IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_885, 2) && !(/*Global_2685658*/g_TransitionSessionNonResetVars.f_2847.f_216 == -1))
		return true;

	return false;
}

void func_0xF7D3FBB9(int iParam0)
{
	_STOPWATCH_DESTROY(&/*Global_2685658*/g_TransitionSessionNonResetVars.f_4343.f_248[iParam0]);
	return;
}

void _STOPWATCH_DESTROY(var uParam0)
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1)
{
	if (iParam1 == -1)
		iParam1 = func_0x47FF56D2();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

BOOL func_0x1C1E0F7E(int iParam0)
{
	int num;

	num = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam0) / 32f);

	if (IS_ROCKSTAR_DEV() && func_0x70EB1C51() && func_0x21D64237() == 2)
		return false;

	if (!IS_BIT_SET(/*Global_23970*/g_sMenuData.f_6618[num], iParam0 - (num * 32)))
		return true;

	return false;
}

int func_0x21D64237()
{
	return /*Global_33087*/g_Private_Gamemode_Current;
}

BOOL func_0x70EB1C51()
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CREATOR_RT) && PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CREATOR_LT);

	return PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RT) && PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LT);
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

	if (!bLocal_87)
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && func_0xDBD936D3())
		{
			if (GET_MP_INT_CHARACTER_STAT(12036, -1) == -1)
			{
				bLocal_87 = true;
				return;
			}
		
			num = GET_MP_INT_CHARACTER_STAT(12169, -1);
			num2 = GET_MP_INT_CHARACTER_STAT(12037, -1);
			num3 = GET_MP_INT_CHARACTER_STAT(12038, -1);
		
			for (i = 0; i < 4; i = i + 1)
			{
				if (Global_2710215[i].f_104 > 0)
				{
					num4 = 0;
					num5 = -1;
					func_0xC5EEEB87(Global_2710215[i].f_104, &num4, &num5);
					num6 = func_0xB8EC44B7(num4);
				
					if (num2 == num6 && num3 == num5)
					{
						func_0x7BE3998D();
						num7 = -1;
					
						for (j = 0; j < 3; j = j + 1)
						{
							if (/*Global_262145*/g_sMPTunables.f_33031[j] == Global_2710215[i].f_104)
							{
								num7 = j;
								break;
							}
						}
					
						if (num7 >= 0 && num7 < 3)
							if (func_0x7BEA6B6B(num7, true) != 2)
								func_0x115F642(2, num7, true);
					}
				}
			}
		
			bLocal_87 = true;
		}
	}
	else if (!func_0xDBD936D3())
	{
		bLocal_87 = false;
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
		Global_1976576[PLAYER::PLAYER_ID()].f_71.f_23[iParam1] = iParam0;

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
			/*Global_2751934*/MPGlobalsStats = 0;
			num = num2;
		}
		else
		{
			num = 0;
			/*Global_2751934*/MPGlobalsStats = 1;
		}
	}

	return num;
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
		return Global_1976576[plParam0].f_71.f_23[iParam1];

	return -1;
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
	Global_1976576[PLAYER::PLAYER_ID()].f_71.f_13.f_8 = 0;
	MISC::CLEAR_BIT(&(Global_1976328.f_1), 30);
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

int GET_MP_INT_CHARACTER_STAT(int iParam0, int iParam1)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15468)
	{
		statHash = func_0x505A9F99(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_0x2F4042DD(Player plParam0)
{
	return /*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_500 != 0;
}

void func_0xAE8C651D()
{
	Vector3 entityCoords;
	Entity outPed;
	int flags;

	if (func_0xE22E8209(PLAYER::PLAYER_ID(), 264) != 5 && func_0xAB4D17EF(PLAYER::PLAYER_ID()) != 5)
	{
		func_0x24DB58FF();
		return;
	}

	if (bLocal_80)
		return;

	if (/*Global_2739811*/MPGlobalsAmbience.f_6880 < 1)
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	func_0x2E23F67(true);

	switch (bLocal_80.f_2)
	{
		case 0:
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(bLocal_80.f_3))
			{
				if (/*Global_2739811*/MPGlobalsAmbience.f_6880 >= 5)
					bLocal_80.f_2 = 1;
			}
			else if (!_IS_NULL_VECTOR(entityCoords))
			{
				PED::GET_CLOSEST_PED(entityCoords, 30f, false, true, &outPed, false, true, 5);
			
				if (ENTITY::GET_ENTITY_MODEL(outPed) == joaat("IG_Vernon"))
					bLocal_80.f_3 = outPed;
			}
			break;
	
		case 1:
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(bLocal_80.f_4))
			{
				bLocal_80.f_2 = 2;
				_STOPWATCH_INITIALIZE(&(bLocal_80.f_5), false, false);
			}
			else if (!_IS_NULL_VECTOR(entityCoords))
			{
				flags = 2086;
				bLocal_80.f_4 = VEHICLE::GET_CLOSEST_VEHICLE(entityCoords, 50f, joaat("burrito3"), flags);
			}
			break;
	
		case 2:
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(bLocal_80.f_3) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(bLocal_80.f_4))
			{
				if (PED::IS_PED_IN_VEHICLE(bLocal_80.f_3, bLocal_80.f_4, false))
				{
					bLocal_80 = true;
				}
				else if (_STOPWATCH_HAS_TIME_PASSED(&(bLocal_80.f_5), 10000, false) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_80.f_3))
				{
					TASK::CLEAR_PED_TASKS(bLocal_80.f_3);
					TASK::TASK_ENTER_VEHICLE(bLocal_80.f_3, bLocal_80.f_4, 20000, 2, 1073741824, 16, 0, 0);
				}
			}
			break;
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

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_0x2E23F67(BOOL bParam0)
{
	if (bParam0)
	{
		if (func_0x92030130())
		{
			ENTITY::CREATE_MODEL_HIDE(func_0x21158019(), 5f, joaat("prop_skip_02a"), false);
			bLocal_80.f_1 = 1;
		}
	}
	else if (bLocal_80.f_1)
	{
		ENTITY::REMOVE_MODEL_HIDE(func_0x21158019(), 5f, joaat("prop_skip_02a"), false);
		bLocal_80.f_1 = 0;
	}

	return;
}

Vector3 func_0x21158019()
{
	return 895.8414f, -2236.4905f, 29.5296f;
}

BOOL func_0x92030130()
{
	if (bLocal_80.f_1)
		return false;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_0x21158019(), true) < 20f)
		return true;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(bLocal_80.f_3) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bLocal_80.f_3, true), func_0x21158019(), true) < 20f)
		return true;

	return false;
}

void func_0x24DB58FF()
{
	var src;

	if (bLocal_80.f_2 > 0)
	{
		func_0x2E23F67(false);
		MISC::COPY_SCRIPT_STRUCT(&bLocal_80, &src, 7);
	}

	return;
}

int func_0xAB4D17EF(Player plParam0)
{
	if (func_0x5EA8DF5A(plParam0) == 264)
		return func_0x48014DA(plParam0);

	return -1;
}

int func_0x48014DA(Player plParam0)
{
	if (func_0x3654624B(plParam0, false))
		return /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10.f_182;

	return -1;
}

BOOL func_0x3654624B(Player plParam0, BOOL bParam1)
{
	if (func_0x6A46C9B4(plParam0))
		if (/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10.f_33 != -1 || bParam1 && /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10.f_32 != -1)
			return true;

	return false;
}

int func_0x5EA8DF5A(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x3654624B(plParam0, false))
			return /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10.f_33;

	return -1;
}

int func_0xE22E8209(Player plParam0, int iParam1)
{
	if (func_0x5EA8DF5A(plParam0) == iParam1)
		return func_0x48014DA(plParam0);

	return -1;
}

void func_0x73D9E663()
{
	int num;
	int num2;

	if (!bLocal_79)
	{
		bLocal_79 = true;
		num = GET_MP_INT_CHARACTER_STAT(12462, -1);
		num2 = GET_MP_INT_CHARACTER_STAT(10873, -1);
	
		if (num == 0 && num2 > 0)
		{
			func_0xC00D48A9(12462, num2, -1, true);
			func_0xA5060797(1849420593, 27, false);
		}
	}

	return;
}

void func_0xA5060797(int iParam0, int iParam1, BOOL bParam2)
{
	int num;

	if (func_0x53FB4C13(iParam1, bParam2))
	{
		num = func_0x6BB290B9();
		Global_2696309[num] = iParam1;
		Global_2696320[num] = iParam0;
	}

	return;
}

int func_0x6BB290B9()
{
	int num;
	int i;

	num = 9;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (Global_2696309[i] == 0)
		{
			num = i;
			i = 10;
		}
	}

	return num;
}

BOOL func_0x53FB4C13(int iParam0, BOOL bParam1)
{
	if (Global_1575072)
		return false;

	if (iParam0 == 22)
		return true;

	if (bParam1 || !/*Global_1575084*/g_b_IsInTransition || iParam0 == 3 || iParam0 == 10 || iParam0 == 11 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30)
		return true;
	else
		return false;

	return true;
}

void func_0x385C521D()
{
	if (func_0xBF1A1A60(PLAYER::PLAYER_ID(), true, true) && func_0x72ACD2BB())
	{
		if (Global_2625716 == 145)
		{
			Global_2625716 = Global_8234;
			MISC::SET_BIT(&(Global_1882780[PLAYER::PLAYER_ID()].f_17), 0);
			bLocal_78 = true;
		}
	}
	else if (bLocal_78 && Global_2625716 != 145)
	{
		Global_2625716 = 145;
		MISC::CLEAR_BIT(&(Global_1882780[PLAYER::PLAYER_ID()].f_17), 0);
		bLocal_78 = false;
	}

	return;
}

BOOL func_0x72ACD2BB()
{
	if (func_0x66989FAD(181) || func_0x66989FAD(20) || func_0x66989FAD(151) || func_0x66989FAD(76) || func_0x66989FAD(188) || func_0x66989FAD(189) || func_0x66989FAD(190) || func_0x66989FAD(204))
		return 1;

	return 0;
}

BOOL func_0x66989FAD(int iParam0)
{
	if (Global_23539 || Global_23538 || Global_23540)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}

	if (Global_120[iParam0].f_8 != 184)
		if (/*Global_21066*/g_Cellphone.PhoneOwner.f_1 == 10)
			if (Global_8234 == iParam0)
				return true;
			else
				return false;
		else
			return false;

	return false;
}

BOOL func_0xBF1A1A60(Player plParam0, BOOL bParam1, BOOL bParam2)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_34, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_34, 1))
			return true;

	if (bParam2)
		if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
			return true;

	return false;
}

Player _INVALID_PLAYER_INDEX()
{
	return -1;
}

void func_0x639BDC70()
{
	if (iLocal_69.f_2 >= */*Global_262145*/g_sMPTunables.f_35524)
		return;

	switch (iLocal_69.f_1)
	{
		case 0:
			if (/*Global_2708410*/pickups.f_565 && Global_2709025 != -1)
			{
				iLocal_69 = Global_2709025;
				STREAMING::REQUEST_MODEL(func_0x26530429(iLocal_69));
				iLocal_69.f_1 = iLocal_69.f_1 + 1;
			}
			break;
	
		case 1:
			STREAMING::REQUEST_MODEL(func_0x26530429(iLocal_69));
		
			if (STREAMING::HAS_MODEL_LOADED(func_0x26530429(iLocal_69)))
			{
				if (!/*Global_2708410*/pickups.f_565)
				{
					func_0xC44972DB(iLocal_69);
					func_0x11A84E69();
				}
			}
			break;
	}

	return;
}

void func_0x11A84E69()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69.f_3))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_69.f_3));

	iLocal_69.f_1 = 0;
	iLocal_69 = -1;
	return;
}

void func_0xC44972DB(int iParam0)
{
	Vector3 vector;

	vector = { func_0x5B2695C0(iParam0) };
	vector.f_2 = vector.f_2 - 2.5f;
	iLocal_69.f_3 = OBJECT::CREATE_OBJECT(func_0x26530429(iParam0), vector, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_69.f_3, func_0xEDA5FBD9(iParam0), 2, true);
	OBJECT::SET_OBJECT_TARGETTABLE(iLocal_69.f_3, false, 0);
	ENTITY::SET_ENTITY_PROOFS(iLocal_69.f_3, true, true, true, true, true, false, false, false);

	if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iLocal_69.f_3))
		if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_69.f_3))
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_69.f_3), false);

	ENTITY::FREEZE_ENTITY_POSITION(iLocal_69.f_3, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_69.f_3, 200);
	return;
}

Vector3 func_0xEDA5FBD9(int iParam0)
{
	int num;

	num = func_0x7B2479C8(iParam0);

	switch (num)
	{
		case 0:
			return 0f, 0f, 60.0749f;
	
		case 1:
			return 0f, 0f, -5.0001f;
	
		case 2:
			return 0f, 0f, -40.6002f;
	
		case 3:
			return 0f, 0f, 49.9999f;
	
		case 4:
			return 0f, 0f, -89.8017f;
	
		case 5:
			return 0f, 0f, 2.2f;
	
		case 6:
			return 0f, 0f, 49.9995f;
	
		case 7:
			return 0f, 0f, 55.1999f;
	
		case 8:
			return 0f, 0f, -90.2008f;
	
		case 9:
			return 0f, 0f, 49.9999f;
	
		case 10:
			return 0f, 0f, -79.8005f;
	
		case 11:
			return 0f, 0f, -19.8001f;
	
		case 12:
			return 0f, 0f, -63.2008f;
	
		case 13:
			return 0f, 0f, -5.8001f;
	
		case 14:
			return 0f, 0f, 0f;
	
		case 15:
			return 0f, 0f, 0f;
	
		case 16:
			return 0f, 0f, -20.0002f;
	
		case 17:
			return 0f, 0f, -105.401f;
	
		case 18:
			return 0f, 0f, -47.4002f;
	
		case 19:
			return 0f, 0f, -22.8026f;
	
		case 20:
			return 0f, 0f, 4f;
	
		case 21:
			return 0f, 0f, 127.3973f;
	
		case 22:
			return 0f, 0f, -22.2009f;
	
		case 23:
			return 0f, 0f, 8.2f;
	
		case 24:
			return 0f, 0f, 67.1996f;
	
		case 25:
			return 0f, 0f, 29.9992f;
	
		case 26:
			return 0f, 0f, 0f;
	
		case 27:
			return 0f, 0f, 89.9998f;
	
		case 28:
			return 0f, 0f, 44.7999f;
	
		case 29:
			return 0f, 0f, 109.9993f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_0x7B2479C8(int iParam0)
{
	int num;

	num = -1;

	switch (iParam0)
	{
		case 0:
			num = _STAT_GET_PACKED_INT(51546, -1);
			break;
	
		case 1:
			num = _STAT_GET_PACKED_INT(51547, -1);
			break;
	
		case 2:
			num = _STAT_GET_PACKED_INT(51548, -1);
			break;
	
		case 3:
			num = _STAT_GET_PACKED_INT(51549, -1);
			break;
	
		case 4:
			num = _STAT_GET_PACKED_INT(51550, -1);
			break;
	}

	return num;
}

int _STAT_GET_PACKED_INT(int iParam0, int iParam1)
{
	if (iParam1 == -1)
		iParam1 = func_0x47FF56D2();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

Vector3 func_0x5B2695C0(int iParam0)
{
	int num;

	num = func_0x7B2479C8(iParam0);

	switch (num)
	{
		case 0:
			return -977.6928f, -2639.573f, 16.474f;
	
		case 1:
			return 819.4288f, -2227.2385f, 32.6184f;
	
		case 2:
			return 37.9683f, -1469.2217f, 32.235f;
	
		case 3:
			return -768.9666f, -1321.6681f, 7.1244f;
	
		case 4:
			return 1209.1267f, -1505.5887f, 36.4654f;
	
		case 5:
			return 845.3231f, -1203.0039f, 27.46f;
	
		case 6:
			return 188.2855f, -1843.3844f, 29.2995f;
	
		case 7:
			return 182.0389f, -941.2879f, 32.2661f;
	
		case 8:
			return -501.2574f, -684.436f, 35.186f;
	
		case 9:
			return -1636.3019f, -1063.8951f, 15.1266f;
	
		case 10:
			return 1165.2151f, -314.1255f, 71.217f;
	
		case 11:
			return 369.5584f, -326.8165f, 49.145f;
	
		case 12:
			return -942.4161f, -343.455f, 40.765f;
	
		case 13:
			return -2066f, -345.2393f, 15.761f;
	
		case 14:
			return -359.6902f, 141.5108f, 68.5588f;
	
		case 15:
			return 2581.005f, 487.5057f, 110.868f;
	
		case 16:
			return 760.227f, 583.9885f, 128.3567f;
	
		case 17:
			return -481.0848f, 1112.5974f, 322.24f;
	
		case 18:
			return -1834.4456f, 788.6052f, 140.539f;
	
		case 19:
			return -3195.2385f, 1318.3502f, 11.5263f;
	
		case 20:
			return -2557.941f, 2302.0186f, 34.956f;
	
		case 21:
			return -2219.9644f, 4222.4917f, 49.078f;
	
		case 22:
			return 2469.77f, 4082.911f, 39.8446f;
	
		case 23:
			return 575.3076f, 2676.81f, 43.712f;
	
		case 24:
			return 2741.5925f, 3453.4548f, 58.443f;
	
		case 25:
			return 1928.9758f, 3736.5696f, 34.514f;
	
		case 26:
			return 1723.0552f, 4790.159f, 43.9136f;
	
		case 27:
			return -756.7117f, 5600.3823f, 38.6646f;
	
		case 28:
			return 1.7607f, 6410.2383f, 33.779f;
	
		case 29:
			return 1411.0867f, 3608.7688f, 37.0159f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Hash func_0x26530429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -886191856;
	
		case 1:
			return -1557497351;
	
		case 2:
			return 1181772342;
	
		case 3:
			return -568552366;
	
		case 4:
			return -2055832045;
	
		default:
		
	}

	return 0;
}

void func_0x8684453B()
{
	BOOL flag;

	switch (/*Global_1943917*/g_SimpleInteriorData.f_5040)
	{
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
			if (veLocal_68 == 0)
			{
				if (/*Global_1943917*/g_SimpleInteriorData.f_5040.f_2 != -1)
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
					{
						veLocal_68 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						/*Global_1943917*/g_SimpleInteriorData.f_5029.f_5 = /*Global_1943917*/g_SimpleInteriorData.f_5040;
					}
				}
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_IN() && func_0xDBD936D3() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !HUD::IS_WARNING_MESSAGE_ACTIVE() && /*Global_1943917*/g_SimpleInteriorData.f_5029.f_3 == 0 && /*Global_1943910*/dance_state == 0)
					flag = true;
			
				if (flag)
				{
					if (veLocal_68 != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
					{
						func_0x1E9ADB7F(-1);
						veLocal_68 = 0;
						/*Global_1943917*/g_SimpleInteriorData.f_5029.f_5 = -1;
					}
				}
			}
			break;
	
		default:
			if (veLocal_68 != 0)
			{
				veLocal_68 = 0;
				/*Global_1943917*/g_SimpleInteriorData.f_5029.f_5 = -1;
			}
			break;
	}

	return;
}

void func_0x1E9ADB7F(int iParam0)
{
	if (iParam0 != -1)
		/*Global_1943917*/g_SimpleInteriorData.f_5040 = iParam0;
	else
		/*Global_1943917*/g_SimpleInteriorData.f_5040 = -1;

	return;
}

void func_0xFBC7D388()
{
	if (!Global_1981863)
		Global_1981863 = true;

	return;
}

void func_0xB5EBCEEA()
{
	Vehicle vehiclePedIsIn;

	if (veLocal_66 != /*Global_2739811*/MPGlobalsAmbience.f_6838 && ENTITY::DOES_ENTITY_EXIST(/*Global_2739811*/MPGlobalsAmbience.f_6838) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(/*Global_2739811*/MPGlobalsAmbience.f_6838))
	{
		veLocal_66 = /*Global_2739811*/MPGlobalsAmbience.f_6838;
	
		if (VEHICLE::IS_VEHICLE_MODEL(/*Global_2739811*/MPGlobalsAmbience.f_6838, 858355070))
			unk_0xDD8A2D3337F04196(/*Global_2739811*/MPGlobalsAmbience.f_6838, 0);
	}

	if (/*Global_2672939*/MPGlobals.f_4.f_5 && /*Global_2672939*/MPGlobals.f_4.f_7)
	{
		if (/*Global_2672939*/MPGlobals.f_4.f_14 == 858355070)
		{
			if (!bLocal_67)
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn))
				{
					unk_0xDD8A2D3337F04196(vehiclePedIsIn, 0);
					bLocal_67 = true;
				}
			}
		}
		else
		{
			bLocal_67 = false;
		}
	}
	else
	{
		bLocal_67 = false;
	}

	return;
}

void func_0xBBCE879B()
{
	int num;
	int num2;
	int num3;
	int i;
	int num4;
	int j;
	var unk;
	int k;
	int num5;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		return;

	if (bLocal_64)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_65))
			VEHICLE::DELETE_VEHICLE(&veLocal_65);
	
		bLocal_64 = false;
		return;
	}

	if (NETWORK::NETWORK_IS_IN_TRANSITION() || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (bLocal_63)
	{
		Global_76816.f_66 = func_0x9F572D68();
		Global_76816.f_5 = 9;
		Global_76816.f_7 = 7;
		Global_76816.f_97 = 1;
		Global_76816.f_99 = 132;
		Global_76816.f_98 = 0;
		Global_76816.f_62 = 255;
		Global_76816.f_63 = 255;
		Global_76816.f_64 = 255;
		num = 0;
	
		if (func_0x87E3A365(402, 12, &Global_76816, &veLocal_65, &num, true, false))
		{
			func_0x194A5900(222, 222, -1);
			func_0x19AE1E6(veLocal_65, 222, true, true, false, true, true, false, false, -1, 0, false);
			func_0xA5060797(534298098, 3, false);
			bLocal_63 = false;
			bLocal_64 = true;
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_0x9F572D68());
		}
	
		return;
	}

	if (MISC::GET_FRAME_COUNT() % 60 != 0)
		return;

	if (func_0xB4817385(PLAYER::PLAYER_ID()))
	{
		num2 = -1;
		func_0x600984A8(222, &num2, true);
	
		if (num2 != 222)
		{
			num3 = -1;
		
			if (num2 != -1)
			{
				num3 = num2;
			}
			else
			{
				i = -1;
			
				for (i = 0; i < 547; i = i + 1)
				{
					if (i != 222 && Global_1586535[i].f_66 == joaat("terbyte"))
						num3 = i;
				}
			}
		
			if (num3 != -1)
			{
				num4 = -1;
				func_0x19042A21(num3, &num4);
			
				if (num4 != -1)
					func_0x194A5900(num4, -1, -1);
			
				Global_1586535[222] = { Global_1586535[num3] };
				func_0x194A5900(222, 222, -1);
				func_0x545987EB(222, &Global_1586535[222], true, -1, false, false);
				func_0xFF1D90B0(num3);
				j = -1;
			
				for (j = 0; j < 547; j = j + 1)
				{
					if (j != 222 && Global_1586535[j].f_66 == joaat("terbyte"))
						func_0xFF1D90B0(j);
				}
			
				func_0xA5060797(534298098, 3, false);
			}
			else if (Global_1586535[222].f_66 != joaat("terbyte"))
			{
				unk.f_9 = 49;
				unk.f_59 = 2;
				unk.f_78 = -1;
				unk.f_79 = -1;
				unk.f_96 = -1;
				unk.f_97 = 1;
				unk.f_99 = 132;
				unk.f_100 = -1;
				func_0x9E7105C(unk, &Global_76816);
				bLocal_63 = true;
			}
			else
			{
				func_0x194A5900(222, 222, -1);
				k = -1;
			
				for (k = 0; k < 547; k = k + 1)
				{
					num5 = -1;
					func_0x600984A8(k, &num5, true);
				
					if (num5 == 222 && k != 222)
						func_0x194A5900(k, -1, -1);
				}
			
				func_0xA5060797(534298098, 3, false);
			}
		}
	}

	return;
}

void func_0x9E7105C(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104)
{
	func_0x8EF4EDA5(&uParam0, uParam104);
	uParam104->f_78 = uParam0.f_78;
	uParam104->f_80 = uParam0.f_80;
	uParam104->f_97 = uParam0.f_97;
	uParam104->f_99 = uParam0.f_99;
	uParam104->f_98 = uParam0.f_98;
	uParam104->f_95 = uParam0.f_95;
	uParam104->f_94 = uParam0.f_94;
	uParam104->f_96 = uParam0.f_96;
	func_0xEFF4ECDA(uParam0.f_81, &(uParam104->f_81));
	return;
}

void func_0xEFF4ECDA(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	*uParam13 = uParam0;
	uParam13->f_1 = uParam0.f_1;
	uParam13->f_2 = uParam0.f_2;
	uParam13->f_3 = uParam0.f_3;
	uParam13->f_4 = uParam0.f_4;
	uParam13->f_5 = uParam0.f_5;
	uParam13->f_6 = uParam0.f_6;
	uParam13->f_7 = uParam0.f_7;
	uParam13->f_8 = uParam0.f_8;
	uParam13->f_9 = uParam0.f_9;
	uParam13->f_10 = uParam0.f_10;
	uParam13->f_11 = uParam0.f_11;
	uParam13->f_12 = uParam0.f_12;
	return;
}

void func_0x8EF4EDA5(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
	return;
}

void func_0xFF1D90B0(int iParam0)
{
	int num;

	num = -1;
	func_0x19042A21(iParam0, &num);
	func_0xB73E6112(iParam0, 0, -1);

	if (num != -1 && num != 222)
		func_0x194A5900(num, -1, -1);

	return;
}

void func_0xB73E6112(int iParam0, int iParam1, int iParam2)
{
	int num;

	func_0x19042A21(iParam0, &num);

	if (num >= 0)
		func_0x194A5900(num, -1, iParam2);

	func_0x1454C1BE(iParam0, iParam1);
	func_0xE1FC0922(&Global_1586535[iParam0]);
	/*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[func_0xF9396AAC()].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_0x545987EB(iParam0, &Global_1586535[iParam0], false, iParam2, false, false);
	return;
}

int func_0xF9396AAC()
{
	int num;

	num = 0;
	return num;
}

void func_0xE1FC0922(var uParam0)
{
	func_0x27A94625(uParam0);
	uParam0->f_104 = 0;
	uParam0->f_105 = 0;
	uParam0->f_106 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_107), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_123), "", 64);
	uParam0->f_139 = 0;
	uParam0->f_140 = 0;
	uParam0->f_141 = 0;
	uParam0->f_142 = 0;
	return;
}

void func_0x27A94625(var uParam0)
{
	func_0xB95AF921(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
	return;
}

void func_0xB95AF921(var uParam0)
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

void func_0x1454C1BE(int iParam0, int iParam1)
{
	int bossId1;
	int bossId2;
	int bossType;
	int reason;

	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 0:
				reason = joaat("INVALID");
				break;
		
			case 1:
				reason = joaat("Destroyed");
				break;
		
			case 2:
				reason = joaat("SOLD");
				break;
		
			case 3:
				reason = joaat("OVERWRITE");
				break;
		
			case 4:
				reason = joaat("exploit");
				break;
		
			case 5:
				reason = joaat("UNOWNED");
				break;
		
			case 6:
				reason = joaat("Duplicate");
				break;
		
			case 7:
				reason = -1921848560;
				break;
		}
	
		if (func_0xCA2EA26D(true))
		{
			bossId1 = func_0x57997590(_GET_BOSS_OF_LOCAL_PLAYER());
			bossId2 = func_0xAE8A6582(_GET_BOSS_OF_LOCAL_PLAYER());
			bossType = func_0x770A7C8B(func_0xCA2EA26D(true));
		}
		else
		{
			bossType = -1;
		}
	
		STATS::PLAYSTATS_VEH_DEL(bossId1, bossId2, bossType, Global_1586535[iParam0].f_66, reason);
	}

	return;
}

int func_0x770A7C8B(BOOL bParam0)
{
	if (bParam0)
		return 1;

	return 0;
}

BOOL func_0xCA2EA26D(BOOL bParam0)
{
	return func_0xB4D52F0E(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_0xB4D52F0E(Player plParam0, BOOL bParam1)
{
	return func_0x55931638(plParam0, bParam1, 1);
}

int func_0x55931638(Player plParam0, BOOL bParam1, int iParam2)
{
	Player player;

	if (!func_0x6A46C9B4(plParam0))
		return 0;

	if (!bParam1)
		if (func_0xEA053375(plParam0, iParam2))
			return 0;

	player = /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10;

	if (func_0x6A46C9B4(player) && /*Global_1887549*/globalPlayerBD_FM_3[player].f_10.f_431 == iParam2)
		return 1;

	return 0;
}

BOOL func_0xEA053375(Player plParam0, int iParam1)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x6A46C9B4(/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10))
			if (/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10 == plParam0 && /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10.f_431 == iParam1)
				return true;

	return false;
}

int func_0xAE8A6582(Player plParam0)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10.f_8[1];
}

int func_0x57997590(Player plParam0)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10.f_8[0];
}

Player _GET_BOSS_OF_LOCAL_PLAYER()
{
	return /*Global_1887549*/globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_10;
}

BOOL func_0xCA2EA26D(BOOL bParam0)
{
	return func_0xB4CE8E51(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_0xB4CE8E51(Player plParam0, BOOL bParam1)
{
	if (!func_0x6A46C9B4(plParam0))
		return false;

	if (!bParam1)
		if (func_0xC62FC261(plParam0))
			return false;

	return func_0x6A46C9B4(/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10);
}

BOOL func_0xC62FC261(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x6A46C9B4(/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10))
			return /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10 == plParam0;

	return false;
}

int func_0x545987EB(int iParam0, var uParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5)
{
	int i;
	int num;
	int cloudTimeAsInt;

	if (bParam2)
	{
		!bParam4;
		/*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[func_0xF9396AAC()].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}

	if (func_0xA8BA5EA5(iParam0))
		return 1;

	!bParam4;
	num = func_0x35A80149(1411, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_139, iParam3);
	!bParam4;
	num = func_0x35A80149(1412, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_140, iParam3);
	!bParam4;

	if (func_0xE48228D0(iParam0))
	{
	}
	else
	{
		num = func_0x35A80149(1413, iParam0);
		func_0x4C8CAB3D(num, *uParam1, iParam3);
		!bParam4;
	
		for (i = 0; i < 49; i = i + 1)
		{
			if (i < 25)
			{
				num = func_0x35A80149(1414, iParam0) + i;
				func_0x4C8CAB3D(num, uParam1->f_9[i], iParam3);
			}
			else
			{
				num = func_0xF955952E(iParam0) + (i - 25);
				func_0x4C8CAB3D(num, uParam1->f_9[i], iParam3);
			}
		}
	
		i = 0;
	
		for (i = 0; i < 2; i = i + 1)
		{
			num = func_0x35A80149(1439, iParam0) + i;
			func_0x4C8CAB3D(num, uParam1->f_59[i], iParam3);
		}
	}

	num = func_0x35A80149(1441, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_62, iParam3);
	!bParam4;
	num = func_0x35A80149(1442, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_63, iParam3);
	!bParam4;
	num = func_0x35A80149(1443, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_64, iParam3);
	!bParam4;

	if (func_0xE48228D0(iParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_0x35A80149(1444, iParam0);
		func_0x4C8CAB3D(num, uParam1->f_65, iParam3);
		!bParam4;
	}

	num = func_0x35A80149(1445, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_67, iParam3);

	if (func_0xE48228D0(iParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_0x35A80149(1446, iParam0);
		func_0x4C8CAB3D(num, uParam1->f_68, iParam3);
	}

	num = func_0x35A80149(1447, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_69, iParam3);
	!bParam4;
	num = func_0x35A80149(1448, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_70, -1);
	num = func_0x35A80149(1449, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_71, iParam3);
	num = func_0x35A80149(1450, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_72, iParam3);
	num = func_0x35A80149(1451, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_73, iParam3);
	num = func_0x35A80149(1452, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_5, iParam3);
	num = func_0x35A80149(1453, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_6, iParam3);
	num = func_0x35A80149(1454, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_7, iParam3);
	num = func_0x35A80149(1455, iParam0);
	func_0x4C8CAB3D(num, uParam1->f_8, iParam3);

	if (func_0xE48228D0(iParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_0x35A80149(3880, iParam0);
		func_0x4C8CAB3D(num, uParam1->f_74, iParam3);
		num = func_0x35A80149(3881, iParam0);
		func_0x4C8CAB3D(num, uParam1->f_75, iParam3);
		num = func_0x35A80149(3882, iParam0);
		func_0x4C8CAB3D(num, uParam1->f_76, iParam3);
		num = func_0x5992B4A(iParam0);
		func_0x4C8CAB3D(num, uParam1->f_97, iParam3);
		num = func_0x5992B4A(iParam0);
		func_0x4C8CAB3D(num, uParam1->f_99, iParam3);
		num = func_0x5992B4A(iParam0);
		func_0x4C8CAB3D(num, uParam1->f_98, iParam3);
		num = func_0x5FE7B2F8(iParam0, false);
		func_0x4C8CAB3D(num, uParam1->f_102, iParam3);
		num = func_0xB350EB61(iParam0);
		_STAT_SET_PACKED_BOOL(num, IS_BIT_SET(uParam1->f_103, 0), -1);
	}

	cloudTimeAsInt = /*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[func_0xF9396AAC()].f_681.f_1275;

	if (bParam5)
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	func_0xC00D48A9(1629, cloudTimeAsInt, iParam3, true);
	!bParam4;
	func_0xC00D48A9(func_0x7784C9D8(1, iParam0), uParam1->f_104, iParam3, true);
	!bParam4;
	func_0xC00D48A9(func_0x7784C9D8(2, iParam0), uParam1->f_105, iParam3, true);
	!bParam4;
	func_0xC00D48A9(func_0x7784C9D8(3, iParam0), uParam1->f_106, iParam3, true);
	!bParam4;
	func_0xC00D48A9(func_0x7784C9D8(4, iParam0), uParam1->f_66, iParam3, true);
	func_0xC00D48A9(func_0x7784C9D8(5, iParam0), uParam1->f_77, iParam3, true);
	!bParam4;
	func_0xC00D48A9(func_0x7784C9D8(7, iParam0), uParam1->f_141, iParam3, true);

	if (!func_0xE48228D0(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_0xF20CC64E(func_0x7784C9D8(6, iParam0), &(uParam1->f_1), iParam3);
			!bParam4;
		}
		else
		{
			!bParam4;
		}
	}

	!bParam4;
	return 1;
}

void func_0xF20CC64E(int iParam0, const char* sParam1, int iParam2)
{
	Hash statName;

	statName = func_0x505A9F99(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_LICENSE_PLATE(statName, sParam1);

	return;
}

int func_0x7784C9D8(int iParam0, int iParam1)
{
	if (iParam1 >= 363)
	{
		return func_0x5E3D5C7B(iParam0, iParam1);
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return 1630;
				
					case 1:
						return 1637;
				
					case 2:
						return 1644;
				
					case 3:
						return 1651;
				
					case 4:
						return 1658;
				
					case 5:
						return 1665;
				
					case 6:
						return 1672;
				
					case 7:
						return 1679;
				
					case 8:
						return 1686;
				
					case 9:
						return 1693;
				
					case 10:
						return 1700;
				
					case 11:
						return 1706;
				
					case 12:
						return 1712;
				
					case 13:
						return 1718;
				
					case 14:
						return 1797;
				
					case 15:
						return 1804;
				
					case 16:
						return 1811;
				
					case 17:
						return 1818;
				
					case 18:
						return 1825;
				
					case 19:
						return 1832;
				
					case 20:
						return 1839;
				
					case 21:
						return 1846;
				
					case 22:
						return 1853;
				
					case 23:
						return 1860;
				
					case 24:
						return 1866;
				
					case 25:
						return 1872;
				
					case 26:
						return 2167;
				
					case 27:
						return 2174;
				
					case 28:
						return 2181;
				
					case 29:
						return 2188;
				
					case 30:
						return 2195;
				
					case 31:
						return 2202;
				
					case 32:
						return 2209;
				
					case 33:
						return 2216;
				
					case 34:
						return 2223;
				
					case 35:
						return 2230;
				
					case 36:
						return 2237;
				
					case 37:
						return 2243;
				
					case 38:
						return 2249;
				
					case 39:
						return 2831;
				
					case 40:
						return 2838;
				
					case 41:
						return 2845;
				
					case 42:
						return 2852;
				
					case 43:
						return 2859;
				
					case 44:
						return 2866;
				
					case 45:
						return 2873;
				
					case 46:
						return 2880;
				
					case 47:
						return 2887;
				
					case 48:
						return 2894;
				
					case 49:
						return 2901;
				
					case 50:
						return 2907;
				
					case 51:
						return 2913;
				
					case 52:
						return 2955;
				
					case 53:
						return 2962;
				
					case 54:
						return 2969;
				
					case 55:
						return 2976;
				
					case 56:
						return 2983;
				
					case 57:
						return 2990;
				
					case 58:
						return 2997;
				
					case 59:
						return 3004;
				
					case 60:
						return 3011;
				
					case 61:
						return 3018;
				
					case 62:
						return 3025;
				
					case 63:
						return 3031;
				
					case 64:
						return 3037;
				
					case 65:
						return 3238;
				
					case 66:
						return 3246;
				
					case 67:
						return 3254;
				
					case 68:
						return 3262;
				
					case 69:
						return 3270;
				
					case 70:
						return 3278;
				
					case 71:
						return 3286;
				
					case 72:
						return 3294;
				
					case 73:
						return 3302;
				
					case 74:
						return 3310;
				
					case 75:
						return 3318;
				
					case 76:
						return 3326;
				
					case 77:
						return 3334;
				
					case 78:
						return 3342;
				
					case 79:
						return 3350;
				
					case 80:
						return 3358;
				
					case 81:
						return 3366;
				
					case 82:
						return 3374;
				
					case 83:
						return 3382;
				
					case 84:
						return 3390;
				
					case 85:
						return 3398;
				
					case 86:
						return 3405;
				
					case 87:
						return 3412;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4034;
				
					case 89:
						return 4042;
				
					case 90:
						return 4050;
				
					case 91:
						return 4058;
				
					case 92:
						return 4066;
				
					case 93:
						return 4074;
				
					case 94:
						return 4082;
				
					case 95:
						return 4090;
				
					case 96:
						return 4098;
				
					case 97:
						return 4106;
				
					case 98:
						return 4114;
				
					case 99:
						return 4122;
				
					case 100:
						return 4130;
				
					case 101:
						return 4138;
				
					case 102:
						return 4146;
				
					case 103:
						return 4154;
				
					case 104:
						return 4162;
				
					case 105:
						return 4170;
				
					case 106:
						return 4178;
				
					case 107:
						return 4186;
				
					case 108:
						return 4194;
				
					case 109:
						return 4202;
				
					case 110:
						return 4210;
				
					case 111:
						return 4218;
				
					case 112:
						return 4226;
				
					case 113:
						return 4234;
				
					case 114:
						return 4242;
				
					case 115:
						return 4250;
				
					case 116:
						return 4258;
				
					case 117:
						return 4266;
				
					case 118:
						return 4274;
				
					case 119:
						return 4282;
				
					case 120:
						return 4290;
				
					case 121:
						return 4298;
				
					case 122:
						return 4306;
				
					case 123:
						return 4314;
				
					case 124:
						return 4322;
				
					case 125:
						return 4330;
				
					case 126:
						return 4338;
				
					case 127:
						return 4346;
				
					case 128:
						return 4354;
				
					case 129:
						return 4362;
				
					case 130:
						return 4370;
				
					case 131:
						return 4378;
				
					case 132:
						return 4386;
				
					case 133:
						return 4394;
				
					case 134:
						return 4402;
				
					case 135:
						return 4410;
				
					case 136:
						return 4418;
				
					case 137:
						return 4426;
				
					case 138:
						return 4434;
				
					case 139:
						return 4442;
				
					case 140:
						return 4450;
				
					case 141:
						return 4458;
				
					case 142:
						return 4466;
				
					case 143:
						return 4474;
				
					case 144:
						return 4482;
				
					case 145:
						return 4490;
				
					case 146:
						return 4498;
				
					case 147:
						return 4506;
				
					case 148:
						return 4514;
				
					case 149:
						return 4522;
				
					case 150:
						return 4530;
				
					case 151:
						return 4538;
				
					case 152:
						return 4546;
				
					case 153:
						return 4554;
				
					case 154:
						return 4562;
				
					case 155:
						return 4570;
				
					case 156:
						return 4578;
				
					case 157:
						return 4586;
				
					case 158:
						return 5479;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5928;
				
					case 160:
						return 5935;
				
					case 161:
						return 5942;
				
					case 162:
						return 5949;
				
					case 163:
						return 5956;
				
					case 164:
						return 5963;
				
					case 165:
						return 5970;
				
					case 166:
						return 5977;
				
					case 167:
						return 5984;
				
					case 168:
						return 5991;
				
					case 169:
						return 5998;
				
					case 170:
						return 6005;
				
					case 171:
						return 6012;
				
					case 172:
						return 6019;
				
					case 173:
						return 6026;
				
					case 174:
						return 6033;
				
					case 175:
						return 6040;
				
					case 176:
						return 6047;
				
					case 177:
						return 6054;
				
					case 178:
						return 6061;
				
					case 179:
						return 6068;
				
					case 180:
						return 6075;
				
					case 181:
						return 6082;
				
					case 182:
						return 6089;
				
					case 183:
						return 6096;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6173;
				
					case 185:
						return 6180;
				
					case 186:
						return 6187;
				
					case 187:
						return 6194;
				
					case 188:
						return 6201;
				
					case 189:
						return 6208;
				
					case 190:
						return 6215;
				
					case 191:
						return 6222;
				
					case 192:
						return 6229;
				
					case 193:
						return 6236;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6570;
				
					case 195:
						return 6577;
				
					case 196:
						return 6584;
				
					case 197:
						return 6591;
				
					case 198:
						return 6598;
				
					case 199:
						return 6605;
				
					case 200:
						return 6612;
				
					case 201:
						return 6619;
				
					case 202:
						return 6626;
				
					case 203:
						return 6633;
				
					case 204:
						return 6640;
				
					case 205:
						return 6647;
				
					case 206:
						return 6654;
				
					case 207:
						return 6661;
				
					case 208:
						return 6668;
				
					case 209:
						return 6675;
				
					case 210:
						return 6682;
				
					case 211:
						return 6689;
				
					case 212:
						return 6696;
				
					case 213:
						return 6703;
				
					case 214:
						return 6710;
				
					case 215:
						return 6717;
				
					case 216:
						return 6724;
				
					case 217:
						return 6731;
				
					case 218:
						return 6738;
				
					case 219:
						return 6745;
				
					case 220:
						return 6752;
				
					case 221:
						return 6759;
				
					case 222:
						return 6766;
				
					case 223:
						return 6773;
				
					case 224:
						return 6780;
				
					case 225:
						return 6787;
				
					case 226:
						return 6794;
				
					case 227:
						return 6801;
				
					case 228:
						return 6808;
				
					case 229:
						return 6815;
				
					case 230:
						return 6822;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7292;
				
					case 232:
						return 7299;
				
					case 233:
						return 7306;
				
					case 234:
						return 7313;
				
					case 235:
						return 7320;
				
					case 236:
						return 7327;
				
					case 237:
						return 7334;
				
					case 238:
						return 7341;
				
					case 239:
						return 7348;
				
					case 240:
						return 7355;
				
					case 241:
						return 7362;
				
					case 242:
						return 7369;
				
					case 243:
						return 7376;
				
					case 244:
						return 7383;
				
					case 245:
						return 7390;
				
					case 246:
						return 7397;
				
					case 247:
						return 7404;
				
					case 248:
						return 7411;
				
					case 249:
						return 7418;
				
					case 250:
						return 7425;
				
					case 251:
						return 7432;
				
					case 252:
						return 7439;
				
					case 253:
						return 7446;
				
					case 254:
						return 7453;
				
					case 255:
						return 7460;
				
					case 256:
						return 7467;
				
					case 257:
						return 7474;
				
					case 258:
						return 7481;
				
					case 259:
						return 7488;
				
					case 260:
						return 7495;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8015;
				
					case 262:
						return 8022;
				
					case 263:
						return 8029;
				
					case 264:
						return 8036;
				
					case 265:
						return 8043;
				
					case 266:
						return 8050;
				
					case 267:
						return 8057;
				
					case 268:
						return 8064;
				
					case 269:
						return 8071;
				
					case 270:
						return 8078;
				
					case 271:
						return 8539;
				
					case 272:
						return 8546;
				
					case 273:
						return 8553;
				
					case 274:
						return 8560;
				
					case 275:
						return 8567;
				
					case 276:
						return 8574;
				
					case 277:
						return 8581;
				
					case 278:
						return 8588;
				
					case 279:
						return 8595;
				
					case 280:
						return 8602;
				
					case 281:
						return 8986;
				
					case 282:
						return 8993;
				
					case 283:
						return 9000;
				
					case 284:
						return 9007;
				
					case 285:
						return 9014;
				
					case 286:
						return 9021;
				
					case 287:
						return 9028;
				
					case 288:
						return 9035;
				
					case 289:
						return 9042;
				
					case 290:
						return 9049;
				
					case 291:
						return 9056;
				
					case 292:
						return 9062;
				
					case 293:
						return 9068;
				
					case 294:
						return 9074;
				
					case 295:
						return 9081;
				
					case 296:
						return 9088;
				
					case 297:
						return 9095;
				
					case 298:
						return 9102;
				
					case 299:
						return 9109;
				
					case 300:
						return 9116;
				
					case 301:
						return 9123;
				
					case 302:
						return 9130;
				
					case 303:
						return 9137;
				
					case 304:
						return 9144;
				
					case 305:
						return 9150;
				
					case 306:
						return 9156;
				
					case 307:
						return 9637;
				
					case 308:
						return 9644;
				
					case 309:
						return 9651;
				
					case 310:
						return 9658;
				
					case 311:
						return 9665;
				
					case 312:
						return 9672;
				
					case 313:
						return 9679;
				
					case 314:
						return 9686;
				
					case 315:
						return 9693;
				
					case 316:
						return 9700;
				
					case 317:
						return 9922;
				
					case 318:
						return 9929;
				
					case 319:
						return 9936;
				
					case 320:
						return 9943;
				
					case 321:
						return 9950;
				
					case 322:
						return 9957;
				
					case 323:
						return 9964;
				
					case 324:
						return 9971;
				
					case 325:
						return 9978;
				
					case 326:
						return 9985;
				
					case 327:
						return 9992;
				
					case 328:
						return 9999;
				
					case 329:
						return 10006;
				
					case 330:
						return 10013;
				
					case 331:
						return 10020;
				
					case 332:
						return 10027;
				
					case 333:
						return 10034;
				
					case 334:
						return 10041;
				
					case 335:
						return 10048;
				
					case 336:
						return 10055;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10448;
				
					case 338:
						return 10455;
				
					case 339:
						return 10462;
				
					case 340:
						return 10469;
				
					case 341:
						return 10476;
				
					case 342:
						return 10483;
				
					case 343:
						return 10490;
				
					case 344:
						return 10497;
				
					case 345:
						return 10504;
				
					case 346:
						return 10511;
				
					case 347:
						return 10518;
				
					case 348:
						return 10524;
				
					case 349:
						return 10530;
				
					case 350:
						return 10536;
				
					case 351:
						return 10543;
				
					case 352:
						return 10550;
				
					case 353:
						return 10557;
				
					case 354:
						return 10564;
				
					case 355:
						return 10571;
				
					case 356:
						return 10578;
				
					case 357:
						return 10585;
				
					case 358:
						return 10592;
				
					case 359:
						return 10599;
				
					case 360:
						return 10606;
				
					case 361:
						return 10612;
				
					case 362:
						return 10618;
				
					default:
						break;
				}
				break;
		
			case 2:
				switch (iParam1)
				{
					case 0:
						return 1631;
				
					case 1:
						return 1638;
				
					case 2:
						return 1645;
				
					case 3:
						return 1652;
				
					case 4:
						return 1659;
				
					case 5:
						return 1666;
				
					case 6:
						return 1673;
				
					case 7:
						return 1680;
				
					case 8:
						return 1687;
				
					case 9:
						return 1694;
				
					case 10:
						return 1701;
				
					case 11:
						return 1707;
				
					case 12:
						return 1713;
				
					case 13:
						return 1719;
				
					case 14:
						return 1798;
				
					case 15:
						return 1805;
				
					case 16:
						return 1812;
				
					case 17:
						return 1819;
				
					case 18:
						return 1826;
				
					case 19:
						return 1833;
				
					case 20:
						return 1840;
				
					case 21:
						return 1847;
				
					case 22:
						return 1854;
				
					case 23:
						return 1861;
				
					case 24:
						return 1867;
				
					case 25:
						return 1873;
				
					case 26:
						return 2168;
				
					case 27:
						return 2175;
				
					case 28:
						return 2182;
				
					case 29:
						return 2189;
				
					case 30:
						return 2196;
				
					case 31:
						return 2203;
				
					case 32:
						return 2210;
				
					case 33:
						return 2217;
				
					case 34:
						return 2224;
				
					case 35:
						return 2231;
				
					case 36:
						return 2238;
				
					case 37:
						return 2244;
				
					case 38:
						return 2250;
				
					case 39:
						return 2832;
				
					case 40:
						return 2839;
				
					case 41:
						return 2846;
				
					case 42:
						return 2853;
				
					case 43:
						return 2860;
				
					case 44:
						return 2867;
				
					case 45:
						return 2874;
				
					case 46:
						return 2881;
				
					case 47:
						return 2888;
				
					case 48:
						return 2895;
				
					case 49:
						return 2902;
				
					case 50:
						return 2908;
				
					case 51:
						return 2914;
				
					case 52:
						return 2956;
				
					case 53:
						return 2963;
				
					case 54:
						return 2970;
				
					case 55:
						return 2977;
				
					case 56:
						return 2984;
				
					case 57:
						return 2991;
				
					case 58:
						return 2998;
				
					case 59:
						return 3005;
				
					case 60:
						return 3012;
				
					case 61:
						return 3019;
				
					case 62:
						return 3026;
				
					case 63:
						return 3032;
				
					case 64:
						return 3038;
				
					case 65:
						return 3239;
				
					case 66:
						return 3247;
				
					case 67:
						return 3255;
				
					case 68:
						return 3263;
				
					case 69:
						return 3271;
				
					case 70:
						return 3279;
				
					case 71:
						return 3287;
				
					case 72:
						return 3295;
				
					case 73:
						return 3303;
				
					case 74:
						return 3311;
				
					case 75:
						return 3319;
				
					case 76:
						return 3327;
				
					case 77:
						return 3335;
				
					case 78:
						return 3343;
				
					case 79:
						return 3351;
				
					case 80:
						return 3359;
				
					case 81:
						return 3367;
				
					case 82:
						return 3375;
				
					case 83:
						return 3383;
				
					case 84:
						return 3391;
				
					case 85:
						return 3399;
				
					case 86:
						return 3406;
				
					case 87:
						return 3413;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4035;
				
					case 89:
						return 4043;
				
					case 90:
						return 4051;
				
					case 91:
						return 4059;
				
					case 92:
						return 4067;
				
					case 93:
						return 4075;
				
					case 94:
						return 4083;
				
					case 95:
						return 4091;
				
					case 96:
						return 4099;
				
					case 97:
						return 4107;
				
					case 98:
						return 4115;
				
					case 99:
						return 4123;
				
					case 100:
						return 4131;
				
					case 101:
						return 4139;
				
					case 102:
						return 4147;
				
					case 103:
						return 4155;
				
					case 104:
						return 4163;
				
					case 105:
						return 4171;
				
					case 106:
						return 4179;
				
					case 107:
						return 4187;
				
					case 108:
						return 4195;
				
					case 109:
						return 4203;
				
					case 110:
						return 4211;
				
					case 111:
						return 4219;
				
					case 112:
						return 4227;
				
					case 113:
						return 4235;
				
					case 114:
						return 4243;
				
					case 115:
						return 4251;
				
					case 116:
						return 4259;
				
					case 117:
						return 4267;
				
					case 118:
						return 4275;
				
					case 119:
						return 4283;
				
					case 120:
						return 4291;
				
					case 121:
						return 4299;
				
					case 122:
						return 4307;
				
					case 123:
						return 4315;
				
					case 124:
						return 4323;
				
					case 125:
						return 4331;
				
					case 126:
						return 4339;
				
					case 127:
						return 4347;
				
					case 128:
						return 4355;
				
					case 129:
						return 4363;
				
					case 130:
						return 4371;
				
					case 131:
						return 4379;
				
					case 132:
						return 4387;
				
					case 133:
						return 4395;
				
					case 134:
						return 4403;
				
					case 135:
						return 4411;
				
					case 136:
						return 4419;
				
					case 137:
						return 4427;
				
					case 138:
						return 4435;
				
					case 139:
						return 4443;
				
					case 140:
						return 4451;
				
					case 141:
						return 4459;
				
					case 142:
						return 4467;
				
					case 143:
						return 4475;
				
					case 144:
						return 4483;
				
					case 145:
						return 4491;
				
					case 146:
						return 4499;
				
					case 147:
						return 4507;
				
					case 148:
						return 4515;
				
					case 149:
						return 4523;
				
					case 150:
						return 4531;
				
					case 151:
						return 4539;
				
					case 152:
						return 4547;
				
					case 153:
						return 4555;
				
					case 154:
						return 4563;
				
					case 155:
						return 4571;
				
					case 156:
						return 4579;
				
					case 157:
						return 4587;
				
					case 158:
						return 5480;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5929;
				
					case 160:
						return 5936;
				
					case 161:
						return 5943;
				
					case 162:
						return 5950;
				
					case 163:
						return 5957;
				
					case 164:
						return 5964;
				
					case 165:
						return 5971;
				
					case 166:
						return 5978;
				
					case 167:
						return 5985;
				
					case 168:
						return 5992;
				
					case 169:
						return 5999;
				
					case 170:
						return 6006;
				
					case 171:
						return 6013;
				
					case 172:
						return 6020;
				
					case 173:
						return 6027;
				
					case 174:
						return 6034;
				
					case 175:
						return 6041;
				
					case 176:
						return 6048;
				
					case 177:
						return 6055;
				
					case 178:
						return 6062;
				
					case 179:
						return 6069;
				
					case 180:
						return 6076;
				
					case 181:
						return 6083;
				
					case 182:
						return 6090;
				
					case 183:
						return 6097;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6174;
				
					case 185:
						return 6181;
				
					case 186:
						return 6188;
				
					case 187:
						return 6195;
				
					case 188:
						return 6202;
				
					case 189:
						return 6209;
				
					case 190:
						return 6216;
				
					case 191:
						return 6223;
				
					case 192:
						return 6230;
				
					case 193:
						return 6237;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6571;
				
					case 195:
						return 6578;
				
					case 196:
						return 6585;
				
					case 197:
						return 6592;
				
					case 198:
						return 6599;
				
					case 199:
						return 6606;
				
					case 200:
						return 6613;
				
					case 201:
						return 6620;
				
					case 202:
						return 6627;
				
					case 203:
						return 6634;
				
					case 204:
						return 6641;
				
					case 205:
						return 6648;
				
					case 206:
						return 6655;
				
					case 207:
						return 6662;
				
					case 208:
						return 6669;
				
					case 209:
						return 6676;
				
					case 210:
						return 6683;
				
					case 211:
						return 6690;
				
					case 212:
						return 6697;
				
					case 213:
						return 6704;
				
					case 214:
						return 6711;
				
					case 215:
						return 6718;
				
					case 216:
						return 6725;
				
					case 217:
						return 6732;
				
					case 218:
						return 6739;
				
					case 219:
						return 6746;
				
					case 220:
						return 6753;
				
					case 221:
						return 6760;
				
					case 222:
						return 6767;
				
					case 223:
						return 6774;
				
					case 224:
						return 6781;
				
					case 225:
						return 6788;
				
					case 226:
						return 6795;
				
					case 227:
						return 6802;
				
					case 228:
						return 6809;
				
					case 229:
						return 6816;
				
					case 230:
						return 6823;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7293;
				
					case 232:
						return 7300;
				
					case 233:
						return 7307;
				
					case 234:
						return 7314;
				
					case 235:
						return 7321;
				
					case 236:
						return 7328;
				
					case 237:
						return 7335;
				
					case 238:
						return 7342;
				
					case 239:
						return 7349;
				
					case 240:
						return 7356;
				
					case 241:
						return 7363;
				
					case 242:
						return 7370;
				
					case 243:
						return 7377;
				
					case 244:
						return 7384;
				
					case 245:
						return 7391;
				
					case 246:
						return 7398;
				
					case 247:
						return 7405;
				
					case 248:
						return 7412;
				
					case 249:
						return 7419;
				
					case 250:
						return 7426;
				
					case 251:
						return 7433;
				
					case 252:
						return 7440;
				
					case 253:
						return 7447;
				
					case 254:
						return 7454;
				
					case 255:
						return 7461;
				
					case 256:
						return 7468;
				
					case 257:
						return 7475;
				
					case 258:
						return 7482;
				
					case 259:
						return 7489;
				
					case 260:
						return 7496;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8016;
				
					case 262:
						return 8023;
				
					case 263:
						return 8030;
				
					case 264:
						return 8037;
				
					case 265:
						return 8044;
				
					case 266:
						return 8051;
				
					case 267:
						return 8058;
				
					case 268:
						return 8065;
				
					case 269:
						return 8072;
				
					case 270:
						return 8079;
				
					case 271:
						return 8540;
				
					case 272:
						return 8547;
				
					case 273:
						return 8554;
				
					case 274:
						return 8561;
				
					case 275:
						return 8568;
				
					case 276:
						return 8575;
				
					case 277:
						return 8582;
				
					case 278:
						return 8589;
				
					case 279:
						return 8596;
				
					case 280:
						return 8603;
				
					case 281:
						return 8987;
				
					case 282:
						return 8994;
				
					case 283:
						return 9001;
				
					case 284:
						return 9008;
				
					case 285:
						return 9015;
				
					case 286:
						return 9022;
				
					case 287:
						return 9029;
				
					case 288:
						return 9036;
				
					case 289:
						return 9043;
				
					case 290:
						return 9050;
				
					case 291:
						return 9057;
				
					case 292:
						return 9063;
				
					case 293:
						return 9069;
				
					case 294:
						return 9075;
				
					case 295:
						return 9082;
				
					case 296:
						return 9089;
				
					case 297:
						return 9096;
				
					case 298:
						return 9103;
				
					case 299:
						return 9110;
				
					case 300:
						return 9117;
				
					case 301:
						return 9124;
				
					case 302:
						return 9131;
				
					case 303:
						return 9138;
				
					case 304:
						return 9145;
				
					case 305:
						return 9151;
				
					case 306:
						return 9157;
				
					case 307:
						return 9638;
				
					case 308:
						return 9645;
				
					case 309:
						return 9652;
				
					case 310:
						return 9659;
				
					case 311:
						return 9666;
				
					case 312:
						return 9673;
				
					case 313:
						return 9680;
				
					case 314:
						return 9687;
				
					case 315:
						return 9694;
				
					case 316:
						return 9701;
				
					case 317:
						return 9923;
				
					case 318:
						return 9930;
				
					case 319:
						return 9937;
				
					case 320:
						return 9944;
				
					case 321:
						return 9951;
				
					case 322:
						return 9958;
				
					case 323:
						return 9965;
				
					case 324:
						return 9972;
				
					case 325:
						return 9979;
				
					case 326:
						return 9986;
				
					case 327:
						return 9993;
				
					case 328:
						return 10000;
				
					case 329:
						return 10007;
				
					case 330:
						return 10014;
				
					case 331:
						return 10021;
				
					case 332:
						return 10028;
				
					case 333:
						return 10035;
				
					case 334:
						return 10042;
				
					case 335:
						return 10049;
				
					case 336:
						return 10056;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10449;
				
					case 338:
						return 10456;
				
					case 339:
						return 10463;
				
					case 340:
						return 10470;
				
					case 341:
						return 10477;
				
					case 342:
						return 10484;
				
					case 343:
						return 10491;
				
					case 344:
						return 10498;
				
					case 345:
						return 10505;
				
					case 346:
						return 10512;
				
					case 347:
						return 10519;
				
					case 348:
						return 10525;
				
					case 349:
						return 10531;
				
					case 350:
						return 10537;
				
					case 351:
						return 10544;
				
					case 352:
						return 10551;
				
					case 353:
						return 10558;
				
					case 354:
						return 10565;
				
					case 355:
						return 10572;
				
					case 356:
						return 10579;
				
					case 357:
						return 10586;
				
					case 358:
						return 10593;
				
					case 359:
						return 10600;
				
					case 360:
						return 10607;
				
					case 361:
						return 10613;
				
					case 362:
						return 10619;
				
					default:
						break;
				}
				break;
		
			case 3:
				switch (iParam1)
				{
					case 0:
						return 1632;
				
					case 1:
						return 1639;
				
					case 2:
						return 1646;
				
					case 3:
						return 1653;
				
					case 4:
						return 1660;
				
					case 5:
						return 1667;
				
					case 6:
						return 1674;
				
					case 7:
						return 1681;
				
					case 8:
						return 1688;
				
					case 9:
						return 1695;
				
					case 10:
						return 1702;
				
					case 11:
						return 1708;
				
					case 12:
						return 1714;
				
					case 13:
						return 1720;
				
					case 14:
						return 1799;
				
					case 15:
						return 1806;
				
					case 16:
						return 1813;
				
					case 17:
						return 1820;
				
					case 18:
						return 1827;
				
					case 19:
						return 1834;
				
					case 20:
						return 1841;
				
					case 21:
						return 1848;
				
					case 22:
						return 1855;
				
					case 23:
						return 1862;
				
					case 24:
						return 1868;
				
					case 25:
						return 1874;
				
					case 26:
						return 2169;
				
					case 27:
						return 2176;
				
					case 28:
						return 2183;
				
					case 29:
						return 2190;
				
					case 30:
						return 2197;
				
					case 31:
						return 2204;
				
					case 32:
						return 2211;
				
					case 33:
						return 2218;
				
					case 34:
						return 2225;
				
					case 35:
						return 2232;
				
					case 36:
						return 2239;
				
					case 37:
						return 2245;
				
					case 38:
						return 2251;
				
					case 39:
						return 2833;
				
					case 40:
						return 2840;
				
					case 41:
						return 2847;
				
					case 42:
						return 2854;
				
					case 43:
						return 2861;
				
					case 44:
						return 2868;
				
					case 45:
						return 2875;
				
					case 46:
						return 2882;
				
					case 47:
						return 2889;
				
					case 48:
						return 2896;
				
					case 49:
						return 2903;
				
					case 50:
						return 2909;
				
					case 51:
						return 2915;
				
					case 52:
						return 2957;
				
					case 53:
						return 2964;
				
					case 54:
						return 2971;
				
					case 55:
						return 2978;
				
					case 56:
						return 2985;
				
					case 57:
						return 2992;
				
					case 58:
						return 2999;
				
					case 59:
						return 3006;
				
					case 60:
						return 3013;
				
					case 61:
						return 3020;
				
					case 62:
						return 3027;
				
					case 63:
						return 3033;
				
					case 64:
						return 3039;
				
					case 65:
						return 3240;
				
					case 66:
						return 3248;
				
					case 67:
						return 3256;
				
					case 68:
						return 3264;
				
					case 69:
						return 3272;
				
					case 70:
						return 3280;
				
					case 71:
						return 3288;
				
					case 72:
						return 3296;
				
					case 73:
						return 3304;
				
					case 74:
						return 3312;
				
					case 75:
						return 3320;
				
					case 76:
						return 3328;
				
					case 77:
						return 3336;
				
					case 78:
						return 3344;
				
					case 79:
						return 3352;
				
					case 80:
						return 3360;
				
					case 81:
						return 3368;
				
					case 82:
						return 3376;
				
					case 83:
						return 3384;
				
					case 84:
						return 3392;
				
					case 85:
						return 3400;
				
					case 86:
						return 3407;
				
					case 87:
						return 3414;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4036;
				
					case 89:
						return 4044;
				
					case 90:
						return 4052;
				
					case 91:
						return 4060;
				
					case 92:
						return 4068;
				
					case 93:
						return 4076;
				
					case 94:
						return 4084;
				
					case 95:
						return 4092;
				
					case 96:
						return 4100;
				
					case 97:
						return 4108;
				
					case 98:
						return 4116;
				
					case 99:
						return 4124;
				
					case 100:
						return 4132;
				
					case 101:
						return 4140;
				
					case 102:
						return 4148;
				
					case 103:
						return 4156;
				
					case 104:
						return 4164;
				
					case 105:
						return 4172;
				
					case 106:
						return 4180;
				
					case 107:
						return 4188;
				
					case 108:
						return 4196;
				
					case 109:
						return 4204;
				
					case 110:
						return joaat("twi_01");
				
					case 111:
						return 4220;
				
					case 112:
						return 4228;
				
					case 113:
						return 4236;
				
					case 114:
						return 4244;
				
					case 115:
						return 4252;
				
					case 116:
						return 4260;
				
					case 117:
						return 4268;
				
					case 118:
						return 4276;
				
					case 119:
						return 4284;
				
					case 120:
						return 4292;
				
					case 121:
						return 4300;
				
					case 122:
						return 4308;
				
					case 123:
						return 4316;
				
					case 124:
						return 4324;
				
					case 125:
						return 4332;
				
					case 126:
						return 4340;
				
					case 127:
						return 4348;
				
					case 128:
						return 4356;
				
					case 129:
						return 4364;
				
					case 130:
						return 4372;
				
					case 131:
						return 4380;
				
					case 132:
						return 4388;
				
					case 133:
						return 4396;
				
					case 134:
						return 4404;
				
					case 135:
						return 4412;
				
					case 136:
						return 4420;
				
					case 137:
						return 4428;
				
					case 138:
						return 4436;
				
					case 139:
						return 4444;
				
					case 140:
						return 4452;
				
					case 141:
						return 4460;
				
					case 142:
						return 4468;
				
					case 143:
						return 4476;
				
					case 144:
						return 4484;
				
					case 145:
						return 4492;
				
					case 146:
						return 4500;
				
					case 147:
						return 4508;
				
					case 148:
						return 4516;
				
					case 149:
						return 4524;
				
					case 150:
						return 4532;
				
					case 151:
						return 4540;
				
					case 152:
						return 4548;
				
					case 153:
						return 4556;
				
					case 154:
						return 4564;
				
					case 155:
						return 4572;
				
					case 156:
						return 4580;
				
					case 157:
						return 4588;
				
					case 158:
						return 5481;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5930;
				
					case 160:
						return 5937;
				
					case 161:
						return 5944;
				
					case 162:
						return 5951;
				
					case 163:
						return 5958;
				
					case 164:
						return 5965;
				
					case 165:
						return 5972;
				
					case 166:
						return 5979;
				
					case 167:
						return 5986;
				
					case 168:
						return 5993;
				
					case 169:
						return 6000;
				
					case 170:
						return 6007;
				
					case 171:
						return 6014;
				
					case 172:
						return 6021;
				
					case 173:
						return 6028;
				
					case 174:
						return 6035;
				
					case 175:
						return 6042;
				
					case 176:
						return 6049;
				
					case 177:
						return 6056;
				
					case 178:
						return 6063;
				
					case 179:
						return 6070;
				
					case 180:
						return 6077;
				
					case 181:
						return 6084;
				
					case 182:
						return 6091;
				
					case 183:
						return 6098;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6175;
				
					case 185:
						return 6182;
				
					case 186:
						return 6189;
				
					case 187:
						return 6196;
				
					case 188:
						return 6203;
				
					case 189:
						return 6210;
				
					case 190:
						return 6217;
				
					case 191:
						return 6224;
				
					case 192:
						return 6231;
				
					case 193:
						return 6238;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6572;
				
					case 195:
						return 6579;
				
					case 196:
						return 6586;
				
					case 197:
						return 6593;
				
					case 198:
						return 6600;
				
					case 199:
						return 6607;
				
					case 200:
						return 6614;
				
					case 201:
						return 6621;
				
					case 202:
						return 6628;
				
					case 203:
						return 6635;
				
					case 204:
						return 6642;
				
					case 205:
						return 6649;
				
					case 206:
						return 6656;
				
					case 207:
						return 6663;
				
					case 208:
						return 6670;
				
					case 209:
						return 6677;
				
					case 210:
						return 6684;
				
					case 211:
						return 6691;
				
					case 212:
						return 6698;
				
					case 213:
						return 6705;
				
					case 214:
						return 6712;
				
					case 215:
						return 6719;
				
					case 216:
						return 6726;
				
					case 217:
						return 6733;
				
					case 218:
						return 6740;
				
					case 219:
						return 6747;
				
					case 220:
						return 6754;
				
					case 221:
						return 6761;
				
					case 222:
						return 6768;
				
					case 223:
						return 6775;
				
					case 224:
						return 6782;
				
					case 225:
						return 6789;
				
					case 226:
						return 6796;
				
					case 227:
						return 6803;
				
					case 228:
						return 6810;
				
					case 229:
						return 6817;
				
					case 230:
						return 6824;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7294;
				
					case 232:
						return 7301;
				
					case 233:
						return 7308;
				
					case 234:
						return 7315;
				
					case 235:
						return 7322;
				
					case 236:
						return 7329;
				
					case 237:
						return 7336;
				
					case 238:
						return 7343;
				
					case 239:
						return 7350;
				
					case 240:
						return 7357;
				
					case 241:
						return 7364;
				
					case 242:
						return 7371;
				
					case 243:
						return 7378;
				
					case 244:
						return 7385;
				
					case 245:
						return 7392;
				
					case 246:
						return 7399;
				
					case 247:
						return 7406;
				
					case 248:
						return 7413;
				
					case 249:
						return 7420;
				
					case 250:
						return 7427;
				
					case 251:
						return 7434;
				
					case 252:
						return 7441;
				
					case 253:
						return 7448;
				
					case 254:
						return 7455;
				
					case 255:
						return 7462;
				
					case 256:
						return 7469;
				
					case 257:
						return 7476;
				
					case 258:
						return 7483;
				
					case 259:
						return 7490;
				
					case 260:
						return 7497;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8017;
				
					case 262:
						return 8024;
				
					case 263:
						return 8031;
				
					case 264:
						return 8038;
				
					case 265:
						return 8045;
				
					case 266:
						return 8052;
				
					case 267:
						return 8059;
				
					case 268:
						return 8066;
				
					case 269:
						return 8073;
				
					case 270:
						return 8080;
				
					case 271:
						return 8541;
				
					case 272:
						return 8548;
				
					case 273:
						return 8555;
				
					case 274:
						return 8562;
				
					case 275:
						return 8569;
				
					case 276:
						return 8576;
				
					case 277:
						return 8583;
				
					case 278:
						return 8590;
				
					case 279:
						return 8597;
				
					case 280:
						return 8604;
				
					case 281:
						return 8988;
				
					case 282:
						return 8995;
				
					case 283:
						return 9002;
				
					case 284:
						return 9009;
				
					case 285:
						return 9016;
				
					case 286:
						return 9023;
				
					case 287:
						return 9030;
				
					case 288:
						return 9037;
				
					case 289:
						return 9044;
				
					case 290:
						return 9051;
				
					case 291:
						return 9058;
				
					case 292:
						return 9064;
				
					case 293:
						return 9070;
				
					case 294:
						return 9076;
				
					case 295:
						return 9083;
				
					case 296:
						return 9090;
				
					case 297:
						return 9097;
				
					case 298:
						return 9104;
				
					case 299:
						return 9111;
				
					case 300:
						return 9118;
				
					case 301:
						return 9125;
				
					case 302:
						return 9132;
				
					case 303:
						return 9139;
				
					case 304:
						return 9146;
				
					case 305:
						return 9152;
				
					case 306:
						return 9158;
				
					case 307:
						return 9639;
				
					case 308:
						return 9646;
				
					case 309:
						return 9653;
				
					case 310:
						return 9660;
				
					case 311:
						return 9667;
				
					case 312:
						return 9674;
				
					case 313:
						return 9681;
				
					case 314:
						return 9688;
				
					case 315:
						return 9695;
				
					case 316:
						return 9702;
				
					case 317:
						return 9924;
				
					case 318:
						return 9931;
				
					case 319:
						return 9938;
				
					case 320:
						return 9945;
				
					case 321:
						return 9952;
				
					case 322:
						return 9959;
				
					case 323:
						return 9966;
				
					case 324:
						return 9973;
				
					case 325:
						return 9980;
				
					case 326:
						return 9987;
				
					case 327:
						return 9994;
				
					case 328:
						return 10001;
				
					case 329:
						return 10008;
				
					case 330:
						return 10015;
				
					case 331:
						return 10022;
				
					case 332:
						return 10029;
				
					case 333:
						return 10036;
				
					case 334:
						return 10043;
				
					case 335:
						return 10050;
				
					case 336:
						return 10057;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10450;
				
					case 338:
						return 10457;
				
					case 339:
						return 10464;
				
					case 340:
						return 10471;
				
					case 341:
						return 10478;
				
					case 342:
						return 10485;
				
					case 343:
						return 10492;
				
					case 344:
						return 10499;
				
					case 345:
						return 10506;
				
					case 346:
						return 10513;
				
					case 347:
						return 10520;
				
					case 348:
						return 10526;
				
					case 349:
						return 10532;
				
					case 350:
						return 10538;
				
					case 351:
						return 10545;
				
					case 352:
						return 10552;
				
					case 353:
						return 10559;
				
					case 354:
						return 10566;
				
					case 355:
						return 10573;
				
					case 356:
						return 10580;
				
					case 357:
						return 10587;
				
					case 358:
						return 10594;
				
					case 359:
						return 10601;
				
					case 360:
						return 10608;
				
					case 361:
						return 10614;
				
					case 362:
						return 10620;
				
					default:
						break;
				}
				break;
		
			case 4:
				switch (iParam1)
				{
					case 0:
						return 1633;
				
					case 1:
						return 1640;
				
					case 2:
						return 1647;
				
					case 3:
						return 1654;
				
					case 4:
						return 1661;
				
					case 5:
						return 1668;
				
					case 6:
						return 1675;
				
					case 7:
						return 1682;
				
					case 8:
						return 1689;
				
					case 9:
						return 1696;
				
					case 10:
						return 1703;
				
					case 11:
						return 1709;
				
					case 12:
						return 1715;
				
					case 13:
						return 1721;
				
					case 14:
						return 1800;
				
					case 15:
						return 1807;
				
					case 16:
						return 1814;
				
					case 17:
						return 1821;
				
					case 18:
						return 1828;
				
					case 19:
						return 1835;
				
					case 20:
						return 1842;
				
					case 21:
						return 1849;
				
					case 22:
						return 1856;
				
					case 23:
						return 1863;
				
					case 24:
						return 1869;
				
					case 25:
						return 1875;
				
					case 26:
						return 2170;
				
					case 27:
						return 2177;
				
					case 28:
						return 2184;
				
					case 29:
						return 2191;
				
					case 30:
						return 2198;
				
					case 31:
						return 2205;
				
					case 32:
						return 2212;
				
					case 33:
						return 2219;
				
					case 34:
						return 2226;
				
					case 35:
						return 2233;
				
					case 36:
						return 2240;
				
					case 37:
						return 2246;
				
					case 38:
						return 2252;
				
					case 39:
						return 2834;
				
					case 40:
						return 2841;
				
					case 41:
						return 2848;
				
					case 42:
						return 2855;
				
					case 43:
						return 2862;
				
					case 44:
						return 2869;
				
					case 45:
						return 2876;
				
					case 46:
						return 2883;
				
					case 47:
						return 2890;
				
					case 48:
						return 2897;
				
					case 49:
						return 2904;
				
					case 50:
						return 2910;
				
					case 51:
						return 2916;
				
					case 52:
						return 2958;
				
					case 53:
						return 2965;
				
					case 54:
						return 2972;
				
					case 55:
						return 2979;
				
					case 56:
						return 2986;
				
					case 57:
						return 2993;
				
					case 58:
						return 3000;
				
					case 59:
						return 3007;
				
					case 60:
						return 3014;
				
					case 61:
						return 3021;
				
					case 62:
						return 3028;
				
					case 63:
						return 3034;
				
					case 64:
						return 3040;
				
					case 65:
						return 3241;
				
					case 66:
						return 3249;
				
					case 67:
						return 3257;
				
					case 68:
						return 3265;
				
					case 69:
						return 3273;
				
					case 70:
						return 3281;
				
					case 71:
						return 3289;
				
					case 72:
						return 3297;
				
					case 73:
						return 3305;
				
					case 74:
						return 3313;
				
					case 75:
						return 3321;
				
					case 76:
						return 3329;
				
					case 77:
						return 3337;
				
					case 78:
						return 3345;
				
					case 79:
						return 3353;
				
					case 80:
						return 3361;
				
					case 81:
						return 3369;
				
					case 82:
						return 3377;
				
					case 83:
						return 3385;
				
					case 84:
						return 3393;
				
					case 85:
						return 3401;
				
					case 86:
						return 3408;
				
					case 87:
						return 3415;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4037;
				
					case 89:
						return 4045;
				
					case 90:
						return 4053;
				
					case 91:
						return 4061;
				
					case 92:
						return 4069;
				
					case 93:
						return 4077;
				
					case 94:
						return 4085;
				
					case 95:
						return 4093;
				
					case 96:
						return 4101;
				
					case 97:
						return 4109;
				
					case 98:
						return 4117;
				
					case 99:
						return 4125;
				
					case 100:
						return 4133;
				
					case 101:
						return 4141;
				
					case 102:
						return 4149;
				
					case 103:
						return 4157;
				
					case 104:
						return 4165;
				
					case 105:
						return 4173;
				
					case 106:
						return 4181;
				
					case 107:
						return 4189;
				
					case 108:
						return 4197;
				
					case 109:
						return 4205;
				
					case 110:
						return 4213;
				
					case 111:
						return 4221;
				
					case 112:
						return 4229;
				
					case 113:
						return 4237;
				
					case 114:
						return 4245;
				
					case 115:
						return 4253;
				
					case 116:
						return 4261;
				
					case 117:
						return 4269;
				
					case 118:
						return 4277;
				
					case 119:
						return 4285;
				
					case 120:
						return 4293;
				
					case 121:
						return 4301;
				
					case 122:
						return 4309;
				
					case 123:
						return 4317;
				
					case 124:
						return 4325;
				
					case 125:
						return 4333;
				
					case 126:
						return 4341;
				
					case 127:
						return 4349;
				
					case 128:
						return 4357;
				
					case 129:
						return 4365;
				
					case 130:
						return 4373;
				
					case 131:
						return 4381;
				
					case 132:
						return 4389;
				
					case 133:
						return 4397;
				
					case 134:
						return 4405;
				
					case 135:
						return 4413;
				
					case 136:
						return 4421;
				
					case 137:
						return 4429;
				
					case 138:
						return 4437;
				
					case 139:
						return 4445;
				
					case 140:
						return 4453;
				
					case 141:
						return 4461;
				
					case 142:
						return 4469;
				
					case 143:
						return 4477;
				
					case 144:
						return 4485;
				
					case 145:
						return 4493;
				
					case 146:
						return 4501;
				
					case 147:
						return 4509;
				
					case 148:
						return 4517;
				
					case 149:
						return 4525;
				
					case 150:
						return 4533;
				
					case 151:
						return 4541;
				
					case 152:
						return 4549;
				
					case 153:
						return 4557;
				
					case 154:
						return 4565;
				
					case 155:
						return 4573;
				
					case 156:
						return 4581;
				
					case 157:
						return 4589;
				
					case 158:
						return 5482;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5931;
				
					case 160:
						return 5938;
				
					case 161:
						return 5945;
				
					case 162:
						return 5952;
				
					case 163:
						return 5959;
				
					case 164:
						return 5966;
				
					case 165:
						return 5973;
				
					case 166:
						return 5980;
				
					case 167:
						return 5987;
				
					case 168:
						return 5994;
				
					case 169:
						return 6001;
				
					case 170:
						return 6008;
				
					case 171:
						return 6015;
				
					case 172:
						return 6022;
				
					case 173:
						return 6029;
				
					case 174:
						return 6036;
				
					case 175:
						return 6043;
				
					case 176:
						return 6050;
				
					case 177:
						return 6057;
				
					case 178:
						return 6064;
				
					case 179:
						return 6071;
				
					case 180:
						return 6078;
				
					case 181:
						return 6085;
				
					case 182:
						return 6092;
				
					case 183:
						return 6099;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6176;
				
					case 185:
						return 6183;
				
					case 186:
						return 6190;
				
					case 187:
						return 6197;
				
					case 188:
						return 6204;
				
					case 189:
						return 6211;
				
					case 190:
						return 6218;
				
					case 191:
						return 6225;
				
					case 192:
						return 6232;
				
					case 193:
						return 6239;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6573;
				
					case 195:
						return 6580;
				
					case 196:
						return 6587;
				
					case 197:
						return 6594;
				
					case 198:
						return 6601;
				
					case 199:
						return 6608;
				
					case 200:
						return 6615;
				
					case 201:
						return 6622;
				
					case 202:
						return 6629;
				
					case 203:
						return 6636;
				
					case 204:
						return 6643;
				
					case 205:
						return 6650;
				
					case 206:
						return 6657;
				
					case 207:
						return 6664;
				
					case 208:
						return 6671;
				
					case 209:
						return 6678;
				
					case 210:
						return 6685;
				
					case 211:
						return 6692;
				
					case 212:
						return 6699;
				
					case 213:
						return 6706;
				
					case 214:
						return 6713;
				
					case 215:
						return 6720;
				
					case 216:
						return 6727;
				
					case 217:
						return 6734;
				
					case 218:
						return 6741;
				
					case 219:
						return 6748;
				
					case 220:
						return 6755;
				
					case 221:
						return 6762;
				
					case 222:
						return 6769;
				
					case 223:
						return 6776;
				
					case 224:
						return 6783;
				
					case 225:
						return 6790;
				
					case 226:
						return 6797;
				
					case 227:
						return 6804;
				
					case 228:
						return 6811;
				
					case 229:
						return 6818;
				
					case 230:
						return 6825;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7295;
				
					case 232:
						return 7302;
				
					case 233:
						return 7309;
				
					case 234:
						return 7316;
				
					case 235:
						return 7323;
				
					case 236:
						return 7330;
				
					case 237:
						return 7337;
				
					case 238:
						return 7344;
				
					case 239:
						return 7351;
				
					case 240:
						return 7358;
				
					case 241:
						return 7365;
				
					case 242:
						return 7372;
				
					case 243:
						return joaat("PRI2_HIJLF");
				
					case 244:
						return 7386;
				
					case 245:
						return 7393;
				
					case 246:
						return 7400;
				
					case 247:
						return 7407;
				
					case 248:
						return 7414;
				
					case 249:
						return 7421;
				
					case 250:
						return 7428;
				
					case 251:
						return 7435;
				
					case 252:
						return 7442;
				
					case 253:
						return 7449;
				
					case 254:
						return 7456;
				
					case 255:
						return 7463;
				
					case 256:
						return 7470;
				
					case 257:
						return 7477;
				
					case 258:
						return 7484;
				
					case 259:
						return 7491;
				
					case 260:
						return 7498;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8018;
				
					case 262:
						return 8025;
				
					case 263:
						return 8032;
				
					case 264:
						return 8039;
				
					case 265:
						return 8046;
				
					case 266:
						return 8053;
				
					case 267:
						return 8060;
				
					case 268:
						return 8067;
				
					case 269:
						return 8074;
				
					case 270:
						return 8081;
				
					case 271:
						return 8542;
				
					case 272:
						return 8549;
				
					case 273:
						return 8556;
				
					case 274:
						return 8563;
				
					case 275:
						return 8570;
				
					case 276:
						return 8577;
				
					case 277:
						return 8584;
				
					case 278:
						return 8591;
				
					case 279:
						return 8598;
				
					case 280:
						return 8605;
				
					case 281:
						return 8989;
				
					case 282:
						return 8996;
				
					case 283:
						return 9003;
				
					case 284:
						return 9010;
				
					case 285:
						return 9017;
				
					case 286:
						return 9024;
				
					case 287:
						return 9031;
				
					case 288:
						return 9038;
				
					case 289:
						return 9045;
				
					case 290:
						return 9052;
				
					case 291:
						return 9059;
				
					case 292:
						return 9065;
				
					case 293:
						return 9071;
				
					case 294:
						return 9077;
				
					case 295:
						return 9084;
				
					case 296:
						return 9091;
				
					case 297:
						return 9098;
				
					case 298:
						return 9105;
				
					case 299:
						return 9112;
				
					case 300:
						return 9119;
				
					case 301:
						return 9126;
				
					case 302:
						return 9133;
				
					case 303:
						return 9140;
				
					case 304:
						return 9147;
				
					case 305:
						return 9153;
				
					case 306:
						return 9159;
				
					case 307:
						return 9640;
				
					case 308:
						return 9647;
				
					case 309:
						return 9654;
				
					case 310:
						return 9661;
				
					case 311:
						return 9668;
				
					case 312:
						return 9675;
				
					case 313:
						return 9682;
				
					case 314:
						return 9689;
				
					case 315:
						return 9696;
				
					case 316:
						return 9703;
				
					case 317:
						return 9925;
				
					case 318:
						return 9932;
				
					case 319:
						return 9939;
				
					case 320:
						return 9946;
				
					case 321:
						return 9953;
				
					case 322:
						return 9960;
				
					case 323:
						return 9967;
				
					case 324:
						return 9974;
				
					case 325:
						return 9981;
				
					case 326:
						return 9988;
				
					case 327:
						return 9995;
				
					case 328:
						return 10002;
				
					case 329:
						return 10009;
				
					case 330:
						return 10016;
				
					case 331:
						return 10023;
				
					case 332:
						return 10030;
				
					case 333:
						return 10037;
				
					case 334:
						return 10044;
				
					case 335:
						return 10051;
				
					case 336:
						return 10058;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10451;
				
					case 338:
						return 10458;
				
					case 339:
						return 10465;
				
					case 340:
						return 10472;
				
					case 341:
						return 10479;
				
					case 342:
						return 10486;
				
					case 343:
						return 10493;
				
					case 344:
						return 10500;
				
					case 345:
						return 10507;
				
					case 346:
						return 10514;
				
					case 347:
						return 10521;
				
					case 348:
						return 10527;
				
					case 349:
						return 10533;
				
					case 350:
						return 10539;
				
					case 351:
						return 10546;
				
					case 352:
						return 10553;
				
					case 353:
						return 10560;
				
					case 354:
						return 10567;
				
					case 355:
						return 10574;
				
					case 356:
						return 10581;
				
					case 357:
						return 10588;
				
					case 358:
						return 10595;
				
					case 359:
						return 10602;
				
					case 360:
						return 10609;
				
					case 361:
						return 10615;
				
					case 362:
						return 10621;
				
					default:
						break;
				}
				break;
		
			case 5:
				switch (iParam1)
				{
					case 0:
						return 1634;
				
					case 1:
						return 1641;
				
					case 2:
						return 1648;
				
					case 3:
						return 1655;
				
					case 4:
						return 1662;
				
					case 5:
						return 1669;
				
					case 6:
						return 1676;
				
					case 7:
						return 1683;
				
					case 8:
						return 1690;
				
					case 9:
						return 1697;
				
					case 10:
						return 1704;
				
					case 11:
						return 1710;
				
					case 12:
						return 1716;
				
					case 13:
						return 1722;
				
					case 14:
						return 1801;
				
					case 15:
						return 1808;
				
					case 16:
						return 1815;
				
					case 17:
						return 1822;
				
					case 18:
						return 1829;
				
					case 19:
						return 1836;
				
					case 20:
						return 1843;
				
					case 21:
						return 1850;
				
					case 22:
						return 1857;
				
					case 23:
						return 1864;
				
					case 24:
						return 1870;
				
					case 25:
						return 1876;
				
					case 26:
						return 2171;
				
					case 27:
						return 2178;
				
					case 28:
						return 2185;
				
					case 29:
						return 2192;
				
					case 30:
						return 2199;
				
					case 31:
						return 2206;
				
					case 32:
						return 2213;
				
					case 33:
						return 2220;
				
					case 34:
						return 2227;
				
					case 35:
						return 2234;
				
					case 36:
						return 2241;
				
					case 37:
						return 2247;
				
					case 38:
						return 2253;
				
					case 39:
						return 2835;
				
					case 40:
						return 2842;
				
					case 41:
						return 2849;
				
					case 42:
						return 2856;
				
					case 43:
						return 2863;
				
					case 44:
						return 2870;
				
					case 45:
						return 2877;
				
					case 46:
						return 2884;
				
					case 47:
						return 2891;
				
					case 48:
						return 2898;
				
					case 49:
						return 2905;
				
					case 50:
						return 2911;
				
					case 51:
						return 2917;
				
					case 52:
						return 2959;
				
					case 53:
						return 2966;
				
					case 54:
						return 2973;
				
					case 55:
						return 2980;
				
					case 56:
						return 2987;
				
					case 57:
						return 2994;
				
					case 58:
						return 3001;
				
					case 59:
						return 3008;
				
					case 60:
						return 3015;
				
					case 61:
						return 3022;
				
					case 62:
						return 3029;
				
					case 63:
						return 3035;
				
					case 64:
						return 3041;
				
					case 65:
						return 3242;
				
					case 66:
						return 3250;
				
					case 67:
						return 3258;
				
					case 68:
						return 3266;
				
					case 69:
						return 3274;
				
					case 70:
						return 3282;
				
					case 71:
						return 3290;
				
					case 72:
						return 3298;
				
					case 73:
						return 3306;
				
					case 74:
						return 3314;
				
					case 75:
						return 3322;
				
					case 76:
						return 3330;
				
					case 77:
						return 3338;
				
					case 78:
						return 3346;
				
					case 79:
						return 3354;
				
					case 80:
						return 3362;
				
					case 81:
						return 3370;
				
					case 82:
						return 3378;
				
					case 83:
						return 3386;
				
					case 84:
						return 3394;
				
					case 85:
						return 3402;
				
					case 86:
						return 3409;
				
					case 87:
						return 3416;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4038;
				
					case 89:
						return 4046;
				
					case 90:
						return 4054;
				
					case 91:
						return 4062;
				
					case 92:
						return 4070;
				
					case 93:
						return 4078;
				
					case 94:
						return 4086;
				
					case 95:
						return 4094;
				
					case 96:
						return 4102;
				
					case 97:
						return 4110;
				
					case 98:
						return 4118;
				
					case 99:
						return 4126;
				
					case 100:
						return 4134;
				
					case 101:
						return 4142;
				
					case 102:
						return 4150;
				
					case 103:
						return 4158;
				
					case 104:
						return 4166;
				
					case 105:
						return 4174;
				
					case 106:
						return 4182;
				
					case 107:
						return 4190;
				
					case 108:
						return 4198;
				
					case 109:
						return 4206;
				
					case 110:
						return 4214;
				
					case 111:
						return 4222;
				
					case 112:
						return 4230;
				
					case 113:
						return 4238;
				
					case 114:
						return 4246;
				
					case 115:
						return 4254;
				
					case 116:
						return 4262;
				
					case 117:
						return 4270;
				
					case 118:
						return 4278;
				
					case 119:
						return 4286;
				
					case 120:
						return 4294;
				
					case 121:
						return 4302;
				
					case 122:
						return 4310;
				
					case 123:
						return 4318;
				
					case 124:
						return 4326;
				
					case 125:
						return 4334;
				
					case 126:
						return 4342;
				
					case 127:
						return 4350;
				
					case 128:
						return 4358;
				
					case 129:
						return 4366;
				
					case 130:
						return 4374;
				
					case 131:
						return 4382;
				
					case 132:
						return 4390;
				
					case 133:
						return 4398;
				
					case 134:
						return 4406;
				
					case 135:
						return 4414;
				
					case 136:
						return 4422;
				
					case 137:
						return 4430;
				
					case 138:
						return 4438;
				
					case 139:
						return 4446;
				
					case 140:
						return 4454;
				
					case 141:
						return 4462;
				
					case 142:
						return 4470;
				
					case 143:
						return 4478;
				
					case 144:
						return 4486;
				
					case 145:
						return 4494;
				
					case 146:
						return 4502;
				
					case 147:
						return 4510;
				
					case 148:
						return 4518;
				
					case 149:
						return 4526;
				
					case 150:
						return 4534;
				
					case 151:
						return 4542;
				
					case 152:
						return 4550;
				
					case 153:
						return 4558;
				
					case 154:
						return 4566;
				
					case 155:
						return 4574;
				
					case 156:
						return 4582;
				
					case 157:
						return 4590;
				
					case 158:
						return 5483;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5932;
				
					case 160:
						return 5939;
				
					case 161:
						return 5946;
				
					case 162:
						return 5953;
				
					case 163:
						return 5960;
				
					case 164:
						return 5967;
				
					case 165:
						return 5974;
				
					case 166:
						return 5981;
				
					case 167:
						return 5988;
				
					case 168:
						return 5995;
				
					case 169:
						return 6002;
				
					case 170:
						return 6009;
				
					case 171:
						return 6016;
				
					case 172:
						return 6023;
				
					case 173:
						return 6030;
				
					case 174:
						return 6037;
				
					case 175:
						return 6044;
				
					case 176:
						return 6051;
				
					case 177:
						return 6058;
				
					case 178:
						return 6065;
				
					case 179:
						return 6072;
				
					case 180:
						return 6079;
				
					case 181:
						return 6086;
				
					case 182:
						return 6093;
				
					case 183:
						return 6100;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6177;
				
					case 185:
						return 6184;
				
					case 186:
						return 6191;
				
					case 187:
						return 6198;
				
					case 188:
						return 6205;
				
					case 189:
						return 6212;
				
					case 190:
						return 6219;
				
					case 191:
						return 6226;
				
					case 192:
						return 6233;
				
					case 193:
						return 6240;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6574;
				
					case 195:
						return 6581;
				
					case 196:
						return 6588;
				
					case 197:
						return 6595;
				
					case 198:
						return 6602;
				
					case 199:
						return 6609;
				
					case 200:
						return 6616;
				
					case 201:
						return 6623;
				
					case 202:
						return 6630;
				
					case 203:
						return 6637;
				
					case 204:
						return 6644;
				
					case 205:
						return 6651;
				
					case 206:
						return 6658;
				
					case 207:
						return 6665;
				
					case 208:
						return 6672;
				
					case 209:
						return 6679;
				
					case 210:
						return 6686;
				
					case 211:
						return 6693;
				
					case 212:
						return 6700;
				
					case 213:
						return 6707;
				
					case 214:
						return 6714;
				
					case 215:
						return 6721;
				
					case 216:
						return 6728;
				
					case 217:
						return 6735;
				
					case 218:
						return 6742;
				
					case 219:
						return 6749;
				
					case 220:
						return 6756;
				
					case 221:
						return 6763;
				
					case 222:
						return 6770;
				
					case 223:
						return 6777;
				
					case 224:
						return 6784;
				
					case 225:
						return 6791;
				
					case 226:
						return 6798;
				
					case 227:
						return 6805;
				
					case 228:
						return 6812;
				
					case 229:
						return 6819;
				
					case 230:
						return 6826;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7296;
				
					case 232:
						return 7303;
				
					case 233:
						return 7310;
				
					case 234:
						return 7317;
				
					case 235:
						return 7324;
				
					case 236:
						return 7331;
				
					case 237:
						return 7338;
				
					case 238:
						return 7345;
				
					case 239:
						return 7352;
				
					case 240:
						return 7359;
				
					case 241:
						return 7366;
				
					case 242:
						return 7373;
				
					case 243:
						return 7380;
				
					case 244:
						return 7387;
				
					case 245:
						return 7394;
				
					case 246:
						return 7401;
				
					case 247:
						return 7408;
				
					case 248:
						return 7415;
				
					case 249:
						return 7422;
				
					case 250:
						return 7429;
				
					case 251:
						return 7436;
				
					case 252:
						return 7443;
				
					case 253:
						return 7450;
				
					case 254:
						return 7457;
				
					case 255:
						return 7464;
				
					case 256:
						return 7471;
				
					case 257:
						return 7478;
				
					case 258:
						return 7485;
				
					case 259:
						return 7492;
				
					case 260:
						return 7499;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8019;
				
					case 262:
						return 8026;
				
					case 263:
						return 8033;
				
					case 264:
						return 8040;
				
					case 265:
						return 8047;
				
					case 266:
						return 8054;
				
					case 267:
						return 8061;
				
					case 268:
						return 8068;
				
					case 269:
						return 8075;
				
					case 270:
						return 8082;
				
					case 271:
						return 8543;
				
					case 272:
						return 8550;
				
					case 273:
						return 8557;
				
					case 274:
						return 8564;
				
					case 275:
						return 8571;
				
					case 276:
						return 8578;
				
					case 277:
						return 8585;
				
					case 278:
						return 8592;
				
					case 279:
						return 8599;
				
					case 280:
						return 8606;
				
					case 281:
						return 8990;
				
					case 282:
						return 8997;
				
					case 283:
						return 9004;
				
					case 284:
						return 9011;
				
					case 285:
						return 9018;
				
					case 286:
						return 9025;
				
					case 287:
						return 9032;
				
					case 288:
						return 9039;
				
					case 289:
						return 9046;
				
					case 290:
						return 9053;
				
					case 291:
						return 9060;
				
					case 292:
						return 9066;
				
					case 293:
						return 9072;
				
					case 294:
						return 9078;
				
					case 295:
						return 9085;
				
					case 296:
						return 9092;
				
					case 297:
						return 9099;
				
					case 298:
						return 9106;
				
					case 299:
						return 9113;
				
					case 300:
						return 9120;
				
					case 301:
						return 9127;
				
					case 302:
						return 9134;
				
					case 303:
						return 9141;
				
					case 304:
						return 9148;
				
					case 305:
						return 9154;
				
					case 306:
						return 9160;
				
					case 307:
						return 9641;
				
					case 308:
						return 9648;
				
					case 309:
						return 9655;
				
					case 310:
						return 9662;
				
					case 311:
						return 9669;
				
					case 312:
						return 9676;
				
					case 313:
						return 9683;
				
					case 314:
						return 9690;
				
					case 315:
						return 9697;
				
					case 316:
						return 9704;
				
					case 317:
						return 9926;
				
					case 318:
						return 9933;
				
					case 319:
						return 9940;
				
					case 320:
						return 9947;
				
					case 321:
						return 9954;
				
					case 322:
						return 9961;
				
					case 323:
						return 9968;
				
					case 324:
						return 9975;
				
					case 325:
						return 9982;
				
					case 326:
						return 9989;
				
					case 327:
						return 9996;
				
					case 328:
						return 10003;
				
					case 329:
						return 10010;
				
					case 330:
						return 10017;
				
					case 331:
						return 10024;
				
					case 332:
						return 10031;
				
					case 333:
						return 10038;
				
					case 334:
						return 10045;
				
					case 335:
						return 10052;
				
					case 336:
						return 10059;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10452;
				
					case 338:
						return 10459;
				
					case 339:
						return 10466;
				
					case 340:
						return 10473;
				
					case 341:
						return 10480;
				
					case 342:
						return 10487;
				
					case 343:
						return 10494;
				
					case 344:
						return 10501;
				
					case 345:
						return 10508;
				
					case 346:
						return 10515;
				
					case 347:
						return 10522;
				
					case 348:
						return 10528;
				
					case 349:
						return 10534;
				
					case 350:
						return 10540;
				
					case 351:
						return 10547;
				
					case 352:
						return 10554;
				
					case 353:
						return 10561;
				
					case 354:
						return 10568;
				
					case 355:
						return 10575;
				
					case 356:
						return 10582;
				
					case 357:
						return 10589;
				
					case 358:
						return 10596;
				
					case 359:
						return 10603;
				
					case 360:
						return 10610;
				
					case 361:
						return 10616;
				
					case 362:
						return 10622;
				
					default:
						break;
				}
				break;
		
			case 6:
				switch (iParam1)
				{
					case 0:
						return 1636;
				
					case 1:
						return 1643;
				
					case 2:
						return 1650;
				
					case 3:
						return 1657;
				
					case 4:
						return 1664;
				
					case 5:
						return 1671;
				
					case 6:
						return 1678;
				
					case 7:
						return 1685;
				
					case 8:
						return 1692;
				
					case 9:
						return 1699;
				
					case 13:
						return 1724;
				
					case 14:
						return 1803;
				
					case 15:
						return 1810;
				
					case 16:
						return 1817;
				
					case 17:
						return 1824;
				
					case 18:
						return 1831;
				
					case 19:
						return 1838;
				
					case 20:
						return 1845;
				
					case 21:
						return 1852;
				
					case 22:
						return 1859;
				
					case 26:
						return 2173;
				
					case 27:
						return 2180;
				
					case 28:
						return 2187;
				
					case 29:
						return 2194;
				
					case 30:
						return 2201;
				
					case 31:
						return 2208;
				
					case 32:
						return 2215;
				
					case 33:
						return 2222;
				
					case 34:
						return 2229;
				
					case 35:
						return 2236;
				
					case 39:
						return 2837;
				
					case 40:
						return 2844;
				
					case 41:
						return 2851;
				
					case 42:
						return 2858;
				
					case 43:
						return 2865;
				
					case 44:
						return 2872;
				
					case 45:
						return 2879;
				
					case 46:
						return 2886;
				
					case 47:
						return 2893;
				
					case 48:
						return 2900;
				
					case 52:
						return 2961;
				
					case 53:
						return 2968;
				
					case 54:
						return 2975;
				
					case 55:
						return 2982;
				
					case 56:
						return 2989;
				
					case 57:
						return 2996;
				
					case 58:
						return 3003;
				
					case 59:
						return 3010;
				
					case 60:
						return 3017;
				
					case 61:
						return 3024;
				
					case 65:
						return 3245;
				
					case 66:
						return 3253;
				
					case 67:
						return 3261;
				
					case 68:
						return 3269;
				
					case 69:
						return 3277;
				
					case 70:
						return 3285;
				
					case 71:
						return 3293;
				
					case 72:
						return 3301;
				
					case 73:
						return 3309;
				
					case 74:
						return 3317;
				
					case 75:
						return 3325;
				
					case 76:
						return 3333;
				
					case 77:
						return 3341;
				
					case 78:
						return 3349;
				
					case 79:
						return 3357;
				
					case 80:
						return 3365;
				
					case 81:
						return 3373;
				
					case 82:
						return 3381;
				
					case 83:
						return 3389;
				
					case 84:
						return 3397;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4041;
				
					case 89:
						return 4049;
				
					case 90:
						return 4057;
				
					case 91:
						return 4065;
				
					case 92:
						return 4073;
				
					case 93:
						return 4081;
				
					case 94:
						return 4089;
				
					case 95:
						return 4097;
				
					case 96:
						return 4105;
				
					case 97:
						return 4113;
				
					case 98:
						return 4121;
				
					case 99:
						return 4129;
				
					case 100:
						return 4137;
				
					case 101:
						return 4145;
				
					case 102:
						return 4153;
				
					case 103:
						return 4161;
				
					case 104:
						return 4169;
				
					case 105:
						return 4177;
				
					case 106:
						return 4185;
				
					case 107:
						return 4193;
				
					case 108:
						return 4201;
				
					case 109:
						return 4209;
				
					case 110:
						return 4217;
				
					case 111:
						return 4225;
				
					case 112:
						return 4233;
				
					case 113:
						return 4241;
				
					case 114:
						return 4249;
				
					case 115:
						return 4257;
				
					case 116:
						return 4265;
				
					case 117:
						return 4273;
				
					case 118:
						return 4281;
				
					case 119:
						return 4289;
				
					case 120:
						return 4297;
				
					case 121:
						return 4305;
				
					case 122:
						return 4313;
				
					case 123:
						return 4321;
				
					case 124:
						return 4329;
				
					case 125:
						return 4337;
				
					case 126:
						return 4345;
				
					case 127:
						return 4353;
				
					case 128:
						return 4361;
				
					case 129:
						return 4369;
				
					case 130:
						return 4377;
				
					case 131:
						return 4385;
				
					case 132:
						return 4393;
				
					case 133:
						return 4401;
				
					case 134:
						return 4409;
				
					case 135:
						return 4417;
				
					case 136:
						return 4425;
				
					case 137:
						return 4433;
				
					case 138:
						return 4441;
				
					case 139:
						return 4449;
				
					case 140:
						return 4457;
				
					case 141:
						return 4465;
				
					case 142:
						return 4473;
				
					case 143:
						return 4481;
				
					case 144:
						return 4489;
				
					case 145:
						return 4497;
				
					case 146:
						return 4505;
				
					case 147:
						return 4513;
				
					case 148:
						return 4521;
				
					case 149:
						return 4529;
				
					case 150:
						return 4537;
				
					case 151:
						return 4545;
				
					case 152:
						return 4553;
				
					case 153:
						return 4561;
				
					case 154:
						return 4569;
				
					case 155:
						return 4577;
				
					case 156:
						return 4585;
				
					case 157:
						return 4593;
				
					case 158:
						return 5486;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5934;
				
					case 160:
						return 5941;
				
					case 161:
						return 5948;
				
					case 162:
						return 5955;
				
					case 163:
						return 5962;
				
					case 164:
						return 5969;
				
					case 165:
						return 5976;
				
					case 166:
						return 5983;
				
					case 167:
						return 5990;
				
					case 168:
						return 5997;
				
					case 169:
						return 6004;
				
					case 170:
						return 6011;
				
					case 171:
						return 6018;
				
					case 172:
						return 6025;
				
					case 173:
						return 6032;
				
					case 174:
						return 6039;
				
					case 175:
						return 6046;
				
					case 176:
						return 6053;
				
					case 177:
						return 6060;
				
					case 178:
						return 6067;
				
					case 179:
						return 6074;
				
					case 180:
						return 6081;
				
					case 181:
						return 6088;
				
					case 182:
						return 6095;
				
					case 183:
						return 6102;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6179;
				
					case 185:
						return 6186;
				
					case 186:
						return 6193;
				
					case 187:
						return 6200;
				
					case 188:
						return 6207;
				
					case 189:
						return 6214;
				
					case 190:
						return 6221;
				
					case 191:
						return 6228;
				
					case 192:
						return 6235;
				
					case 193:
						return 6242;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6576;
				
					case 195:
						return 6583;
				
					case 196:
						return 6590;
				
					case 197:
						return 6597;
				
					case 198:
						return 6604;
				
					case 199:
						return 6611;
				
					case 200:
						return 6618;
				
					case 201:
						return 6625;
				
					case 202:
						return 6632;
				
					case 203:
						return 6639;
				
					case 204:
						return 6646;
				
					case 205:
						return 6653;
				
					case 206:
						return 6660;
				
					case 207:
						return 6667;
				
					case 208:
						return 6674;
				
					case 209:
						return 6681;
				
					case 210:
						return 6688;
				
					case 211:
						return 6695;
				
					case 212:
						return 6702;
				
					case 213:
						return 6709;
				
					case 214:
						return 6716;
				
					case 215:
						return 6723;
				
					case 216:
						return 6730;
				
					case 217:
						return 6737;
				
					case 218:
						return 6744;
				
					case 219:
						return 6751;
				
					case 220:
						return 6758;
				
					case 221:
						return 6765;
				
					case 222:
						return 6772;
				
					case 223:
						return 6779;
				
					case 224:
						return 6786;
				
					case 225:
						return 6793;
				
					case 226:
						return 6800;
				
					case 227:
						return 6807;
				
					case 228:
						return 6814;
				
					case 229:
						return 6821;
				
					case 230:
						return 6828;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7298;
				
					case 232:
						return 7305;
				
					case 233:
						return 7312;
				
					case 234:
						return 7319;
				
					case 235:
						return 7326;
				
					case 236:
						return 7333;
				
					case 237:
						return 7340;
				
					case 238:
						return 7347;
				
					case 239:
						return 7354;
				
					case 240:
						return 7361;
				
					case 241:
						return 7368;
				
					case 242:
						return 7375;
				
					case 243:
						return 7382;
				
					case 244:
						return 7389;
				
					case 245:
						return 7396;
				
					case 246:
						return 7403;
				
					case 247:
						return 7410;
				
					case 248:
						return 7417;
				
					case 249:
						return 7424;
				
					case 250:
						return 7431;
				
					case 251:
						return 7438;
				
					case 252:
						return 7445;
				
					case 253:
						return 7452;
				
					case 254:
						return 7459;
				
					case 255:
						return 7466;
				
					case 256:
						return 7473;
				
					case 257:
						return 7480;
				
					case 258:
						return 7487;
				
					case 259:
						return 7494;
				
					case 260:
						return 7501;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8021;
				
					case 262:
						return 8028;
				
					case 263:
						return 8035;
				
					case 264:
						return 8042;
				
					case 265:
						return 8049;
				
					case 266:
						return 8056;
				
					case 267:
						return 8063;
				
					case 268:
						return 8070;
				
					case 269:
						return 8077;
				
					case 270:
						return 8084;
				
					case 271:
						return 8545;
				
					case 272:
						return 8552;
				
					case 273:
						return 8559;
				
					case 274:
						return 8566;
				
					case 275:
						return 8573;
				
					case 276:
						return 8580;
				
					case 277:
						return 8587;
				
					case 278:
						return 8594;
				
					case 279:
						return 8601;
				
					case 280:
						return 8608;
				
					case 281:
						return 8992;
				
					case 282:
						return 8999;
				
					case 283:
						return 9006;
				
					case 284:
						return 9013;
				
					case 285:
						return 9020;
				
					case 286:
						return 9027;
				
					case 287:
						return 9034;
				
					case 288:
						return 9041;
				
					case 289:
						return 9048;
				
					case 290:
						return 9055;
				
					case 294:
						return 9080;
				
					case 295:
						return 9087;
				
					case 296:
						return 9094;
				
					case 297:
						return 9101;
				
					case 298:
						return 9108;
				
					case 299:
						return 9115;
				
					case 300:
						return 9122;
				
					case 301:
						return 9129;
				
					case 302:
						return 9136;
				
					case 303:
						return 9143;
				
					case 307:
						return 9643;
				
					case 308:
						return 9650;
				
					case 309:
						return 9657;
				
					case 310:
						return 9664;
				
					case 311:
						return 9671;
				
					case 312:
						return 9678;
				
					case 313:
						return 9685;
				
					case 314:
						return 9692;
				
					case 315:
						return 9699;
				
					case 316:
						return 9706;
				
					case 317:
						return 9928;
				
					case 318:
						return 9935;
				
					case 319:
						return 9942;
				
					case 320:
						return 9949;
				
					case 321:
						return 9956;
				
					case 322:
						return 9963;
				
					case 323:
						return 9970;
				
					case 324:
						return 9977;
				
					case 325:
						return 9984;
				
					case 326:
						return 9991;
				
					case 327:
						return 9998;
				
					case 328:
						return 10005;
				
					case 329:
						return 10012;
				
					case 330:
						return 10019;
				
					case 331:
						return 10026;
				
					case 332:
						return 10033;
				
					case 333:
						return 10040;
				
					case 334:
						return 10047;
				
					case 335:
						return 10054;
				
					case 336:
						return 10061;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10454;
				
					case 338:
						return 10461;
				
					case 339:
						return 10468;
				
					case 340:
						return 10475;
				
					case 341:
						return 10482;
				
					case 342:
						return 10489;
				
					case 343:
						return 10496;
				
					case 344:
						return 10503;
				
					case 345:
						return 10510;
				
					case 346:
						return 10517;
				
					case 350:
						return 10542;
				
					case 351:
						return 10549;
				
					case 352:
						return 10556;
				
					case 353:
						return 10563;
				
					case 354:
						return 10570;
				
					case 355:
						return 10577;
				
					case 356:
						return 10584;
				
					case 357:
						return 10591;
				
					case 358:
						return 10598;
				
					case 359:
						return 10605;
				
					default:
						break;
				}
				break;
		
			case 7:
				switch (iParam1)
				{
					case 0:
						return 1635;
				
					case 1:
						return 1642;
				
					case 2:
						return 1649;
				
					case 3:
						return 1656;
				
					case 4:
						return 1663;
				
					case 5:
						return 1670;
				
					case 6:
						return 1677;
				
					case 7:
						return 1684;
				
					case 8:
						return 1691;
				
					case 9:
						return 1698;
				
					case 10:
						return 1705;
				
					case 11:
						return 1711;
				
					case 12:
						return 1717;
				
					case 13:
						return 1723;
				
					case 14:
						return 1802;
				
					case 15:
						return 1809;
				
					case 16:
						return 1816;
				
					case 17:
						return 1823;
				
					case 18:
						return 1830;
				
					case 19:
						return 1837;
				
					case 20:
						return 1844;
				
					case 21:
						return 1851;
				
					case 22:
						return 1858;
				
					case 23:
						return 1865;
				
					case 24:
						return 1871;
				
					case 25:
						return 1877;
				
					case 26:
						return 2172;
				
					case 27:
						return 2179;
				
					case 28:
						return 2186;
				
					case 29:
						return 2193;
				
					case 30:
						return 2200;
				
					case 31:
						return 2207;
				
					case 32:
						return 2214;
				
					case 33:
						return 2221;
				
					case 34:
						return 2228;
				
					case 35:
						return 2235;
				
					case 36:
						return 2242;
				
					case 37:
						return 2248;
				
					case 38:
						return 2254;
				
					case 39:
						return 2836;
				
					case 40:
						return 2843;
				
					case 41:
						return 2850;
				
					case 42:
						return 2857;
				
					case 43:
						return 2864;
				
					case 44:
						return 2871;
				
					case 45:
						return 2878;
				
					case 46:
						return 2885;
				
					case 47:
						return 2892;
				
					case 48:
						return 2899;
				
					case 49:
						return 2906;
				
					case 50:
						return 2912;
				
					case 51:
						return 2918;
				
					case 52:
						return 2960;
				
					case 53:
						return 2967;
				
					case 54:
						return 2974;
				
					case 55:
						return 2981;
				
					case 56:
						return 2988;
				
					case 57:
						return 2995;
				
					case 58:
						return 3002;
				
					case 59:
						return 3009;
				
					case 60:
						return 3016;
				
					case 61:
						return 3023;
				
					case 62:
						return 3030;
				
					case 63:
						return 3036;
				
					case 64:
						return 3042;
				
					case 65:
						return 3243;
				
					case 66:
						return 3251;
				
					case 67:
						return 3259;
				
					case 68:
						return 3267;
				
					case 69:
						return 3275;
				
					case 70:
						return 3283;
				
					case 71:
						return 3291;
				
					case 72:
						return 3299;
				
					case 73:
						return 3307;
				
					case 74:
						return 3315;
				
					case 75:
						return 3323;
				
					case 76:
						return 3331;
				
					case 77:
						return 3340;
				
					case 78:
						return 3348;
				
					case 79:
						return 3355;
				
					case 80:
						return 3363;
				
					case 81:
						return 3371;
				
					case 82:
						return 3379;
				
					case 83:
						return 3387;
				
					case 84:
						return 3395;
				
					case 85:
						return 3403;
				
					case 86:
						return joaat("TNFUD_GO2_2A");
				
					case 87:
						return 3417;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4039;
				
					case 89:
						return 4047;
				
					case 90:
						return 4055;
				
					case 91:
						return 4063;
				
					case 92:
						return 4071;
				
					case 93:
						return 4079;
				
					case 94:
						return 4087;
				
					case 95:
						return 4095;
				
					case 96:
						return 4103;
				
					case 97:
						return 4111;
				
					case 98:
						return 4119;
				
					case 99:
						return 4127;
				
					case 100:
						return 4136;
				
					case 101:
						return 4144;
				
					case 102:
						return 4151;
				
					case 103:
						return 4159;
				
					case 104:
						return 4167;
				
					case 105:
						return 4175;
				
					case 106:
						return 4183;
				
					case 107:
						return 4191;
				
					case 108:
						return 4199;
				
					case 109:
						return 4207;
				
					case 110:
						return 4215;
				
					case 111:
						return 4223;
				
					case 112:
						return 4231;
				
					case 113:
						return 4239;
				
					case 114:
						return 4247;
				
					case 115:
						return 4255;
				
					case 116:
						return 4263;
				
					case 117:
						return 4271;
				
					case 118:
						return 4279;
				
					case 119:
						return 4287;
				
					case 120:
						return 4296;
				
					case 121:
						return 4304;
				
					case 122:
						return 4311;
				
					case 123:
						return 4319;
				
					case 124:
						return 4327;
				
					case 125:
						return 4335;
				
					case 126:
						return 4343;
				
					case 127:
						return 4351;
				
					case 128:
						return 4359;
				
					case 129:
						return 4367;
				
					case 130:
						return 4375;
				
					case 131:
						return 4383;
				
					case 132:
						return 4391;
				
					case 133:
						return 4399;
				
					case 134:
						return 4407;
				
					case 135:
						return 4415;
				
					case 136:
						return 4423;
				
					case 137:
						return 4431;
				
					case 138:
						return 4439;
				
					case 139:
						return 4447;
				
					case 140:
						return 4456;
				
					case 141:
						return 4464;
				
					case 142:
						return 4471;
				
					case 143:
						return 4479;
				
					case 144:
						return 4487;
				
					case 145:
						return 4495;
				
					case 146:
						return 4503;
				
					case 147:
						return 4511;
				
					case 148:
						return 4519;
				
					case 149:
						return 4527;
				
					case 150:
						return 4535;
				
					case 151:
						return 4543;
				
					case 152:
						return 4551;
				
					case 153:
						return 4559;
				
					case 154:
						return 4567;
				
					case 155:
						return 4575;
				
					case 156:
						return 4583;
				
					case 157:
						return 4591;
				
					case 158:
						return 5484;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5933;
				
					case 160:
						return 5940;
				
					case 161:
						return 5947;
				
					case 162:
						return 5954;
				
					case 163:
						return 5961;
				
					case 164:
						return 5968;
				
					case 165:
						return 5975;
				
					case 166:
						return 5982;
				
					case 167:
						return 5989;
				
					case 168:
						return 5996;
				
					case 169:
						return 6003;
				
					case 170:
						return 6010;
				
					case 171:
						return 6017;
				
					case 172:
						return 6024;
				
					case 173:
						return 6031;
				
					case 174:
						return 6038;
				
					case 175:
						return 6045;
				
					case 176:
						return 6052;
				
					case 177:
						return 6059;
				
					case 178:
						return 6066;
				
					case 179:
						return 6073;
				
					case 180:
						return 6080;
				
					case 181:
						return 6087;
				
					case 182:
						return 6094;
				
					case 183:
						return 6101;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6178;
				
					case 185:
						return 6185;
				
					case 186:
						return 6192;
				
					case 187:
						return 6199;
				
					case 188:
						return 6206;
				
					case 189:
						return 6213;
				
					case 190:
						return 6220;
				
					case 191:
						return 6227;
				
					case 192:
						return 6234;
				
					case 193:
						return 6241;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6575;
				
					case 195:
						return 6582;
				
					case 196:
						return 6589;
				
					case 197:
						return 6596;
				
					case 198:
						return 6603;
				
					case 199:
						return 6610;
				
					case 200:
						return 6617;
				
					case 201:
						return 6624;
				
					case 202:
						return 6631;
				
					case 203:
						return 6638;
				
					case 204:
						return 6645;
				
					case 205:
						return 6652;
				
					case 206:
						return 6659;
				
					case 207:
						return 6666;
				
					case 208:
						return 6673;
				
					case 209:
						return 6680;
				
					case 210:
						return 6687;
				
					case 211:
						return 6694;
				
					case 212:
						return 6701;
				
					case 213:
						return 6708;
				
					case 214:
						return 6715;
				
					case 215:
						return 6722;
				
					case 216:
						return 6729;
				
					case 217:
						return 6736;
				
					case 218:
						return 6743;
				
					case 219:
						return 6750;
				
					case 220:
						return 6757;
				
					case 221:
						return 6764;
				
					case 222:
						return 6771;
				
					case 223:
						return 6778;
				
					case 224:
						return 6785;
				
					case 225:
						return 6792;
				
					case 226:
						return 6799;
				
					case 227:
						return 6806;
				
					case 228:
						return 6813;
				
					case 229:
						return 6820;
				
					case 230:
						return 6827;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7297;
				
					case 232:
						return 7304;
				
					case 233:
						return 7311;
				
					case 234:
						return 7318;
				
					case 235:
						return 7325;
				
					case 236:
						return 7332;
				
					case 237:
						return 7339;
				
					case 238:
						return 7346;
				
					case 239:
						return 7353;
				
					case 240:
						return 7360;
				
					case 241:
						return 7367;
				
					case 242:
						return 7374;
				
					case 243:
						return 7381;
				
					case 244:
						return 7388;
				
					case 245:
						return 7395;
				
					case 246:
						return 7402;
				
					case 247:
						return 7409;
				
					case 248:
						return 7416;
				
					case 249:
						return 7423;
				
					case 250:
						return 7430;
				
					case 251:
						return 7437;
				
					case 252:
						return 7444;
				
					case 253:
						return 7451;
				
					case 254:
						return 7458;
				
					case 255:
						return 7465;
				
					case 256:
						return 7472;
				
					case 257:
						return 7479;
				
					case 258:
						return 7486;
				
					case 259:
						return 7493;
				
					case 260:
						return 7500;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8020;
				
					case 262:
						return 8027;
				
					case 263:
						return 8034;
				
					case 264:
						return 8041;
				
					case 265:
						return 8048;
				
					case 266:
						return 8055;
				
					case 267:
						return 8062;
				
					case 268:
						return 8069;
				
					case 269:
						return 8076;
				
					case 270:
						return 8083;
				
					case 271:
						return 8544;
				
					case 272:
						return 8551;
				
					case 273:
						return 8558;
				
					case 274:
						return 8565;
				
					case 275:
						return 8572;
				
					case 276:
						return 8579;
				
					case 277:
						return 8586;
				
					case 278:
						return 8593;
				
					case 279:
						return 8600;
				
					case 280:
						return 8607;
				
					case 281:
						return 8991;
				
					case 282:
						return 8998;
				
					case 283:
						return 9005;
				
					case 284:
						return 9012;
				
					case 285:
						return 9019;
				
					case 286:
						return 9026;
				
					case 287:
						return 9033;
				
					case 288:
						return 9040;
				
					case 289:
						return 9047;
				
					case 290:
						return 9054;
				
					case 291:
						return 9061;
				
					case 292:
						return 9067;
				
					case 293:
						return 9073;
				
					case 294:
						return 9079;
				
					case 295:
						return 9086;
				
					case 296:
						return 9093;
				
					case 297:
						return 9100;
				
					case 298:
						return 9107;
				
					case 299:
						return 9114;
				
					case 300:
						return 9121;
				
					case 301:
						return 9128;
				
					case 302:
						return 9135;
				
					case 303:
						return 9142;
				
					case 304:
						return 9149;
				
					case 305:
						return 9155;
				
					case 306:
						return 9161;
				
					case 307:
						return 9642;
				
					case 308:
						return 9649;
				
					case 309:
						return 9656;
				
					case 310:
						return 9663;
				
					case 311:
						return 9670;
				
					case 312:
						return 9677;
				
					case 313:
						return 9684;
				
					case 314:
						return 9691;
				
					case 315:
						return 9698;
				
					case 316:
						return 9705;
				
					case 317:
						return 9927;
				
					case 318:
						return 9934;
				
					case 319:
						return 9941;
				
					case 320:
						return 9948;
				
					case 321:
						return 9955;
				
					case 322:
						return 9962;
				
					case 323:
						return 9969;
				
					case 324:
						return 9976;
				
					case 325:
						return 9983;
				
					case 326:
						return 9990;
				
					case 327:
						return 9997;
				
					case 328:
						return 10004;
				
					case 329:
						return 10011;
				
					case 330:
						return 10018;
				
					case 331:
						return 10025;
				
					case 332:
						return 10032;
				
					case 333:
						return 10039;
				
					case 334:
						return 10046;
				
					case 335:
						return 10053;
				
					case 336:
						return 10060;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10453;
				
					case 338:
						return 10460;
				
					case 339:
						return 10467;
				
					case 340:
						return 10474;
				
					case 341:
						return 10481;
				
					case 342:
						return 10488;
				
					case 343:
						return 10495;
				
					case 344:
						return 10502;
				
					case 345:
						return 10509;
				
					case 346:
						return 10516;
				
					case 347:
						return 10523;
				
					case 348:
						return 10529;
				
					case 349:
						return 10535;
				
					case 350:
						return 10541;
				
					case 351:
						return 10548;
				
					case 352:
						return 10555;
				
					case 353:
						return 10562;
				
					case 354:
						return 10569;
				
					case 355:
						return 10576;
				
					case 356:
						return 10583;
				
					case 357:
						return 10590;
				
					case 358:
						return 10597;
				
					case 359:
						return 10604;
				
					case 360:
						return 10611;
				
					case 361:
						return 10617;
				
					case 362:
						return 10623;
				
					default:
						break;
				}
				break;
		}
	}

	return 1630;
}

int func_0x5E3D5C7B(int iParam0, int iParam1)
{
	if (func_0xA8BA5EA5(iParam1))
		return 15468;

	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 363:
					return 11436;
			
				case 364:
					return 11443;
			
				case 365:
					return 11450;
			
				case 366:
					return 11457;
			
				case 367:
					return 11464;
			
				case 368:
					return 11471;
			
				case 369:
					return 11478;
			
				case 370:
					return 11485;
			
				case 371:
					return 11492;
			
				case 372:
					return 11499;
			
				case 373:
					return 11506;
			
				case 374:
					return 11513;
			
				case 375:
					return 11520;
			
				case 376:
					return 11527;
			
				case 377:
					return 11534;
			
				case 378:
					return 11541;
			
				case 379:
					return 11548;
			
				case 380:
					return 11555;
			
				case 381:
					return 11562;
			
				case 382:
					return 11569;
			
				case 383:
					return 11576;
			
				case 384:
					return 11583;
			
				case 385:
					return 11590;
			
				case 386:
					return 11597;
			
				case 387:
					return 11604;
			
				case 388:
					return 11611;
			
				case 389:
					return 11618;
			
				case 390:
					return 11625;
			
				case 391:
					return 11632;
			
				case 392:
					return 11639;
			
				case 393:
					return 11646;
			
				case 394:
					return 11653;
			
				case 395:
					return 11660;
			
				case 396:
					return 11667;
			
				case 397:
					return 11674;
			
				case 398:
					return 11681;
			
				case 399:
					return 11688;
			
				case 400:
					return 11695;
			
				case 401:
					return 11702;
			
				case 402:
					return 11709;
			
				case 403:
					return 11716;
			
				case 404:
					return 11723;
			
				case 405:
					return 11730;
			
				case 406:
					return 11737;
			
				case 407:
					return 11744;
			
				case 408:
					return 11751;
			
				case 409:
					return 11758;
			
				case 410:
					return 11765;
			
				case 411:
					return 11772;
			
				case 412:
					return 11779;
			
				case 413:
					return 11786;
			
				case 414:
					return 11793;
			
				case 515:
					return 12261;
			
				case 516:
					return 12268;
			
				case 517:
					return 12463;
			
				case 518:
					return 12470;
			
				case 519:
					return 12477;
			
				case 520:
					return 12484;
			
				case 521:
					return 12491;
			
				case 522:
					return 12498;
			
				case 523:
					return 12505;
			
				case 524:
					return 12512;
			
				case 525:
					return 12519;
			
				case 526:
					return 12526;
			
				case 527:
					return 12533;
			
				case 528:
					return joaat("AR_EXECUTION_BACK_LEFT_ANIMAL_ENTER");
			
				case 529:
					return 12547;
			
				case 530:
					return 12554;
			
				case 531:
					return 12561;
			
				case 537:
					return 12603;
			
				case 538:
					return 12610;
			
				case 539:
					return 12617;
			
				case 540:
					return 12624;
			
				case 541:
					return 12631;
			
				case 542:
					return 12638;
			
				case 543:
					return 12645;
			
				case 544:
					return 12652;
			
				case 545:
					return 12659;
			
				case 546:
					return 12666;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 363:
					return 11437;
			
				case 364:
					return 11444;
			
				case 365:
					return 11451;
			
				case 366:
					return 11458;
			
				case 367:
					return 11465;
			
				case 368:
					return 11472;
			
				case 369:
					return 11479;
			
				case 370:
					return 11486;
			
				case 371:
					return 11493;
			
				case 372:
					return 11500;
			
				case 373:
					return 11507;
			
				case 374:
					return 11514;
			
				case 375:
					return 11521;
			
				case 376:
					return 11528;
			
				case 377:
					return 11535;
			
				case 378:
					return 11542;
			
				case 379:
					return 11549;
			
				case 380:
					return 11556;
			
				case 381:
					return 11563;
			
				case 382:
					return 11570;
			
				case 383:
					return 11577;
			
				case 384:
					return 11584;
			
				case 385:
					return 11591;
			
				case 386:
					return 11598;
			
				case 387:
					return 11605;
			
				case 388:
					return 11612;
			
				case 389:
					return 11619;
			
				case 390:
					return 11626;
			
				case 391:
					return 11633;
			
				case 392:
					return 11640;
			
				case 393:
					return 11647;
			
				case 394:
					return 11654;
			
				case 395:
					return 11661;
			
				case 396:
					return 11668;
			
				case 397:
					return 11675;
			
				case 398:
					return 11682;
			
				case 399:
					return 11689;
			
				case 400:
					return 11696;
			
				case 401:
					return 11703;
			
				case 402:
					return 11710;
			
				case 403:
					return 11717;
			
				case 404:
					return 11724;
			
				case 405:
					return 11731;
			
				case 406:
					return 11738;
			
				case 407:
					return 11745;
			
				case 408:
					return 11752;
			
				case 409:
					return 11759;
			
				case 410:
					return 11766;
			
				case 411:
					return 11773;
			
				case 412:
					return 11780;
			
				case 413:
					return 11787;
			
				case 414:
					return 11794;
			
				case 515:
					return 12262;
			
				case 516:
					return 12269;
			
				case 517:
					return 12464;
			
				case 518:
					return 12471;
			
				case 519:
					return 12478;
			
				case 520:
					return 12485;
			
				case 521:
					return 12492;
			
				case 522:
					return 12499;
			
				case 523:
					return 12506;
			
				case 524:
					return 12513;
			
				case 525:
					return 12520;
			
				case 526:
					return 12527;
			
				case 527:
					return 12534;
			
				case 528:
					return 12541;
			
				case 529:
					return 12548;
			
				case 530:
					return 12555;
			
				case 531:
					return 12562;
			
				case 537:
					return 12604;
			
				case 538:
					return 12611;
			
				case 539:
					return 12618;
			
				case 540:
					return 12625;
			
				case 541:
					return 12632;
			
				case 542:
					return 12639;
			
				case 543:
					return 12646;
			
				case 544:
					return 12653;
			
				case 545:
					return 12660;
			
				case 546:
					return 12667;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 363:
					return 11438;
			
				case 364:
					return 11445;
			
				case 365:
					return 11452;
			
				case 366:
					return 11459;
			
				case 367:
					return 11466;
			
				case 368:
					return 11473;
			
				case 369:
					return 11480;
			
				case 370:
					return 11487;
			
				case 371:
					return 11494;
			
				case 372:
					return 11501;
			
				case 373:
					return 11508;
			
				case 374:
					return 11515;
			
				case 375:
					return 11522;
			
				case 376:
					return 11529;
			
				case 377:
					return 11536;
			
				case 378:
					return 11543;
			
				case 379:
					return 11550;
			
				case 380:
					return 11557;
			
				case 381:
					return 11564;
			
				case 382:
					return 11571;
			
				case 383:
					return 11578;
			
				case 384:
					return 11585;
			
				case 385:
					return 11592;
			
				case 386:
					return 11599;
			
				case 387:
					return 11606;
			
				case 388:
					return 11613;
			
				case 389:
					return 11620;
			
				case 390:
					return 11627;
			
				case 391:
					return 11634;
			
				case 392:
					return 11641;
			
				case 393:
					return 11648;
			
				case 394:
					return 11655;
			
				case 395:
					return 11662;
			
				case 396:
					return 11669;
			
				case 397:
					return 11676;
			
				case 398:
					return 11683;
			
				case 399:
					return 11690;
			
				case 400:
					return 11697;
			
				case 401:
					return 11704;
			
				case 402:
					return 11711;
			
				case 403:
					return 11718;
			
				case 404:
					return 11725;
			
				case 405:
					return 11732;
			
				case 406:
					return 11739;
			
				case 407:
					return 11746;
			
				case 408:
					return 11753;
			
				case 409:
					return 11760;
			
				case 410:
					return 11767;
			
				case 411:
					return 11774;
			
				case 412:
					return 11781;
			
				case 413:
					return 11788;
			
				case 414:
					return 11795;
			
				case 515:
					return 12263;
			
				case 516:
					return 12270;
			
				case 517:
					return 12465;
			
				case 518:
					return 12472;
			
				case 519:
					return 12479;
			
				case 520:
					return 12486;
			
				case 521:
					return 12493;
			
				case 522:
					return 12500;
			
				case 523:
					return 12507;
			
				case 524:
					return 12514;
			
				case 525:
					return 12521;
			
				case 526:
					return 12528;
			
				case 527:
					return 12535;
			
				case 528:
					return 12542;
			
				case 529:
					return 12549;
			
				case 530:
					return 12556;
			
				case 531:
					return 12563;
			
				case 537:
					return 12605;
			
				case 538:
					return 12612;
			
				case 539:
					return 12619;
			
				case 540:
					return 12626;
			
				case 541:
					return 12633;
			
				case 542:
					return 12640;
			
				case 543:
					return 12647;
			
				case 544:
					return 12654;
			
				case 545:
					return 12661;
			
				case 546:
					return 12668;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 363:
					return 11439;
			
				case 364:
					return 11446;
			
				case 365:
					return 11453;
			
				case 366:
					return 11460;
			
				case 367:
					return 11467;
			
				case 368:
					return 11474;
			
				case 369:
					return 11481;
			
				case 370:
					return 11488;
			
				case 371:
					return 11495;
			
				case 372:
					return 11502;
			
				case 373:
					return 11509;
			
				case 374:
					return 11516;
			
				case 375:
					return 11523;
			
				case 376:
					return 11530;
			
				case 377:
					return 11537;
			
				case 378:
					return 11544;
			
				case 379:
					return 11551;
			
				case 380:
					return 11558;
			
				case 381:
					return 11565;
			
				case 382:
					return 11572;
			
				case 383:
					return 11579;
			
				case 384:
					return 11586;
			
				case 385:
					return 11593;
			
				case 386:
					return 11600;
			
				case 387:
					return 11607;
			
				case 388:
					return 11614;
			
				case 389:
					return 11621;
			
				case 390:
					return 11628;
			
				case 391:
					return 11635;
			
				case 392:
					return 11642;
			
				case 393:
					return 11649;
			
				case 394:
					return 11656;
			
				case 395:
					return 11663;
			
				case 396:
					return 11670;
			
				case 397:
					return 11677;
			
				case 398:
					return 11684;
			
				case 399:
					return 11691;
			
				case 400:
					return 11698;
			
				case 401:
					return 11705;
			
				case 402:
					return 11712;
			
				case 403:
					return 11719;
			
				case 404:
					return 11726;
			
				case 405:
					return 11733;
			
				case 406:
					return 11740;
			
				case 407:
					return 11747;
			
				case 408:
					return 11754;
			
				case 409:
					return 11761;
			
				case 410:
					return 11768;
			
				case 411:
					return 11775;
			
				case 412:
					return 11782;
			
				case 413:
					return 11789;
			
				case 414:
					return 11796;
			
				case 515:
					return 12264;
			
				case 516:
					return 12271;
			
				case 517:
					return 12466;
			
				case 518:
					return 12473;
			
				case 519:
					return 12480;
			
				case 520:
					return 12487;
			
				case 521:
					return 12494;
			
				case 522:
					return 12501;
			
				case 523:
					return 12508;
			
				case 524:
					return 12515;
			
				case 525:
					return 12522;
			
				case 526:
					return 12529;
			
				case 527:
					return 12536;
			
				case 528:
					return 12543;
			
				case 529:
					return 12550;
			
				case 530:
					return 12557;
			
				case 531:
					return 12564;
			
				case 537:
					return 12606;
			
				case 538:
					return 12613;
			
				case 539:
					return 12620;
			
				case 540:
					return 12627;
			
				case 541:
					return 12634;
			
				case 542:
					return 12641;
			
				case 543:
					return 12648;
			
				case 544:
					return 12655;
			
				case 545:
					return 12662;
			
				case 546:
					return 12669;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 363:
					return 11440;
			
				case 364:
					return 11447;
			
				case 365:
					return 11454;
			
				case 366:
					return 11461;
			
				case 367:
					return 11468;
			
				case 368:
					return 11475;
			
				case 369:
					return 11482;
			
				case 370:
					return 11489;
			
				case 371:
					return 11496;
			
				case 372:
					return 11503;
			
				case 373:
					return 11510;
			
				case 374:
					return 11517;
			
				case 375:
					return 11524;
			
				case 376:
					return 11531;
			
				case 377:
					return 11538;
			
				case 378:
					return 11545;
			
				case 379:
					return 11552;
			
				case 380:
					return 11559;
			
				case 381:
					return 11566;
			
				case 382:
					return 11573;
			
				case 383:
					return 11580;
			
				case 384:
					return 11587;
			
				case 385:
					return 11594;
			
				case 386:
					return 11601;
			
				case 387:
					return 11608;
			
				case 388:
					return 11615;
			
				case 389:
					return 11622;
			
				case 390:
					return 11629;
			
				case 391:
					return 11636;
			
				case 392:
					return 11643;
			
				case 393:
					return 11650;
			
				case 394:
					return 11657;
			
				case 395:
					return 11664;
			
				case 396:
					return 11671;
			
				case 397:
					return 11678;
			
				case 398:
					return 11685;
			
				case 399:
					return 11692;
			
				case 400:
					return 11699;
			
				case 401:
					return 11706;
			
				case 402:
					return 11713;
			
				case 403:
					return 11720;
			
				case 404:
					return 11727;
			
				case 405:
					return 11734;
			
				case 406:
					return 11741;
			
				case 407:
					return 11748;
			
				case 408:
					return 11755;
			
				case 409:
					return 11762;
			
				case 410:
					return 11769;
			
				case 411:
					return 11776;
			
				case 412:
					return 11783;
			
				case 413:
					return 11790;
			
				case 414:
					return 11797;
			
				case 515:
					return 12265;
			
				case 516:
					return 12272;
			
				case 517:
					return 12467;
			
				case 518:
					return 12474;
			
				case 519:
					return 12481;
			
				case 520:
					return 12488;
			
				case 521:
					return 12495;
			
				case 522:
					return 12502;
			
				case 523:
					return 12509;
			
				case 524:
					return 12516;
			
				case 525:
					return 12523;
			
				case 526:
					return 12530;
			
				case 527:
					return 12537;
			
				case 528:
					return 12544;
			
				case 529:
					return 12551;
			
				case 530:
					return 12558;
			
				case 531:
					return 12565;
			
				case 537:
					return 12607;
			
				case 538:
					return 12614;
			
				case 539:
					return 12621;
			
				case 540:
					return 12628;
			
				case 541:
					return 12635;
			
				case 542:
					return 12642;
			
				case 543:
					return 12649;
			
				case 544:
					return 12656;
			
				case 545:
					return 12663;
			
				case 546:
					return 12670;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 363:
					return 11442;
			
				case 364:
					return 11449;
			
				case 365:
					return 11456;
			
				case 366:
					return 11463;
			
				case 367:
					return 11470;
			
				case 368:
					return 11477;
			
				case 369:
					return 11484;
			
				case 370:
					return 11491;
			
				case 371:
					return 11498;
			
				case 372:
					return 11505;
			
				case 373:
					return 11512;
			
				case 374:
					return 11519;
			
				case 375:
					return 11526;
			
				case 376:
					return 11533;
			
				case 377:
					return 11540;
			
				case 378:
					return 11547;
			
				case 379:
					return 11554;
			
				case 380:
					return 11561;
			
				case 381:
					return 11568;
			
				case 382:
					return 11575;
			
				case 383:
					return 11582;
			
				case 384:
					return 11589;
			
				case 385:
					return 11596;
			
				case 386:
					return 11603;
			
				case 387:
					return 11610;
			
				case 388:
					return 11617;
			
				case 389:
					return 11624;
			
				case 390:
					return 11631;
			
				case 391:
					return 11638;
			
				case 392:
					return 11645;
			
				case 393:
					return 11652;
			
				case 394:
					return 11659;
			
				case 395:
					return 11666;
			
				case 396:
					return 11673;
			
				case 397:
					return 11680;
			
				case 398:
					return 11687;
			
				case 399:
					return 11694;
			
				case 400:
					return 11701;
			
				case 401:
					return 11708;
			
				case 402:
					return 11715;
			
				case 403:
					return 11722;
			
				case 404:
					return 11729;
			
				case 405:
					return 11736;
			
				case 406:
					return 11743;
			
				case 407:
					return 11750;
			
				case 408:
					return 11757;
			
				case 409:
					return 11764;
			
				case 410:
					return 11771;
			
				case 411:
					return 11778;
			
				case 412:
					return 11785;
			
				case 413:
					return 11792;
			
				case 414:
					return 11799;
			
				case 515:
					return 12267;
			
				case 516:
					return 12274;
			
				case 517:
					return 12469;
			
				case 518:
					return 12476;
			
				case 519:
					return 12483;
			
				case 520:
					return 12490;
			
				case 521:
					return 12497;
			
				case 522:
					return 12504;
			
				case 523:
					return 12511;
			
				case 524:
					return 12518;
			
				case 525:
					return 12525;
			
				case 526:
					return 12532;
			
				case 527:
					return 12539;
			
				case 528:
					return 12546;
			
				case 529:
					return 12553;
			
				case 530:
					return 12560;
			
				case 531:
					return 12567;
			
				case 537:
					return 12609;
			
				case 538:
					return 12616;
			
				case 539:
					return 12623;
			
				case 540:
					return 12630;
			
				case 541:
					return 12637;
			
				case 542:
					return 12644;
			
				case 543:
					return 12651;
			
				case 544:
					return 12658;
			
				case 545:
					return 12665;
			
				case 546:
					return 12672;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 363:
					return 11441;
			
				case 364:
					return 11448;
			
				case 365:
					return 11455;
			
				case 366:
					return 11462;
			
				case 367:
					return 11469;
			
				case 368:
					return 11476;
			
				case 369:
					return 11483;
			
				case 370:
					return 11490;
			
				case 371:
					return 11497;
			
				case 372:
					return 11504;
			
				case 373:
					return 11511;
			
				case 374:
					return 11518;
			
				case 375:
					return 11525;
			
				case 376:
					return 11532;
			
				case 377:
					return 11539;
			
				case 378:
					return 11546;
			
				case 379:
					return 11553;
			
				case 380:
					return 11560;
			
				case 381:
					return 11567;
			
				case 382:
					return 11574;
			
				case 383:
					return 11581;
			
				case 384:
					return 11588;
			
				case 385:
					return 11595;
			
				case 386:
					return 11602;
			
				case 387:
					return 11609;
			
				case 388:
					return 11616;
			
				case 389:
					return 11623;
			
				case 390:
					return 11630;
			
				case 391:
					return 11637;
			
				case 392:
					return 11644;
			
				case 393:
					return 11651;
			
				case 394:
					return 11658;
			
				case 395:
					return 11665;
			
				case 396:
					return 11672;
			
				case 397:
					return 11679;
			
				case 398:
					return 11686;
			
				case 399:
					return 11693;
			
				case 400:
					return 11700;
			
				case 401:
					return 11707;
			
				case 402:
					return 11714;
			
				case 403:
					return 11721;
			
				case 404:
					return 11728;
			
				case 405:
					return 11735;
			
				case 406:
					return 11742;
			
				case 407:
					return 11749;
			
				case 408:
					return 11756;
			
				case 409:
					return 11763;
			
				case 410:
					return 11770;
			
				case 411:
					return 11777;
			
				case 412:
					return 11784;
			
				case 413:
					return 11791;
			
				case 414:
					return 11798;
			
				case 515:
					return 12266;
			
				case 516:
					return 12273;
			
				case 517:
					return 12468;
			
				case 518:
					return 12475;
			
				case 519:
					return 12482;
			
				case 520:
					return 12489;
			
				case 521:
					return 12496;
			
				case 522:
					return 12503;
			
				case 523:
					return 12510;
			
				case 524:
					return 12517;
			
				case 525:
					return 12524;
			
				case 526:
					return 12531;
			
				case 527:
					return 12538;
			
				case 528:
					return 12545;
			
				case 529:
					return 12552;
			
				case 530:
					return 12559;
			
				case 531:
					return 12566;
			
				case 537:
					return 12608;
			
				case 538:
					return 12615;
			
				case 539:
					return 12622;
			
				case 540:
					return 12629;
			
				case 541:
					return 12636;
			
				case 542:
					return 12643;
			
				case 543:
					return 12650;
			
				case 544:
					return 12657;
			
				case 545:
					return 12664;
			
				case 546:
					return 12671;
			
				default:
					break;
			}
			break;
	}

	return 1630;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2)
{
	if (iParam2 == -1)
		iParam2 = func_0x47FF56D2();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_0xB350EB61(int iParam0)
{
	if (iParam0 < 10)
		return 54052 + iParam0;
	else if (iParam0 >= 13 && iParam0 < 23)
		return (54052 + iParam0) - 3;
	else if (iParam0 >= 26 && iParam0 < 36)
		return (54052 + iParam0) - 6;
	else if (iParam0 >= 39 && iParam0 < 49)
		return (54052 + iParam0) - 9;
	else if (iParam0 >= 52 && iParam0 < 62)
		return (54052 + iParam0) - 12;
	else if (iParam0 >= 65 && iParam0 < 85)
		return (54052 + iParam0) - 15;
	else if (iParam0 >= 88 && iParam0 < 291)
		return (54052 + iParam0) - 18;
	else if (iParam0 >= 294 && iParam0 < 304)
		return (54052 + iParam0) - 21;
	else if (iParam0 >= 307 && iParam0 < 347)
		return (54052 + iParam0) - 24;
	else if (iParam0 >= 350 && iParam0 < 360)
		return (54052 + iParam0) - 27;
	else if (iParam0 >= 363 && iParam0 < 547)
		return (54052 + iParam0) - 30;

	return 0;
}

int func_0x5FE7B2F8(int iParam0, BOOL bParam1)
{
	if (func_0xA8BA5EA5(iParam0))
		return 0;

	if (iParam0 <= 38)
		if (iParam0 < 10)
			if (bParam1)
				return joaat("twi_01") + iParam0;
			else
				return 31488 + iParam0;
		else if (iParam0 > 12 && iParam0 < 23)
			if (bParam1)
				return (joaat("twi_01") + iParam0) - 3;
			else
				return (31488 + iParam0) - 3;
		else if (iParam0 > 25 && iParam0 < 36)
			if (bParam1)
				return (joaat("twi_01") + iParam0) - 6;
			else
				return (31488 + iParam0) - 6;
	else if (iParam0 > 38 && iParam0 < 49)
		return (6015 + iParam0) - 39;
	else if (iParam0 > 51 && iParam0 < 62)
		return (7252 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9310 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30134 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30134 + (iParam0 - 281 - 3);
	else if (iParam0 < func_0xBF02E7FB(11, -1))
		return (15084 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15084 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15361;
	else if (iParam0 < 184)
		return (18036 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18953 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21942 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24535 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26319 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28039 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31488 + 30 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34036 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36528 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36528 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return 41004 + (iParam0 - 363);
	else if (iParam0 >= 415 && iParam0 < 515)
		return (50100 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51536 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53896 + iParam0) - 517;

	return 0;
}

int func_0xBF02E7FB(int iParam0, int iParam1)
{
	int num;

	switch (iParam0)
	{
		case 8:
			return 108;
	
		case 9:
			return 128;
	
		case 10:
			return 148;
	
		case 11:
			return 156;
	
		case 6:
			return 75;
	
		case 7:
			return 88;
	
		case 5:
			return -1;
	
		case 12:
			if (iParam1 == 1)
				return 532;
			else if (iParam1 == 2)
				return 537;
		
			return 179;
	
		case 13:
			return 186;
	
		case 14:
			return 192;
	
		case 15:
			return 202;
	
		case 16:
			return 212;
	
		case 17:
			return 222;
	
		case 18:
			return 236;
	
		case 19:
			return 246;
	
		case 20:
			return 256;
	
		case 21:
			return 268;
	
		case 22:
			return 278;
	
		case 23:
			return 294;
	
		case 24:
			return 307;
	
		case 25:
			return 317;
	
		case 26:
			return 337;
	
		case 27:
			return 350;
	
		case 28:
			return 363;
	
		case 29:
			return 413;
	
		case 31:
			return 517;
	
		case 32:
			return 547;
	}

	if (func_0xC6F10977(iParam0))
	{
		num = func_0xB721049B(iParam0);
		return func_0x7929990(num);
	}

	return func_0xCD6FCBEB(iParam0, -1, true) * (iParam0 + 1);
}

int func_0xCD6FCBEB(int iParam0, int iParam1, BOOL bParam2)
{
	if (iParam0 == -1)
		if (iParam1 >= 1)
			if (func_0xDD5D533B(iParam1, false, false))
				return 20;
			else if (func_0xE48228D0(iParam1))
				return 0;
			else if (func_0x32D9FCC4(iParam1, -1))
				return 10;
			else if (iParam1 == 115)
				return 8;
			else if (iParam1 == 116)
				return func_0x1403B260();
			else if (iParam1 == 117)
				return 7;
			else if (iParam1 == 118)
				return 1;
			else if (iParam1 == 119 || iParam1 == 120 || iParam1 == 121)
				return 10;
			else if (iParam1 == 122)
				return 9;
			else if (iParam1 == 123 || iParam1 == 124)
				return 10;
			else if (iParam1 == 125)
				return 10;
			else if (iParam1 == 126)
				return 10;
			else if (iParam1 == 127)
				return 10;
			else if (iParam1 == 128)
				return 20;
			else if (iParam1 == 129)
				return 50;
			else if (iParam1 == 132)
				return 2;
			else if (iParam1 == 133)
				return 10;
			else if (iParam1 <= 131 && iParam1 > 0)
				if (Global_1312333[iParam1].f_33 == 2)
					if (bParam2)
						return 3;
					else
						return 2;
				else if (Global_1312333[iParam1].f_33 == 6)
					if (bParam2)
						return 8;
					else
						return 6;
				else if (Global_1312333[iParam1].f_33 == 10)
					if (bParam2)
						return 13;
					else
						return 10;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
	
		case 5:
			return 0;
	
		case 6:
			return 10;
	
		case 8:
		case 9:
		case 10:
			return 20;
	
		case 11:
			return 8;
	
		case 12:
			return func_0x1403B260();
	
		case 13:
			return 7;
	
		case 14:
			return 1;
	
		case 15:
		case 16:
		case 17:
			return 10;
	
		case 18:
		case 19:
		case 20:
			return 10;
	
		case 21:
			return 10;
	
		case 22:
			return 10;
	
		case 25:
			return 10;
	
		case 26:
			return 20;
	
		case 29:
			return 50;
	
		case 31:
			return 2;
	
		case 32:
			return 10;
	}

	return 0;
}

int func_0x1403B260()
{
	return 35;
}

BOOL func_0x32D9FCC4(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}

	return false;
}

BOOL func_0xE48228D0(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}

	return false;
}

BOOL func_0xDD5D533B(int iParam0, BOOL bParam1, BOOL bParam2)
{
	if (bParam2)
		return func_0x40436B78(PLAYER::PLAYER_ID(), false);

	if (bParam1)
	{
		if (func_0x40436B78(PLAYER::PLAYER_ID(), false))
			return false;
	
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}

	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}

	return false;
}

BOOL func_0x40436B78(Player plParam0, BOOL bParam1)
{
	if (Global_1845050 != _INVALID_PLAYER_INDEX())
	{
		if (!func_0x96A3BD5A(Global_1845050))
			return false;
	
		if (bParam1)
			if (PLAYER::PLAYER_ID() != Global_1845050)
				if (IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[Global_1845050].f_202, 24) || func_0x9AF12B5E(Global_1845050))
					return true;
	}

	return IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[plParam0].f_202, 24);
}

BOOL func_0x9AF12B5E(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[plParam0].f_202, 9);

	return false;
}

BOOL func_0x96A3BD5A(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_393, 2);

	return false;
}

int func_0x7929990(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
	
		case 2:
			return 224;
	
		case 1:
			return 227;
	
		case 3:
			return 279;
	
		default:
		
	}

	return -1;
}

int func_0xB721049B(int iParam0)
{
	iParam0 = iParam0 - 1000;

	if (iParam0 >= 0 && iParam0 <= 4)
		return iParam0;

	return -1;
}

BOOL func_0xC6F10977(int iParam0)
{
	if (iParam0 >= 1000 && iParam0 < 1004)
		return true;

	return false;
}

int func_0x5992B4A(int iParam0)
{
	if (func_0xA8BA5EA5(iParam0))
		return 0;

	if (iParam0 < 10)
		return 7263 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 7263 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 7263 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 7263 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7263 + iParam0) - 12;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9330 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30154 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30154 + (iParam0 - 281 - 3);
	else if (iParam0 < func_0xBF02E7FB(11, -1))
		return (15154 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15154 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15362;
	else if (iParam0 < 184)
		return (18061 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18963 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21979 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24565 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26329 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28049 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31528 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34056 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36548 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36548 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (41056 + iParam0) - 363;
	else if (iParam0 >= 415 && iParam0 < 515)
		return (50200 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51538 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53926 + iParam0) - 517;

	return 0;
}

int func_0x5992B4A(int iParam0)
{
	if (func_0xA8BA5EA5(iParam0))
		return 0;

	if (iParam0 < 10)
		return 5975 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 5975 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 5975 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5975 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7242 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9290 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30114 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30114 + (iParam0 - 281 - 3);
	else if (iParam0 < func_0xBF02E7FB(11, -1))
		return (15014 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15014 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15360;
	else if (iParam0 < 184)
		return (18011 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18943 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21905 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24505 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26309 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28029 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31478 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34016 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36508 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36508 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (40952 + iParam0) - 363;
	else if (iParam0 >= 415 && iParam0 < 515)
		return (50000 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51534 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53866 + iParam0) - 517;

	return 0;
}

int func_0x5992B4A(int iParam0)
{
	if (func_0xA8BA5EA5(iParam0))
		return 0;

	if (iParam0 < 10)
		return 5935 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 5935 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 5935 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5935 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7232 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9270 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30094 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30094 + (iParam0 - 281 - 3);
	else if (iParam0 < func_0xBF02E7FB(11, -1))
		return (14944 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (14944 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15359;
	else if (iParam0 < 184)
		return (17986 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18933 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21868 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24475 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26299 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28019 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31468 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (33996 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36488 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36488 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (40900 + iParam0) - 363;
	else if (iParam0 >= 415 && iParam0 < 515)
		return (49900 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51532 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53836 + iParam0) - 517;

	return 0;
}

int func_0xF955952E(int iParam0)
{
	int num;

	if (func_0xA8BA5EA5(iParam0))
		return 0;

	num = 4424 - 4400;

	if (iParam0 < 10)
		return 4400 + (iParam0 * num);
	else if (iParam0 > 12 && iParam0 < 23)
		return 4640 + ((iParam0 - 13) * num);
	else if (iParam0 > 25 && iParam0 < 36)
		return 4880 + ((iParam0 - 26) * num);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5120 + ((iParam0 - 39) * num);
	else if (iParam0 > 51 && iParam0 < 62)
		return 6414 + ((iParam0 - 52) * num);
	else if (iParam0 > 64 && iParam0 < 85)
		return 7682 + ((iParam0 - 65) * num);
	else if (iParam0 >= 281 && iParam0 < 291)
		return 29534 + ((iParam0 - 281) * num);
	else if (iParam0 >= 294 && iParam0 < 304)
		return 29774 + ((iParam0 - 294) * num);
	else if (iParam0 < func_0xBF02E7FB(11, -1))
		return 9554 + ((iParam0 - 88) * num);
	else if (iParam0 <= 157)
		return 9554 + ((iParam0 - 88) * num);
	else if (iParam0 == 158)
		return 15282;
	else if (iParam0 < 184)
		return 16061 + ((iParam0 - 159) * num);
	else if (iParam0 < 194)
		return 18163 + ((iParam0 - 184) * num);
	else if (iParam0 < 231)
		return 19019 + ((iParam0 - 194) * num);
	else if (iParam0 < 261)
		return 22195 + ((iParam0 - 231) * num);
	else if (iParam0 < 271)
		return 25539 + ((iParam0 - 261) * num);
	else if (iParam0 < 281)
		return 27259 + ((iParam0 - 271) * num);
	else if (iParam0 > 306 && iParam0 < 317)
		return 31188 + ((iParam0 - 307) * num);
	else if (iParam0 >= 317 && iParam0 < 337)
		return 33436 + ((iParam0 - 317) * num);
	else if (iParam0 >= 337 && iParam0 < 347)
		return 35928 + ((iParam0 - 337) * num);
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36168 + ((iParam0 - 350) * num);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return 39444 + ((iParam0 - 363) * num);
	else if (iParam0 >= 415 && iParam0 < 515)
		return 47100 + ((iParam0 - 415) * num);
	else if (iParam0 >= 515 && iParam0 < 517)
		return 51476 + ((iParam0 - 515) * num);
	else if (iParam0 >= 517 && iParam0 < 547)
		return 52996 + ((iParam0 - 517) * num);

	return 0;
}

BOOL func_0xE48228D0(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return true;
	}

	return false;
}

int func_0x35A80149(int iParam0, int iParam1)
{
	int num;

	if (func_0xA8BA5EA5(iParam1))
		return 0;

	if (iParam0 == 3880 || iParam0 == 3881 || iParam0 == 3882)
	{
		if (iParam1 < 10)
			num = iParam0 + (iParam1 * 3);
		else if (iParam1 < 23)
			if (iParam0 == 3880)
				num = 3910 + ((iParam1 - 13) * 3);
			else if (iParam0 == 3881)
				num = 3911 + ((iParam1 - 13) * 3);
			else if (iParam0 == 3882)
				num = 3912 + ((iParam1 - 13) * 3);
		else if (iParam1 < 36)
			if (iParam0 == 3880)
				num = 3946 + ((iParam1 - 26) * 3);
			else if (iParam0 == 3881)
				num = 3947 + ((iParam1 - 26) * 3);
			else if (iParam0 == 3882)
				num = 3948 + ((iParam1 - 26) * 3);
		else if (iParam1 < 49)
			if (iParam0 == 3880)
				num = 5855 + ((iParam1 - 39) * 3);
			else if (iParam0 == 3881)
				num = 5856 + ((iParam1 - 39) * 3);
			else if (iParam0 == 3882)
				num = 5857 + ((iParam1 - 39) * 3);
		else if (iParam1 < 62)
			if (iParam0 == 3880)
				num = 7149 + ((iParam1 - 52) * 3);
			else if (iParam0 == 3881)
				num = 7150 + ((iParam1 - 52) * 3);
			else if (iParam0 == 3882)
				num = 7151 + ((iParam1 - 52) * 3);
		else if (iParam1 < 85)
			if (iParam0 == 3880)
				num = 9107 + ((iParam1 - 65) * 3);
			else if (iParam0 == 3881)
				num = 9108 + ((iParam1 - 65) * 3);
			else if (iParam0 == 3882)
				num = 9109 + ((iParam1 - 65) * 3);
		else if (iParam1 < func_0xBF02E7FB(11, -1))
			if (iParam0 == 3880)
				num = 14384 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3881)
				num = 14385 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3882)
				num = 14386 + ((iParam1 - 88) * 3);
		else if (iParam1 <= 157)
			if (iParam0 == 3880)
				num = 14384 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3881)
				num = 14385 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3882)
				num = 14386 + ((iParam1 - 88) * 3);
		else if (iParam1 == 158)
			if (iParam0 == 3880)
				num = 15351;
			else if (iParam0 == 3881)
				num = 15352;
			else if (iParam0 == 3882)
				num = 15353;
		else if (iParam1 < 184)
			if (iParam0 == 3880)
				num = 17786 + ((iParam1 - 159) * 3);
			else if (iParam0 == 3881)
				num = 17787 + ((iParam1 - 159) * 3);
			else if (iParam0 == 3882)
				num = 17788 + ((iParam1 - 159) * 3);
		else if (iParam1 < 194)
			if (iParam0 == 3880)
				num = 18853 + ((iParam1 - 184) * 3);
			else if (iParam0 == 3881)
				num = 18854 + ((iParam1 - 184) * 3);
			else if (iParam0 == 3882)
				num = 18855 + ((iParam1 - 184) * 3);
		else if (iParam1 < 231)
			if (iParam0 == 3880)
				num = 21572 + ((iParam1 - 194) * 3);
			else if (iParam0 == 3881)
				num = 21573 + ((iParam1 - 194) * 3);
			else if (iParam0 == 3882)
				num = 21574 + ((iParam1 - 194) * 3);
		else if (iParam1 < 261)
			if (iParam0 == 3880)
				num = 24265 + ((iParam1 - 231) * 3);
			else if (iParam0 == 3881)
				num = 24266 + ((iParam1 - 231) * 3);
			else if (iParam0 == 3882)
				num = 24267 + ((iParam1 - 231) * 3);
		else if (iParam1 < 271)
			if (iParam0 == 3880)
				num = 26229 + ((iParam1 - 261) * 3);
			else if (iParam0 == 3881)
				num = 26230 + ((iParam1 - 261) * 3);
			else if (iParam0 == 3882)
				num = 26231 + ((iParam1 - 261) * 3);
		else if (iParam1 < 281)
			if (iParam0 == 3880)
				num = 27949 + ((iParam1 - 271) * 3);
			else if (iParam0 == 3881)
				num = 27950 + ((iParam1 - 271) * 3);
			else if (iParam0 == 3882)
				num = 27951 + ((iParam1 - 271) * 3);
		else if (iParam1 < 291)
			if (iParam0 == 3880)
				num = 29474 + ((iParam1 - 281) * 3);
			else if (iParam0 == 3881)
				num = 29475 + ((iParam1 - 281) * 3);
			else if (iParam0 == 3882)
				num = 29476 + ((iParam1 - 281) * 3);
		else if (iParam1 < 304)
			if (iParam0 == 3880)
				num = 29504 + ((iParam1 - 294) * 3);
			else if (iParam0 == 3881)
				num = 29505 + ((iParam1 - 294) * 3);
			else if (iParam0 == 3882)
				num = 29506 + ((iParam1 - 294) * 3);
		else if (iParam1 > 306 && iParam1 < 317)
			if (iParam0 == 3880)
				num = 31158 + ((iParam1 - 307) * 3);
			else if (iParam0 == 3881)
				num = 31159 + ((iParam1 - 307) * 3);
			else if (iParam0 == 3882)
				num = 31160 + ((iParam1 - 307) * 3);
		else if (iParam1 >= 317 && iParam1 < 337)
			if (iParam0 == 3880)
				num = 33376 + ((iParam1 - 317) * 3);
			else if (iParam0 == 3881)
				num = 33377 + ((iParam1 - 317) * 3);
			else if (iParam0 == 3882)
				num = 33378 + ((iParam1 - 317) * 3);
		else if (iParam1 >= 337 && iParam1 < 347)
			if (iParam0 == 3880)
				num = 35868 + ((iParam1 - 337) * 3);
			else if (iParam0 == 3881)
				num = 35869 + ((iParam1 - 337) * 3);
			else if (iParam0 == 3882)
				num = 35870 + ((iParam1 - 337) * 3);
		else if (iParam1 >= 350 && iParam1 < 360)
			if (iParam0 == 3880)
				num = 35898 + ((iParam1 - 350) * 3);
			else if (iParam0 == 3881)
				num = 35899 + ((iParam1 - 350) * 3);
			else if (iParam0 == 3882)
				num = 35900 + ((iParam1 - 350) * 3);
		else if (iParam1 >= 363 && iParam1 <= 414)
			if (iParam0 == 3880)
				num = 39288 + ((iParam1 - 363) * 3);
			else if (iParam0 == 3881)
				num = 39289 + ((iParam1 - 363) * 3);
			else if (iParam0 == 3882)
				num = 39290 + ((iParam1 - 363) * 3);
		else if (iParam1 >= 415 && iParam1 < 515)
			if (iParam0 == 3880)
				num = 46800 + ((iParam1 - 415) * 3);
			else if (iParam0 == 3881)
				num = 46801 + ((iParam1 - 415) * 3);
			else if (iParam0 == 3882)
				num = 46802 + ((iParam1 - 415) * 3);
		else if (iParam1 >= 515 && iParam1 < 517)
			if (iParam0 == 3880)
				num = 51470 + ((iParam1 - 515) * 3);
			else if (iParam0 == 3881)
				num = 51471 + ((iParam1 - 515) * 3);
			else if (iParam0 == 3882)
				num = 51472 + ((iParam1 - 515) * 3);
		else if (iParam1 >= 517 && iParam1 < 547)
			if (iParam0 == 3880)
				num = 52906 + ((iParam1 - 517) * 3);
			else if (iParam0 == 3881)
				num = 52907 + ((iParam1 - 517) * 3);
			else if (iParam0 == 3882)
				num = 52908 + ((iParam1 - 517) * 3);
	}
	else if (iParam1 < 10)
	{
		num = iParam0 + (iParam1 * (1456 - 1411));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		num = (iParam1 - 10) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 1861;
		else if (iParam0 == 1412)
			num = num + 1862;
		else if (iParam0 == 1441)
			num = num + 1863;
		else if (iParam0 == 1442)
			num = num + 1864;
		else if (iParam0 == 1443)
			num = num + 1865;
		else if (iParam0 == 1445)
			num = num + 1866;
		else if (iParam0 == 1447)
			num = num + 1867;
		else if (iParam0 == 1448)
			num = num + 1868;
		else if (iParam0 == 1449)
			num = num + 1869;
		else if (iParam0 == 1450)
			num = num + 1870;
		else if (iParam0 == 1451)
			num = num + 1871;
		else if (iParam0 == 1452)
			num = num + 1872;
		else if (iParam0 == 1453)
			num = num + 1873;
		else if (iParam0 == 1454)
			num = num + 1874;
		else if (iParam0 == 1455)
			num = num + 1875;
	}
	else if (iParam1 < 23)
	{
		num = 1906 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 13) * (1456 - 1411));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		num = (iParam1 - 23) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 2356;
		else if (iParam0 == 1412)
			num = num + 2357;
		else if (iParam0 == 1441)
			num = num + 2358;
		else if (iParam0 == 1442)
			num = num + 2359;
		else if (iParam0 == 1443)
			num = num + 2360;
		else if (iParam0 == 1445)
			num = num + 2361;
		else if (iParam0 == 1447)
			num = num + 2362;
		else if (iParam0 == 1448)
			num = num + 2363;
		else if (iParam0 == 1449)
			num = num + 2364;
		else if (iParam0 == 1450)
			num = num + 2365;
		else if (iParam0 == 1451)
			num = num + 2366;
		else if (iParam0 == 1452)
			num = num + 2367;
		else if (iParam0 == 1453)
			num = num + 2368;
		else if (iParam0 == 1454)
			num = num + 2369;
		else if (iParam0 == 1455)
			num = num + 2370;
	}
	else if (iParam1 < 36)
	{
		num = 2405 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 26) * (1456 - 1411));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		num = (iParam1 - 36) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 2855;
		else if (iParam0 == 1412)
			num = num + 2856;
		else if (iParam0 == 1441)
			num = num + 2857;
		else if (iParam0 == 1442)
			num = num + 2858;
		else if (iParam0 == 1443)
			num = num + 2859;
		else if (iParam0 == 1445)
			num = num + 2860;
		else if (iParam0 == 1447)
			num = num + 2861;
		else if (iParam0 == 1448)
			num = num + 2862;
		else if (iParam0 == 1449)
			num = num + 2863;
		else if (iParam0 == 1450)
			num = num + 2864;
		else if (iParam0 == 1451)
			num = num + 2865;
		else if (iParam0 == 1452)
			num = num + 2866;
		else if (iParam0 == 1453)
			num = num + 2867;
		else if (iParam0 == 1454)
			num = num + 2868;
		else if (iParam0 == 1455)
			num = num + 2869;
	}
	else if (iParam1 < 49)
	{
		num = 5360 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 39) * (1456 - 1411));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		num = (iParam1 - 49) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 5810;
		else if (iParam0 == 1412)
			num = num + 5811;
		else if (iParam0 == 1441)
			num = num + 5812;
		else if (iParam0 == 1442)
			num = num + 5813;
		else if (iParam0 == 1443)
			num = num + 5814;
		else if (iParam0 == 1445)
			num = num + 5815;
		else if (iParam0 == 1447)
			num = num + 5816;
		else if (iParam0 == 1448)
			num = num + 5817;
		else if (iParam0 == 1449)
			num = num + 5818;
		else if (iParam0 == 1450)
			num = num + 5819;
		else if (iParam0 == 1451)
			num = num + 5820;
		else if (iParam0 == 1452)
			num = num + 5821;
		else if (iParam0 == 1453)
			num = num + 5822;
		else if (iParam0 == 1454)
			num = num + 5823;
		else if (iParam0 == 1455)
			num = num + 5824;
	}
	else if (iParam1 < 62)
	{
		num = 6654 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 52) * (1456 - 1411));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		num = (iParam1 - 62) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 7104;
		else if (iParam0 == 1412)
			num = num + 7105;
		else if (iParam0 == 1441)
			num = num + 7106;
		else if (iParam0 == 1442)
			num = num + 7107;
		else if (iParam0 == 1443)
			num = num + 7108;
		else if (iParam0 == 1445)
			num = num + 7109;
		else if (iParam0 == 1447)
			num = num + 7110;
		else if (iParam0 == 1448)
			num = num + 7111;
		else if (iParam0 == 1449)
			num = num + 7112;
		else if (iParam0 == 1450)
			num = num + 7113;
		else if (iParam0 == 1451)
			num = num + 7114;
		else if (iParam0 == 1452)
			num = num + 7115;
		else if (iParam0 == 1453)
			num = num + 7116;
		else if (iParam0 == 1454)
			num = num + 7117;
		else if (iParam0 == 1455)
			num = num + 7118;
	}
	else if (iParam1 < 85)
	{
		num = 8162 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 65) * (1456 - 1411));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		num = (iParam1 - 85) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 9062;
		else if (iParam0 == 1412)
			num = num + 9063;
		else if (iParam0 == 1441)
			num = num + 9064;
		else if (iParam0 == 1442)
			num = num + 9065;
		else if (iParam0 == 1443)
			num = num + 9066;
		else if (iParam0 == 1445)
			num = num + 9067;
		else if (iParam0 == 1447)
			num = num + 9068;
		else if (iParam0 == 1448)
			num = num + 9069;
		else if (iParam0 == 1449)
			num = num + 9070;
		else if (iParam0 == 1450)
			num = num + 9071;
		else if (iParam0 == 1451)
			num = num + 9072;
		else if (iParam0 == 1452)
			num = num + 9073;
		else if (iParam0 == 1453)
			num = num + 9074;
		else if (iParam0 == 1454)
			num = num + 9075;
		else if (iParam0 == 1455)
			num = num + 9076;
	}
	else if (iParam1 < func_0xBF02E7FB(11, -1))
	{
		num = 11234 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - func_0xBF02E7FB(7, -1)) * (1456 - 1411));
	}
	else if (iParam1 <= 157)
	{
		num = 11234 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - func_0xBF02E7FB(7, -1)) * (1456 - 1411));
	}
	else if (iParam1 == 158)
	{
		num = 15306 - 1411;
		num = num + iParam0;
	}
	else if (iParam1 < 184)
	{
		num = 16661 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 159) * (1456 - 1411));
	}
	else if (iParam1 < 194)
	{
		num = 18403 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 184) * (1456 - 1411));
	}
	else if (iParam1 < 231)
	{
		num = 19907 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 194) * (1456 - 1411));
	}
	else if (iParam1 < 261)
	{
		num = 22915 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 231) * (1456 - 1411));
	}
	else if (iParam1 < 271)
	{
		num = 25779 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 261) * (1456 - 1411));
	}
	else if (iParam1 < 281)
	{
		num = 27499 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 271) * (1456 - 1411));
	}
	else if (iParam1 < 291)
	{
		num = 28484 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 281) * (1456 - 1411));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		num = (iParam1 - 291) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 28934;
		else if (iParam0 == 1412)
			num = num + 28935;
		else if (iParam0 == 1441)
			num = num + 28936;
		else if (iParam0 == 1442)
			num = num + 28937;
		else if (iParam0 == 1443)
			num = num + 28938;
		else if (iParam0 == 1445)
			num = num + 28939;
		else if (iParam0 == 1447)
			num = num + 28940;
		else if (iParam0 == 1448)
			num = num + 28941;
		else if (iParam0 == 1449)
			num = num + 28942;
		else if (iParam0 == 1450)
			num = num + 28943;
		else if (iParam0 == 1451)
			num = num + 28944;
		else if (iParam0 == 1452)
			num = num + 28945;
		else if (iParam0 == 1453)
			num = num + 28946;
		else if (iParam0 == 1454)
			num = num + 28947;
		else if (iParam0 == 1455)
			num = num + 28948;
	}
	else if (iParam1 < 304)
	{
		num = 28979 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 294) * (1456 - 1411));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		num = (iParam1 - 304) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 29429;
		else if (iParam0 == 1412)
			num = num + 29430;
		else if (iParam0 == 1441)
			num = num + 29431;
		else if (iParam0 == 1442)
			num = num + 29432;
		else if (iParam0 == 1443)
			num = num + 29433;
		else if (iParam0 == 1445)
			num = num + 29434;
		else if (iParam0 == 1447)
			num = num + 29435;
		else if (iParam0 == 1448)
			num = num + 29436;
		else if (iParam0 == 1449)
			num = num + 29437;
		else if (iParam0 == 1450)
			num = num + 29438;
		else if (iParam0 == 1451)
			num = num + 29439;
		else if (iParam0 == 1452)
			num = num + 29440;
		else if (iParam0 == 1453)
			num = num + 29441;
		else if (iParam0 == 1454)
			num = num + 29442;
		else if (iParam0 == 1455)
			num = num + 29443;
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		num = 30708 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 307) * (1456 - 1411));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		num = 32476 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 317) * (1456 - 1411));
	}
	else if (iParam1 < 347)
	{
		num = 34878 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 337) * (1456 - 1411));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		num = (iParam1 - 347) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 35328;
		else if (iParam0 == 1412)
			num = num + 35329;
		else if (iParam0 == 1441)
			num = num + 35330;
		else if (iParam0 == 1442)
			num = num + 35331;
		else if (iParam0 == 1443)
			num = num + 35332;
		else if (iParam0 == 1445)
			num = num + 35333;
		else if (iParam0 == 1447)
			num = num + 35334;
		else if (iParam0 == 1448)
			num = num + 35335;
		else if (iParam0 == 1449)
			num = num + 35336;
		else if (iParam0 == 1450)
			num = num + 35337;
		else if (iParam0 == 1451)
			num = num + 35338;
		else if (iParam0 == 1452)
			num = num + 35339;
		else if (iParam0 == 1453)
			num = num + 35340;
		else if (iParam0 == 1454)
			num = num + 35341;
		else if (iParam0 == 1455)
			num = num + 35342;
	}
	else if (iParam1 < 360)
	{
		num = 35373 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 350) * (1456 - 1411));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		num = (iParam1 - 360) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 35823;
		else if (iParam0 == 1412)
			num = num + 35824;
		else if (iParam0 == 1441)
			num = num + 35825;
		else if (iParam0 == 1442)
			num = num + 35826;
		else if (iParam0 == 1443)
			num = num + 35827;
		else if (iParam0 == 1445)
			num = num + 35828;
		else if (iParam0 == 1447)
			num = num + 35829;
		else if (iParam0 == 1448)
			num = num + 35830;
		else if (iParam0 == 1449)
			num = num + 35831;
		else if (iParam0 == 1450)
			num = num + 35832;
		else if (iParam0 == 1451)
			num = num + 35833;
		else if (iParam0 == 1452)
			num = num + 35834;
		else if (iParam0 == 1453)
			num = num + 35835;
		else if (iParam0 == 1454)
			num = num + 35836;
		else if (iParam0 == 1455)
			num = num + 35837;
	}
	else if (iParam1 >= 363 && iParam1 <= 414)
	{
		num = 36948 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 363) * (1456 - 1411));
	}
	else if (iParam1 >= 415 && iParam1 < 515)
	{
		num = 42300 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 415) * (1456 - 1411));
	}
	else if (iParam1 >= 515 && iParam1 < 517)
	{
		num = 51380 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 515) * (1456 - 1411));
	}
	else if (iParam1 >= 517 && iParam1 < 547)
	{
		num = 51556 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 517) * (1456 - 1411));
	}

	return num;
}

BOOL func_0xA8BA5EA5(int iParam0)
{
	if (iParam0 >= 415 && iParam0 < 515)
		return true;

	if (iParam0 >= 532 && iParam0 < 537)
		return true;

	return false;
}

void func_0x19042A21(int iParam0, var uParam1)
{
	int i;

	*uParam1 = -1;

	if (iParam0 >= 0)
	{
		for (i = 0; i < 547; i = i + 1)
		{
			if (iParam0 == /*Global_1938043*/property_garage[i] - 1)
			{
				*uParam1 = i;
				return;
			}
		}
	}

	return;
}

void func_0x600984A8(int iParam0, var uParam1, BOOL bParam2)
{
	if (/*Global_262145*/g_sMPTunables.f_10652)
		*uParam1 = iParam0;

	if (iParam0 >= 0)
	{
		*uParam1 = /*Global_1938043*/property_garage[iParam0] - 1;
	
		if (bParam2)
			MISC::GET_FRAME_COUNT() % 5 == 0;
	}
	else
	{
		*uParam1 = -1;
	}

	return;
}

BOOL func_0xB4817385(Player plParam0)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return IS_BIT_SET(/*Global_4718592*/g_FMMC_STRUCT.f_180467.f_14, 12);

	if (plParam0 != -1)
		return IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_393, 31);

	return false;
}

void func_0x19AE1E6(Vehicle veParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, BOOL bParam11)
{
	int _int;
	var unk;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_0x4712D70B();
	
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) != 0)
			VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1586535[iParam1].f_104), 12);
			MISC::CLEAR_BIT(&(Global_1586535[iParam1].f_104), 15);
			MISC::CLEAR_BIT(&(Global_1586535[iParam1].f_104), 2);
			MISC::CLEAR_BIT(&(Global_1586535[iParam1].f_104), 8);
			MISC::CLEAR_BIT(&(Global_1586535[iParam1].f_104), 9);
			func_0xBACE8D9C();
			func_0x5F4E437C(iParam1, true);
			Global_1950353 = 1;
		}
	
		func_0xE5420B0D(veParam0, &Global_1586535[iParam1], bParam5);
		Global_1586535[iParam1].f_70 = 1;
	
		if (bParam11)
			MISC::SET_BIT(&(Global_1586535[iParam1].f_104), 4);
	
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1586535[iParam1].f_104), 1);
			MISC::CLEAR_BIT(&(Global_1586535[iParam1].f_104), 6);
			MISC::CLEAR_BIT(&(Global_1586535[iParam1].f_104), 7);
		}
	
		if (bParam3)
			MISC::CLEAR_BIT(&(Global_1586535[iParam1].f_104), 0);
		else
			MISC::SET_BIT(&(Global_1586535[iParam1].f_104), 0);
	
		if (bParam4)
			func_0xF5516843(iParam1);
	
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1586535[iParam1].f_104), 15);
			MISC::SET_BIT(&(Global_1586535[iParam1].f_104), 2);
		}
	
		if (bParam7)
		{
			switch (iParam10)
			{
				case 0:
					MISC::SET_BIT(&(Global_1586535[iParam1].f_104), 27);
					break;
			
				case 1:
					MISC::SET_BIT(&(Global_1586535[iParam1].f_104), 28);
					break;
			
				case 2:
					break;
			}
		}
	
		if (bParam8)
			MISC::SET_BIT(&(Global_1586535[iParam1].f_104), 13);
	
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
		{
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
			{
				_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
			
				if (IS_BIT_SET(_int, 3))
					MISC::SET_BIT(&(Global_1586535[iParam1].f_104), 2);
			}
		}
	
		if (VEHICLE::GET_VEHICLE_MOD_KIT(veParam0) >= 0)
		{
			func_0x4455160E(&veParam0, &(Global_1586535[iParam1].f_9), &(Global_1586535[iParam1].f_59));
		
			if (func_0xB7CA8BAB(iParam1, &unk))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == veParam0)
					/*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[func_0xF9396AAC()].f_593.f_86 = iParam1 + 1;
			
				MISC::SET_BIT(&(Global_1586535[iParam1].f_104), 25);
				MISC::CLEAR_BIT(&(Global_1586535[iParam1].f_104), 26);
			}
		}
	
		/*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[func_0xF9396AAC()].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_0x545987EB(iParam1, &Global_1586535[iParam1], false, iParam9, false, false);
	}

	return;
}

BOOL func_0xB7CA8BAB(int iParam0, var uParam1)
{
	int num;

	*uParam1 = -1;
	num = 0;

	if (iParam0 >= 0 && iParam0 <= 9)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 13 && iParam0 <= 22)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 26 && iParam0 <= 35)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 39 && iParam0 <= 48)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 52 && iParam0 <= 61)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 65 && iParam0 <= 74 || iParam0 >= 75 && iParam0 <= 84)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 88 && iParam0 <= 107 || iParam0 >= 108 && iParam0 <= 127 || iParam0 >= 128 && iParam0 <= 147 || iParam0 >= 148 && iParam0 <= 155)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 20;

	if (iParam0 >= 179 && iParam0 <= 185)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;

	if (iParam0 >= 191 && iParam0 <= 221)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;

	if (iParam0 >= 227 && iParam0 <= 235)
		*uParam1 = iParam0 - num;

	num = num + 1;

	if (iParam0 >= 237 && iParam0 <= 245)
		*uParam1 = iParam0 - num;

	num = num + 1;

	if (iParam0 >= 247 && iParam0 <= 255)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;

	if (iParam0 >= 258 && iParam0 <= 267)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;

	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return false;
	}

	return *uParam1 != -1;
}

int func_0x4455160E(var uParam0, var uParam1, var uParam2)
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21 || modType == 22)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

void func_0xF5516843(int iParam0)
{
	/*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[func_0xF9396AAC()].f_681.f_2 = iParam0;
	return;
}

void func_0xE5420B0D(Vehicle veParam0, var uParam1, BOOL bParam2)
{
	int _int;

	func_0x27A94625(uParam1);

	if (bParam2)
	{
		uParam1->f_104 = 0;
		uParam1->f_106 = 0;
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_107), "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_123), "", 64);
		uParam1->f_141 = 0;
		uParam1->f_139 = -1;
		uParam1->f_140 = -1;
		uParam1->f_142 = NETWORK::GET_CLOUD_TIME_AS_INT();
	
		if (/*Global_262145*/g_sMPTunables.f_11118)
			MISC::SET_BIT(&(uParam1->f_104), 22);
	}

	if (func_0x76592EF4(veParam0, 0))
	{
		func_0xE1646B0A();
		MISC::SET_BIT(&(uParam1->f_104), 3);
	}

	func_0x43F88F3F(veParam0, uParam1);

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
	{
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
		{
			_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
		
			if (IS_BIT_SET(_int, 3))
				MISC::SET_BIT(&(uParam1->f_104), 2);
		}
	}

	if (IS_BIT_SET(uParam1->f_104, 8))
	{
		!func_0x3805EC88(veParam0);
	}
	else if (func_0x3805EC88(veParam0))
	{
		MISC::SET_BIT(&(uParam1->f_104), 8);
		MISC::SET_BIT(&(uParam1->f_104), 9);
	}

	return;
}

BOOL func_0x3805EC88(Vehicle veParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0) || func_0xEA0FEEFD(veParam0))
			return true;

	return false;
}

BOOL func_0xEA0FEEFD(Vehicle veParam0)
{
	int _int;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
			{
				_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
				return IS_BIT_SET(_int, 16);
			}
		}
	}

	return false;
}

void func_0x43F88F3F(Vehicle veParam0, var uParam1)
{
	Player player;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_0x5E84B52A(veParam0, uParam1);
		MISC::CLEAR_BIT(&(uParam1->f_95), 0);
	
		if (IS_BIT_SET(uParam1->f_77, 11))
			MISC::SET_BIT(&(uParam1->f_95), 0);
	
		if (func_0x3805EC88(veParam0))
			MISC::SET_BIT(&(uParam1->f_95), 0);
	
		if (func_0x5F209CA0(veParam0))
			MISC::SET_BIT(&(uParam1->f_95), 0);
	
		if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0) && !VEHICLE::GET_DRIFT_TYRES_SET(veParam0))
			uParam1->f_102 = 2;
		else if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			uParam1->f_102 = 1;
		else if (VEHICLE::GET_DRIFT_TYRES_SET(veParam0))
			uParam1->f_102 = 3;
	
		if (uParam1->f_70 == 0)
			uParam1->f_70 = 1;
	
		if (func_0x60F4FB46(ENTITY::GET_ENTITY_MODEL(veParam0)) && !func_0xE48228D0(ENTITY::GET_ENTITY_MODEL(veParam0)))
			if (func_0xA4424D45(veParam0))
				MISC::SET_BIT(&(uParam1->f_103), 0);
			else
				MISC::CLEAR_BIT(&(uParam1->f_103), 0);
		else
			MISC::CLEAR_BIT(&(uParam1->f_103), 0);
	
		uParam1->f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(veParam0);
		uParam1->f_79 = AUDIO::GET_VEHICLE_HORN_SOUND_INDEX(veParam0);
		uParam1->f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(veParam0);
		VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(veParam0, &(uParam1->f_97));
		VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(veParam0, &(uParam1->f_99));
		uParam1->f_98 = VEHICLE::GET_VEHICLE_LIVERY2(veParam0);
		player = func_0x6F5C16(veParam0, &(uParam1->f_94), &(uParam1->f_96));
		MISC::CLEAR_BIT(&(uParam1->f_95), 3);
	
		if (!(player == _INVALID_PLAYER_INDEX()))
		{
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(player, &(uParam1->f_81), 13);
			MISC::SET_BIT(&(uParam1->f_95), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 1);
		}
	
		if (player == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(uParam1->f_95), 2);
		
			if (uParam1->f_94 == 1)
				if (func_0xFBF8DA3E(veParam0))
					MISC::SET_BIT(&(uParam1->f_95), 3);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 2);
		}
	
		if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("deathbike2")))
			uParam1->f_99 = func_0xA6768D0E(func_0x8C841BCD(uParam1->f_74, uParam1->f_75, uParam1->f_76));
	}

	return;
}

var func_0xA6768D0E(int iParam0)
{
	var unk;
	int num;

	num = func_0xACC8EE50(iParam0);
	func_0x39DFC5A3(num, &unk);
	return unk;
}

BOOL func_0x39DFC5A3(int iParam0, var uParam1)
{
	*uParam1 = -1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
	
		case 1:
			*uParam1 = 5;
			break;
	
		case 2:
			*uParam1 = 6;
			break;
	
		case 3:
			*uParam1 = 7;
			break;
	
		case 4:
			*uParam1 = 111;
			break;
	
		case 5:
			*uParam1 = 112;
			break;
	
		case 6:
			*uParam1 = 107;
			break;
	
		case 7:
			*uParam1 = 104;
			break;
	
		case 8:
			*uParam1 = 98;
			break;
	
		case 9:
			*uParam1 = 100;
			break;
	
		case 10:
			*uParam1 = 102;
			break;
	
		case 11:
			*uParam1 = 99;
			break;
	
		case 12:
			*uParam1 = 105;
			break;
	
		case 13:
			*uParam1 = 106;
			break;
	
		case 14:
			*uParam1 = 37;
			break;
	
		case 15:
			*uParam1 = 90;
			break;
	
		case 16:
			*uParam1 = 88;
			break;
	
		case 17:
			*uParam1 = 89;
			break;
	
		case 18:
			*uParam1 = 91;
			break;
	
		case 19:
			*uParam1 = 38;
			break;
	
		case 20:
			*uParam1 = 138;
			break;
	
		case 21:
			*uParam1 = 36;
			break;
	
		case 22:
			*uParam1 = 27;
			break;
	
		case 23:
			*uParam1 = 28;
			break;
	
		case 24:
			*uParam1 = 29;
			break;
	
		case 25:
			*uParam1 = 150;
			break;
	
		case 26:
			*uParam1 = 30;
			break;
	
		case 27:
			*uParam1 = 31;
			break;
	
		case 28:
			*uParam1 = 32;
			break;
	
		case 29:
			*uParam1 = 35;
			break;
	
		case 30:
			*uParam1 = 135;
			break;
	
		case 31:
			*uParam1 = 137;
			break;
	
		case 32:
			*uParam1 = 136;
			break;
	
		case 33:
			*uParam1 = 71;
			break;
	
		case 34:
			*uParam1 = 145;
			break;
	
		case 35:
			*uParam1 = 63;
			break;
	
		case 36:
			*uParam1 = 64;
			break;
	
		case 37:
			*uParam1 = 65;
			break;
	
		case 38:
			*uParam1 = 66;
			break;
	
		case 39:
			*uParam1 = 67;
			break;
	
		case 40:
			*uParam1 = 68;
			break;
	
		case 41:
			*uParam1 = 69;
			break;
	
		case 42:
			*uParam1 = 73;
			break;
	
		case 43:
			*uParam1 = 70;
			break;
	
		case 44:
			*uParam1 = 74;
			break;
	
		case 45:
			*uParam1 = 51;
			break;
	
		case 46:
			*uParam1 = 53;
			break;
	
		case 47:
			*uParam1 = 54;
			break;
	
		case 48:
			*uParam1 = 92;
			break;
	}

	return *uParam1 != -1;
}

int func_0xACC8EE50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 36;
	
		case 2:
			return 35;
	
		case 3:
			return 46;
	
		case 4:
			return 48;
	
		case 5:
			return 16;
	
		case 6:
			return 14;
	
		case 7:
			return 19;
	
		case 8:
			return 22;
	
		case 9:
			return 31;
	
		case 10:
			return 30;
	
		case 11:
			return 33;
	
		case 12:
			return 34;
	
		default:
		
	}

	return 0;
}

int func_0x8C841BCD(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 222 && iParam1 == 222 && iParam2 == 255)
		return 0;

	if (iParam0 == 2 && iParam1 == 21 && iParam2 == 255)
		return 1;

	if (iParam0 == 3 && iParam1 == 83 && iParam2 == 255)
		return 2;

	if (iParam0 == 0 && iParam1 == 255 && iParam2 == 140)
		return 3;

	if (iParam0 == 94 && iParam1 == 255 && iParam2 == 1)
		return 4;

	if (iParam0 == 255 && iParam1 == 255 && iParam2 == 0)
		return 5;

	if (iParam0 == 255 && iParam1 == 150 && iParam2 == 5)
		return 6;

	if (iParam0 == 255 && iParam1 == 62 && iParam2 == 0)
		return 7;

	if (iParam0 == 255 && iParam1 == 1 && iParam2 == 1)
		return 8;

	if (iParam0 == 255 && iParam1 == 50 && iParam2 == 100)
		return 9;

	if (iParam0 == 255 && iParam1 == 5 && iParam2 == 190)
		return 10;

	if (iParam0 == 35 && iParam1 == 1 && iParam2 == 255)
		return 11;

	if (iParam0 == 15 && iParam1 == 3 && iParam2 == 255)
		return 12;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_0x285908BA() && Global_1576240)
		if (iParam0 == Global_1576241 && iParam1 == Global_1576242 && iParam2 == Global_1576243)
			return 13;

	return 0;
}

BOOL func_0x285908BA()
{
	var gamerHandle;

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN() && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			gamerHandle = { GET_LOCAL_GAMER_HANDLE() };
		
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
				return true;
		}
	}

	return false;
}

struct<13> GET_LOCAL_GAMER_HANDLE()
{
	var gamerHandle;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
	return gamerHandle;
}

BOOL func_0xFBF8DA3E(Vehicle veParam0)
{
	if (/*Global_2739811*/MPGlobalsAmbience.f_301 == veParam0)
		return true;

	return false;
}

Player func_0x6F5C16(Vehicle veParam0, var uParam1, var uParam2)
{
	Ped pedInVehicleSeat;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (func_0x83A76AF3(veParam0, true))
		{
			*uParam1 = 1;
		
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", INT))
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "PV_Slot"))
					*uParam2 = DECORATOR::DECOR_GET_INT(veParam0, "PV_Slot");
		
			return func_0x4C550963(veParam0);
		}
		else if (func_0xAD0E45D0(veParam0, true))
		{
			return func_0x72DDEAAD(veParam0, true, 0);
		}
		else if (func_0xF70B7684(veParam0, true))
		{
			return func_0xF1D9036(veParam0, true, 0);
		}
		else if (func_0x2E1719E8(veParam0, true))
		{
			return func_0x942E8541(veParam0, true, 0);
		}
		else if (func_0x2C8AA8B(veParam0, true))
		{
			return func_0xAFB47B57(veParam0, true, 0);
		}
		else if (func_0xD89B7AD9(veParam0, true))
		{
			*uParam1 = 2;
			return func_0x40CF5F26(veParam0);
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, -1, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			{
				if (PED::IS_PED_A_PLAYER(pedInVehicleSeat))
				{
					*uParam1 = 3;
					return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedInVehicleSeat);
				}
			}
		}
	}

	*uParam1 = 4;
	return PLAYER::PLAYER_ID();
}

Player func_0x40CF5F26(Vehicle veParam0)
{
	Hash _int;

	_int = DECORATOR::DECOR_GET_INT(veParam0, "Veh_Modded_By_Player");
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

BOOL func_0xD89B7AD9(Vehicle veParam0, BOOL bParam1)
{
	if (/*Global_79539*/g_bInMultiplayer)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Veh_Modded_By_Player"))
				return true;

	return false;
}

Player func_0xAFB47B57(Vehicle veParam0, BOOL bParam1, Player plParam2)
{
	Hash _int;

	if (!func_0x2C8AA8B(veParam0, true))
		return _INVALID_PLAYER_INDEX();

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		_int = DECORATOR::DECOR_GET_INT(veParam0, "Player_Support_Bike_Vehicle");
		return func_0xF94387FF(_int, false, bParam1, plParam2);
	}

	return _INVALID_PLAYER_INDEX();
}

BOOL func_0x2C8AA8B(Vehicle veParam0, BOOL bParam1)
{
	if (/*Global_79539*/g_bInMultiplayer)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Support_Bike_Vehicle"))
				return true;

	return false;
}

Player func_0x942E8541(Vehicle veParam0, BOOL bParam1, Player plParam2)
{
	Hash _int;

	if (!func_0x2E1719E8(veParam0, true))
		return _INVALID_PLAYER_INDEX();

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		_int = DECORATOR::DECOR_GET_INT(veParam0, "Player_Acid_Lab");
		return func_0xF94387FF(_int, false, bParam1, plParam2);
	}

	return _INVALID_PLAYER_INDEX();
}

BOOL func_0x2E1719E8(Vehicle veParam0, BOOL bParam1)
{
	if (/*Global_79539*/g_bInMultiplayer)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Acid_Lab"))
				return true;

	return false;
}

Player func_0xF1D9036(Vehicle veParam0, BOOL bParam1, Player plParam2)
{
	Hash _int;

	if (!func_0xF70B7684(veParam0, true))
		return _INVALID_PLAYER_INDEX();

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		_int = DECORATOR::DECOR_GET_INT(veParam0, "Player_Hacker_Truck");
		return func_0xF94387FF(_int, false, bParam1, plParam2);
	}

	return _INVALID_PLAYER_INDEX();
}

BOOL func_0xF70B7684(Vehicle veParam0, BOOL bParam1)
{
	if (/*Global_79539*/g_bInMultiplayer)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Hacker_Truck"))
				return true;

	return false;
}

Player func_0x72DDEAAD(Vehicle veParam0, BOOL bParam1, Player plParam2)
{
	Hash _int;

	if (!func_0xAD0E45D0(veParam0, true))
		return _INVALID_PLAYER_INDEX();

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		_int = DECORATOR::DECOR_GET_INT(veParam0, "Player_Truck");
		return func_0xF94387FF(_int, false, bParam1, plParam2);
	}

	return _INVALID_PLAYER_INDEX();
}

BOOL func_0xAD0E45D0(Vehicle veParam0, BOOL bParam1)
{
	if (/*Global_79539*/g_bInMultiplayer)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Truck"))
				return true;

	return false;
}

Player func_0x4C550963(Vehicle veParam0)
{
	Hash _int;

	if (!func_0x83A76AF3(veParam0, true))
		return _INVALID_PLAYER_INDEX();

	_int = DECORATOR::DECOR_GET_INT(veParam0, "Player_Vehicle");
	return func_0xF94387FF(_int, false, true, 0);
}

BOOL func_0xA4424D45(Vehicle veParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (func_0x60F4FB46(ENTITY::GET_ENTITY_MODEL(veParam0)))
		return func_0xF0C2BD94(veParam0);

	return false;
}

BOOL func_0xF0C2BD94(Vehicle veParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", BOOL))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MLJ"))
				return 1;

	return 0;
}

BOOL func_0xE48228D0(Hash hParam0)
{
	switch (hParam0)
	{
		case 1484920335:
			return true;
	}

	return false;
}

BOOL func_0x60F4FB46(Hash hParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	switch (hParam0)
	{
		case joaat("feltzer3"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 0);
	
		case joaat("comet5"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 1);
	
		case joaat("bati2"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 2);
	
		case joaat("stingergt"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 3);
	
		case joaat("sanchez"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 4);
	
		case joaat("sanchez2"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 5);
	
		case joaat("infernus"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 6);
	
		case joaat("cog55"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 7);
	
		case joaat("ninef"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 8);
	
		case joaat("ninef2"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 9);
	
		case joaat("cheburek"):
		case -1466692365:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 10);
	
		case joaat("savestra"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 11);
	
		case joaat("xa21"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 12);
	
		case joaat("s80"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 13);
	
		case joaat("double"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 14);
	
		case joaat("buffalo2"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 15);
	
		case joaat("ztype"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 16);
	
		case joaat("cog552"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 17);
	
		case joaat("baller5"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 18);
	
		case joaat("bati"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 19);
	
		case -1233767450:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 20);
	
		case 1737348074:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 21);
	
		case joaat("weevil2"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 22);
	
		case joaat("zentorno"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 23);
	
		case joaat("jester4"):
		case joaat("driftjester"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 24);
	
		case joaat("le7b"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 25);
	
		case joaat("dukes2"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 26);
	
		case -1249788006:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 27);
	
		case -1933242328:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 28);
	
		case joaat("caracara2"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 29);
	
		case joaat("comet7"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36136, 30);
	
		case joaat("futo2"):
		case joaat("driftfuto"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 0);
	
		case joaat("manchez2"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 1);
	
		case joaat("zombieb"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 2);
	
		case joaat("shotaro"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 3);
	
		case -223461503:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 4);
	
		case joaat("Police5"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 5);
	
		case 1249425552:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 6);
	
		case 1452003510:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 7);
	
		case joaat("rumpo3"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 8);
	
		case joaat("gauntlet4"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 9);
	
		case joaat("comet6"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 10);
	
		case joaat("krieger"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 11);
	
		case joaat("vigero2"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 12);
	
		case -1948949064:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 13);
	
		case -1321131184:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 14);
	
		case 2042703219:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 15);
	
		case 1891140410:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 16);
	
		case joaat("zorrusso"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 17);
	
		case joaat("tigon"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 18);
	
		case joaat("cyclone"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 19);
	
		case joaat("neo"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 20);
	
		case joaat("locust"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 21);
	
		case 1484920335:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 22);
	
		case 1992041063:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 23);
	
		case joaat("jb7002"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 24);
	
		case 127317925:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 25);
	
		case joaat("URANUS"):
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 26);
	
		case -973016778:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 27);
	
		case -660007725:
			return IS_BIT_SET(*/*Global_262145*/g_sMPTunables.f_36137, 28);
	
		default:
		
	}

	return false;
}

BOOL func_0x5F209CA0(Vehicle veParam0)
{
	int vehicleCrewEmblemRequestState;
	int networkTime;
	int num;
	int num2;

	vehicleCrewEmblemRequestState = 0;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		vehicleCrewEmblemRequestState = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);

	if (vehicleCrewEmblemRequestState == 1 || vehicleCrewEmblemRequestState == 2)
	{
		if (vehicleCrewEmblemRequestState == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				networkTime = NETWORK::GET_NETWORK_TIME();
			else
				networkTime = MISC::GET_GAME_TIMER();
		
			num = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(networkTime, Global_1577965));
			num2 = 20000;
		
			if (/*Global_1836691*/g_b_On_Race)
				num2 = 2000;
		
			if (num > num2)
			{
				GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(veParam0);
				func_0x778D3D77(veParam0);
				return false;
			}
		}
	
		return true;
	}

	return false;
}

void func_0x778D3D77(Vehicle veParam0)
{
	int _int;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
				_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");

	if (!IS_BIT_SET(_int, 16))
	{
		MISC::SET_BIT(&_int, 16);
		DECORATOR::DECOR_SET_INT(veParam0, "MPBitset", _int);
	}

	return;
}

void func_0x5E84B52A(Vehicle veParam0, var uParam1)
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_0xB95AF921(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_0x4455160E(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_0xEE599357(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_0xEE599357(int iParam0)
{
	switch (iParam0)
	{
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
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

void func_0xE1646B0A()
{
	int i;

	for (i = 0; i < 547; i = i + 1)
	{
		if (IS_BIT_SET(Global_1586535[i].f_104, 3))
			MISC::CLEAR_BIT(&(Global_1586535[i].f_104), 3);
	}

	return;
}

BOOL func_0x76592EF4(Vehicle veParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (iParam1 == 0)
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", INT))
					if (DECORATOR::DECOR_EXIST_ON(veParam0, "bombdec1"))
						return true;
			else if (iParam1 == 1)
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", INT))
					if (DECORATOR::DECOR_EXIST_ON(veParam0, "bombdec"))
						return true;

	return false;
}

void func_0x5F4E437C(int iParam0, BOOL bParam1)
{
	int i;

	if (bParam1)
	{
		for (i = 0; i < 39; i = i + 1)
		{
			if (/*Global_2739811*/MPGlobalsAmbience.f_2377[i].f_40 == iParam0)
				func_0x5F4E437C(i, false);
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&/*Global_2739811*/MPGlobalsAmbience.f_2377[iParam0], "", 24);
		/*Global_2739811*/MPGlobalsAmbience.f_2377[iParam0].f_6 = 138;
		TEXT_LABEL_ASSIGN_STRING(&(/*Global_2739811*/MPGlobalsAmbience.f_2377[iParam0].f_7), "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(/*Global_2739811*/MPGlobalsAmbience.f_2377[iParam0].f_23), "", 64);
		/*Global_2739811*/MPGlobalsAmbience.f_2377[iParam0].f_39 = -1;
		/*Global_2739811*/MPGlobalsAmbience.f_2377[iParam0].f_40 = -1;
		_STOPWATCH_DESTROY(&(/*Global_2739811*/MPGlobalsAmbience.f_2377[iParam0].f_41));
		/*Global_2739811*/MPGlobalsAmbience.f_2377[iParam0].f_43 = 0;
	}

	return;
}

void func_0xBACE8D9C()
{
	func_0x5248DE9B(10);
	return;
}

void func_0x5248DE9B(int iParam0)
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_1836859.f_5[num], offset);
	return;
}

void func_0x4712D70B()
{
	/*Global_2672939*/MPGlobals.f_63.f_74 = 0;
	func_0xE0BC02E(25);
	func_0xE0BC02E(24);
	return;
}

void func_0xE0BC02E(int iParam0)
{
	if (iParam0 < 32)
		if (IS_BIT_SET(/*Global_2672939*/MPGlobals.f_63.f_1, iParam0))
			MISC::CLEAR_BIT(&(/*Global_2672939*/MPGlobals.f_63.f_1), iParam0);
	else if (IS_BIT_SET(/*Global_2672939*/MPGlobals.f_63.f_2, iParam0 - 32))
		MISC::CLEAR_BIT(&(/*Global_2672939*/MPGlobals.f_63.f_2), iParam0 - 32);

	return;
}

void func_0x194A5900(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
		return;

	if (func_0xA8BA5EA5(iParam0))
		return;

	if (func_0xA8BA5EA5(iParam1))
		return;

	iParam1 = iParam1 + 1;
	func_0xC2687FE5(iParam0, iParam1, iParam2);

	if (iParam0 >= 547)
		return;

	if (iParam2 == func_0x47FF56D2() || iParam2 == -1)
		/*Global_1938043*/property_garage[iParam0] = iParam1;

	return;
}

void func_0xC2687FE5(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_0x4C8CAB3D(func_0x34E4AA84(iParam0), iParam1, iParam2);
		func_0x4C8CAB3D(func_0x458C602E(iParam0), 0, iParam2);
		func_0x4C8CAB3D(func_0x647BE23A(iParam0), 0, iParam2);
		return;
	}
	else
	{
		func_0x4C8CAB3D(func_0x34E4AA84(iParam0), 255, iParam2);
	}

	if (iParam1 <= 510)
	{
		func_0x4C8CAB3D(func_0x458C602E(iParam0), iParam1 - 255, iParam2);
		func_0x4C8CAB3D(func_0x647BE23A(iParam0), 0, iParam2);
		return;
	}
	else
	{
		func_0x4C8CAB3D(func_0x458C602E(iParam0), 255, iParam2);
	}

	if (iParam1 <= 765)
		func_0x4C8CAB3D(func_0x647BE23A(iParam0), iParam1 - 510, iParam2);

	return;
}

int func_0x647BE23A(int iParam0)
{
	if (iParam0 < 515)
		return 50500 + iParam0;
	else if (iParam0 < 517)
		return (51544 + iParam0) - 515;
	else if (iParam0 < 547)
		return (54016 + iParam0) - 517;

	return 50500 + iParam0;
}

int func_0x458C602E(int iParam0)
{
	if (iParam0 < 261)
		return 24625 + iParam0;
	else if (iParam0 < 271)
		return (26349 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28069 + iParam0) - 271;
	else if (iParam0 < 307)
		return (30200 + iParam0) - 281;
	else if (iParam0 < 317)
		return (31548 + iParam0) - 307;
	else if (iParam0 < 337)
		return (34096 + iParam0) - 317;
	else if (iParam0 < 363)
		return (36594 + iParam0) - 337;
	else if (iParam0 <= 414)
		return (41160 + iParam0) - 363;
	else if (iParam0 < 515)
		return (50400 + iParam0) - 415;
	else if (iParam0 < 517)
		return (51542 + iParam0) - 515;
	else if (iParam0 < 547)
		return (53986 + iParam0) - 517;

	return 24625 + iParam0;
}

int func_0x34E4AA84(int iParam0)
{
	if (iParam0 < 158)
		if (iParam0 <= 38)
			return 4036 + iParam0;
		else if (iParam0 <= 48)
			return (5905 + iParam0) - 39;
		else if (iParam0 <= 51)
			return (6025 + iParam0) - 49;
		else if (iParam0 <= 64)
			return (7199 + iParam0) - 52;
		else if (iParam0 <= 87)
			return (9207 + iParam0) - 65;
		else
			return (14734 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15356;
	else if (iParam0 < 261)
		if (iParam0 < 184)
			return (17911 + iParam0) - 159;
		else if (iParam0 < 194)
			return (18903 + iParam0) - 184;
		else if (iParam0 < 231)
			return (21757 + iParam0) - 194;
		else
			return (24595 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26339 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28059 + iParam0) - 271;
	else if (iParam0 < 307)
		return (30174 + iParam0) - 281;
	else if (iParam0 < 317)
		return (31538 + iParam0) - 307;
	else if (iParam0 < 337)
		return (34076 + iParam0) - 317;
	else if (iParam0 < 363)
		return (36568 + iParam0) - 337;
	else if (iParam0 <= 414)
		return (41108 + iParam0) - 363;
	else if (iParam0 < 515)
		return (50300 + iParam0) - 415;
	else if (iParam0 < 517)
		return (51540 + iParam0) - 515;
	else if (iParam0 < 547)
		return (53956 + iParam0) - 517;

	return 4036 + iParam0;
}

BOOL func_0xA8BA5EA5(int iParam0)
{
	if (iParam0 >= 415 && iParam0 < 515)
		return true;

	if (iParam0 >= 532 && iParam0 < 537)
		return true;

	return false;
}

BOOL func_0x87E3A365(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6)
{
	float x;
	var unk3;
	int i;
	int num;
	int num2;

	STREAMING::REQUEST_MODEL(uParam2->f_66);

	if (!STREAMING::HAS_MODEL_LOADED(uParam2->f_66))
		return false;

	x = { _GET_PLAYER_COORDS(PLAYER::GET_PLAYER_INDEX()) };
	*uParam3 = VEHICLE::CREATE_VEHICLE(uParam2->f_66, x, x.f_1, x.f_2 + 200f, 0f, false, false, false);
	unk3.f_9 = 49;
	unk3.f_59 = 2;
	unk3.f_78 = -1;
	unk3.f_79 = -1;
	unk3.f_96 = -1;
	unk3.f_97 = 1;
	unk3.f_99 = 132;
	unk3.f_100 = -1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_0x5E84B52A(*uParam3, &unk3);
	else
		func_0x43F88F3F(*uParam3, &unk3);

	if (bParam5)
		uParam2->f_77 = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (IS_BIT_SET(unk3.f_77, func_0xEE599357(i + 1)))
			MISC::SET_BIT(&(uParam2->f_77), func_0xEE599357(i + 1));
		else
			MISC::CLEAR_BIT(&(uParam2->f_77), func_0xEE599357(i + 1));
	}

	if (bParam6)
	{
		if (iParam0 == -1)
		{
			if (func_0xFE274898(uParam2->f_66, 0))
			{
				num = func_0xBD50253F(uParam2->f_66, -1);
			
				if (num != 0)
					iParam0 = func_0x2D543B60(num);
			}
		}
	}

	if (iParam0 == -1 && func_0x5000025C(uParam2->f_66))
	{
		num2 = func_0xBA965109(uParam2->f_66);
	
		if (num2 != 0)
			iParam0 = func_0x2D543B60(num2);
	}

	func_0x1A4F9FED(iParam0, &(uParam2->f_77));

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_0x3234A2AB(*uParam3, uParam2, false, true);
	else
		func_0x39770099(*uParam3, uParam2, true, true, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		ENTITY::FREEZE_ENTITY_POSITION(*uParam3, true);
		ENTITY::SET_ENTITY_VISIBLE(*uParam3, false, false);
		ENTITY::SET_ENTITY_COLLISION(*uParam3, false, false);
	}

	*uParam4 = func_0x2758D2FB(iParam0, iParam1, Global_78230);
	return true;
}

int func_0x2758D2FB(int iParam0, int iParam1, int iParam2)
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

	num = func_0xE1D12727(iParam0, -1);

	if (iParam0 == 164)
	{
		if (iParam2 == 2)
			return 1;
	
		return 0;
	}

	if (iParam0 == 276)
	{
		if (iParam2 == 2)
			return 1;
	
		return 0;
	}

	if (iParam0 == 95)
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			return 1;
	
		return 0;
	}
	else if (iParam0 == 96 || iParam0 == 97 || iParam0 == 98)
	{
		if (func_0x2DA9F6D6())
			return 1;
	
		return 0;
	}

	if (iParam0 == 206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0 == 207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0 == 208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0 == 209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return 1;
	
		return 0;
	}

	if (iParam0 == 170 || iParam0 == 120 || iParam0 == 119 || iParam0 == 117 || iParam0 == 166)
		return 1;

	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
			return 1;
	
		return 0;
	}

	if (func_0x4AE5394C(iParam0))
	{
		if (Global_78231)
			return 1;
	
		return 0;
	}

	num2 = func_0xF1FFC7F3(num);

	if (num2 != -1)
	{
		if (func_0x9D9CC255(func_0xFF0A3BFD(num)))
			return 1;
	
		return 0;
	}

	if (func_0x88F491DA(iParam0))
	{
		if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
		{
			if (iParam0 == 205 && /*Global_262145*/g_sMPTunables.f_19962 || iParam0 != 205 && /*Global_262145*/g_sMPTunables.f_19961)
				return 1;
		
			return 0;
		}
	
		return 0;
	}

	if (func_0xEA94180C(iParam0))
	{
		if (func_0xCCFF5DD8(iParam0))
			return 0;
	
		return 1;
	}

	num3 = func_0x2AAFEA47(num);

	if (num3 != -1)
	{
		if (func_0x9D9CC255(func_0x5F0525E(num)))
			return 1;
	
		return 0;
	}

	num4 = func_0x3DDB3BFB(num);

	if (num4 > 0)
	{
		if (func_0x8F5125C5(num))
			return 1;
	
		return 0;
	}

	num5 = func_0xEE599357(num);

	if (num5 != -1)
	{
		if (func_0x81B1B98C(num))
			return 1;
	
		return 0;
	}

	num6 = func_0x2AAFEA47(num);

	if (num6 != -1)
	{
		if (func_0xE53900A8(num))
			return 1;
	
		return 0;
	}

	num7 = func_0xAFBAC931(num);

	if (num7 != -1)
	{
		if (func_0x2B126847(num))
			return 1;
	
		return 0;
	}

	if (num == joaat("firetruk") || num == joaat("boxville") || num == joaat("stockade"))
	{
		if (func_0xED8023F5(num))
			return 0;
	
		return 1;
	}

	num8 = func_0xEE599357(num);

	if (num8 != -1)
	{
		if (func_0xED8023F5(num))
			return 1;
	
		return 0;
	}

	num9 = func_0xEE599357(num);

	if (num9 != -1)
	{
		if (func_0x9E8E0444(num))
			return 1;
	
		return 0;
	}

	num10 = func_0xAFBAC931(num);

	if (num10 != -1)
	{
		if (func_0x5DA07871(num))
			return 1;
	
		return 0;
	}

	num11 = func_0x17D48B45(num);

	if (num11 != -1)
	{
		if (func_0xF01A40B0(num))
			return 1;
	
		return 0;
	}

	num12 = func_0xCE9E6BDF(num);

	if (num12 != -1)
	{
		if (func_0x22D766A3(num))
			return 1;
	
		return 0;
	}

	num13 = func_0xCBE7BE7C(num);

	if (num13 != -1 || num == -1576586413)
	{
		if (func_0xDF32335C(num))
			return 1;
	
		return 0;
	}

	num14 = func_0xE569D241(num);

	if (num14 != -1)
	{
		if (func_0x2BCE241E(num))
			return 1;
	
		return 0;
	}

	if (num == joaat("riot") || num == -842765535 || num == 728350375)
	{
		if (func_0xA2F85ED3(num))
			return 0;
	
		return 1;
	}

	num15 = func_0x3841B42D(num);

	if (num15 != -1)
	{
		if (func_0xA2F85ED3(num))
			return 1;
	
		return 0;
	}

	num16 = func_0x3841B42D(num);

	if (num16 != -1)
	{
		if (func_0xC61EC99(num))
			return 1;
	
		return 0;
	}

	num17 = func_0xAFBAC931(num);

	if (num17 != -1)
	{
		if (func_0xFE55C623(num))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_0xFE55C623(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	switch (iParam0)
	{
		case joaat("taco"):
			return _STAT_GET_PACKED_BOOL(42288, -1) || IS_BIT_SET(Global_78318, 9);
	
		case -1948949064:
			return _STAT_GET_PACKED_BOOL(28272, -1) && _STAT_GET_PACKED_BOOL(42289, -1) || IS_BIT_SET(Global_78318, 10);
	
		case -1321131184:
			return _STAT_GET_PACKED_BOOL(28272, -1) && _STAT_GET_PACKED_BOOL(42288, -1) || IS_BIT_SET(Global_78318, 11);
	
		case 2042703219:
			return _STAT_GET_PACKED_BOOL(28272, -1) && func_0x5137F6D6(137, -1) >= 10 || IS_BIT_SET(Global_78318, 12);
	
		case 1891140410:
			return _STAT_GET_PACKED_BOOL(28272, -1) && _STAT_GET_PACKED_BOOL(42016, -1) || IS_BIT_SET(Global_78318, 13);
	
		case joaat("predator"):
			return func_0x450FD245(PLAYER::PLAYER_ID(), 0) || IS_BIT_SET(Global_78318, 14);
	
		case joaat("cargobob5"):
			return _STAT_GET_PACKED_BOOL(51283, -1) || IS_BIT_SET(Global_78318, 15);
	
		case 858355070:
			return _STAT_GET_PACKED_BOOL(51285, -1) || IS_BIT_SET(Global_78318, 16);
	
		case 84351789:
			return _STAT_GET_PACKED_BOOL(54637, -1) || IS_BIT_SET(Global_78318, 17);
	
		case -536105557:
			return _STAT_GET_PACKED_BOOL(54638, -1) || IS_BIT_SET(Global_78318, 18);
	
		default:
		
	}

	return false;
}

BOOL func_0x450FD245(Player plParam0, int iParam1)
{
	if (func_0x6A46C9B4(plParam0))
	{
		switch (iParam1)
		{
			case 0:
				return IS_BIT_SET(Global_1976576[plParam0].f_111, 5);
		
			case 1:
				return IS_BIT_SET(Global_1976576[plParam0].f_111, 7);
		
			case 2:
				return IS_BIT_SET(Global_1976576[plParam0].f_111, 9);
		
			case 3:
				return IS_BIT_SET(Global_1976576[plParam0].f_111, 11);
		
			default:
			
		}
	}

	return false;
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

int func_0xAFBAC931(int iParam0)
{
	switch (iParam0)
	{
		case joaat("taco"):
			return 0;
	
		case -1948949064:
			return 1;
	
		case -1321131184:
			return 2;
	
		case 2042703219:
			return 3;
	
		case 1891140410:
			return 4;
	
		case joaat("predator"):
			return 5;
	
		case joaat("cargobob5"):
			return 6;
	
		case 858355070:
			return 7;
	
		case 84351789:
			return 8;
	
		case -536105557:
			return 9;
	
		default:
		
	}

	return -1;
}

BOOL func_0xC61EC99(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	switch (iParam0)
	{
		case -773802025:
			return _STAT_GET_PACKED_BOOL(42281, -1) || IS_BIT_SET(Global_78317, 28);
	
		case -1628000569:
			return _STAT_GET_PACKED_BOOL(42282, -1) || IS_BIT_SET(Global_78317, 29);
	
		case 1737348074:
			return func_0x5137F6D6(137, func_0x47FF56D2()) >= 5 || IS_BIT_SET(Global_78317, 30);
	
		case 1249425552:
			return _STAT_GET_PACKED_BOOL(42283, -1) || IS_BIT_SET(Global_78317, 31);
	
		case 1452003510:
			return _STAT_GET_PACKED_BOOL(42284, -1) || IS_BIT_SET(Global_78318, 0);
	
		case 1968807591:
			return _STAT_GET_PACKED_BOOL(42280, -1) || IS_BIT_SET(Global_78318, 1);
	
		default:
		
	}

	return false;
}

int func_0x3841B42D(int iParam0)
{
	switch (iParam0)
	{
		case -773802025:
			return 0;
	
		case -1628000569:
			return 1;
	
		case 1737348074:
			return 2;
	
		case 1249425552:
			return 3;
	
		case 1452003510:
			return 4;
	
		case 1968807591:
			return 5;
	
		default:
		
	}

	return -1;
}

int func_0x3841B42D(int iParam0)
{
	switch (iParam0)
	{
		case -1233767450:
			return 0;
	
		case joaat("police4"):
			return 1;
	
		case joaat("Police5"):
			return 2;
	
		case joaat("riot"):
			return 3;
	
		case -842765535:
			return 4;
	
		case 728350375:
			return 5;
	
		default:
		
	}

	return -1;
}

BOOL func_0xA2F85ED3(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	switch (iParam0)
	{
		case -1233767450:
			return func_0x15F41A9(true) || IS_BIT_SET(Global_78317, 18);
	
		case joaat("police4"):
			return func_0x57E551BE(1, false, true) || IS_BIT_SET(Global_78317, 20);
	
		case joaat("Police5"):
			return func_0x2F3FC5BE() || _STAT_GET_PACKED_BOOL(41942, -1) || IS_BIT_SET(Global_78317, 21);
	
		case joaat("riot"):
			return _STAT_GET_PACKED_BOOL(42123, -1) || IS_BIT_SET(Global_78317, 22);
	
		case -842765535:
			return _STAT_GET_PACKED_BOOL(42233, -1) || IS_BIT_SET(Global_78317, 23);
	
		case 728350375:
			return _STAT_GET_PACKED_BOOL(42234, -1) || IS_BIT_SET(Global_78317, 24);
	
		default:
		
	}

	return false;
}

BOOL func_0x2F3FC5BE()
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_0xD87940C7(i))
			return true;
	}

	return false;
}

BOOL func_0xD87940C7(int iParam0)
{
	return _STAT_GET_PACKED_BOOL(func_0x9B99B9EE(iParam0), -1);
}

int func_0x9B99B9EE(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 32319;
	
		case 1:
			return 32320;
	
		case 2:
			return 32321;
	
		case 3:
			return 32322;
	
		case 4:
			return 32323;
	
		default:
		
	}

	return 54820;
}

BOOL func_0x57E551BE(int iParam0, BOOL bParam1, BOOL bParam2)
{
	if (bParam1)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(12033, -1), func_0x21E181EE(iParam0, bParam2));

	return func_0x11C5DA27(PLAYER::PLAYER_ID(), iParam0, bParam2);
}

BOOL func_0x11C5DA27(Player plParam0, int iParam1, BOOL bParam2)
{
	if (func_0x6A46C9B4(plParam0))
		return IS_BIT_SET(Global_1976576[plParam0].f_71, func_0x21E181EE(iParam1, bParam2));

	return false;
}

// Unhandled jump detected. Output should be considered invalid
int func_0x21E181EE(int iParam0, BOOL bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 1;
		
			case 1:
				return 2;
		
			case 2:
				return 3;
		
			case 3:
				return 4;
		
			case 4:
				return 5;
		
			default:
				goto 0x82;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 6;
		
			case 1:
				return 7;
		
			case 2:
				return 8;
		
			case 3:
				return 9;
		
			case 4:
				return 10;
		
			default:
			
		}
	}

	return -1;
}

BOOL func_0x15F41A9(BOOL bParam0)
{
	if (bParam0)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(12033, -1), 12);

	return func_0x7185D758(PLAYER::PLAYER_ID());
}

BOOL func_0x7185D758(Player plParam0)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1976576[plParam0].f_71, 12);

	return false;
}

BOOL func_0x2BCE241E(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	switch (iParam0)
	{
		case 239897677:
			return func_0x9E830671(2, true, true) || IS_BIT_SET(Global_78317, 15);
	
		case joaat("squaddie"):
			return _STAT_GET_PACKED_BOOL(41656, -1) || IS_BIT_SET(Global_78317, 16);
	
		case joaat("manchez2"):
			return _STAT_GET_PACKED_BOOL(41671, -1) || IS_BIT_SET(Global_78317, 17);
	
		default:
		
	}

	return false;
}

BOOL func_0x9E830671(int iParam0, BOOL bParam1, BOOL bParam2)
{
	if (bParam2)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(11950, -1), func_0xE862C961(iParam0, bParam1));

	return func_0x62A50335(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

BOOL func_0x62A50335(Player plParam0, int iParam1, BOOL bParam2)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1976576[plParam0].f_60.f_1, func_0xE862C961(iParam1, bParam2));

	return false;
}

// Unhandled jump detected. Output should be considered invalid
int func_0xE862C961(int iParam0, BOOL bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
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
		
			default:
				goto 0x97;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 6;
		
			case 1:
				return 7;
		
			case 2:
				return 8;
		
			case 3:
				return 9;
		
			case 4:
				return 10;
		
			case 5:
				return 11;
		
			default:
			
		}
	}

	return -1;
}

int func_0xE569D241(int iParam0)
{
	switch (iParam0)
	{
		case 239897677:
			return 0;
	
		case joaat("squaddie"):
			return 1;
	
		case joaat("manchez2"):
			return 2;
	
		default:
		
	}

	return -1;
}

BOOL func_0xDF32335C(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	switch (iParam0)
	{
		case -1627077503:
			return func_0x2A5561CE(0, false) || IS_BIT_SET(Global_78317, 3);
	
		case -1035489563:
			return func_0x2A5561CE(4, false) || IS_BIT_SET(Global_78317, 4);
	
		case 669204833:
			return func_0x2A5561CE(10, false) || IS_BIT_SET(Global_78317, 5);
	
		case joaat("hotring"):
			return GET_MP_INT_CHARACTER_STAT(11845, -1) >= 10 || IS_BIT_SET(Global_78317, 6);
	
		case -131348178:
			return GET_MP_INT_CHARACTER_STAT(11845, -1) >= 20 || IS_BIT_SET(Global_78317, 7);
	
		case joaat("taxi"):
			return func_0x5137F6D6(158, -1) || IS_BIT_SET(Global_78317, 8);
	
		case -1576586413:
			return func_0x119B6B9F(false) || IS_BIT_SET(Global_78317, 9);
	
		default:
		
	}

	return false;
}

BOOL func_0x119B6B9F(BOOL bParam0)
{
	if (bParam0)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(10872, -1), 0);

	return func_0x1A59581C(PLAYER::PLAYER_ID());
}

BOOL func_0x1A59581C(Player plParam0)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1976576[plParam0].f_57.f_2, 0);

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

BOOL func_0x2A5561CE(int iParam0, BOOL bParam1)
{
	if (bParam1)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(12462, -1), func_0xFD9D1331(iParam0, true));

	return func_0xE415E602(PLAYER::PLAYER_ID(), iParam0);
}

BOOL func_0xE415E602(Player plParam0, int iParam1)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1976576[plParam0].f_57, func_0xFD9D1331(iParam1, true));

	return false;
}

// Unhandled jump detected. Output should be considered invalid
int func_0xFD9D1331(int iParam0, BOOL bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
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
				return 9;
		
			case 10:
				return 10;
		
			default:
				goto 0x105;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 11;
		
			case 1:
				return 12;
		
			case 2:
				return 13;
		
			case 3:
				return 14;
		
			case 4:
				return 15;
		
			case 5:
				return 16;
		
			case 6:
				return 17;
		
			case 7:
				return 18;
		
			case 8:
				return 19;
		
			case 9:
				return 20;
		
			case 10:
				return 21;
		
			default:
			
		}
	}

	return -1;
}

int func_0xCBE7BE7C(int iParam0)
{
	switch (iParam0)
	{
		case -1627077503:
			return 0;
	
		case -1035489563:
			return 1;
	
		case 669204833:
			return 2;
	
		case joaat("hotring"):
			return 3;
	
		case -131348178:
			return 4;
	
		case joaat("taxi"):
			return 5;
	
		case -1576586413:
			return 6;
	
		default:
		
	}

	return -1;
}

BOOL func_0x22D766A3(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	switch (iParam0)
	{
		case joaat("kanjosj"):
			return _STAT_GET_PACKED_BOOL(34373, -1) || IS_BIT_SET(Global_78317, 10);
	
		case joaat("postlude"):
			return _STAT_GET_PACKED_BOOL(34374, -1) || IS_BIT_SET(Global_78317, 11);
	
		case joaat("greenwood"):
			return func_0xF8812672(0) || IS_BIT_SET(Global_78317, 12);
	
		case joaat("draugur"):
			return _STAT_GET_PACKED_BOOL(32366, -1) || func_0x9E830671(0, true, true) || IS_BIT_SET(Global_78317, 13);
	
		case joaat("conada"):
			return func_0xF8812672(5) || IS_BIT_SET(Global_78317, 14);
	
		default:
		
	}

	return false;
}

BOOL func_0xF8812672(int iParam0)
{
	return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(10394, -1), func_0x70D62DB7(iParam0, true));
}

// Unhandled jump detected. Output should be considered invalid
int func_0x70D62DB7(int iParam0, BOOL bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
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
		
			default:
				goto 0x98;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 7;
		
			case 1:
				return 8;
		
			case 2:
				return 9;
		
			case 3:
				return 10;
		
			case 4:
				return 11;
		
			case 5:
				return 12;
		
			default:
			
		}
	}

	return -1;
}

int func_0xCE9E6BDF(int iParam0)
{
	switch (iParam0)
	{
		case joaat("kanjosj"):
			return 0;
	
		case joaat("postlude"):
			return 1;
	
		case joaat("greenwood"):
			return 2;
	
		case joaat("draugur"):
			return 3;
	
		case joaat("conada"):
			return 4;
	
		default:
		
	}

	return -1;
}

BOOL func_0xF01A40B0(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	switch (iParam0)
	{
		case joaat("buffalo4"):
			return func_0xBBF82663() || IS_BIT_SET(Global_78316, 28);
	
		case joaat("granger2"):
			return func_0x90BEEB25(true) >= 5 || IS_BIT_SET(Global_78316, 29);
	
		case joaat("deity"):
			return func_0x90BEEB25(true) >= 10 || IS_BIT_SET(Global_78316, 30);
	
		case joaat("patriot3"):
			return func_0x90BEEB25(true) >= 15 || IS_BIT_SET(Global_78316, 31);
	
		case joaat("jubilee"):
			return func_0x90BEEB25(true) >= 20 || IS_BIT_SET(Global_78317, 0);
	
		case joaat("champion"):
			return func_0x7A476D65(11, true) || func_0x45A12DE4(true) || IS_BIT_SET(Global_78317, 1);
	
		case joaat("baller7"):
			return func_0x45A12DE4(true) || IS_BIT_SET(Global_78317, 2);
	
		default:
		
	}

	return false;
}

BOOL func_0x45A12DE4(BOOL bParam0)
{
	if (bParam0)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(9905, -1), 2);

	return func_0xD91A323(PLAYER::PLAYER_ID());
}

BOOL func_0xD91A323(Player plParam0)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1976576[plParam0].f_27, 2);

	return false;
}

BOOL func_0x7A476D65(int iParam0, BOOL bParam1)
{
	if (bParam1)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(9907, -1), iParam0);

	return func_0xAEDCE2CA(PLAYER::PLAYER_ID(), iParam0);
}

BOOL func_0xAEDCE2CA(Player plParam0, int iParam1)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1976576[plParam0].f_27.f_3, iParam1);

	return false;
}

int func_0x90BEEB25(BOOL bParam0)
{
	if (bParam0)
		return GET_MP_INT_CHARACTER_STAT(9910, -1);

	return func_0x2AAD45D5(PLAYER::PLAYER_ID());
}

int func_0x2AAD45D5(Player plParam0)
{
	if (plParam0 != -1)
		return Global_1976576[plParam0].f_27.f_8;

	return 0;
}

BOOL func_0xBBF82663()
{
	return GET_MP_INT_CHARACTER_STAT(9903, GET_SLOT_NUMBER(-1)) != 0;
}

int func_0x17D48B45(int iParam0)
{
	switch (iParam0)
	{
		case joaat("baller7"):
			return 0;
	
		case joaat("buffalo4"):
			return 1;
	
		case joaat("champion"):
			return 2;
	
		case joaat("deity"):
			return 3;
	
		case joaat("granger2"):
			return 4;
	
		case joaat("jubilee"):
			return 5;
	
		case joaat("mule5"):
			return 6;
	
		case joaat("patriot3"):
			return 7;
	
		case joaat("youga4"):
			return 8;
	
		default:
		
	}

	return -1;
}

BOOL func_0x5DA07871(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	switch (iParam0)
	{
		case joaat("euros"):
			return func_0xC05BBF25(PLAYER::PLAYER_ID()) || IS_BIT_SET(Global_78316, 0);
	
		case joaat("tailgater2"):
			return func_0x79E26E1F(PLAYER::PLAYER_ID()) || IS_BIT_SET(Global_78316, 1);
	
		case joaat("zr350"):
			return _STAT_GET_PACKED_BOOL(31810, -1) || IS_BIT_SET(Global_78316, 2);
	
		case joaat("comet6"):
			return _STAT_GET_PACKED_BOOL(31811, -1) || IS_BIT_SET(Global_78316, 3);
	
		case joaat("jester4"):
			return _STAT_GET_PACKED_BOOL(31812, -1) || IS_BIT_SET(Global_78316, 4);
	
		case joaat("vectre"):
			return _STAT_GET_PACKED_BOOL(31813, -1) || IS_BIT_SET(Global_78316, 5);
	
		case joaat("cypher"):
			return _STAT_GET_PACKED_BOOL(31814, -1) || IS_BIT_SET(Global_78316, 6);
	
		case joaat("growler"):
			return _STAT_GET_PACKED_BOOL(31815, -1) || IS_BIT_SET(Global_78316, 7);
	
		case joaat("calico"):
			return _STAT_GET_PACKED_BOOL(31816, -1) || IS_BIT_SET(Global_78316, 8);
	
		case joaat("remus"):
			return _STAT_GET_PACKED_BOOL(31817, -1) || IS_BIT_SET(Global_78316, 9);
	
		case joaat("dominator7"):
			return _STAT_GET_PACKED_BOOL(31818, -1) || IS_BIT_SET(Global_78316, 10);
	
		case joaat("futo2"):
			return _STAT_GET_PACKED_BOOL(31819, -1) || IS_BIT_SET(Global_78316, 11);
	
		case joaat("rt3000"):
			return _STAT_GET_PACKED_BOOL(31820, -1) || IS_BIT_SET(Global_78316, 12);
	
		case joaat("warrener2"):
			return _STAT_GET_PACKED_BOOL(31821, -1) || IS_BIT_SET(Global_78316, 13);
	
		case joaat("sultan3"):
			return _STAT_GET_PACKED_BOOL(31822, -1) || IS_BIT_SET(Global_78316, 14);
	
		case joaat("dominator8"):
			return _STAT_GET_PACKED_BOOL(31823, -1) || IS_BIT_SET(Global_78316, 15);
	
		case joaat("previon"):
			return _STAT_GET_PACKED_BOOL(31824, -1) || IS_BIT_SET(Global_78316, 16);
	
		case joaat("kanjosj"):
			return _STAT_GET_PACKED_BOOL(34373, -1) || IS_BIT_SET(Global_78316, 17);
	
		case joaat("postlude"):
			return _STAT_GET_PACKED_BOOL(34374, -1) || IS_BIT_SET(Global_78316, 18);
	
		default:
		
	}

	return false;
}

BOOL func_0x79E26E1F(Player plParam0)
{
	if (plParam0 == PLAYER::PLAYER_ID())
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(9618, -1), 0);

	if (plParam0 != -1)
		return IS_BIT_SET(Global_1976576[plParam0].f_1, 0);

	return false;
}

BOOL func_0xC05BBF25(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		if (IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_492.f_2, 17))
			return true;
	
		if (plParam0 == PLAYER::PLAYER_ID())
			return GET_MP_INT_CHARACTER_STAT(9631, -1) != 0;
	}

	return false;
}

int func_0xAFBAC931(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zr350"):
			return 0;
	
		case joaat("comet6"):
			return 1;
	
		case joaat("jester4"):
			return 2;
	
		case joaat("vectre"):
			return 3;
	
		case joaat("cypher"):
			return 4;
	
		case joaat("tailgater2"):
			return 5;
	
		case joaat("euros"):
			return 6;
	
		case joaat("growler"):
			return 7;
	
		case joaat("calico"):
			return 8;
	
		case joaat("remus"):
			return 9;
	
		case joaat("dominator7"):
			return 10;
	
		case joaat("futo2"):
			return 11;
	
		case joaat("rt3000"):
			return 12;
	
		case joaat("warrener2"):
			return 13;
	
		case joaat("sultan3"):
			return 14;
	
		case joaat("dominator8"):
			return 15;
	
		case joaat("previon"):
			return 16;
	
		default:
		
	}

	return -1;
}

BOOL func_0x9E8E0444(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	switch (iParam0)
	{
		case joaat("winky"):
			if (func_0xCF604538(PLAYER::PLAYER_ID(), 0) || func_0x9D2FA4AB(false) || IS_BIT_SET(Global_78316, 19))
				return true;
			break;
	
		case joaat("brioso2"):
			if (func_0x23C83125(PLAYER::PLAYER_ID()) || IS_BIT_SET(Global_78316, 20))
				return true;
			break;
	
		case joaat("vetir"):
			if (func_0x5137F6D6(281, -1) || IS_BIT_SET(Global_78316, 21))
				return true;
			break;
	
		case joaat("longfin"):
			if (func_0x5137F6D6(282, -1) || IS_BIT_SET(Global_78316, 22))
				return true;
			break;
	
		case joaat("annihilator2"):
			if (func_0x5137F6D6(283, -1) || IS_BIT_SET(Global_78316, 23))
				return true;
			break;
	
		case joaat("alkonost"):
			if (func_0x5137F6D6(284, -1) || IS_BIT_SET(Global_78316, 24))
				return true;
			break;
	
		case joaat("patrolboat"):
			if (func_0x5137F6D6(285, -1) || IS_BIT_SET(Global_78316, 25))
				return true;
			break;
	
		case joaat("weevil"):
			if (func_0x7A476D65(0, true) && func_0x7A476D65(1, true) && func_0x7A476D65(2, true) || IS_BIT_SET(Global_78316, 26))
				return true;
			break;
	
		case joaat("italirsx"):
			if (func_0x7A476D65(3, true) || IS_BIT_SET(Global_78316, 27))
				return true;
			break;
	}

	return false;
}

BOOL func_0x7A476D65(int iParam0, BOOL bParam1)
{
	if (bParam1)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(9586, -1), iParam0);

	return func_0xBBA18B03(PLAYER::PLAYER_ID(), iParam0);
}

BOOL func_0xBBA18B03(Player plParam0, int iParam1)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1974391[plParam0].f_3, iParam1);

	return false;
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

BOOL func_0x23C83125(Player plParam0)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1974391[plParam0].f_1, 1);

	return false;
}

BOOL func_0x9D2FA4AB(BOOL bParam0)
{
	if (bParam0)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(9511, -1), 1);

	return func_0x23C83125(PLAYER::PLAYER_ID());
}

BOOL func_0xCF604538(Player plParam0, int iParam1)
{
	if (plParam0 != -1)
		return func_0xBBA18B03(plParam0, func_0xAFBAC931(iParam1));

	return false;
}

BOOL func_0xBBA18B03(Player plParam0, int iParam1)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1974391[plParam0].f_2, iParam1);

	return false;
}

int func_0xAFBAC931(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 7:
			return 1;
	
		case 1:
			return 2;
	
		case 5:
			return 3;
	
		case 2:
			return 4;
	
		case 3:
			return 5;
	
		case 4:
			return 6;
	
		case 6:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 11:
			return 10;
	
		case 12:
			return 11;
	
		case 13:
			return 12;
	
		case 14:
			return 13;
	
		case 15:
			return 14;
	
		case 16:
			return 15;
	
		default:
		
	}

	return -1;
}

int func_0xEE599357(int iParam0)
{
	switch (iParam0)
	{
		case joaat("vetir"):
			return 0;
	
		case joaat("winky"):
			return 1;
	
		case joaat("longfin"):
			return 2;
	
		case joaat("annihilator2"):
			return 3;
	
		case joaat("alkonost"):
			return 4;
	
		case joaat("patrolboat"):
			return 5;
	
		case joaat("brioso2"):
			return 6;
	
		case joaat("weevil"):
			return 7;
	
		case joaat("italirsx"):
			return 8;
	}

	return -1;
}

int func_0xEE599357(int iParam0)
{
	switch (iParam0)
	{
		case joaat("firetruk"):
			return 0;
	
		case joaat("burrito2"):
			return 1;
	
		case joaat("boxville"):
			return 2;
	
		case joaat("stockade"):
			return 3;
	
		case joaat("asbo"):
			return 4;
	
		case joaat("kanjo"):
			return 5;
	
		case joaat("everon"):
			return 6;
	
		case joaat("retinue2"):
			return 7;
	
		case joaat("yosemite2"):
			return 8;
	
		case joaat("sugoi"):
			return 9;
	
		case joaat("sultan2"):
			return 10;
	
		case joaat("outlaw"):
			return 11;
	
		case joaat("vagrant"):
			return 12;
	
		case joaat("komoda"):
			return 13;
	
		case joaat("stryder"):
			return 14;
	
		case joaat("furia"):
			return 15;
	
		case joaat("zhaba"):
			return 16;
	
		case joaat("jugular"):
			return 17;
	
		case joaat("sentinel3"):
			return 18;
	
		case joaat("gauntlet3"):
			return 19;
	
		case joaat("ellie"):
			return 20;
	
		case joaat("defiler"):
			return 21;
	
		case joaat("manchez"):
			return 22;
	}

	return -1;
}

BOOL func_0xED8023F5(int iParam0)
{
	int num;

	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	num = GET_MP_INT_CHARACTER_STAT(8837, -1);

	switch (iParam0)
	{
		case joaat("firetruk"):
			if (IS_BIT_SET(num, 0) || /*Global_262145*/g_sMPTunables.f_28146)
				return true;
			else
				return false;
			break;
	
		case joaat("burrito2"):
			if (IS_BIT_SET(num, 1) || /*Global_262145*/g_sMPTunables.f_28147)
				return true;
			else
				return false;
			break;
	
		case joaat("boxville"):
			if (IS_BIT_SET(num, 2) || /*Global_262145*/g_sMPTunables.f_28148)
				return true;
			else
				return false;
			break;
	
		case joaat("stockade"):
			if (IS_BIT_SET(num, 3) || /*Global_262145*/g_sMPTunables.f_28149)
				return true;
			else
				return false;
			break;
	
		case joaat("asbo"):
			if (IS_BIT_SET(num, 4) || /*Global_262145*/g_sMPTunables.f_28150)
				return true;
			else
				return false;
			break;
	
		case joaat("kanjo"):
			if (IS_BIT_SET(num, 5) || /*Global_262145*/g_sMPTunables.f_28151)
				return true;
			else
				return false;
			break;
	
		case joaat("everon"):
			if (IS_BIT_SET(num, 6) || /*Global_262145*/g_sMPTunables.f_28152)
				return true;
			else
				return false;
			break;
	
		case joaat("retinue2"):
			if (IS_BIT_SET(num, 7) || /*Global_262145*/g_sMPTunables.f_28153)
				return true;
			else
				return false;
			break;
	
		case joaat("yosemite2"):
			if (IS_BIT_SET(num, 8) || /*Global_262145*/g_sMPTunables.f_28154)
				return true;
			else
				return false;
			break;
	
		case joaat("sugoi"):
			if (IS_BIT_SET(num, 9) || /*Global_262145*/g_sMPTunables.f_28155)
				return true;
			else
				return false;
			break;
	
		case joaat("sultan2"):
			if (IS_BIT_SET(num, 10) || /*Global_262145*/g_sMPTunables.f_28156)
				return true;
			else
				return false;
			break;
	
		case joaat("outlaw"):
			if (IS_BIT_SET(num, 11) || /*Global_262145*/g_sMPTunables.f_28157)
				return true;
			else
				return false;
			break;
	
		case joaat("vagrant"):
			if (IS_BIT_SET(num, 12) || /*Global_262145*/g_sMPTunables.f_28158)
				return true;
			else
				return false;
			break;
	
		case joaat("komoda"):
			if (IS_BIT_SET(num, 13) || /*Global_262145*/g_sMPTunables.f_28159)
				return true;
			else
				return false;
			break;
	
		case joaat("stryder"):
			if (IS_BIT_SET(num, 14) || /*Global_262145*/g_sMPTunables.f_28160)
				return true;
			else
				return false;
			break;
	
		case joaat("furia"):
			if (IS_BIT_SET(num, 15) || /*Global_262145*/g_sMPTunables.f_28161)
				return true;
			else
				return false;
			break;
	
		case joaat("zhaba"):
			if (IS_BIT_SET(num, 16) || /*Global_262145*/g_sMPTunables.f_28162)
				return true;
			else
				return false;
			break;
	
		case joaat("jugular"):
			if (IS_BIT_SET(num, 17) || /*Global_262145*/g_sMPTunables.f_28163)
				return true;
			else
				return false;
			break;
	
		case joaat("sentinel3"):
			if (IS_BIT_SET(num, 18) || /*Global_262145*/g_sMPTunables.f_28164)
				return true;
			else
				return false;
			break;
	
		case joaat("gauntlet3"):
			if (IS_BIT_SET(num, 19) || /*Global_262145*/g_sMPTunables.f_28165)
				return true;
			else
				return false;
			break;
	
		case joaat("ellie"):
			if (IS_BIT_SET(num, 20) || /*Global_262145*/g_sMPTunables.f_28166)
				return true;
			else
				return false;
			break;
	
		case joaat("defiler"):
			if (IS_BIT_SET(num, 21) || /*Global_262145*/g_sMPTunables.f_28167)
				return true;
			else
				return false;
			break;
	
		case joaat("manchez"):
			if (IS_BIT_SET(num, 22) || /*Global_262145*/g_sMPTunables.f_28168)
				return true;
			else
				return false;
			break;
	}

	return false;
}

BOOL func_0x2B126847(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	if (iParam0 == joaat("cognoscenti") || iParam0 == joaat("cognoscenti2"))
		return false;

	if (func_0xAFBAC931(iParam0) != -1)
		if (func_0xD87940C7(func_0x274AD2F1(iParam0)))
			return true;
		else
			return false;

	return false;
}

BOOL func_0xD87940C7(int iParam0)
{
	return _STAT_GET_PACKED_BOOL(func_0x28E83966(iParam0), -1);
}

int func_0x28E83966(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
	
		case 9:
			return 24964;
	
		case 10:
			return 24966;
	
		case 11:
			return 24965;
	
		case 12:
			return 24968;
	
		case 13:
			return 25101;
	
		case 14:
			return 24967;
	
		case 15:
			return 25105;
	
		case 16:
			return 25106;
	
		case 20:
			return 25102;
	
		case 21:
			return 25103;
	
		case 22:
			return 25104;
	
		case 102:
			return 24969;
	
		case 17:
			return 25107;
	
		case 18:
			return 25108;
	
		case 19:
			return 25109;
	
		case 103:
			return 24972;
	
		case 104:
			return 24973;
	
		case 105:
			return 24974;
	
		case 106:
			return 24975;
	
		case 107:
			return 24976;
	
		case 108:
			return 24978;
	
		case 109:
			return 24980;
	
		case 110:
			return 24981;
	
		case 111:
			return 24982;
	
		case 112:
			return 24983;
	
		case 113:
			return 24984;
	
		case 114:
			return 24985;
	
		case 115:
			return 24986;
	
		case 116:
			return 24987;
	
		case 117:
			return 24988;
	
		case 118:
			return 24989;
	
		case 119:
			return 24990;
	
		case 120:
			return 24991;
	
		case 0:
			return 24992;
	
		case 1:
			return 24993;
	
		case 2:
			return 24994;
	
		case 3:
			return 24995;
	
		case 4:
			return 24996;
	
		case 5:
			return 24997;
	
		case 6:
			return 24998;
	
		case 7:
			return 24999;
	
		case 127:
			return 25117;
	
		case 128:
			return 25118;
	
		case 23:
			return 25119;
	
		case 139:
			return 25125;
	
		case 140:
			return 25127;
	
		case 141:
			return 25128;
	
		case 27:
			return 25129;
	
		case 160:
			return 25136;
	
		case 161:
			return 25139;
	
		case 162:
			return 25140;
	
		case 31:
			return 25141;
	
		case 181:
			return 25148;
	
		case 182:
			return 25151;
	
		case 183:
			return 25152;
	
		case 35:
			return 25153;
	
		case 193:
			return 25160;
	
		case 194:
			return 25161;
	
		case 39:
			return 25162;
	
		case 206:
			return 25168;
	
		case 207:
			return 25169;
	
		case 208:
			return 25170;
	
		case 209:
			return 25173;
	
		case 210:
			return 25174;
	
		case 43:
			return 25175;
	
		case 234:
			return 25179;
	
		case 235:
			return 25183;
	
		case 236:
			return 25184;
	
		case 47:
			return 25185;
	
		case 248:
			return 25188;
	
		case 249:
			return 25191;
	
		case 250:
			return 25192;
	
		case 51:
			return 25193;
	
		case 259:
			return 25198;
	
		case 260:
			return 25202;
	
		case 261:
			return 25203;
	
		case 55:
			return 25204;
	
		case 274:
			return 25209;
	
		case 275:
			return 25212;
	
		case 276:
			return 25213;
	
		case 59:
			return 25214;
	
		case 284:
			return 25217;
	
		case 285:
			return 25221;
	
		case 286:
			return 25222;
	
		case 63:
			return 25223;
	
		case 307:
			return 25228;
	
		case 308:
			return 24979;
	
		case 309:
			return 25229;
	
		case 310:
			return 25111;
	
		case 67:
			return 25230;
	
		case 68:
			return 25112;
	
		case 72:
			return 25231;
	
		case 73:
			return 25233;
	
		case 74:
			return 25234;
	
		case 75:
			return 25235;
	
		case 76:
			return 25236;
	
		case 77:
			return 25394;
	
		case 121:
			return 25395;
	
		case 122:
			return 25396;
	
		case 123:
			return 25397;
	
		case 124:
			return 25398;
	
		case 125:
			return 25399;
	
		case 126:
			return 25400;
	}

	switch (iParam0)
	{
		case 78:
			return 25244;
	
		case 79:
			return 25245;
	
		case 80:
			return 25246;
	
		case 81:
			return 25247;
	
		case 82:
			return 25248;
	
		case 83:
			return 25249;
	
		case 84:
			return 25250;
	
		case 85:
			return 25000;
	
		case 86:
			return 25251;
	
		case 87:
			return 25252;
	
		case 88:
			return 25253;
	
		case 89:
			return 25254;
	
		case 90:
			return 25255;
	
		case 91:
			return 25256;
	
		case 92:
			return 25257;
	
		case 93:
			return 25258;
	
		case 94:
			return 25259;
	
		case 95:
			return 25260;
	
		case 96:
			return 25261;
	
		case 97:
			return 25262;
	
		case 98:
			return 25263;
	
		case 99:
			return 25264;
	
		case 100:
			return 25225;
	
		case 101:
			return 25178;
	
		case 311:
			return 25265;
	
		case 312:
			return 25266;
	
		case 313:
			return 25267;
	
		case 314:
			return 25268;
	
		case 315:
			return 24977;
	
		case 316:
			return 25269;
	
		case 317:
			return 25270;
	
		case 318:
			return 25271;
	
		case 319:
			return 25272;
	
		case 320:
			return 25273;
	
		case 321:
			return 25274;
	
		case 322:
			return 25275;
	
		case 323:
			return 25276;
	
		case 324:
			return 25277;
	
		case 325:
			return 25278;
	
		case 326:
			return 25279;
	
		case 327:
			return 25280;
	
		case 328:
			return 25281;
	
		case 329:
			return 25282;
	
		case 330:
			return 25283;
	
		case 331:
			return 25284;
	
		case 332:
			return 25285;
	
		case 333:
			return 25286;
	
		case 334:
			return 25287;
	
		case 335:
			return 25288;
	
		case 336:
			return 25289;
	
		case 337:
			return 25290;
	
		case 338:
			return 25291;
	
		case 339:
			return 25292;
	
		case 340:
			return 25293;
	
		case 341:
			return 25294;
	
		case 342:
			return 25295;
	
		case 343:
			return 25296;
	
		case 344:
			return 25297;
	
		case 345:
			return 25298;
	
		case 346:
			return 25299;
	
		case 347:
			return 25300;
	
		case 348:
			return 25301;
	
		case 349:
			return 25302;
	
		case 350:
			return 25303;
	
		case 351:
			return 25304;
	
		case 352:
			return 25305;
	
		case 353:
			return 25306;
	
		case 354:
			return 25307;
	
		case 355:
			return 25308;
	
		case 356:
			return 25309;
	
		case 357:
			return 25310;
	
		case 358:
			return 25311;
	
		case 359:
			return 25312;
	
		case 360:
			return 25313;
	
		case 361:
			return 25314;
	
		case 362:
			return 25315;
	
		case 363:
			return 25316;
	
		case 364:
			return 25317;
	
		case 365:
			return 25318;
	
		case 366:
			return 25319;
	
		case 367:
			return 25320;
	
		case 368:
			return 25321;
	
		case 369:
			return 25322;
	
		case 370:
			return 25323;
	
		case 371:
			return 25324;
	
		case 372:
			return 25325;
	
		case 373:
			return 25326;
	
		case 374:
			return 25327;
	
		case 375:
			return 25328;
	
		case 376:
			return 25329;
	
		case 377:
			return 25330;
	
		case 378:
			return 25331;
	
		case 379:
			return 25332;
	
		case 380:
			return 25333;
	
		case 381:
			return 25334;
	
		case 382:
			return 25335;
	
		case 383:
			return 25336;
	
		case 384:
			return 25337;
	
		case 385:
			return 25338;
	
		case 386:
			return 25339;
	
		case 387:
			return 25340;
	
		case 388:
			return 25341;
	
		case 389:
			return 25342;
	
		case 390:
			return 25343;
	
		case 391:
			return 25344;
	
		case 392:
			return 25345;
	
		case 393:
			return 25346;
	
		case 394:
			return 25347;
	
		case 395:
			return 24970;
	
		case 396:
			return 25348;
	
		case 397:
			return 25349;
	
		case 398:
			return 25350;
	
		case 399:
			return 25351;
	
		case 400:
			return 25352;
	
		case 401:
			return 25353;
	
		case 402:
			return 25354;
	
		case 403:
			return 25355;
	
		case 404:
			return 25356;
	
		case 405:
			return 25357;
	
		case 406:
			return 25358;
	
		case 407:
			return 25359;
	
		case 408:
			return 25360;
	
		case 409:
			return 25361;
	
		case 410:
			return 25362;
	
		case 411:
			return 25363;
	
		case 412:
			return 25364;
	
		case 413:
			return 25365;
	
		case 414:
			return 25366;
	
		case 415:
			return 25367;
	
		case 416:
			return 25368;
	
		case 417:
			return 25369;
	
		case 418:
			return 25370;
	
		case 419:
			return 25371;
	
		case 420:
			return 25373;
	
		case 421:
			return 25374;
	
		case 422:
			return 25375;
	
		case 423:
			return 25377;
	
		case 424:
			return 25378;
	
		case 425:
			return 25379;
	
		case 426:
			return 25382;
	
		case 427:
			return 25383;
	
		case 428:
			return 25386;
	
		case 429:
			return 25390;
	
		case 430:
			return 25391;
	
		case 431:
			return 25392;
	
		case 432:
			return 25393;
	}

	switch (iParam0)
	{
		case 24:
			return 24971;
	
		case 25:
			return 25113;
	
		case 26:
			return 25114;
	
		case 28:
			return 25115;
	
		case 29:
			return 25116;
	
		case 30:
			return 25120;
	
		case 32:
			return 25121;
	
		case 33:
			return 25122;
	
		case 34:
			return 25123;
	
		case 36:
			return 25124;
	
		case 37:
			return 25126;
	
		case 38:
			return 25130;
	
		case 40:
			return 25131;
	
		case 41:
			return 25132;
	
		case 42:
			return 25133;
	
		case 44:
			return 25134;
	
		case 45:
			return 25137;
	
		case 46:
			return 25138;
	
		case 48:
			return 25142;
	
		case 49:
			return 25143;
	
		case 50:
			return 25144;
	
		case 52:
			return 25145;
	
		case 53:
			return 25146;
	
		case 54:
			return 25147;
	
		case 56:
			return 25149;
	
		case 57:
			return 25150;
	
		case 58:
			return 25154;
	
		case 60:
			return 25155;
	
		case 61:
			return 25156;
	
		case 62:
			return 25157;
	
		case 64:
			return 25158;
	
		case 65:
			return 25159;
	
		case 66:
			return 25163;
	
		case 69:
			return 25164;
	
		case 70:
			return 25165;
	
		case 71:
			return 25166;
	
		case 129:
			return 25167;
	
		case 130:
			return 25171;
	
		case 131:
			return 25172;
	
		case 132:
			return 25176;
	
		case 133:
			return 25177;
	
		case 134:
			return 25181;
	
		case 135:
			return 25182;
	
		case 136:
			return 25186;
	
		case 137:
			return 25187;
	
		case 138:
			return 25189;
	
		case 142:
			return 25190;
	
		case 143:
			return 25194;
	
		case 144:
			return 25195;
	
		case 145:
			return 25196;
	
		case 146:
			return 25197;
	
		case 147:
			return 25199;
	
		case 148:
			return 25200;
	
		case 149:
			return 25201;
	
		case 150:
			return 25205;
	
		case 151:
			return 25206;
	
		case 152:
			return 25207;
	
		case 153:
			return 25208;
	
		case 154:
			return 25210;
	
		case 155:
			return 25211;
	
		case 156:
			return 25215;
	
		case 157:
			return 25216;
	
		case 158:
			return 25218;
	
		case 159:
			return 25219;
	
		case 163:
			return 25220;
	
		case 164:
			return 25224;
	
		case 165:
			return 25226;
	
		case 166:
			return 25227;
	
		case 167:
			return 25232;
	
		case 168:
			return 25372;
	
		case 169:
			return 25376;
	
		case 170:
			return 25380;
	
		case 171:
			return 25381;
	
		case 172:
			return 25384;
	
		case 173:
			return 25385;
	
		case 174:
			return 25387;
	
		case 175:
			return 25388;
	
		case 176:
			return 25389;
	
		case 177:
			return 25407;
	
		case 178:
			return 25408;
	
		case 179:
			return 25409;
	
		case 180:
			return 25410;
	
		case 184:
			return 25411;
	
		case 185:
			return 25412;
	
		case 186:
			return 25413;
	
		case 187:
			return 25414;
	
		case 188:
			return 25415;
	
		case 189:
			return 25416;
	
		case 190:
			return 25417;
	
		case 191:
			return 25418;
	
		case 192:
			return 25419;
	
		case 195:
			return 25420;
	
		case 196:
			return 25421;
	
		case 197:
			return 25422;
	
		case 198:
			return 25423;
	
		case 199:
			return 25424;
	
		case 200:
			return 25425;
	
		case 201:
			return 25426;
	
		case 202:
			return 25427;
	
		case 203:
			return 25428;
	
		case 204:
			return 25429;
	
		case 205:
			return 25430;
	
		case 211:
			return 25431;
	
		case 212:
			return 25432;
	
		case 213:
			return 25433;
	
		case 214:
			return 25434;
	
		case 215:
			return 25435;
	
		case 216:
			return 25436;
	
		case 217:
			return 25437;
	
		case 218:
			return 25438;
	
		case 219:
			return 25439;
	
		case 220:
			return 25440;
	
		case 221:
			return 25441;
	
		case 222:
			return 25442;
	
		case 223:
			return 25443;
	
		case 224:
			return 25444;
	
		case 225:
			return 25445;
	
		case 226:
			return 25446;
	
		case 227:
			return 25447;
	
		case 228:
			return 25448;
	
		case 229:
			return 25449;
	
		case 230:
			return 25450;
	
		case 231:
			return 25451;
	
		case 232:
			return 25452;
	
		case 233:
			return 25453;
	
		case 237:
			return 25454;
	
		case 238:
			return 25455;
	
		case 239:
			return 25456;
	
		case 240:
			return 25457;
	
		case 241:
			return 25458;
	
		case 242:
			return 25459;
	
		case 243:
			return 25460;
	
		case 244:
			return 25461;
	
		case 245:
			return 25462;
	
		case 246:
			return 25463;
	
		case 247:
			return 25464;
	
		case 251:
			return 25465;
	
		case 252:
			return 25466;
	
		case 253:
			return 25467;
	
		case 254:
			return 25468;
	
		case 255:
			return 25469;
	
		case 256:
			return 25470;
	
		case 257:
			return 25471;
	
		case 258:
			return 25472;
	
		case 262:
			return 25473;
	
		case 263:
			return 25474;
	
		case 264:
			return 25475;
	
		case 265:
			return 25476;
	
		case 266:
			return 25477;
	
		case 267:
			return 25478;
	
		case 268:
			return 25479;
	
		case 269:
			return 25480;
	
		case 270:
			return 25481;
	
		case 271:
			return 25482;
	
		case 272:
			return 25483;
	
		case 273:
			return 25484;
	
		case 277:
			return 25485;
	
		case 278:
			return 25486;
	
		case 279:
			return 25487;
	
		case 280:
			return 25488;
	
		case 281:
			return 25489;
	
		case 282:
			return 25490;
	
		case 283:
			return 25491;
	
		case 287:
			return 25492;
	
		case 288:
			return 25493;
	
		case 289:
			return 25494;
	
		case 290:
			return 25495;
	
		case 291:
			return 25496;
	
		case 292:
			return 25497;
	
		case 293:
			return 25498;
	
		case 294:
			return 25499;
	
		case 295:
			return 25500;
	
		case 296:
			return 25501;
	
		case 297:
			return 25502;
	
		case 298:
			return 25503;
	
		case 299:
			return 25504;
	
		case 300:
			return 25505;
	
		case 301:
			return 25506;
	
		case 302:
			return 25507;
	
		case 303:
			return 25508;
	
		case 304:
			return 25509;
	
		case 305:
			return 25510;
	
		case 306:
			return 25511;
	}

	return 0;
}

int func_0x274AD2F1(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 8;
	
		case joaat("cerberus2"):
			return 9;
	
		case joaat("cerberus3"):
			return 10;
	
		case joaat("brutus"):
			return 11;
	
		case joaat("brutus2"):
			return 12;
	
		case joaat("brutus3"):
			return 13;
	
		case joaat("zr380"):
			return 14;
	
		case joaat("zr3802"):
			return 15;
	
		case joaat("zr3803"):
			return 16;
	
		case joaat("scarab"):
			return 20;
	
		case joaat("scarab2"):
			return 21;
	
		case joaat("scarab3"):
			return 22;
	
		case joaat("imperator"):
			return 17;
	
		case joaat("imperator2"):
			return 18;
	
		case joaat("imperator3"):
			return 19;
	
		case joaat("impaler"):
			return 102;
	
		case joaat("ratloader2"):
			return 103;
	
		case joaat("glendale"):
			return 104;
	
		case joaat("slamvan"):
			return 105;
	
		case joaat("dominator"):
			return 106;
	
		case joaat("issi3"):
			return 107;
	
		case joaat("gargoyle"):
			return 108;
	}

	return -1;
}

int func_0xAFBAC931(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 0;
	
		case joaat("cerberus2"):
			return 1;
	
		case joaat("cerberus3"):
			return 2;
	
		case joaat("brutus"):
			return 3;
	
		case joaat("brutus2"):
			return 4;
	
		case joaat("brutus3"):
			return 5;
	
		case joaat("scarab"):
			return 6;
	
		case joaat("scarab2"):
			return 7;
	
		case joaat("scarab3"):
			return 8;
	
		case joaat("imperator"):
			return 9;
	
		case joaat("imperator2"):
			return 10;
	
		case joaat("imperator3"):
			return 11;
	
		case joaat("zr380"):
			return 12;
	
		case joaat("zr3802"):
			return 13;
	
		case joaat("zr3803"):
			return 14;
	
		case joaat("ratloader2"):
			return 15;
	
		case joaat("glendale"):
			return 16;
	
		case joaat("slamvan"):
			return 17;
	
		case joaat("dominator"):
			return 18;
	
		case joaat("impaler"):
			return 19;
	
		case joaat("issi3"):
			return 20;
	
		case joaat("gargoyle"):
			return 21;
	
		default:
		
	}

	return -1;
}

BOOL func_0xE53900A8(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	switch (iParam0)
	{
		case joaat("mule4"):
			if (GET_MP_INT_CHARACTER_STAT(7233, -1) >= func_0xF591FF90(iParam0) || /*Global_262145*/g_sMPTunables.f_24253)
				return true;
			else
				return false;
			break;
	
		case joaat("pounder2"):
			if (GET_MP_INT_CHARACTER_STAT(7233, -1) >= func_0xF591FF90(iParam0) || /*Global_262145*/g_sMPTunables.f_24254)
				return true;
			else
				return false;
			break;
	
		case joaat("oppressor2"):
			if (_STAT_GET_PACKED_INT(22050, -1) >= func_0xF591FF90(iParam0) || /*Global_262145*/g_sMPTunables.f_24255)
				return true;
			else
				return false;
			break;
	
		case joaat("pbus2"):
			if (IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_268.f_317.f_7, 1) || /*Global_262145*/g_sMPTunables.f_24257)
				return true;
			else
				return false;
			break;
	
		case joaat("patriot2"):
			if (GET_MP_INT_CHARACTER_STAT(7231, -1) >= func_0xF591FF90(iParam0) || /*Global_262145*/g_sMPTunables.f_24258)
				return true;
			else
				return false;
			break;
	
		case joaat("blimp3"):
			if (GET_MP_INT_CHARACTER_STAT(7231, -1) >= func_0xF591FF90(iParam0) || /*Global_262145*/g_sMPTunables.f_24259)
				return true;
			else
				return false;
			break;
	}

	return false;
}

int func_0xF591FF90(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return /*Global_262145*/g_sMPTunables.f_24260;
	
		case joaat("pounder2"):
			return /*Global_262145*/g_sMPTunables.f_24261;
	
		case joaat("oppressor2"):
			return /*Global_262145*/g_sMPTunables.f_24262;
	
		case joaat("patriot2"):
			return /*Global_262145*/g_sMPTunables.f_24263;
	
		case joaat("blimp3"):
			return /*Global_262145*/g_sMPTunables.f_24264;
	}

	return 0;
}

int func_0x2AAFEA47(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
	
		case joaat("pounder2"):
			return 1;
	
		case joaat("oppressor2"):
			return 2;
	
		case joaat("pbus2"):
			return 3;
	
		case joaat("patriot2"):
			return 4;
	
		case joaat("blimp3"):
			return 5;
	}

	return -1;
}

BOOL func_0x81B1B98C(int iParam0)
{
	int num;

	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	num = GET_MP_INT_CHARACTER_STAT(5664, -1);

	switch (iParam0)
	{
		case joaat("deluxo"):
			return IS_BIT_SET(num, func_0xAFBAC931(1));
	
		case joaat("akula"):
			return IS_BIT_SET(num, func_0xAFBAC931(2));
	
		case joaat("riot2"):
			return IS_BIT_SET(num, func_0xAFBAC931(6));
	
		case joaat("stromberg"):
			return IS_BIT_SET(num, func_0xAFBAC931(7));
	
		case joaat("chernobog"):
			return IS_BIT_SET(num, func_0xAFBAC931(10));
	
		case joaat("barrage"):
			return IS_BIT_SET(num, func_0xAFBAC931(11));
	
		case joaat("khanjali"):
			return IS_BIT_SET(num, func_0xAFBAC931(12));
	
		case joaat("volatol"):
			return IS_BIT_SET(num, func_0xAFBAC931(13));
	
		case joaat("thruster"):
			return IS_BIT_SET(num, func_0xAFBAC931(15));
	
		default:
		
	}

	return false;
}

int func_0xAFBAC931(int iParam0)
{
	switch (iParam0)
	{
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
			return 9;
	
		case 10:
			return 10;
	
		case 11:
			return 11;
	
		case 12:
			return 12;
	
		case 13:
			return 13;
	
		case 14:
			return 14;
	
		case 15:
			return 15;
	
		default:
		
	}

	return -1;
}

int func_0xEE599357(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
	
		case joaat("akula"):
			return 1;
	
		case joaat("riot2"):
			return 2;
	
		case joaat("stromberg"):
			return 3;
	
		case joaat("chernobog"):
			return 4;
	
		case joaat("barrage"):
			return 5;
	
		case joaat("khanjali"):
			return 6;
	
		case joaat("volatol"):
			return 7;
	
		case joaat("thruster"):
			return 8;
	}

	return -1;
}

BOOL func_0x8F5125C5(int iParam0)
{
	int num;
	int num2;

	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	num = func_0x3DDB3BFB(iParam0);
	num2 = func_0x6A44CE01();

	if (num2 >= num)
		return true;

	return false;
}

int func_0x6A44CE01()
{
	return GET_MP_INT_CHARACTER_STAT(6116, -1);
}

int func_0x3DDB3BFB(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return /*Global_262145*/g_sMPTunables.f_22394;
	
		case joaat("rogue"):
			return /*Global_262145*/g_sMPTunables.f_22395;
	
		case joaat("alphaz1"):
			return /*Global_262145*/g_sMPTunables.f_22396;
	
		case joaat("havok"):
			return /*Global_262145*/g_sMPTunables.f_22397;
	
		case joaat("starling"):
			return /*Global_262145*/g_sMPTunables.f_22398;
	
		case joaat("molotok"):
			return /*Global_262145*/g_sMPTunables.f_22399;
	
		case joaat("tula"):
			return /*Global_262145*/g_sMPTunables.f_22400;
	
		case joaat("bombushka"):
			return /*Global_262145*/g_sMPTunables.f_22401;
	
		case joaat("howard"):
			return /*Global_262145*/g_sMPTunables.f_22402;
	
		case joaat("mogul"):
			return /*Global_262145*/g_sMPTunables.f_22403;
	
		case joaat("pyro"):
			return /*Global_262145*/g_sMPTunables.f_22404;
	
		case joaat("seabreeze"):
			return /*Global_262145*/g_sMPTunables.f_22405;
	
		case joaat("nokota"):
			return /*Global_262145*/g_sMPTunables.f_22406;
	
		case joaat("hunter"):
			return /*Global_262145*/g_sMPTunables.f_22407;
	
		default:
		
	}

	return 0;
}

BOOL func_0x9D9CC255(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(5466, -1), iParam0);
}

int func_0x5F0525E(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
	
		case joaat("halftrack"):
			return 1;
	
		case joaat("trailersmall2"):
			return 2;
	
		case joaat("apc"):
			return 3;
	
		case joaat("tampa3"):
			return 5;
	
		case joaat("oppressor"):
			return 7;
	
		default:
		
	}

	return 3;
}

int func_0x2AAFEA47(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
	
		case joaat("halftrack"):
			return 1;
	
		case joaat("trailersmall2"):
			return 2;
	
		case joaat("apc"):
			return 3;
	
		case joaat("tampa3"):
			return 4;
	
		case joaat("oppressor"):
			return 5;
	}

	return -1;
}

BOOL func_0xCCFF5DD8(int iParam0)
{
	int num;

	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	num = 0;

	switch (iParam0)
	{
		case 187:
			num = 16;
			break;
	
		case 177:
			num = 12;
			break;
	
		case 185:
			num = 14;
			break;
	
		case 174:
			num = 9;
			break;
	
		case 171:
			num = 20;
			break;
	
		case 172:
			num = 7;
			break;
	
		case 173:
			num = 8;
			break;
	
		case 175:
			num = 10;
			break;
	
		case 176:
			num = 11;
			break;
	
		case 178:
			num = 5;
			break;
	
		case 179:
			num = 6;
			break;
	
		case 183:
			num = 21;
			break;
	
		case 180:
			num = 18;
			break;
	
		case 181:
			num = 22;
			break;
	
		case 182:
			num = 19;
			break;
	
		case 184:
			num = 13;
			break;
	
		case 186:
			num = 15;
			break;
	
		case 188:
			num = 17;
			break;
	}

	return func_0x83EF5AC(num);
}

BOOL func_0x83EF5AC(int iParam0)
{
	int num;
	int num2;

	if (func_0x47FF56D2())
		return false;

	num = func_0x9CE190B0(iParam0);
	num2 = iParam0;
	return IS_BIT_SET(num, func_0x9042BAD4(num2));
}

int func_0x9042BAD4(int iParam0)
{
	return iParam0 % 32;
}

int func_0x9CE190B0(int iParam0)
{
	int num;

	num = GET_MP_INT_CHARACTER_STAT(func_0xF08C5B2E(iParam0), -1);
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
				return 739;
		
			case 1:
				return 740;
		}
	}

	return 15468;
}

int func_0x21D64237()
{
	return /*Global_33088*/session3;
}

int func_0x195EBE32(int iParam0)
{
	return iParam0 / 32;
}

BOOL func_0x47FF56D2()
{
	return Global_1575063;
}

BOOL func_0xEA94180C(int iParam0)
{
	if (iParam0 == 171 || iParam0 == 172 || iParam0 == 173 || iParam0 == 175 || iParam0 == 177 || iParam0 == 178 || iParam0 == 179 || iParam0 == 180 || iParam0 == 181 || iParam0 == 182 || iParam0 == 183 || iParam0 == 184 || iParam0 == 185 || iParam0 == 186 || iParam0 == 187 || iParam0 == 188)
		return true;

	return false;
}

BOOL func_0x88F491DA(int iParam0)
{
	if (iParam0 == 199 || iParam0 == 200 || iParam0 == 201 || iParam0 == 202 || iParam0 == 203 || iParam0 == 204 || iParam0 == 205)
		return true;

	return false;
}

BOOL func_0x9D9CC255(int iParam0)
{
	if (!/*Global_79539*/g_bInMultiplayer)
		return false;

	return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(5329, -1), iParam0);
}

int func_0xFF0A3BFD(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
	
		case joaat("dune5"):
			return 0;
	
		case joaat("wastelander"):
			return 1;
	
		case joaat("blazer5"):
			return 2;
	
		case joaat("phantom2"):
			return 3;
	
		case joaat("voltic2"):
			return 4;
	
		case joaat("technical2"):
			return 5;
	
		case joaat("boxville5"):
			return 6;
	
		case joaat("ruiner2"):
			return 7;
	
		default:
		
	}

	return 0;
}

int func_0xF1FFC7F3(int iParam0)
{
	int num;

	num = iParam0;

	switch (num)
	{
		case joaat("technical2"):
			return 0;
	
		case joaat("boxville5"):
			return 1;
	
		case joaat("wastelander"):
			return 2;
	
		case joaat("phantom2"):
			return 3;
	
		case joaat("voltic2"):
			return 4;
	
		case joaat("dune4"):
			return 5;
	
		case joaat("dune5"):
			return 5;
	
		case joaat("ruiner2"):
			return 6;
	
		case joaat("blazer5"):
			return 7;
	}

	return -1;
}

BOOL func_0x4AE5394C(int iParam0)
{
	if (iParam0 == 233 || iParam0 == 234 || iParam0 == 235 || iParam0 == 236 || iParam0 == 240 || iParam0 == 241 || iParam0 == 263)
		return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED()
{
	int profileSetting;

	if (Global_153015 == 2)
		return true;
	else if (Global_153015 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_28, 2);
				MISC::SET_BIT(&Global_28, 4);
				MISC::SET_BIT(&Global_28, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

BOOL func_0x2DA9F6D6()
{
	if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_0xAF3D3332())
		return true;

	return false;
}

BOOL func_0xAF3D3332()
{
	int outValue;
	int outValue2;
	Hash statHash;
	int profileSetting;
	int profileSetting2;

	if (IS_BIT_SET(Global_28, 5))
		if (IS_BIT_SET(Global_28, 1) || IS_BIT_SET(Global_28, 3))
			return 1;
		else
			return 0;

	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &outValue, -1))
		if (IS_BIT_SET(outValue, 5))
			if (IS_BIT_SET(outValue, 1) || IS_BIT_SET(outValue, 3))
				return 1;
			else
				return 0;

	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_153017.f_3)
		{
			statHash = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (STATS::STAT_GET_INT(statHash, &outValue2, -1))
				if (IS_BIT_SET(outValue2, 5))
					return 1;
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		profileSetting = MISC::GET_PROFILE_SETTING(866);
	
		if (IS_BIT_SET(profileSetting, 1) || IS_BIT_SET(profileSetting, 3))
			return 1;
	}

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting2, -1);
				MISC::SET_BIT(&profileSetting2, 1);
				MISC::SET_BIT(&profileSetting2, 3);
				MISC::SET_BIT(&profileSetting2, 5);
				MISC::SET_BIT(&Global_28, 1);
				MISC::SET_BIT(&Global_28, 3);
				MISC::SET_BIT(&Global_28, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting2, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting2 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting2, 1);
					MISC::SET_BIT(&profileSetting2, 3);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting2);
				}
			
				return 1;
			}
		}
	}

	return 0;
}

int func_0xE1D12727(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
	
		case 1:
			return joaat("stinger");
	
		case 2:
			return joaat("jb700");
	
		case 3:
			return joaat("cheetah");
	
		case 4:
			return joaat("entityxf");
	
		case 5:
			return joaat("adder");
	
		case 6:
			return joaat("monroe");
	
		case 7:
			return joaat("cogcabrio");
	
		case 10:
			return joaat("shamal");
	
		case 11:
			return joaat("stunt");
	
		case 12:
			return joaat("cuban800");
	
		case 13:
			return joaat("duster");
	
		case 14:
			return joaat("luxor");
	
		case 15:
			return joaat("frogger");
	
		case 16:
			return joaat("maverick");
	
		case 17:
			return joaat("rhino");
	
		case 18:
			return joaat("titan");
	
		case 19:
			return joaat("cargobob");
	
		case 20:
			return joaat("buzzard");
	
		case 21:
			return joaat("crusader");
	
		case 22:
			return joaat("barracks");
	
		case 24:
			return joaat("marquis");
	
		case 25:
			return joaat("jetmax");
	
		case 27:
			return joaat("squalo");
	
		case 29:
			return joaat("tropic");
	
		case 30:
			return joaat("seashark");
	
		case 31:
			return joaat("submersible");
	
		case 32:
			return joaat("suntrap");
	
		case 258:
			return joaat("tug");
	
		case 33:
			return joaat("bmx");
	
		case 34:
			return joaat("scorcher");
	
		case 35:
			return joaat("tribike");
	
		case 36:
			return joaat("tribike2");
	
		case 37:
			return joaat("tribike3");
	
		case 38:
			return joaat("cruiser");
	
		case 39:
			return joaat("schwarzer");
	
		case 40:
			return joaat("zion");
	
		case 41:
			return joaat("gauntlet");
	
		case 42:
			return joaat("vigero");
	
		case 43:
			return joaat("issi2");
	
		case 44:
			return joaat("infernus");
	
		case 45:
			return joaat("surano");
	
		case 46:
			return joaat("vacca");
	
		case 47:
			return joaat("ninef");
	
		case 48:
			return joaat("comet2");
	
		case 49:
			return joaat("banshee");
	
		case 50:
			return joaat("feltzer2");
	
		case 51:
			return joaat("bfinjection");
	
		case 52:
			return joaat("sandking");
	
		case 53:
			return joaat("fugitive");
	
		case 54:
			return joaat("dilettante");
	
		case 55:
			return joaat("superd");
	
		case 56:
			return joaat("exemplar");
	
		case 57:
			return joaat("baller2");
	
		case 58:
			return joaat("cavalcade");
	
		case 59:
			return joaat("rocoto");
	
		case 60:
			return joaat("felon");
	
		case 61:
			return joaat("oracle2");
	
		case 62:
			return joaat("bati");
	
		case 63:
			return joaat("akuma");
	
		case 64:
			return joaat("ruffian");
	
		case 65:
			return joaat("vader");
	
		case 66:
			return joaat("blazer");
	
		case 67:
			return joaat("pcj");
	
		case 68:
			return joaat("sanchez");
	
		case 69:
			return joaat("faggio2");
	
		case 70:
			return joaat("bullet");
	
		case 71:
			return joaat("carbonizzare");
	
		case 72:
			return joaat("coquette");
	
		case 73:
			return joaat("ninef2");
	
		case 74:
			return joaat("rapidgt");
	
		case 75:
			return joaat("rapidgt2");
	
		case 76:
			return joaat("stingergt");
	
		case 77:
			return joaat("voltic");
	
		case 78:
			return joaat("annihilator");
	
		case 79:
			return joaat("mammatus");
	
		case 80:
			return joaat("velum");
	
		case 81:
			return joaat("dump");
	
		case 82:
			return joaat("airbus");
	
		case 83:
			return joaat("bus");
	
		case 84:
			return joaat("coach");
	
		case 85:
			return joaat("journey");
	
		case 86:
			return joaat("mule");
	
		case 87:
			return joaat("rentalbus");
	
		case 88:
			return joaat("stretch");
	
		case 89:
			return joaat("bison");
	
		case 90:
			return joaat("double");
	
		case 91:
			return joaat("felon2");
	
		case 92:
			return joaat("hexer");
	
		case 93:
			return joaat("zion2");
	
		case 94:
			return joaat("bati2");
	
		case 95:
			return joaat("elegy2");
	
		case 96:
			return joaat("khamelion");
	
		case 97:
			return joaat("hotknife");
	
		case 98:
			return joaat("carbonrs");
	
		default:
		
	}

	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
	
		case 100:
			return joaat("kalahari");
	
		case 101:
			return joaat("paradise");
	
		case 102:
			return joaat("speeder");
	
		case 103:
			return joaat("bodhi2");
	
		case 104:
			return joaat("dune");
	
		case 105:
			return joaat("rebel");
	
		case 106:
			return joaat("sadler");
	
		case 107:
			return joaat("sanchez2");
	
		case 108:
			return joaat("sandking2");
	
		case 109:
			return joaat("btype");
	
		case 111:
			return joaat("jester");
	
		case 114:
			return joaat("massacro");
	
		case 112:
			return joaat("turismor");
	
		case 115:
			return joaat("zentorno");
	
		case 116:
			return joaat("huntley");
	
		case 110:
			return joaat("alpha");
	
		case 113:
			return joaat("vestra");
	
		case 117:
			return joaat("coquette");
	
		case 118:
			return joaat("banshee");
	
		case 119:
			return joaat("stinger");
	
		case 120:
			return joaat("voltic");
	
		case 121:
			return joaat("thrust");
	
		case 128:
			return joaat("asea");
	
		case 129:
			return joaat("asterope");
	
		case 130:
			return joaat("bobcatxl");
	
		case 131:
			return joaat("cavalcade2");
	
		case 132:
			return joaat("granger");
	
		case 133:
			return joaat("ingot");
	
		case 134:
			return joaat("intruder");
	
		case 135:
			return joaat("minivan");
	
		case 136:
			return joaat("premier");
	
		case 137:
			return joaat("radi");
	
		case 138:
			return joaat("rancherxl");
	
		case 139:
			return joaat("ratloader");
	
		case 140:
			return joaat("stanier");
	
		case 141:
			return joaat("stratum");
	
		case 142:
			return joaat("washington");
	
		case 122:
			return joaat("dominator");
	
		case 123:
			return joaat("f620");
	
		case 124:
			return joaat("fusilade");
	
		case 125:
			return joaat("penumbra");
	
		case 126:
			return joaat("sentinel");
	
		case 127:
			return joaat("sentinel2");
	
		default:
		
	}

	switch (iParam0)
	{
		case 143:
			return joaat("blade");
	
		case 144:
			return joaat("warrener");
	
		case 145:
			return joaat("glendale");
	
		case 146:
			return joaat("rhapsody");
	
		case 147:
			return joaat("panto");
	
		case 148:
			return joaat("dubsta3");
	
		case 149:
			return joaat("pigalle");
	
		case 150:
			return joaat("picador");
	
		case 151:
			return joaat("regina");
	
		case 152:
			return joaat("surfer");
	
		case 153:
			return joaat("youga");
	
		case 154:
			return joaat("blazer3");
	
		case 155:
			return joaat("rebel2");
	
		case 156:
			return joaat("primo");
	
		case 157:
			return joaat("buffalo");
	
		case 158:
			return joaat("buffalo2");
	
		case 159:
			return joaat("tailgater");
	
		case 160:
			return joaat("monster");
	
		case 161:
			return joaat("sovereign");
	
		case 162:
			return joaat("miljet");
	
		case 163:
			return joaat("besra");
	
		case 164:
			return joaat("swift");
	
		case 165:
			return joaat("coquette2");
	
		case 166:
			return joaat("coquette2");
	
		case 167:
			return joaat("innovation");
	
		case 168:
			return joaat("hakuchou");
	
		case 169:
			return joaat("furoregt");
	
		case 170:
			return joaat("kalahari");
	
		case 187:
			return joaat("valkyrie");
	
		case 177:
			return joaat("hydra");
	
		case 185:
			return joaat("savage");
	
		case 174:
			return joaat("enduro");
	
		case 171:
			return joaat("boxville4");
	
		case 172:
			return joaat("casco");
	
		case 173:
			return joaat("dinghy3");
	
		case 175:
			return joaat("gburrito2");
	
		case 176:
			return joaat("guardian");
	
		case 178:
			return joaat("insurgent");
	
		case 179:
			return joaat("insurgent2");
	
		case 183:
			return joaat("mule3");
	
		case 180:
			return joaat("kuruma");
	
		case 181:
			return joaat("kuruma2");
	
		case 182:
			return joaat("lectro");
	
		case 184:
			return joaat("pbus");
	
		case 186:
			return joaat("technical");
	
		case 188:
			return joaat("velum2");
	
		case 189:
			return joaat("gresley");
	
		case 190:
			return joaat("jackal");
	
		case 191:
			return joaat("landstalker");
	
		case 192:
			return joaat("mesa3");
	
		case 193:
			return joaat("nemesis");
	
		case 194:
			return joaat("oracle");
	
		case 195:
			return joaat("rumpo");
	
		case 196:
			return joaat("schafter2");
	
		case 197:
			return joaat("seminole");
	
		case 198:
			return joaat("surge");
	
		case 199:
			return joaat("dodo");
	
		case 200:
			return joaat("marshall");
	
		case 201:
			return joaat("submersible2");
	
		case 202:
			return joaat("blista2");
	
		case 203:
			return joaat("stalion");
	
		case 204:
			return joaat("dukes");
	
		case 205:
			return joaat("dukes2");
	
		case 206:
			return joaat("stalion2");
	
		case 207:
			return joaat("dominator2");
	
		case 208:
			return joaat("gauntlet2");
	
		case 209:
			return joaat("buffalo3");
	
		case 210:
			return joaat("slamvan");
	
		case 211:
			return joaat("ratloader2");
	
		case 212:
			return joaat("jester2");
	
		case 213:
			return joaat("massacro2");
	
		case 214:
			return joaat("feltzer3");
	
		case 215:
			return joaat("luxor2");
	
		case 216:
			return joaat("osiris");
	
		case 217:
			return joaat("swift2");
	
		case 218:
			return joaat("virgo");
	
		case 219:
			return joaat("windsor");
	
		case 220:
			return joaat("brawler");
	
		case 221:
			return joaat("chino");
	
		case 222:
			return joaat("coquette3");
	
		case 223:
			return joaat("t20");
	
		case 224:
			return joaat("toro");
	
		case 225:
			return joaat("vindicator");
	
		case 229:
			return joaat("primo");
	
		case 228:
			return joaat("moonbeam");
	
		case 227:
			return joaat("faction");
	
		case 226:
			return joaat("buccaneer");
	
		case 230:
			return joaat("voodoo2");
	
		case 263:
			if (iParam1 == 0)
				return joaat("xls");
			else if (iParam1 == 1)
				return joaat("xls2");
			else
				return joaat("xls");
			break;
	
		case 264:
			return joaat("seven70");
	
		case 259:
			return joaat("windsor2");
	
		case 260:
			return joaat("prototipo");
	
		case 261:
			return joaat("fmj");
	
		case 262:
			return joaat("bestiagts");
	
		case 265:
			return joaat("pfister811");
	
		case 266:
			return joaat("reaper");
	
		case 231:
			return joaat("btype2");
	
		case 232:
			return joaat("lurcher");
	
		case 233:
			if (iParam1 == 0)
				return joaat("baller3");
			else if (iParam1 == 1)
				return joaat("baller5");
			else
				return joaat("baller3");
			break;
	
		case 234:
			if (iParam1 == 0)
				return joaat("baller4");
			else if (iParam1 == 1)
				return joaat("baller6");
			else
				return joaat("baller4");
			break;
	
		case 235:
			if (iParam1 == 0)
				return joaat("cog55");
			else if (iParam1 == 1)
				return joaat("cog552");
			else
				return joaat("cog55");
			break;
	
		case 236:
			if (iParam1 == 0)
				return joaat("cognoscenti");
			else if (iParam1 == 1)
				return joaat("cognoscenti2");
			else
				return joaat("cognoscenti");
			break;
	
		case 237:
			return joaat("limo2");
	
		case 238:
			return joaat("mamba");
	
		case 239:
			return joaat("nightshade");
	
		case 240:
			if (iParam1 == 0)
				return joaat("schafter3");
			else if (iParam1 == 1)
				return joaat("schafter5");
			else
				return joaat("schafter3");
			break;
	
		case 241:
			if (iParam1 == 0)
				return joaat("schafter4");
			else if (iParam1 == 1)
				return joaat("schafter6");
			else
				return joaat("schafter4");
			break;
	
		case 242:
			return joaat("verlierer2");
	
		case 243:
			return joaat("supervolito");
	
		case 244:
			return joaat("supervolito2");
	
		case 245:
			return Global_76600;
	
		case 251:
			return joaat("virgo3");
	
		case 250:
			return joaat("tornado");
	
		case 249:
			return joaat("sabregt");
	
		case 252:
			return joaat("faction");
	
		case 246:
			return joaat("tampa");
	
		case 247:
			return joaat("sultan");
	
		case 49:
			return joaat("banshee");
	
		case 248:
			return joaat("btype3");
	
		case 253:
			return joaat("volatus");
	
		case 254:
			return joaat("cargobob2");
	
		case 255:
			return joaat("rumpo3");
	
		case 256:
			return joaat("brickade");
	
		case 257:
			return joaat("nimbus");
	
		case 267:
			return joaat("le7b");
	
		case 268:
			return joaat("omnis");
	
		case 269:
			return joaat("tropos");
	
		case 270:
			return joaat("brioso");
	
		case 271:
			return joaat("trophytruck");
	
		case 272:
			return joaat("trophytruck2");
	
		case 273:
			return joaat("contender");
	
		case 274:
			return joaat("cliffhanger");
	
		case 275:
			return joaat("bf400");
	
		case 279:
			return joaat("tyrus");
	
		case 280:
			return joaat("lynx");
	
		case 281:
			return joaat("sheava");
	
		case 276:
			return joaat("rallytruck");
	
		case 277:
			return joaat("tampa2");
	
		case 278:
			return joaat("gargoyle");
	
		case 282:
			return joaat("bagger");
	
		case 283:
			return joaat("esskey");
	
		case 284:
			return joaat("nightblade");
	
		case 285:
			return joaat("defiler");
	
		case 286:
			return joaat("avarus");
	
		case 287:
			return joaat("zombiea");
	
		case 288:
			return joaat("zombieb");
	
		case 289:
			return joaat("chimera");
	
		case 290:
			return joaat("daemon2");
	
		case 291:
			return joaat("ratbike");
	
		case 292:
			return joaat("shotaro");
	
		case 293:
			return joaat("raptor");
	
		case 294:
			return joaat("hakuchou2");
	
		case 296:
			return joaat("blazer4");
	
		case 297:
			return joaat("sanctus");
	
		case 295:
			return joaat("vortex");
	
		case 298:
			return joaat("manchez");
	
		case 299:
			return joaat("tornado6");
	
		case 300:
			return joaat("youga2");
	
		case 301:
			return joaat("wolfsbane");
	
		case 302:
			return joaat("faggio3");
	
		case 303:
			return joaat("faggio");
	
		case 304:
			return joaat("dune5");
	
		case 305:
			return joaat("phantom2");
	
		case 306:
			return joaat("technical2");
	
		case 307:
			return joaat("blazer5");
	
		case 308:
			return joaat("boxville5");
	
		case 309:
			return joaat("wastelander");
	
		case 310:
			return joaat("ruiner2");
	
		case 311:
			return joaat("voltic2");
	
		case 312:
			return joaat("penetrator");
	
		case 313:
			return joaat("tempesta");
	
		case 314:
			return joaat("italigtb");
	
		case 315:
			return joaat("nero");
	
		case 316:
			return joaat("diablous");
	
		case 317:
			return joaat("fcr");
	
		case 318:
			return joaat("specter");
	
		case 319:
			return joaat("gp1");
	
		case 320:
			return joaat("infernus2");
	
		case 321:
			return joaat("ruston");
	
		case 322:
			return joaat("turismo2");
	}

	switch (iParam0)
	{
		case 323:
			return Global_76601;
	
		case 324:
			return Global_76602;
	
		case 325:
			return joaat("cheetah2");
	
		case 326:
			return joaat("torero");
	
		case 327:
			return joaat("vagner");
	
		case 328:
			return joaat("xa21");
	
		case 329:
			return joaat("apc");
	
		case 330:
			return joaat("dune3");
	
		case 331:
			return joaat("halftrack");
	
		case 332:
			return joaat("oppressor");
	
		case 333:
			return joaat("tampa3");
	
		case 334:
			return joaat("trailersmall2");
	
		case 335:
			return joaat("ardent");
	
		case 336:
			return joaat("nightshark");
	
		case 337:
			return joaat("lazer");
	
		case 338:
			return joaat("microlight");
	
		case 339:
			return joaat("mogul");
	
		case 340:
			return joaat("rogue");
	
		case 341:
			return joaat("starling");
	
		case 342:
			return joaat("seabreeze");
	
		case 343:
			return joaat("tula");
	
		case 344:
			return joaat("pyro");
	
		case 345:
			return joaat("molotok");
	
		case 346:
			return joaat("nokota");
	
		case 347:
			return joaat("bombushka");
	
		case 348:
			return joaat("hunter");
	
		case 349:
			return joaat("havok");
	
		case 350:
			return joaat("howard");
	
		case 351:
			return joaat("alphaz1");
	
		case 352:
			return joaat("cyclone");
	
		case 353:
			return joaat("visione");
	
		case 354:
			return joaat("retinue");
	
		case 355:
			return joaat("rapidgt3");
	
		case 356:
			return joaat("vigilante");
	
		case 357:
			return Global_76603;
	
		case 358:
			return joaat("deluxo");
	
		case 359:
			return joaat("stromberg");
	
		case 360:
			return joaat("riot2");
	
		case 361:
			return joaat("chernobog");
	
		case 362:
			return joaat("khanjali");
	
		case 363:
			return joaat("akula");
	
		case 364:
			return joaat("thruster");
	
		case 365:
			return joaat("barrage");
	
		case 366:
			return joaat("volatol");
	
		case 367:
			return joaat("comet4");
	
		case 368:
			return joaat("neon");
	
		case 369:
			return joaat("streiter");
	
		case 370:
			return joaat("sentinel3");
	
		case 371:
			return joaat("yosemite");
	
		case 372:
			return joaat("sc1");
	
		case 373:
			return joaat("autarch");
	
		case 374:
			return joaat("gt500");
	
		case 375:
			return joaat("hustler");
	
		case 376:
			return joaat("revolter");
	
		case 377:
			return joaat("pariah");
	
		case 378:
			return joaat("raiden");
	
		case 379:
			return joaat("savestra");
	
		case 380:
			return joaat("riata");
	
		case 381:
			return joaat("hermes");
	
		case 382:
			return joaat("comet5");
	
		case 383:
			return joaat("z190");
	
		case 384:
			return joaat("viseris");
	
		case 385:
			return joaat("kamacho");
	
		case 386:
			return joaat("gb200");
	
		case 387:
			return joaat("fagaloa");
	
		case 388:
			return joaat("ellie");
	
		case 389:
			return joaat("issi3");
	
		case 390:
			return joaat("michelli");
	
		case 391:
			return joaat("flashgt");
	
		case 392:
			return joaat("hotring");
	
		case 393:
			return joaat("tezeract");
	
		case 394:
			return joaat("tyrant");
	
		case 395:
			return joaat("dominator3");
	
		case 396:
			return joaat("taipan");
	
		case 397:
			return joaat("entity2");
	
		case 398:
			return joaat("jester3");
	
		case 399:
			return joaat("cheburek");
	
		case 400:
			return joaat("caracara");
	
		case 401:
			return joaat("seasparrow");
	
		case 402:
			return Global_76604;
	
		case 403:
			return joaat("mule4");
	
		case 404:
			return joaat("pounder2");
	
		case 405:
			return joaat("swinger");
	
		case 406:
			return joaat("menacer");
	
		case 407:
			return joaat("scramjet");
	
		case 408:
			return joaat("strikeforce");
	
		case 409:
			return joaat("oppressor2");
	
		case 410:
			return joaat("patriot2");
	
		case 411:
			return joaat("stafford");
	
		case 412:
			return joaat("freecrawler");
	
		case 415:
			return joaat("futo");
	
		case 416:
			return joaat("ruiner");
	
		case 417:
			return joaat("romero");
	
		case 418:
			return joaat("prairie");
	
		case 419:
			return joaat("baller");
	
		case 420:
			return joaat("serrano");
	
		case 421:
			return joaat("bjxl");
	
		case 422:
			return joaat("habanero");
	
		case 423:
			return joaat("fq2");
	
		case 424:
			return joaat("patriot");
	
		case 413:
			return joaat("blimp3");
	
		case 414:
			return joaat("pbus2");
	
		case 425:
			return joaat("cerberus");
	
		case 426:
			return joaat("cerberus2");
	
		case 427:
			return joaat("cerberus3");
	
		case 428:
			return joaat("brutus");
	
		case 429:
			return joaat("brutus2");
	
		case 430:
			return joaat("brutus3");
	
		case 431:
			return joaat("scarab");
	
		case 432:
			return joaat("scarab2");
	
		case 433:
			return joaat("scarab3");
	
		case 434:
			return joaat("imperator");
	
		case 435:
			return joaat("imperator2");
	
		case 436:
			return joaat("imperator3");
	
		case 437:
			return joaat("zr380");
	
		case 438:
			return joaat("zr3802");
	
		case 439:
			return joaat("zr3803");
	
		case 440:
			return joaat("impaler");
	
		case 450:
			return joaat("taxi");
	
		case 451:
			return joaat("bulldozer");
	
		case 452:
			return joaat("speedo2");
	
		case 453:
			return joaat("trash2");
	
		case 454:
			return joaat("barracks2");
	
		case 455:
			return joaat("mixer");
	
		case 456:
			return joaat("dune2");
	
		case 457:
			return joaat("tractor");
	
		case 458:
			return joaat("blista3");
	
		case 441:
			return joaat("vamos");
	
		case 442:
			return joaat("tulip");
	
		case 443:
			return joaat("deveste");
	
		case 444:
			return joaat("schlagen");
	
		case 445:
			return joaat("toros");
	
		case 446:
			return joaat("deviant");
	
		case 447:
			return joaat("clique");
	
		case 448:
			return joaat("italigto");
	
		case 449:
			return joaat("rcbandito");
	
		case 459:
			return joaat("thrax");
	
		case 460:
			return joaat("drafter");
	
		case 461:
			return joaat("locust");
	
		case 462:
			return joaat("novak");
	
		case 463:
			return joaat("zorrusso");
	
		case 464:
			return joaat("gauntlet3");
	
		case 465:
			return joaat("issi7");
	
		case 466:
			return joaat("zion3");
	
		case 467:
			return joaat("nebula");
	
		case 468:
			return joaat("hellion");
	
		case 469:
			return joaat("dynasty");
	
		case 470:
			return joaat("rrocket");
	
		case 471:
			return joaat("peyote2");
	
		case 472:
			return joaat("gauntlet4");
	
		case 473:
			return joaat("caracara2");
	
		case 474:
			return joaat("jugular");
	
		case 475:
			return joaat("s80");
	
		case 476:
			return joaat("krieger");
	
		case 477:
			return joaat("emerus");
	
		case 478:
			return joaat("neo");
	
		case 479:
			return joaat("paragon");
	
		case 480:
			return joaat("firetruk");
	
		case 481:
			return joaat("burrito2");
	
		case 482:
			return joaat("boxville");
	
		case 483:
			return joaat("stockade");
	
		case 484:
			return joaat("lguard");
	
		case 485:
			return joaat("blazer2");
	
		case 486:
			return joaat("zhaba");
	
		case 487:
			return joaat("minitank");
	
		case 488:
			return joaat("jb7002");
	
		case 489:
			return joaat("stryder");
	
		case 490:
			return joaat("vstr");
	
		case 491:
			return joaat("formula");
	
		case 492:
			return joaat("imorgon");
	
		case 493:
			return joaat("formula2");
	
		case 494:
			return joaat("furia");
	
		case 495:
			return joaat("rebla");
	
		case 496:
			return joaat("vagrant");
	
		case 497:
			return joaat("retinue2");
	
		case 498:
			return joaat("yosemite2");
	
		case 499:
			return joaat("komoda");
	
		case 500:
			return joaat("sultan2");
	
		case 501:
			return joaat("sugoi");
	
		case 502:
			return joaat("everon");
	
		case 503:
			return joaat("asbo");
	
		case 504:
			return joaat("kanjo");
	
		case 505:
			return joaat("outlaw");
	
		default:
		
	}

	switch (iParam0)
	{
		case 506:
			return joaat("club");
	
		case 507:
			return joaat("dukes3");
	
		case 508:
			return joaat("yosemite3");
	
		case 509:
			return joaat("penumbra2");
	
		case 510:
			return joaat("landstalker2");
	
		case 511:
			return joaat("seminole2");
	
		case 512:
			return joaat("tigon");
	
		case 513:
			return joaat("openwheel1");
	
		case 514:
			return joaat("openwheel2");
	
		case 515:
			return joaat("coquette4");
	
		case 516:
			return joaat("manana");
	
		case 517:
			return joaat("peyote");
	
		case 518:
			return func_0x9F572D68();
	
		case 519:
			return joaat("italirsx");
	
		case 520:
			return joaat("slamtruck");
	
		case 521:
			return joaat("brioso2");
	
		case 522:
			return joaat("weevil");
	
		case 523:
			return joaat("alkonost");
	
		case 524:
			return joaat("annihilator2");
	
		case 525:
			return joaat("dinghy5");
	
		case 526:
			return joaat("manchez2");
	
		case 527:
			return joaat("patrolboat");
	
		case 528:
			return joaat("squaddie");
	
		case 529:
			return joaat("toreador");
	
		case 530:
			return joaat("verus");
	
		case 531:
			return joaat("vetir");
	
		case 532:
			return joaat("winky");
	
		case 533:
			return joaat("longfin");
	
		case 534:
			return joaat("veto");
	
		case 535:
			return joaat("veto2");
	
		case 543:
			return joaat("zr350");
	
		case 537:
			return joaat("comet6");
	
		case 540:
			return joaat("jester4");
	
		case 542:
			return joaat("vectre");
	
		case 538:
			return joaat("cypher");
	
		case 548:
			return joaat("tailgater2");
	
		case 550:
			return joaat("euros");
	
		case 551:
			return joaat("growler");
	
		case 536:
			return joaat("calico");
	
		case 541:
			return joaat("remus");
	
		case 539:
			return joaat("dominator7");
	
		case 546:
			return joaat("futo2");
	
		case 545:
			return joaat("rt3000");
	
		case 544:
			return joaat("warrener2");
	
		case 547:
			return joaat("sultan3");
	
		case 549:
			return joaat("dominator8");
	
		case 552:
			return joaat("previon");
	
		case 554:
			return joaat("comet7");
	
		case 555:
			return joaat("shinobi");
	
		case 556:
			return joaat("reever");
	
		case 557:
			return joaat("baller7");
	
		case 558:
			return joaat("cinquemila");
	
		case 559:
			return joaat("jubilee");
	
		case 560:
			return joaat("astron");
	
		case 561:
			return joaat("deity");
	
		case 562:
			return joaat("zeno");
	
		case 563:
			return joaat("champion");
	
		case 564:
			return joaat("ignus");
	
		case 565:
			return joaat("buffalo4");
	
		case 566:
			return joaat("granger2");
	
		case 567:
			return joaat("iwagen");
	
		case 568:
			return joaat("patriot3");
	
		case 553:
			return joaat("supervolito2");
	
		case 569:
			return joaat("tenf");
	
		case 570:
			return joaat("sm722");
	
		case 571:
			return joaat("torero2");
	
		case 572:
			return joaat("corsita");
	
		case 573:
			return joaat("lm87");
	
		case 574:
			return joaat("omnisegt");
	
		case 575:
			return joaat("rhinehart");
	
		case 576:
			return joaat("postlude");
	
		case 577:
			return joaat("kanjosj");
	
		case 578:
			return joaat("vigero2");
	
		case 579:
			return joaat("ruiner4");
	
		case 580:
			return joaat("draugur");
	
		case 581:
			return joaat("greenwood");
	
		case 582:
			return joaat("conada");
	
		case 583:
			return -1576586413;
	
		case 584:
			return 1384502824;
	
		case 585:
			return 2100457220;
	
		case 586:
			return -461850249;
	
		case 587:
			return 268758436;
	
		case 588:
			return -131348178;
	
		case 589:
			return -1627077503;
	
		case 590:
			return -1035489563;
	
		case 591:
			return 669204833;
	
		case 592:
			return 1076201208;
	
		case 593:
			return 1550581940;
	
		case 594:
			return 1748565021;
	
		case 595:
			return -1386336041;
	
		case 596:
			return 996383885;
	
		case 597:
			return -1933242328;
	
		case 598:
			return -1249788006;
	
		case 599:
			return joaat("mesa");
	
		case 600:
			return -1763675285;
	
		case 603:
			return -654498607;
	
		case 604:
			return -979292575;
	
		case 601:
			return -536105557;
	
		case 602:
			return joaat("monstrociti");
	
		case 605:
			return -897824023;
	
		case 606:
			return -1983622024;
	
		case 607:
			return joaat("streamer216");
	
		case 608:
			return -1659004814;
	
		case 609:
			return 239897677;
	
		case 610:
			return 1336514315;
	
		case 611:
			return 1447690049;
	
		case 612:
			return 165968051;
	
		case 613:
			return joaat("coureur");
	
		case 614:
			return -1233767450;
	
		case 615:
			return joaat("police4");
	
		case 616:
			return joaat("Police5");
	
		case 617:
			return joaat("riot");
	
		case 618:
			return -768044142;
	
		case 619:
			return -478639183;
	
		case 620:
			return -178442374;
	
		case 621:
			return -741120335;
	
		case 622:
			return -441209695;
	
		case 623:
			return -465825307;
	
		case 624:
			return joaat("baller8");
	
		case 625:
			return -38879449;
	
		case 626:
			return joaat("turismo3");
	
		case 627:
			return -1029730482;
	
		case 628:
			return 372621319;
	
		case 629:
			return 167522317;
	
		case 630:
			return -1372798934;
	
		case 631:
			return -842765535;
	
		case 632:
			return 728350375;
	
		case 633:
			return -773802025;
	
		case 634:
			return -1628000569;
	
		case 635:
			return 1737348074;
	
		case 636:
			return 1249425552;
	
		case 637:
			return 1452003510;
	
		case 638:
			return -1240172147;
	
		case 639:
			return 1307736079;
	
		case 640:
			return -1896488056;
	
		case 641:
			return 1579902654;
	
		case 642:
			return 1968807591;
	
		case 643:
			return -223461503;
	
		case 644:
			return -1958428933;
	
		case 645:
			return -999594302;
	
		case 646:
			return 1881415402;
	
		case 648:
			return -946047670;
	
		case 647:
			return 1121330119;
	
		case 649:
			return joaat("taco");
	
		case 650:
			return -1948949064;
	
		case 651:
			return -1321131184;
	
		case 652:
			return 2042703219;
	
		case 653:
			return 1891140410;
	
		case 654:
			return joaat("predator");
	
		case 655:
			return joaat("cargobob5");
	
		case 656:
			return 858355070;
	
		case 657:
			return 84351789;
	
		case 659:
			return -660007725;
	
		case 660:
			return 1484920335;
	
		case 658:
			return 127317925;
	
		case 661:
			return 1992041063;
	
		case 662:
			return joaat("URANUS");
	
		case 663:
			return -973016778;
	
		default:
		
	}

	return 0;
}

int func_0x9F572D68()
{
	return joaat("kosatka");
}

void func_0x39770099(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4)
{
	Hash entityModel;
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
		
			if (PLAYER::PLAYER_ID() != _INVALID_PLAYER_INDEX())
				uParam1->f_100 = PLAYER::PLAYER_ID();
		
			if (uParam1->f_70 == 0)
				uParam1->f_70 = 1;
		
			func_0x3234A2AB(veParam0, uParam1, bParam2, bParam3);
		
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
					VEHICLE::SET_DRIFT_TYRES(veParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
					VEHICLE::SET_DRIFT_TYRES(veParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
					VEHICLE::SET_DRIFT_TYRES(veParam0, true);
				}
			}
		
			if (func_0xE48228D0(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (uParam1->f_9[44] == 2)
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, false, true);
				else
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, true, true);
		
			if (func_0x60F4FB46(ENTITY::GET_ENTITY_MODEL(veParam0)))
			{
				if (IS_BIT_SET(uParam1->f_103, 0) || func_0xE48228D0(ENTITY::GET_ENTITY_MODEL(veParam0)))
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, false, true);
					func_0x97A77376(veParam0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, true, true);
					func_0x48AB42C1(veParam0);
				}
			}
		
			if (!(uParam1->f_78 == -1) && uParam1->f_9[14] == -1)
				AUDIO::OVERRIDE_VEH_HORN(veParam0, true, uParam1->f_78);
		
			if (!(uParam1->f_79 == -1))
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(veParam0, uParam1->f_79);
		
			if (func_0x1B3B2773(uParam1->f_66, &num) && uParam1->f_80 != num)
				uParam1->f_80 = num;
		
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(veParam0, uParam1->f_80);
		
			if (uParam1->f_97 >= 0)
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(veParam0, uParam1->f_97);
		
			if (uParam1->f_99 >= 0)
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, uParam1->f_99);
		
			if (func_0xEB13AB9D(veParam0))
				func_0x47F85C31(veParam0, func_0x8C841BCD(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(veParam0) > 1 && uParam1->f_98 >= 0)
				VEHICLE::SET_VEHICLE_LIVERY2(veParam0, uParam1->f_98);
		
			if (IS_BIT_SET(uParam1->f_95, 0))
				func_0x26C20EE4(veParam0, &(uParam1->f_81));
		
			if (!func_0x9D74E75(4) && !bParam4 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_0xCAA4A78(veParam0);
		
			if (func_0xE48228D0(entityModel))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
						break;
				
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 0, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
						break;
				
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 1, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 3, false);
						break;
				
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
						break;
				
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
						
							if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
								VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
							else
								VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
						}
						break;
				}
			}
		
			if (func_0x1F2141DF(ENTITY::GET_ENTITY_MODEL(veParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(veParam0, true);
					
						if (uParam1->f_9[16] == 5)
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, /*Global_262145*/g_sMPTunables.f_21454 + 0.05f);
						else
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, /*Global_262145*/g_sMPTunables.f_21454);
					
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
						break;
				
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
						break;
				}
			}
		
			switch (uParam1->f_94)
			{
				case 0:
					break;
			
				case 1:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
					{
						if (IS_BIT_SET(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", INT))
					{
						DECORATOR::DECOR_SET_INT(veParam0, "Player_Vehicle", -1);
					}
					break;
			
				case 2:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))
						if (IS_GAMER_HANDLE_VALID(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						else
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", -1);
					break;
			
				case 3:
					break;
			
				case 4:
					break;
			}
		}
	}

	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

BOOL func_0x1F2141DF(Hash hParam0)
{
	return func_0xE48228D0(hParam0) && !func_0xE48228D0(hParam0);
}

BOOL func_0xE48228D0(Hash hParam0)
{
	switch (hParam0)
	{
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("turismo3"):
		case joaat("baller8"):
		case 1121330119:
			return true;
	}

	return false;
}

BOOL func_0xE48228D0(Hash hParam0)
{
	switch (hParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("speedo5"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return true;
	}

	return false;
}

void func_0xCAA4A78(Vehicle veParam0)
{
	Hash entityModel;

	if (/*Global_262145*/g_sMPTunables.f_19899)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veParam0))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
				entityModel.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0));
			
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", INT))
				{
					if (!DECORATOR::DECOR_EXIST_ON(veParam0, "RandomID"))
					{
						entityModel.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(veParam0, "RandomID", entityModel.f_2);
					}
					else
					{
						entityModel.f_2 = DECORATOR::DECOR_GET_INT(veParam0, "RandomID");
					}
				}
			
				func_0x3782EFFB(entityModel);
			}
		}
	}

	return;
}

void func_0x3782EFFB(var uParam0, var uParam1, var uParam2)
{
	Hash eventData;

	eventData = -1251853784;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = uParam0;
	eventData.f_3.f_1 = uParam0.f_1;
	eventData.f_3.f_2 = uParam0.f_2;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 6, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true), eventData);
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

BOOL func_0x9D74E75(int iParam0)
{
	int i;

	if (func_0xD56328D2())
	{
		for (i = 0; i < 62; i = i + 1)
		{
			if (func_0x1BE0B176(i) == iParam0)
				if (func_0x902ED9DB(i))
					return true;
		}
	}

	return false;
}

BOOL func_0x902ED9DB(int iParam0)
{
	return func_0xA45BEB30(iParam0, 6, true);
}

BOOL func_0xA45BEB30(int iParam0, int iParam1, BOOL bParam2)
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(/*Global_101740*/g_sShopSettings.f_1421[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_0x21D64237() == 0)
			return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(func_0x28E83966(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(/*Global_114135*/SP_save_structure.f_668[iParam0], iParam1);

	return false;
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
			return 13519;
	
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
	
		case 61:
			return 12447;
	
		default:
			break;
	}

	return 15468;
}

int func_0x1BE0B176(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	}

	return 6;
}

BOOL func_0xD56328D2()
{
	return /*Global_101740*/g_sShopSettings.f_400 > 0;
}

int func_0x26C20EE4(Vehicle veParam0, Any* panParam1)
{
	int vehicleCrewEmblemRequestState;
	Player playerFromGamerHandle;

	if (!func_0xC9297803(veParam0, panParam1))
		return 1;

	vehicleCrewEmblemRequestState = 0;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		vehicleCrewEmblemRequestState = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);

	if (vehicleCrewEmblemRequestState == 0)
	{
		if (!func_0x3805EC88(veParam0))
		{
			playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
		
			if (func_0xBC57DF9D(&veParam0, playerFromGamerHandle))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (vehicleCrewEmblemRequestState >= 3)
	{
		return 1;
	}
	else if (func_0x5F209CA0(veParam0))
	{
	}

	return 0;
}

BOOL func_0xBC57DF9D(var uParam0, Player plParam1)
{
	func_0x27D28D2();

	if (/*Global_1574633*/g_TransitionData.f_18 != 0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*uParam0))
	{
		Global_1943806.f_11 = VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*uParam0);
	
		if (Global_1943806.f_11 < 0f)
			Global_1943806.f_11 = 0f;
	}

	func_0x16E94792(*uParam0, &Global_1943806, &(Global_1943806.f_1), &(Global_1943806.f_4), &(Global_1943806.f_7), &(Global_1943806.f_10));
	Global_1943806.f_1.f_2 = Global_1943806.f_1.f_2 - Global_1943806.f_11;

	if (Global_1943806.f_4.f_2 < 0f)
		Global_1943806.f_12 = 1;

	Global_1943806.f_13 = 200;

	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("comet4"))
		Global_1943806.f_13 = 255;

	if (Global_1943806.f_12)
	{
		if (func_0x947E8C7E(uParam0, plParam1, Global_1943806, Global_1943806.f_1, Global_1943806.f_4, Global_1943806.f_7, Global_1943806.f_10, 0, Global_1943806.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_1577965 = NETWORK::GET_NETWORK_TIME();
			else
				Global_1577965 = MISC::GET_GAME_TIMER();
		
			return true;
		}
	}
	else
	{
		Global_1943806.f_14 = { Global_1943806.f_1 };
		Global_1943806.f_14 = Global_1943806.f_14 * -1f;
		Global_1943806.f_17 = { Global_1943806.f_4 };
		Global_1943806.f_17 = Global_1943806.f_17 * -1f;
		Global_1943806.f_20 = { Global_1943806.f_7 };
		Global_1943806.f_20.f_1 = Global_1943806.f_20.f_1 * -1f;
		Global_1943806.f_20.f_2 = Global_1943806.f_20.f_2 * -1f;
	
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 0))
			Global_1943806.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 0);
		else
			Global_1943806.f_23 = 3;
	
		Global_1943806.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
	
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 1))
			Global_1943806.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
		else
			Global_1943806.f_24 = 3;
	
		if (Global_1943806.f_23 == 0 && func_0x947E8C7E(uParam0, plParam1, Global_1943806, Global_1943806.f_1, Global_1943806.f_4, Global_1943806.f_7, Global_1943806.f_10, 0, Global_1943806.f_13) || Global_1943806.f_23 != 0 && Global_1943806.f_24 == 0 && func_0x947E8C7E(uParam0, plParam1, Global_1943806, Global_1943806.f_14, Global_1943806.f_17, Global_1943806.f_20, Global_1943806.f_10, 1, Global_1943806.f_13) || Global_1943806.f_24 != 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_1577965 = NETWORK::GET_NETWORK_TIME();
			else
				Global_1577965 = MISC::GET_GAME_TIMER();
		
			return true;
		}
	}

	return false;
}

BOOL func_0x947E8C7E(var uParam0, Player plParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, Vector3 vParam6, var uParam7, var uParam8, Vector3 vParam9, var uParam10, var uParam11, float fParam12, int iParam13, int iParam14)
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(plParam1), iParam2, vParam3, vParam6, vParam9, fParam12, iParam13, iParam14);
}

int func_0x16E94792(Vehicle veParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 0;

	*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");

	if (!func_0x2D46096D(Global_1943832, 0f, 0f, 0f, false) && !func_0x2D46096D(Global_1943835, 0f, 0f, 0f, false) && !func_0x2D46096D(Global_1943838, 0f, 0f, 0f, false) && !(Global_1943841 == 0f))
	{
		*uParam2 = { Global_1943832 };
		*uParam3 = { Global_1943835 };
		*uParam4 = { Global_1943838 };
		*fParam5 = Global_1943841;
		return 1;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("dominator"):
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("feltzer2"):
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("bagger"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.65f;
			break;
	
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.75f;
			break;
	
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -1289225626:
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.14f;
			break;
	
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.475f;
			break;
	
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.44f;
			break;
	
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.425f;
			break;
	
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.31f;
			break;
	
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sentinel"):
			*uParam2 = { 0f, 1.18f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.49f;
			break;
	
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.32f;
			break;
	
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.32f;
			break;
	
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("youga"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*fParam5 = 0.5f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.3f, -0.07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1625f;
			break;
	
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.7125f;
			break;
	
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2625f;
			break;
	
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.775f;
			break;
	
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.775f;
			break;
	
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.325f;
			break;
	
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.16f;
			break;
	
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3875f;
			break;
	
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4375f;
			break;
	
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2875f;
			break;
	
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.435f;
			break;
	
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case joaat("feltzer3"):
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case joaat("brawler"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("chino"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("coquette3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("t20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("vindicator"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case joaat("chino2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("primo2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("voodoo"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("tornado5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case joaat("minivan2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("btype2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("baller3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("baller4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("baller5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("baller6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("cog55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("cog552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("mamba"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("schafter3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("schafter4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("schafter5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("schafter6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("banshee2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("seven70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("fmj"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("pfister811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("prototipo"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("reaper"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("windsor2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case joaat("xls"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("xls2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("brioso"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("contender"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("le7b"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("omnis"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("avarus"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("daemon2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.125f;
			break;
	
		case joaat("esskey"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("nightblade"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.125f;
			break;
	
		case joaat("ratbike"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("shotaro"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("zombiea"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("zombieb"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("vortex"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.095f;
			break;
	
		case joaat("tornado6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("youga2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("faggio3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("faggio"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1625f;
			break;
	
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("diablous"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("diablous2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("elegy"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("fcr"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("fcr2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("italigtb"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("nero"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("nero2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("ruiner2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("specter"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("specter2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("technical2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("voltic2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case joaat("infernus2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("ruston"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("turismo2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("ardent"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("halftrack"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("nightshark"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("oppressor"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.08f;
			break;
	
		case joaat("tampa3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.275f;
			break;
	
		case joaat("technical3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case joaat("torero"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("vagner"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("xa21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("phantom3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("hauler2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("cyclone"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("visione"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("vigilante"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case joaat("retinue"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case joaat("avenger"):
		case joaat("avenger3"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("deluxo"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("stromberg"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("riot2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("chernobog"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.34f;
			break;
	
		case joaat("khanjali"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("barrage"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("comet4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.36f;
			break;
	
		case joaat("neon"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("streiter"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("yosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("sc1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("hustler"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("revolter"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("pariah"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("raiden"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("riata"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("hermes"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("comet5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.275f;
			break;
	
		case joaat("kamacho"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.225f;
			break;
	
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("ellie"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("issi3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("flashgt"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("tezeract"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case joaat("tyrant"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("entity2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -362690998:
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1466692365:
		case joaat("cheburek"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case joaat("caracara"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("speedo4"):
		case joaat("speedo5"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("mule4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("pounder2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.38f;
			break;
	
		case joaat("swinger"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("menacer"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("scramjet"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("patriot2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("stafford"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.08f;
			break;
	
		case joaat("terbyte"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("bruiser"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case joaat("brutus"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("brutus2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("brutus3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("cerberus"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("cerberus2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("cerberus3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("clique"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("deveste"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("deviant"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("issi4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("issi5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("issi6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("italigto"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("monster3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("monster4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("monster5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("schlagen"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("toros"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("tulip"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("caracara2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("drafter"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("dynasty"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("emerus"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("hellion"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("issi7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("jugular"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("krieger"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("locust"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("nebula"):
		case 1690421418:
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("neo"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("novak"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("peyote2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("s80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("thrax"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("zion3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("rebla"):
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("asbo"):
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("sugoi"):
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("komoda"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("vstr"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("sultan2"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("kanjo"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("jb7002"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("retinue2"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("furia"):
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("everon"):
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("imorgon"):
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("zhaba"):
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("gauntlet5"):
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.24f;
			break;
	
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case joaat("manana2"):
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case joaat("club"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.31f;
			break;
	
		case joaat("glendale2"):
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.205f;
			break;
	
		case joaat("youga3"):
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.135f;
			break;
	
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.21f;
			break;
	
		case joaat("seminole2"):
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("penumbra2"):
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("landstalker2"):
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("coquette4"):
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("tigon"):
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("peyote3"):
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("brioso2"):
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("italirsx"):
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("toreador"):
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("weevil"):
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("zr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case joaat("calico"):
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("comet6"):
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("warrener2"):
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("remus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("vectre"):
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("dominator7"):
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("cypher"):
		case 258105345:
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("sultan3"):
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.23f;
			break;
	
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("previon"):
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("dominator8"):
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("futo2"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("euros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("growler"):
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("cinquemila"):
			*uParam2 = { -1f, 0.533f, 0.197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("champion"):
			*uParam2 = { -1f, 0.076f, 0.122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("granger2"):
			*uParam2 = { -1f, 0.461f, 0.264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("deity"):
			*uParam2 = { -1f, 0.279f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("buffalo4"):
			*uParam2 = { -1f, 0.251f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("baller7"):
			*uParam2 = { -1.194f, 0.182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("zeno"):
			*uParam2 = { -1.194f, 0.409f, 0.199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case joaat("comet7"):
			*uParam2 = { -1f, 0.05f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("astron"):
			*uParam2 = { -1f, 0.249f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("patriot3"):
			*uParam2 = { -1.2f, 0.474f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.23f;
			break;
	
		case joaat("jubilee"):
			*uParam2 = { -1.037f, 0.438f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("shinobi"):
			*uParam2 = { 0f, 0.306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.045f;
			break;
	
		case joaat("reever"):
			*uParam2 = { -1f, 0.292f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("iwagen"):
			*uParam2 = { -1f, 0.387f, 0.209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("brioso3"):
			*uParam2 = { -1f, 0.15f, 0.2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("corsita"):
			*uParam2 = { -1f, 0.1f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("greenwood"):
			*uParam2 = { -1f, 0.2f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("kanjosj"):
			*uParam2 = { -1f, 0.1f, 0.26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("postlude"):
			*uParam2 = { -1f, 0f, 0.28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("rhinehart"):
			*uParam2 = { 0f, 1.317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("tenf"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("tenf2"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("torero2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("vigero2"):
			*uParam2 = { -1f, -0.07f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("weevil2"):
			*uParam2 = { -1f, 0.07f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("draugur"):
			*uParam2 = { -1f, 0.5f, 0.48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("ruiner4"):
			*uParam2 = { -1f, 0.5f, 0.182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("sentinel4"):
		case -986656474:
			*uParam2 = { -1f, 0.147f, 0.239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("sm722"):
			*uParam2 = { -1f, -0.4f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("omnisegt"):
			*uParam2 = { 0f, 1.462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case -1386336041:
			*uParam2 = { -1f, 0.3f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 1748565021:
			*uParam2 = { -1f, 0.5f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1384502824:
			*uParam2 = { -1f, 0.066f, 0.329f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -1035489563:
			*uParam2 = { -1f, 1.19f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 996383885:
			*uParam2 = { -1f, 0.25f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1249788006:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.7f;
			break;
	
		case 268758436:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1076201208:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 669204833:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1550581940:
			*uParam2 = { -1f, 0.3f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1933242328:
			*uParam2 = { -1f, -0.4f, 0.375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 2100457220:
			*uParam2 = { -1f, 0.069f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -461850249:
			*uParam2 = { -1f, -0.253f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -131348178:
			*uParam2 = { -1f, 0.101f, 0.227f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.6f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case -1763675285:
			*uParam2 = { -1f, 0.2f, 0.43f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -654498607:
			*uParam2 = { -0.003f, 2.764f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1336514315:
			*uParam2 = { -1.5f, 0.4f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.24f;
			break;
	
		case 1447690049:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 165968051:
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -536105557:
			*uParam2 = { -1f, 0.128f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.42f;
			break;
	
		case -979292575:
			*uParam2 = { -1f, 0.088f, 0.438f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("coureur"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("monstrociti"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1479935577:
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.44f;
			break;
	
		case -1681653521:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("driftremus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("drifteuros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("driftfuto"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("driftjester"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("driftzr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case -38879449:
			*uParam2 = { 0f, 2.1f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -441209695:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -465825307:
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.44f;
			break;
	
		case -1029730482:
			*uParam2 = { -1.6f, 0.585f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -478639183:
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case -741120335:
			*uParam2 = { -1f, 0.15f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.46f;
			break;
	
		case -768044142:
			*uParam2 = { -1f, 0.229f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.36f;
			break;
	
		case -178442374:
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.41f;
			break;
	
		case -1372798934:
			*uParam2 = { -1f, 0.475f, 0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1240172147:
		case -143587026:
			*uParam2 = { 0f, 1.141f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1249425552:
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case 1307736079:
			*uParam2 = { -1f, 0.315f, 0.1587f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0455f };
			*fParam5 = 0.4f;
			break;
	
		case 1452003510:
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.41f;
			break;
	
		case -223461503:
			*uParam2 = { -1f, -0.0897f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2375f;
			break;
	
		case 1121330119:
			*uParam2 = { -1f, 0f, 0.2702f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case 1579902654:
			*uParam2 = { -1f, 0f, 0.0653f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1896488056:
			*uParam2 = { -1.229f, 0.6f, 0.361f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -999594302:
			*uParam2 = { 0f, 1.71f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1881415402:
			*uParam2 = { -1f, 0.175f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1958428933:
			*uParam2 = { -1f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -946047670:
			*uParam2 = { -1f, 0f, 0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1968807591:
			*uParam2 = { 0f, 1.0569f, 1f };
			*uParam3 = { 0f, -0.5995f, -1f };
			*uParam4 = { -0.4071f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1992041063:
			*uParam2 = { -1f, 0.2073f, 0.1513f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0285f };
			*fParam5 = 0.365f;
			break;
	
		case -660007725:
		case 1484920335:
		case 127317925:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.335f;
			break;
	
		case joaat("URANUS"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.335f;
			break;
	
		case -973016778:
			*uParam2 = { -1f, 0.2805f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.445f;
			break;
	}

	return 1;
}

BOOL func_0x2D46096D(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_0x27D28D2()
{
	Global_1943806 = 0;
	Global_1943806.f_1 = { 0f, 0f, 0f };
	Global_1943806.f_4 = { 0f, 0f, 0f };
	Global_1943806.f_7 = { 0f, 0f, 0f };
	Global_1943806.f_10 = 0f;
	Global_1943806.f_11 = 0f;
	Global_1943806.f_12 = 0;
	Global_1943806.f_13 = 0;
	Global_1943806.f_14 = { 0f, 0f, 0f };
	Global_1943806.f_17 = { 0f, 0f, 0f };
	Global_1943806.f_20 = { 0f, 0f, 0f };
	Global_1943806.f_23 = 0;
	Global_1943806.f_24 = 0;
	return;
}

BOOL func_0xC9297803(Vehicle veParam0, Any* panParam1)
{
	Player playerFromGamerHandle;
	BOOL flag;
	int num;

	if (NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam1))
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
	else
		playerFromGamerHandle = _INVALID_PLAYER_INDEX();

	flag = false;

	if (playerFromGamerHandle == PLAYER::PLAYER_ID())
		if (func_0xA9E9B748(15, false))
			flag = true;
		else if (func_0xCA2EA26D(true))
			flag = true;
	else
		flag = true;

	if (!flag && ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false) && NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam1))
	{
		num = /*Global_2359296*/g_savedMPGlobalsNew.g_savedMPGlobals[func_0xF9396AAC()].f_681.f_2;
	
		if (num > -1 && num < 547)
			if (IS_BIT_SET(Global_1586535[num].f_104, 8))
				flag = true;
	}

	if (!(ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || !(NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam1)) || playerFromGamerHandle == _INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(playerFromGamerHandle, false, false) || !flag || func_0x760B040D(veParam0))
		return false;

	return true;
}

BOOL func_0x760B040D(Vehicle veParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (func_0xE627570A(PLAYER::PLAYER_ID()) == 3)
		if (func_0x2BB30050(veParam0) != -1)
			return true;

	if (Global_1943831)
		return true;

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
		case joaat("lm87"):
		case joaat("gp1"):
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("thruster"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
		case joaat("draugur"):
		case -1576586413:
		case -1627077503:
		case 1447690049:
		case -1696319096:
		case joaat("turismo3"):
		case -1233767450:
		case joaat("Police5"):
		case joaat("police4"):
		case joaat("baller8"):
		case 372621319:
		case 167522317:
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
		case -1321131184:
		case 2042703219:
		case -1948949064:
		case 1891140410:
			return true;
	
		case joaat("youga"):
		case joaat("youga2"):
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) != -1)
				return true;
			break;
	
		case joaat("surano"):
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) == 1)
				return true;
			break;
	
		case joaat("club"):
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 1 || VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 7)
				return true;
			break;
	
		case joaat("yosemite3"):
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 5 || VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 6)
				return true;
			break;
	}

	return false;
}

int func_0x2BB30050(Vehicle veParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", INT))
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "FMDeliverableID"))
			return DECORATOR::DECOR_GET_INT(veParam0, "FMDeliverableID");

	return -1;
}

int func_0xE627570A(Player plParam0)
{
	if (func_0x5EA8DF5A(plParam0) == 233)
		return func_0x48014DA(plParam0);

	return -1;
}

BOOL func_0xA9E9B748(int iParam0, BOOL bParam1)
{
	int num;
	int num2;

	if (bParam1)
		if (iParam0 == 15)
			return true;

	if (func_0x440D1C81(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return true;
		}
	}

	num = func_0x9CE190B0(iParam0);
	num2 = iParam0;
	return IS_BIT_SET(num, func_0x9042BAD4(num2));
}

int func_0x9CE190B0(int iParam0)
{
	int num;

	num = GET_MP_INT_CHARACTER_STAT(func_0xAA02C235(iParam0), -1);
	return num;
}

int func_0xAA02C235(int iParam0)
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_0x195EBE32(num);

	switch (num2)
	{
		case 0:
			return 1291;
	}

	return 1291;
}

BOOL func_0x440D1C81(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (func_0xA4C8B8D7(plParam0) && /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_11 == plParam0)
			return true;

	return false;
}

BOOL func_0xA4C8B8D7(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 22;

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
	
		case 172:
			return 30;
	
		case 173:
			return 31;
	}

	return -1;
}

void func_0x47F85C31(Vehicle veParam0, int iParam1)
{
	int num;
	int num2;

	num2 = func_0xACC8EE50(iParam1);
	func_0x39DFC5A3(num2, &num);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, num);
	return;
}

BOOL func_0xEB13AB9D(Vehicle veParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("deathbike2"):
			return true;
	}

	return false;
}

BOOL func_0x1B3B2773(int iParam0, var uParam1)
{
	*uParam1 = -1f;

	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
	
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
	
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
	
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
	
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
	
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
	
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
	
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
	
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
	
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
	
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
	
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
	
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
	
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
	
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
	
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
	
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
	
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
	
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
	
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
	
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
	
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
	
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
	
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
	
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
	
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
	
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
	
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
	
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
	
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
	
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
	
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
	
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
	
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
	
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
	
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
	
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
	
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
	
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
	
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
	
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
	
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
	
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
	
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
	
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}

	return *uParam1 != -1f;
}

void func_0x48AB42C1(Vehicle veParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", BOOL))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MLJ"))
				DECORATOR::DECOR_REMOVE(veParam0, "MLJ");

	return;
}

void func_0x97A77376(Vehicle veParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", BOOL))
			if (!DECORATOR::DECOR_EXIST_ON(veParam0, "MLJ"))
				DECORATOR::DECOR_SET_BOOL(veParam0, "MLJ", true);

	return;
}

BOOL func_0xE48228D0(Hash hParam0)
{
	switch (hParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
		case 669204833:
		case 1076201208:
		case 1447690049:
		case 165968051:
		case joaat("coureur"):
		case joaat("monstrociti"):
		case -38879449:
		case joaat("turismo3"):
		case joaat("baller8"):
		case 167522317:
		case 1121330119:
		case -946047670:
			return true;
	}

	return false;
}

void func_0x3234A2AB(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3)
{
	int num;
	int num2;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1->f_66 != 0;
	
		if (!func_0x57A74E37(veParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veParam0, &(uParam1->f_1));
		
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0, *uParam1);
		}
	
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			num = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_0xEE599357(num + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_0xEE599357(num + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			num2 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_0xEE599357(num2 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_0xEE599357(num2 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			for (i = 1; i <= 9; i = i + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_0xEE599357(i)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_0xEE599357(i));
				}
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			for (j = 1; j <= 6; j = j + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_0xEE599357(j)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_0xEE599357(j));
				}
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			for (k = 1; k <= 11; k = k + 1)
			{
				if (k != 9 && k != 10)
				{
					if (IS_BIT_SET(uParam1->f_77, func_0xEE599357(k)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_0xEE599357(k));
					}
				}
			}
		}
		else if (uParam1->f_66 == -1035489563)
		{
			for (l = 1; l <= 2; l = l + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_0xEE599357(l)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_0xEE599357(l));
				}
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (IS_BIT_SET(uParam1->f_77, func_0xEE599357(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_0xEE599357(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != 0)
				MISC::SET_BIT(&(uParam1->f_77), 0);
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_0xEE599357(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			for (m = 1; m <= 2; m = m + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_0xEE599357(m)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_0xEE599357(m));
				}
			}
		}
	
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, false);
		
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, true);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 13))
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0);
	
		if (IS_BIT_SET(uParam1->f_77, 12))
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0);
	
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_0xF0601AB8(uParam1->f_5) || func_0xF0601AB8(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(veParam0, uParam1->f_5, uParam1->f_6);
			}
		}
	
		if (uParam1->f_7 < 0)
			uParam1->f_7 = 0;
	
		if (uParam1->f_8 < 0)
			uParam1->f_8 = 0;
	
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, uParam1->f_7, uParam1->f_8);
	
		if (IS_BIT_SET(uParam1->f_77, 15) || func_0xC18A9774(veParam0) || uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0 && DLC::IS_DLC_PRESENT(joaat("mpindependence")))
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
	
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
	
		if (uParam1->f_65 == -1 && !func_0x5000025C(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, uParam1->f_65);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
			VEHICLE::SET_DRIFT_TYRES(veParam0, false);
		}
	
		if (bParam2)
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veParam0, uParam1->f_70);
	
		VEHICLE::SET_VEHICLE_NEON_COLOUR(veParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(veParam0, IS_BIT_SET(uParam1->f_77, 10));
	
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(veParam0) > 1 && uParam1->f_67 >= 0)
			VEHICLE::SET_VEHICLE_LIVERY(veParam0, uParam1->f_67);
	
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))
					if (uParam1->f_69 == 6)
						func_0x4F43FC2B(veParam0, uParam1->f_69);
				else
					func_0x4F43FC2B(veParam0, uParam1->f_69);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5)
				VEHICLE::RAISE_CONVERTIBLE_ROOF(veParam0, true);
			else
				VEHICLE::LOWER_CONVERTIBLE_ROOF(veParam0, true);
	
		if (bParam3)
			func_0x5C9EC0F7(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			for (n = 0; n <= 11; n = n + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_0xEE599357(n + 1)))
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
						VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, false);
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
					VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, true);
			}
		}
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("omnis") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("le7b"))
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) == -1)
				VEHICLE::SET_VEHICLE_EXTRA(veParam0, 1, false);
	
		if (func_0x599C0723() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(veParam0) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("avenger")) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, func_0x9AA99395(true)))
			if (!IS_BIT_SET(uParam1->f_77, 23))
				if (!IS_BIT_SET(uParam1->f_77, 22) && func_0x64EBC58(veParam0, 5f))
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 3);
				else
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 2);
			else
				VEHICLE::CONTROL_LANDING_GEAR(veParam0, 4);
	
		if (IS_BIT_SET(uParam1->f_77, 27))
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", true);
		else
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", false);
	}

	return;
}

BOOL func_0x64EBC58(Vehicle veParam0, float fParam1)
{
	float entityCoords;
	var groundZ;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ, false, false))
			if (MISC::ABSF(entityCoords.f_2 - groundZ) > fParam1)
				return true;
		else if (entityCoords.f_2 > PATHFIND::GET_APPROX_FLOOR_FOR_POINT(entityCoords, entityCoords.f_1) + fParam1)
			return true;
		else if (entityCoords.f_2 > 300f)
			return true;
	}

	return false;
}

Hash func_0x9AA99395(BOOL bParam0)
{
	if (bParam0)
		return joaat("avenger3");

	return joaat("avenger");
}

BOOL func_0x599C0723()
{
	if (*/*Global_4718592*/g_FMMC_STRUCT.f_118493 == 6 || */*Global_4718592*/g_FMMC_STRUCT.f_118493 == 7 || */*Global_4718592*/g_FMMC_STRUCT.f_118493 == 18 || */*Global_4718592*/g_FMMC_STRUCT.f_118493 == 19 && /*Global_4718592*/g_FMMC_STRUCT.f_2 == 20)
		return false;

	if (func_0x7F5F619C(7))
		if (func_0xE40D6326(/*Global_2672939*/MPGlobals.f_4.f_16) || func_0x16FCD261(/*Global_2672939*/MPGlobals.f_4.f_16))
			return false;

	return true;
}

BOOL func_0x16FCD261(int iParam0)
{
	int num;

	num = iParam0;

	if (num != -1)
		return Global_1882780[num].f_82.f_66 != 0;

	return false;
}

BOOL func_0xE40D6326(int iParam0)
{
	int num;

	num = iParam0;

	if (num != -1)
		return func_0x7CD5054C(iParam0, 9);

	return false;
}

BOOL func_0x7CD5054C(int iParam0, int iParam1)
{
	return IS_BIT_SET(/*Global_1887549*/globalPlayerBD_FM_3[iParam0].f_10.f_4, iParam1);
}

BOOL func_0x7F5F619C(int iParam0)
{
	return func_0x1995C9E6(&(/*Global_2672939*/MPGlobals.f_194), iParam0);
}

BOOL func_0x1995C9E6(var uParam0, int iParam1)
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_0x5C9EC0F7(var uParam0, var uParam1, var uParam2)
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, uParam1->[i] > 0);
		}
		else if (modType == 22)
		{
			if (uParam1->[i] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, true);
			
				if (uParam1->[i] == 1)
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				else
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[i] - 2);
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, modType) != uParam1->[i] - 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, modType);
		
			if (uParam1->[i] > 0)
			{
				if (modType == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[0] > 0);
				}
				else if (modType == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[1] > 0);
				}
				else if (func_0x206208ED(*uParam0, modType, uParam1->[i] - 1))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
				}
			}
		}
	}

	if (func_0x601BE2A2(ENTITY::GET_ENTITY_MODEL(*uParam0)) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_0xFE64EDC0(*uParam0, uParam1->[38] - 1))
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_0xFE64EDC0(*uParam0, uParam1->[38] - 1), false);

	func_0x2806D680(uParam0);

	if (func_0x4E83583B(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
	}

	return 1;
}

BOOL func_0x4E83583B(Vehicle veParam0)
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		for (i = 0; i < 49; i = i + 1)
		{
			modType = i;
		
			if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21 || modType == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 32);
				hashKey = MISC::GET_HASH_KEY(&unk);
			
				if (hashKey != 0)
					if (hashKey == MISC::GET_HASH_KEY("MNU_CAGE" /*Roll Cage and Chassis Upgrade*/) || hashKey == MISC::GET_HASH_KEY("SABRE_CAG" /*Stunt Cage*/))
						return true;
			}
		}
	}

	return false;
}

void func_0x2806D680(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
	
		default:
			break;
	}

	return;
}

int func_0xFE64EDC0(Vehicle veParam0, int iParam1)
{
	int value;
	int value2;
	float num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
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
						return 4;
				}
				break;
		
			case joaat("faction3"):
				return 3;
		}
	
		value = func_0x51ABE917(veParam0, 38) + 1;
		value2 = func_0x51ABE917(veParam0, 24) + 1;
		num = SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(value);
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value2) * num) - 1;
	
		if (num2 < 0)
			num2 = 0;
	
		if (num2 >= value)
			num2 = value - 1;
	
		return num2;
	}

	return 0;
}

int func_0x51ABE917(Vehicle veParam0, int iParam1)
{
	int i;

	if (STREAMING::IS_MODEL_VALID(Global_153027) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_153027) && Global_153028 == iParam1)
		return Global_153029;

	for (i = VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1; i >= 0 && func_0x206208ED(veParam0, iParam1, i); i = i - 1)
	{
	}

	return i;
}

BOOL func_0x601BE2A2(Hash hParam0)
{
	if (func_0xFE274898(hParam0, 1))
		return true;

	switch (hParam0)
	{
		case 1891140410:
			return true;
	}

	return false;
}

void func_0x4F43FC2B(Vehicle veParam0, int iParam1)
{
	int vehicleMod;
	int vehicleModVariation;

	if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
		vehicleMod = VEHICLE::GET_VEHICLE_MOD(veParam0, 24);
		vehicleModVariation = VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(veParam0, iParam1);
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("peyote2"))
			return;
	
		if (vehicleMod == -1)
			VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 24);
		else
			VEHICLE::SET_VEHICLE_MOD(veParam0, 24, vehicleMod, vehicleModVariation == 1);
	}

	return;
}

BOOL func_0x5000025C(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_0xC18A9774(Vehicle veParam0)
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
			
				return IS_BIT_SET(_int, 4);
			}
		}
	}

	return false;
}

int func_0xF0601AB8(var uParam0)
{
	if (!func_0x98B7EFDD() && func_0xE48228D0(uParam0))
		return 1;

	return 0;
}

BOOL func_0xE48228D0(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return true;
	}

	return false;
}

BOOL func_0x57A74E37(Vehicle veParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (!_IS_PLAYER_IN_VEHICLE_SEAT(PLAYER::PLAYER_ID(), -1))
			veParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	if (func_0xE627570A(PLAYER::PLAYER_ID()) == 3)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (func_0x2BB30050(veParam0) != -1)
				return true;

	return false;
}

BOOL _IS_PLAYER_IN_VEHICLE_SEAT(Player plParam0, int iParam1)
{
	Vehicle vehiclePedIsIn;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(plParam0), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(plParam0), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false))
					return true;
		}
	}

	return false;
}

void func_0x1A4F9FED(int iParam0, int* piParam1)
{
	switch (iParam0)
	{
		case 64:
			MISC::SET_BIT(piParam1, 4);
			break;
	
		case 67:
			MISC::SET_BIT(piParam1, 4);
			break;
	
		case 72:
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 117:
			MISC::CLEAR_BIT(piParam1, 1);
			break;
	
		case 49:
			MISC::CLEAR_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 118:
			MISC::SET_BIT(piParam1, 0);
			MISC::CLEAR_BIT(piParam1, 1);
			break;
	
		case 1:
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 119:
			MISC::CLEAR_BIT(piParam1, 1);
			break;
	
		case 77:
			MISC::SET_BIT(piParam1, 0);
			MISC::CLEAR_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 2);
			break;
	
		case 120:
			MISC::CLEAR_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 2);
			break;
	
		case 130:
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 132:
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 135:
			MISC::CLEAR_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 137:
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 141:
			MISC::SET_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 6);
			break;
	
		case 147:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 2);
			MISC::SET_BIT(piParam1, 3);
			MISC::SET_BIT(piParam1, 4);
			MISC::SET_BIT(piParam1, 5);
			MISC::SET_BIT(piParam1, 6);
			MISC::SET_BIT(piParam1, 7);
			MISC::SET_BIT(piParam1, 8);
			break;
	
		case 203:
			MISC::SET_BIT(piParam1, 0);
			MISC::CLEAR_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 2);
			break;
	
		case 100:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 2);
			break;
	
		case 170:
			MISC::CLEAR_BIT(piParam1, 0);
			MISC::CLEAR_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 2);
			break;
	
		case 160:
			MISC::SET_BIT(piParam1, 15);
			break;
	
		case 161:
			MISC::SET_BIT(piParam1, 15);
			break;
	
		case 192:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 2);
			break;
	
		case 221:
			MISC::CLEAR_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 2);
			break;
	
		case 222:
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 172:
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 165:
			MISC::CLEAR_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 166:
			MISC::SET_BIT(piParam1, 0);
			MISC::CLEAR_BIT(piParam1, 1);
			break;
	
		case 139:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 24);
			break;
	
		case 104:
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 109:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 2);
			break;
	
		case 227:
		case 252:
			MISC::SET_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 2);
			MISC::CLEAR_BIT(piParam1, 4);
			break;
	
		case 97:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 52:
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 108:
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 237:
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 238:
			MISC::CLEAR_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 2);
			break;
	
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_78231)
				MISC::SET_BIT(piParam1, 9);
			break;
	
		case 271:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 2);
			MISC::SET_BIT(piParam1, 3);
			MISC::SET_BIT(piParam1, 4);
			break;
	
		case 272:
			MISC::SET_BIT(piParam1, 3);
			MISC::SET_BIT(piParam1, 4);
			break;
	
		case 273:
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 281:
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 267:
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 268:
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 292:
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 309:
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 329:
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 364:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 360:
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 401:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 6);
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 406:
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 404:
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 425:
		case 426:
		case 427:
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 431:
		case 432:
		case 433:
			MISC::SET_BIT(piParam1, 9);
			break;
	
		case 471:
			MISC::SET_BIT(piParam1, 3);
			MISC::SET_BIT(piParam1, 7);
			break;
	
		case 493:
		case 491:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 2);
			MISC::SET_BIT(piParam1, 3);
			MISC::SET_BIT(piParam1, 4);
			MISC::SET_BIT(piParam1, 5);
			MISC::SET_BIT(piParam1, 6);
			MISC::SET_BIT(piParam1, 7);
			break;
	
		case 498:
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 590:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 614:
			MISC::CLEAR_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 2);
			MISC::CLEAR_BIT(piParam1, 3);
			MISC::CLEAR_BIT(piParam1, 24);
			MISC::CLEAR_BIT(piParam1, 25);
			MISC::CLEAR_BIT(piParam1, 26);
			break;
	
		case 616:
		case 615:
		case 617:
			MISC::SET_BIT(piParam1, 0);
			MISC::CLEAR_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 2);
			MISC::CLEAR_BIT(piParam1, 3);
			MISC::CLEAR_BIT(piParam1, 24);
			MISC::CLEAR_BIT(piParam1, 25);
			MISC::CLEAR_BIT(piParam1, 26);
			break;
	
		case 525:
			MISC::SET_BIT(piParam1, 3);
			break;
	
		case 485:
		case 105:
		case 597:
		case 417:
		case 446:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 475:
		case 477:
		case 492:
		case 504:
		case 599:
		case 394:
		case 604:
		case 613:
		case 385:
		case 375:
		case 573:
		case 265:
		case 476:
		case 610:
		case 465:
		case 44:
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 151:
			MISC::SET_BIT(piParam1, 2);
			MISC::SET_BIT(piParam1, 3);
			break;
	
		case 155:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 2);
			break;
	
		case 95:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 24);
			break;
	
		case 474:
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 602:
		case 486:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 2);
			break;
	
		case 579:
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 2);
			break;
	
		case 416:
			MISC::CLEAR_BIT(piParam1, 0);
			MISC::CLEAR_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 2);
			break;
	
		case 63:
			MISC::SET_BIT(piParam1, 0);
			MISC::CLEAR_BIT(piParam1, 1);
			MISC::CLEAR_BIT(piParam1, 2);
			MISC::SET_BIT(piParam1, 3);
			MISC::CLEAR_BIT(piParam1, 4);
			MISC::CLEAR_BIT(piParam1, 5);
			MISC::CLEAR_BIT(piParam1, 6);
			MISC::CLEAR_BIT(piParam1, 7);
			break;
	
		case 633:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 636:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 634:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 637:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 4);
			MISC::SET_BIT(piParam1, 6);
			break;
	
		case 635:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 644:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 653:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 650:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 1);
			break;
	
		case 651:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 0);
			break;
	
		case 652:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 4);
			break;
	
		case 655:
			*piParam1 = 0;
			MISC::SET_BIT(piParam1, 0);
			MISC::SET_BIT(piParam1, 1);
			MISC::SET_BIT(piParam1, 6);
			MISC::SET_BIT(piParam1, 9);
			break;
	
		default:
			return;
	}

	return;
}

int func_0xBA965109(int iParam0)
{
	switch (iParam0)
	{
		case -1479935577:
			return -465825307;
	
		case -1681653521:
			return joaat("yosemite2");
	
		case -1696319096:
			return joaat("tampa2");
	
		case joaat("driftremus"):
			return joaat("remus");
	
		case joaat("drifteuros"):
			return joaat("euros");
	
		case joaat("driftfuto"):
			return joaat("futo2");
	
		case joaat("driftjester"):
			return joaat("jester4");
	
		case joaat("driftzr350"):
			return joaat("zr350");
	
		case 1690421418:
			return joaat("nebula");
	
		case -143587026:
			return -1240172147;
	
		case 258105345:
			return joaat("cypher");
	
		case -986656474:
			return joaat("sentinel4");
	
		case -1289225626:
			return joaat("futo");
	
		case -362690998:
			return joaat("jester3");
	
		case -1466692365:
			return joaat("cheburek");
	}

	return 0;
}

BOOL func_0x5000025C(int iParam0)
{
	switch (iParam0)
	{
		case -1696319096:
		case -1681653521:
		case joaat("drifteuros"):
		case joaat("driftfuto"):
		case joaat("driftjester"):
		case joaat("driftremus"):
		case joaat("driftzr350"):
		case -1479935577:
		case 1690421418:
		case -143587026:
		case 258105345:
		case -986656474:
		case -1289225626:
		case -362690998:
		case -1466692365:
			return true;
	
		default:
		
	}

	return false;
}

int func_0x2D543B60(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ztype"):
			return 0;
	
		case joaat("stinger"):
			return 1;
	
		case joaat("jb700"):
			return 2;
	
		case joaat("cheetah"):
			return 3;
	
		case joaat("entityxf"):
			return 4;
	
		case joaat("adder"):
			return 5;
	
		case joaat("monroe"):
			return 6;
	
		case joaat("cogcabrio"):
			return 7;
	
		case joaat("shamal"):
			return 10;
	
		case joaat("stunt"):
			return 11;
	
		case joaat("cuban800"):
			return 12;
	
		case joaat("duster"):
			return 13;
	
		case joaat("luxor"):
			return 14;
	
		case joaat("frogger"):
			return 15;
	
		case joaat("maverick"):
			return 16;
	
		case joaat("rhino"):
			return 17;
	
		case joaat("titan"):
			return 18;
	
		case joaat("cargobob"):
			return 19;
	
		case joaat("buzzard"):
			return 20;
	
		case joaat("crusader"):
			return 21;
	
		case joaat("barracks"):
			return 22;
	
		case joaat("marquis"):
			return 24;
	
		case joaat("jetmax"):
			return 25;
	
		case joaat("squalo"):
			return 27;
	
		case joaat("tropic"):
			return 29;
	
		case joaat("seashark"):
			return 30;
	
		case joaat("submersible"):
			return 31;
	
		case joaat("suntrap"):
			return 32;
	
		case joaat("tug"):
			return 258;
	
		case joaat("bmx"):
			return 33;
	
		case joaat("scorcher"):
			return 34;
	
		case joaat("tribike"):
			return 35;
	
		case joaat("tribike2"):
			return 36;
	
		case joaat("tribike3"):
			return 37;
	
		case joaat("cruiser"):
			return 38;
	
		case joaat("schwarzer"):
			return 39;
	
		case joaat("zion"):
			return 40;
	
		case joaat("gauntlet"):
			return 41;
	
		case joaat("vigero"):
			return 42;
	
		case joaat("issi2"):
			return 43;
	
		case joaat("infernus"):
			return 44;
	
		case joaat("surano"):
			return 45;
	
		case joaat("vacca"):
			return 46;
	
		case joaat("ninef"):
			return 47;
	
		case joaat("comet2"):
			return 48;
	
		case joaat("banshee"):
			return 49;
	
		case joaat("feltzer2"):
			return 50;
	
		case joaat("bfinjection"):
			return 51;
	
		case joaat("sandking"):
			return 52;
	
		case joaat("fugitive"):
			return 53;
	
		case joaat("dilettante"):
			return 54;
	
		case joaat("superd"):
			return 55;
	
		case joaat("exemplar"):
			return 56;
	
		case joaat("baller2"):
			return 57;
	
		case joaat("cavalcade"):
			return 58;
	
		case joaat("rocoto"):
			return 59;
	
		case joaat("felon"):
			return 60;
	
		case joaat("oracle2"):
			return 61;
	
		case joaat("bati"):
			return 62;
	
		case joaat("akuma"):
			return 63;
	
		case joaat("ruffian"):
			return 64;
	
		case joaat("vader"):
			return 65;
	
		case joaat("blazer"):
			return 66;
	
		case joaat("pcj"):
			return 67;
	
		case joaat("sanchez"):
			return 68;
	
		case joaat("faggio2"):
			return 69;
	
		case joaat("airbus"):
			return 82;
	
		case joaat("annihilator"):
			return 78;
	
		case joaat("bati2"):
			return 94;
	
		case joaat("bison"):
			return 89;
	
		case joaat("bullet"):
			return 70;
	
		case joaat("bus"):
			return 83;
	
		case joaat("carbonizzare"):
			return 71;
	
		case joaat("coach"):
			return 84;
	
		case joaat("coquette"):
			return 72;
	
		case joaat("double"):
			return 90;
	
		case joaat("dump"):
			return 81;
	
		case joaat("felon2"):
			return 91;
	
		case joaat("hexer"):
			return 92;
	
		case joaat("journey"):
			return 85;
	
		case joaat("mammatus"):
			return 79;
	
		case joaat("mule"):
			return 86;
	
		case joaat("ninef2"):
			return 73;
	
		case joaat("rapidgt"):
			return 74;
	
		case joaat("rapidgt2"):
			return 75;
	
		case joaat("rentalbus"):
			return 87;
	
		case joaat("stingergt"):
			return 76;
	
		case joaat("stretch"):
			return 88;
	
		case joaat("velum"):
			return 80;
	
		case joaat("voltic"):
			return 77;
	
		case joaat("zion2"):
			return 93;
	
		case joaat("elegy2"):
			return 95;
	
		case joaat("khamelion"):
			return 96;
	
		case joaat("hotknife"):
			return 97;
	
		case joaat("carbonrs"):
			return 98;
	
		case joaat("bodhi2"):
			return 103;
	
		case joaat("dune"):
			return 104;
	
		case joaat("rebel"):
			return 105;
	
		case joaat("sadler"):
			return 106;
	
		case joaat("sanchez2"):
			return 107;
	
		case joaat("sandking2"):
			return 108;
	
		case joaat("asea"):
			return 128;
	
		case joaat("asterope"):
			return 129;
	
		case joaat("bobcatxl"):
			return 130;
	
		case joaat("cavalcade2"):
			return 131;
	
		case joaat("granger"):
			return 132;
	
		case joaat("ingot"):
			return 133;
	
		case joaat("intruder"):
			return 134;
	
		case joaat("minivan"):
			return 135;
	
		case joaat("premier"):
			return 136;
	
		case joaat("radi"):
			return 137;
	
		case joaat("rancherxl"):
			return 138;
	
		case joaat("ratloader"):
			return 139;
	
		case joaat("stanier"):
			return 140;
	
		case joaat("stratum"):
			return 141;
	
		case joaat("washington"):
			return 142;
	
		case joaat("dominator"):
			return 122;
	
		case joaat("f620"):
			return 123;
	
		case joaat("fusilade"):
			return 124;
	
		case joaat("penumbra"):
			return 125;
	
		case joaat("sentinel"):
			return 126;
	
		case joaat("sentinel2"):
			return 127;
	
		case joaat("picador"):
			return 150;
	
		case joaat("regina"):
			return 151;
	
		case joaat("surfer"):
			return 152;
	
		case joaat("youga"):
			return 153;
	
		case joaat("blazer3"):
			return 154;
	
		case joaat("rebel2"):
			return 155;
	
		case joaat("primo"):
			return 156;
	
		case joaat("buffalo"):
			return 157;
	
		case joaat("buffalo2"):
			return 158;
	
		case joaat("tailgater"):
			return 159;
	
		default:
		
	}

	if (iParam0 == joaat("bifta"))
		return 99;
	else if (iParam0 == joaat("kalahari"))
		return 100;
	else if (iParam0 == joaat("paradise"))
		return 101;
	else if (iParam0 == joaat("speeder"))
		return 102;
	else if (iParam0 == joaat("roosevelt") || iParam0 == joaat("btype"))
		return 109;
	else if (iParam0 == joaat("jester"))
		return 111;
	else if (iParam0 == joaat("massacro"))
		return 114;
	else if (iParam0 == joaat("turismor"))
		return 112;
	else if (iParam0 == joaat("zentorno"))
		return 115;
	else if (iParam0 == joaat("huntley"))
		return 116;
	else if (iParam0 == joaat("alpha"))
		return 110;
	else if (iParam0 == joaat("vestra"))
		return 113;
	else if (iParam0 == joaat("coquette"))
		return 117;
	else if (iParam0 == joaat("banshee"))
		return 118;
	else if (iParam0 == joaat("stinger"))
		return 119;
	else if (iParam0 == joaat("voltic"))
		return 120;
	else if (iParam0 == joaat("thrust"))
		return 121;
	else if (iParam0 == joaat("blade"))
		return 143;
	else if (iParam0 == joaat("warrener"))
		return 144;
	else if (iParam0 == joaat("glendale"))
		return 145;
	else if (iParam0 == joaat("rhapsody"))
		return 146;
	else if (iParam0 == joaat("panto"))
		return 147;
	else if (iParam0 == joaat("dubsta3"))
		return 148;
	else if (iParam0 == joaat("pigalle"))
		return 149;
	else if (iParam0 == joaat("monster"))
		return 160;
	else if (iParam0 == joaat("sovereign"))
		return 161;
	else if (iParam0 == joaat("miljet"))
		return 162;
	else if (iParam0 == joaat("besra"))
		return 163;
	else if (iParam0 == joaat("swift"))
		return 164;
	else if (iParam0 == joaat("coquette2"))
		return 165;
	else if (iParam0 == joaat("coquette2"))
		return 166;
	else if (iParam0 == joaat("innovation"))
		return 167;
	else if (iParam0 == joaat("hakuchou"))
		return 168;
	else if (iParam0 == joaat("furoregt"))
		return 169;
	else if (iParam0 == joaat("kalahari"))
		return 170;
	else if (iParam0 == joaat("valkyrie"))
		return 187;
	else if (iParam0 == joaat("hydra"))
		return 177;
	else if (iParam0 == joaat("savage"))
		return 185;
	else if (iParam0 == joaat("enduro"))
		return 174;
	else if (iParam0 == joaat("boxville4"))
		return 171;
	else if (iParam0 == joaat("casco"))
		return 172;
	else if (iParam0 == joaat("dinghy3"))
		return 173;
	else if (iParam0 == joaat("gburrito2"))
		return 175;
	else if (iParam0 == joaat("guardian"))
		return 176;
	else if (iParam0 == joaat("insurgent"))
		return 178;
	else if (iParam0 == joaat("mule3"))
		return 183;
	else if (iParam0 == joaat("insurgent2"))
		return 179;
	else if (iParam0 == joaat("lectro"))
		return 182;
	else if (iParam0 == joaat("pbus"))
		return 184;
	else if (iParam0 == joaat("technical"))
		return 186;
	else if (iParam0 == joaat("velum2"))
		return 188;
	else if (iParam0 == joaat("gresley"))
		return 189;
	else if (iParam0 == joaat("jackal"))
		return 190;
	else if (iParam0 == joaat("kuruma"))
		return 180;
	else if (iParam0 == joaat("kuruma2"))
		return 181;
	else if (iParam0 == joaat("landstalker"))
		return 191;
	else if (iParam0 == joaat("mesa3"))
		return 192;
	else if (iParam0 == joaat("nemesis"))
		return 193;
	else if (iParam0 == joaat("oracle"))
		return 194;
	else if (iParam0 == joaat("rumpo"))
		return 195;
	else if (iParam0 == joaat("schafter2"))
		return 196;
	else if (iParam0 == joaat("seminole"))
		return 197;
	else if (iParam0 == joaat("surge"))
		return 198;
	else if (iParam0 == joaat("dodo"))
		return 199;
	else if (iParam0 == joaat("marshall"))
		return 200;
	else if (iParam0 == joaat("submersible2"))
		return 201;
	else if (iParam0 == joaat("blista2"))
		return 202;
	else if (iParam0 == joaat("stalion"))
		return 203;
	else if (iParam0 == joaat("dukes"))
		return 204;
	else if (iParam0 == joaat("dukes2"))
		return 205;
	else if (iParam0 == joaat("stalion2"))
		return 206;
	else if (iParam0 == joaat("dominator2"))
		return 207;
	else if (iParam0 == joaat("gauntlet2"))
		return 208;
	else if (iParam0 == joaat("buffalo3"))
		return 209;
	else if (iParam0 == joaat("slamvan"))
		return 210;
	else if (iParam0 == joaat("ratloader2"))
		return 211;
	else if (iParam0 == joaat("jester2"))
		return 212;
	else if (iParam0 == joaat("massacro2"))
		return 213;
	else if (iParam0 == joaat("feltzer3"))
		return 214;
	else if (iParam0 == joaat("luxor2"))
		return 215;
	else if (iParam0 == joaat("osiris"))
		return 216;
	else if (iParam0 == joaat("swift2"))
		return 217;
	else if (iParam0 == joaat("virgo"))
		return 218;
	else if (iParam0 == joaat("windsor"))
		return 219;
	else if (iParam0 == joaat("brawler"))
		return 220;
	else if (iParam0 == joaat("chino"))
		return 221;
	else if (iParam0 == joaat("coquette3"))
		return 222;
	else if (iParam0 == joaat("t20"))
		return 223;
	else if (iParam0 == joaat("toro"))
		return 224;
	else if (iParam0 == joaat("vindicator"))
		return 225;
	else if (iParam0 == joaat("primo"))
		return 229;
	else if (iParam0 == joaat("moonbeam"))
		return 228;
	else if (iParam0 == joaat("faction"))
		return 227;
	else if (iParam0 == joaat("buccaneer"))
		return 226;
	else if (iParam0 == joaat("voodoo2"))
		return 230;
	else if (iParam0 == joaat("btype2"))
		return 231;
	else if (iParam0 == joaat("lurcher"))
		return 232;
	else if (iParam0 == joaat("minivan"))
		return 135;
	else if (iParam0 == joaat("virgo3"))
		return 251;
	else if (iParam0 == joaat("tornado"))
		return 250;
	else if (iParam0 == joaat("sabregt"))
		return 249;
	else if (iParam0 == joaat("slamvan"))
		return 210;
	else if (iParam0 == joaat("faction"))
		return 252;
	else if (iParam0 == joaat("baller3") || iParam0 == joaat("baller5"))
		return 233;
	else if (iParam0 == joaat("baller4") || iParam0 == joaat("baller6"))
		return 234;
	else if (iParam0 == joaat("cog55"))
		return 235;
	else if (iParam0 == joaat("cognoscenti"))
		return 236;
	else if (iParam0 == joaat("limo2"))
		return 237;
	else if (iParam0 == joaat("mamba"))
		return 238;
	else if (iParam0 == joaat("nightshade"))
		return 239;
	else if (iParam0 == joaat("schafter3") || iParam0 == joaat("schafter5"))
		return 240;
	else if (iParam0 == joaat("schafter4") || iParam0 == joaat("schafter6"))
		return 241;
	else if (iParam0 == joaat("verlierer2"))
		return 242;
	else if (iParam0 == joaat("supervolito"))
		return 243;
	else if (iParam0 == joaat("supervolito2"))
		return 244;
	else if (iParam0 == Global_76600)
		return 245;
	else if (iParam0 == joaat("tampa"))
		return 246;
	else if (iParam0 == joaat("sultan"))
		return 247;
	else if (iParam0 == joaat("banshee"))
		return 49;
	else if (iParam0 == joaat("roosevelt2") || iParam0 == joaat("btype3"))
		return 248;
	else if (iParam0 == joaat("volatus"))
		return 253;
	else if (iParam0 == joaat("cargobob2"))
		return 254;
	else if (iParam0 == joaat("rumpo3"))
		return 255;
	else if (iParam0 == joaat("brickade"))
		return 256;
	else if (iParam0 == joaat("nimbus"))
		return 257;
	else if (iParam0 == joaat("windsor2"))
		return 259;
	else if (iParam0 == joaat("prototipo"))
		return 260;
	else if (iParam0 == joaat("fmj"))
		return 261;
	else if (iParam0 == joaat("bestiagts"))
		return 262;
	else if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
		return 263;
	else if (iParam0 == joaat("seven70"))
		return 264;
	else if (iParam0 == joaat("pfister811"))
		return 265;
	else if (iParam0 == joaat("reaper"))
		return 266;
	else if (iParam0 == joaat("le7b"))
		return 267;
	else if (iParam0 == joaat("omnis"))
		return 268;
	else if (iParam0 == joaat("tropos"))
		return 269;
	else if (iParam0 == joaat("brioso"))
		return 270;
	else if (iParam0 == joaat("trophytruck"))
		return 271;
	else if (iParam0 == joaat("trophytruck2"))
		return 272;
	else if (iParam0 == joaat("contender"))
		return 273;
	else if (iParam0 == joaat("cliffhanger"))
		return 274;
	else if (iParam0 == joaat("bf400"))
		return 275;
	else if (iParam0 == joaat("tyrus"))
		return 279;
	else if (iParam0 == joaat("lynx"))
		return 280;
	else if (iParam0 == joaat("sheava"))
		return 281;
	else if (iParam0 == joaat("rallytruck"))
		return 276;
	else if (iParam0 == joaat("tampa2"))
		return 277;
	else if (iParam0 == joaat("gargoyle"))
		return 278;
	else if (iParam0 == joaat("bagger"))
		return 282;
	else if (iParam0 == joaat("esskey"))
		return 283;
	else if (iParam0 == joaat("nightblade"))
		return 284;
	else if (iParam0 == joaat("defiler"))
		return 285;
	else if (iParam0 == joaat("avarus"))
		return 286;
	else if (iParam0 == joaat("zombiea"))
		return 287;
	else if (iParam0 == joaat("zombieb"))
		return 288;
	else if (iParam0 == joaat("chimera"))
		return 289;
	else if (iParam0 == joaat("daemon2"))
		return 290;
	else if (iParam0 == joaat("ratbike"))
		return 291;
	else if (iParam0 == joaat("shotaro"))
		return 292;
	else if (iParam0 == joaat("raptor"))
		return 293;
	else if (iParam0 == joaat("hakuchou2"))
		return 294;
	else if (iParam0 == joaat("blazer4"))
		return 296;
	else if (iParam0 == joaat("sanctus"))
		return 297;
	else if (iParam0 == joaat("vortex"))
		return 295;
	else if (iParam0 == joaat("manchez"))
		return 298;
	else if (iParam0 == joaat("tornado6"))
		return 299;
	else if (iParam0 == joaat("youga2"))
		return 300;
	else if (iParam0 == joaat("wolfsbane"))
		return 301;
	else if (iParam0 == joaat("faggio3"))
		return 302;
	else if (iParam0 == joaat("faggio"))
		return 303;
	else if (iParam0 == joaat("dune5"))
		return 304;
	else if (iParam0 == joaat("phantom2"))
		return 305;
	else if (iParam0 == joaat("technical2"))
		return 306;
	else if (iParam0 == joaat("blazer5"))
		return 307;
	else if (iParam0 == joaat("boxville5"))
		return 308;
	else if (iParam0 == joaat("wastelander"))
		return 309;
	else if (iParam0 == joaat("ruiner2"))
		return 310;
	else if (iParam0 == joaat("voltic2"))
		return 311;
	else if (iParam0 == joaat("penetrator"))
		return 312;
	else if (iParam0 == joaat("tempesta"))
		return 313;
	else if (iParam0 == joaat("italigtb"))
		return 314;
	else if (iParam0 == joaat("nero"))
		return 315;
	else if (iParam0 == joaat("diablous"))
		return 316;
	else if (iParam0 == joaat("fcr"))
		return 317;
	else if (iParam0 == joaat("specter"))
		return 318;
	else if (iParam0 == joaat("gp1"))
		return 319;
	else if (iParam0 == joaat("infernus2"))
		return 320;
	else if (iParam0 == joaat("ruston"))
		return 321;
	else if (iParam0 == joaat("turismo2"))
		return 322;
	else if (iParam0 == Global_76600)
		return 245;
	else if (iParam0 == Global_76602)
		return 324;
	else if (iParam0 == joaat("cheetah2"))
		return 325;
	else if (iParam0 == joaat("torero"))
		return 326;
	else if (iParam0 == joaat("vagner"))
		return 327;
	else if (iParam0 == joaat("xa21"))
		return 328;
	else if (iParam0 == joaat("apc"))
		return 329;
	else if (iParam0 == joaat("dune3"))
		return 330;
	else if (iParam0 == joaat("halftrack"))
		return 331;
	else if (iParam0 == joaat("oppressor"))
		return 332;
	else if (iParam0 == joaat("tampa3"))
		return 333;
	else if (iParam0 == joaat("trailersmall2"))
		return 334;
	else if (iParam0 == joaat("ardent"))
		return 335;
	else if (iParam0 == joaat("nightshark"))
		return 336;
	else if (iParam0 == joaat("lazer"))
		return 337;
	else if (iParam0 == joaat("microlight"))
		return 338;
	else if (iParam0 == joaat("mogul"))
		return 339;
	else if (iParam0 == joaat("rogue"))
		return 340;
	else if (iParam0 == joaat("starling"))
		return 341;
	else if (iParam0 == joaat("seabreeze"))
		return 342;
	else if (iParam0 == joaat("tula"))
		return 343;
	else if (iParam0 == joaat("pyro"))
		return 344;
	else if (iParam0 == joaat("molotok"))
		return 345;
	else if (iParam0 == joaat("nokota"))
		return 346;
	else if (iParam0 == joaat("bombushka"))
		return 347;
	else if (iParam0 == joaat("hunter"))
		return 348;
	else if (iParam0 == joaat("havok"))
		return 349;
	else if (iParam0 == joaat("howard"))
		return 350;
	else if (iParam0 == joaat("alphaz1"))
		return 351;
	else if (iParam0 == joaat("cyclone"))
		return 352;
	else if (iParam0 == joaat("visione"))
		return 353;
	else if (iParam0 == joaat("retinue"))
		return 354;
	else if (iParam0 == joaat("rapidgt3"))
		return 355;
	else if (iParam0 == joaat("vigilante"))
		return 356;
	else if (iParam0 == joaat("deluxo"))
		return 358;
	else if (iParam0 == joaat("stromberg"))
		return 359;
	else if (iParam0 == joaat("riot2"))
		return 360;
	else if (iParam0 == joaat("chernobog"))
		return 361;
	else if (iParam0 == joaat("khanjali"))
		return 362;
	else if (iParam0 == joaat("akula"))
		return 363;
	else if (iParam0 == joaat("thruster"))
		return 364;
	else if (iParam0 == joaat("barrage"))
		return 365;
	else if (iParam0 == joaat("volatol"))
		return 366;
	else if (iParam0 == joaat("comet4"))
		return 367;
	else if (iParam0 == joaat("neon"))
		return 368;
	else if (iParam0 == joaat("streiter"))
		return 369;
	else if (iParam0 == joaat("sentinel3"))
		return 370;
	else if (iParam0 == joaat("yosemite"))
		return 371;
	else if (iParam0 == joaat("sc1"))
		return 372;
	else if (iParam0 == joaat("autarch"))
		return 373;
	else if (iParam0 == joaat("gt500"))
		return 374;
	else if (iParam0 == joaat("hustler"))
		return 375;
	else if (iParam0 == joaat("revolter"))
		return 376;
	else if (iParam0 == joaat("pariah"))
		return 377;
	else if (iParam0 == joaat("raiden"))
		return 378;
	else if (iParam0 == joaat("savestra"))
		return 379;
	else if (iParam0 == joaat("riata"))
		return 380;
	else if (iParam0 == joaat("hermes"))
		return 381;
	else if (iParam0 == joaat("comet5"))
		return 382;
	else if (iParam0 == joaat("z190"))
		return 383;
	else if (iParam0 == joaat("viseris"))
		return 384;
	else if (iParam0 == joaat("kamacho"))
		return 385;
	else if (iParam0 == joaat("gb200"))
		return 386;
	else if (iParam0 == joaat("fagaloa"))
		return 387;
	else if (iParam0 == joaat("ellie"))
		return 388;
	else if (iParam0 == joaat("issi3"))
		return 389;
	else if (iParam0 == joaat("michelli"))
		return 390;
	else if (iParam0 == joaat("flashgt"))
		return 391;
	else if (iParam0 == joaat("hotring"))
		return 392;
	else if (iParam0 == joaat("tezeract"))
		return 393;
	else if (iParam0 == joaat("tyrant"))
		return 394;
	else if (iParam0 == joaat("dominator3"))
		return 395;
	else if (iParam0 == joaat("taipan"))
		return 396;
	else if (iParam0 == joaat("entity2"))
		return 397;
	else if (iParam0 == joaat("jester3"))
		return 398;
	else if (iParam0 == joaat("cheburek"))
		return 399;
	else if (iParam0 == joaat("caracara"))
		return 400;
	else if (iParam0 == joaat("seasparrow"))
		return 401;
	else if (iParam0 == joaat("mule4"))
		return 403;
	else if (iParam0 == joaat("pounder2"))
		return 404;
	else if (iParam0 == joaat("swinger"))
		return 405;
	else if (iParam0 == joaat("menacer"))
		return 406;
	else if (iParam0 == joaat("scramjet"))
		return 407;
	else if (iParam0 == joaat("strikeforce"))
		return 408;
	else if (iParam0 == joaat("oppressor2"))
		return 409;
	else if (iParam0 == joaat("patriot2"))
		return 410;
	else if (iParam0 == joaat("stafford"))
		return 411;
	else if (iParam0 == joaat("freecrawler"))
		return 412;
	else if (iParam0 == joaat("futo"))
		return 415;
	else if (iParam0 == joaat("ruiner"))
		return 416;
	else if (iParam0 == joaat("romero"))
		return 417;
	else if (iParam0 == joaat("prairie"))
		return 418;
	else if (iParam0 == joaat("baller"))
		return 419;
	else if (iParam0 == joaat("serrano"))
		return 420;
	else if (iParam0 == joaat("bjxl"))
		return 421;
	else if (iParam0 == joaat("habanero"))
		return 422;
	else if (iParam0 == joaat("fq2"))
		return 423;
	else if (iParam0 == joaat("patriot"))
		return 424;
	else if (iParam0 == joaat("blimp3"))
		return 413;
	else if (iParam0 == joaat("pbus2"))
		return 414;
	else if (iParam0 == joaat("cerberus"))
		return 425;
	else if (iParam0 == joaat("cerberus2"))
		return 426;
	else if (iParam0 == joaat("cerberus3"))
		return 427;
	else if (iParam0 == joaat("brutus"))
		return 428;
	else if (iParam0 == joaat("brutus2"))
		return 429;
	else if (iParam0 == joaat("brutus3"))
		return 430;
	else if (iParam0 == joaat("scarab"))
		return 431;
	else if (iParam0 == joaat("scarab2"))
		return 432;
	else if (iParam0 == joaat("scarab3"))
		return 433;
	else if (iParam0 == joaat("imperator"))
		return 434;
	else if (iParam0 == joaat("imperator2"))
		return 435;
	else if (iParam0 == joaat("imperator3"))
		return 436;
	else if (iParam0 == joaat("zr380"))
		return 437;
	else if (iParam0 == joaat("zr3802"))
		return 438;
	else if (iParam0 == joaat("zr3803"))
		return 439;
	else if (iParam0 == joaat("impaler"))
		return 440;
	else if (iParam0 == joaat("taxi"))
		return 450;
	else if (iParam0 == joaat("bulldozer"))
		return 451;
	else if (iParam0 == joaat("speedo2"))
		return 452;
	else if (iParam0 == joaat("trash2"))
		return 453;
	else if (iParam0 == joaat("barracks2"))
		return 454;
	else if (iParam0 == joaat("mixer"))
		return 455;
	else if (iParam0 == joaat("dune2"))
		return 456;
	else if (iParam0 == joaat("tractor"))
		return 457;
	else if (iParam0 == joaat("blista3"))
		return 458;
	else if (iParam0 == joaat("vamos"))
		return 441;
	else if (iParam0 == joaat("tulip"))
		return 442;
	else if (iParam0 == joaat("deveste"))
		return 443;
	else if (iParam0 == joaat("schlagen"))
		return 444;
	else if (iParam0 == joaat("toros"))
		return 445;
	else if (iParam0 == joaat("deviant"))
		return 446;
	else if (iParam0 == joaat("clique"))
		return 447;
	else if (iParam0 == joaat("italigto"))
		return 448;
	else if (iParam0 == joaat("rcbandito"))
		return 449;
	else if (iParam0 == joaat("thrax"))
		return 459;
	else if (iParam0 == joaat("drafter"))
		return 460;
	else if (iParam0 == joaat("locust"))
		return 461;
	else if (iParam0 == joaat("novak"))
		return 462;
	else if (iParam0 == joaat("zorrusso"))
		return 463;
	else if (iParam0 == joaat("gauntlet3"))
		return 464;
	else if (iParam0 == joaat("issi7"))
		return 465;
	else if (iParam0 == joaat("zion3"))
		return 466;
	else if (iParam0 == joaat("nebula"))
		return 467;
	else if (iParam0 == joaat("hellion"))
		return 468;
	else if (iParam0 == joaat("dynasty"))
		return 469;
	else if (iParam0 == joaat("rrocket"))
		return 470;
	else if (iParam0 == joaat("peyote2"))
		return 471;
	else if (iParam0 == joaat("gauntlet4"))
		return 472;
	else if (iParam0 == joaat("caracara2"))
		return 473;
	else if (iParam0 == joaat("jugular"))
		return 474;
	else if (iParam0 == joaat("s80"))
		return 475;
	else if (iParam0 == joaat("krieger"))
		return 476;
	else if (iParam0 == joaat("emerus"))
		return 477;
	else if (iParam0 == joaat("neo"))
		return 478;
	else if (iParam0 == joaat("paragon"))
		return 479;
	else if (iParam0 == joaat("firetruk"))
		return 480;
	else if (iParam0 == joaat("burrito2"))
		return 481;
	else if (iParam0 == joaat("boxville"))
		return 482;
	else if (iParam0 == joaat("stockade"))
		return 483;
	else if (iParam0 == joaat("lguard"))
		return 484;
	else if (iParam0 == joaat("blazer2"))
		return 485;
	else if (iParam0 == joaat("jb7002"))
		return 488;
	else if (iParam0 == joaat("zhaba"))
		return 486;
	else if (iParam0 == joaat("minitank"))
		return 487;
	else if (iParam0 == joaat("stryder"))
		return 489;
	else if (iParam0 == joaat("vstr"))
		return 490;
	else if (iParam0 == joaat("formula"))
		return 491;
	else if (iParam0 == joaat("imorgon"))
		return 492;
	else if (iParam0 == joaat("formula2"))
		return 493;
	else if (iParam0 == joaat("furia"))
		return 494;
	else if (iParam0 == joaat("rebla"))
		return 495;
	else if (iParam0 == joaat("vagrant"))
		return 496;
	else if (iParam0 == joaat("retinue2"))
		return 497;
	else if (iParam0 == joaat("yosemite2"))
		return 498;
	else if (iParam0 == joaat("komoda"))
		return 499;
	else if (iParam0 == joaat("sultan2"))
		return 500;
	else if (iParam0 == joaat("sugoi"))
		return 501;
	else if (iParam0 == joaat("everon"))
		return 502;
	else if (iParam0 == joaat("asbo"))
		return 503;
	else if (iParam0 == joaat("kanjo"))
		return 504;
	else if (iParam0 == joaat("outlaw"))
		return 505;
	else if (iParam0 == joaat("club"))
		return 506;
	else if (iParam0 == joaat("dukes3"))
		return 507;
	else if (iParam0 == joaat("yosemite3"))
		return 508;
	else if (iParam0 == joaat("penumbra2"))
		return 509;
	else if (iParam0 == joaat("landstalker2"))
		return 510;
	else if (iParam0 == joaat("seminole2"))
		return 511;
	else if (iParam0 == joaat("tigon"))
		return 512;
	else if (iParam0 == joaat("openwheel1"))
		return 513;
	else if (iParam0 == joaat("openwheel2"))
		return 514;
	else if (iParam0 == joaat("coquette4"))
		return 515;
	else if (iParam0 == joaat("peyote"))
		return 517;
	else if (iParam0 == joaat("manana"))
		return 516;
	else if (iParam0 == func_0x9F572D68())
		return 518;
	else if (iParam0 == joaat("italirsx"))
		return 519;
	else if (iParam0 == joaat("slamtruck"))
		return 520;
	else if (iParam0 == joaat("brioso2"))
		return 521;
	else if (iParam0 == joaat("weevil"))
		return 522;
	else if (iParam0 == joaat("alkonost"))
		return 523;
	else if (iParam0 == joaat("annihilator2"))
		return 524;
	else if (iParam0 == joaat("dinghy5"))
		return 525;
	else if (iParam0 == joaat("manchez2"))
		return 526;
	else if (iParam0 == joaat("patrolboat"))
		return 527;
	else if (iParam0 == joaat("squaddie"))
		return 528;
	else if (iParam0 == joaat("toreador"))
		return 529;
	else if (iParam0 == joaat("verus"))
		return 530;
	else if (iParam0 == joaat("vetir"))
		return 531;
	else if (iParam0 == joaat("winky"))
		return 532;
	else if (iParam0 == joaat("longfin"))
		return 533;
	else if (iParam0 == joaat("veto"))
		return 534;
	else if (iParam0 == joaat("veto2"))
		return 535;
	else if (iParam0 == joaat("calico"))
		return 536;
	else if (iParam0 == joaat("comet6"))
		return 537;
	else if (iParam0 == joaat("cypher"))
		return 538;
	else if (iParam0 == joaat("dominator7"))
		return 539;
	else if (iParam0 == joaat("jester4"))
		return 540;
	else if (iParam0 == joaat("remus"))
		return 541;
	else if (iParam0 == joaat("vectre"))
		return 542;
	else if (iParam0 == joaat("zr350"))
		return 543;
	else if (iParam0 == joaat("warrener2"))
		return 544;
	else if (iParam0 == joaat("rt3000"))
		return 545;
	else if (iParam0 == joaat("futo2"))
		return 546;
	else if (iParam0 == joaat("sultan3"))
		return 547;
	else if (iParam0 == joaat("tailgater2"))
		return 548;
	else if (iParam0 == joaat("dominator8"))
		return 549;
	else if (iParam0 == joaat("euros"))
		return 550;
	else if (iParam0 == joaat("growler"))
		return 551;
	else if (iParam0 == joaat("previon"))
		return 552;
	else if (iParam0 == joaat("comet7"))
		return 554;
	else if (iParam0 == joaat("shinobi"))
		return 555;
	else if (iParam0 == joaat("reever"))
		return 556;
	else if (iParam0 == joaat("baller7"))
		return 557;
	else if (iParam0 == joaat("cinquemila"))
		return 558;
	else if (iParam0 == joaat("jubilee"))
		return 559;
	else if (iParam0 == joaat("astron"))
		return 560;
	else if (iParam0 == joaat("deity"))
		return 561;
	else if (iParam0 == joaat("zeno"))
		return 562;
	else if (iParam0 == joaat("champion"))
		return 563;
	else if (iParam0 == joaat("ignus"))
		return 564;
	else if (iParam0 == joaat("buffalo4"))
		return 565;
	else if (iParam0 == joaat("granger2"))
		return 566;
	else if (iParam0 == joaat("iwagen"))
		return 567;
	else if (iParam0 == joaat("patriot3"))
		return 568;
	else if (iParam0 == joaat("tenf"))
		return 569;
	else if (iParam0 == joaat("omnisegt"))
		return 574;
	else if (iParam0 == joaat("greenwood"))
		return 581;
	else if (iParam0 == joaat("sm722"))
		return 570;
	else if (iParam0 == joaat("ruiner4"))
		return 579;
	else if (iParam0 == joaat("vigero2"))
		return 578;
	else if (iParam0 == joaat("torero2"))
		return 571;
	else if (iParam0 == joaat("rhinehart"))
		return 575;
	else if (iParam0 == joaat("corsita"))
		return 572;
	else if (iParam0 == joaat("lm87"))
		return 573;
	else if (iParam0 == joaat("draugur"))
		return 580;
	else if (iParam0 == joaat("kanjosj"))
		return 577;
	else if (iParam0 == joaat("postlude"))
		return 576;
	else if (iParam0 == joaat("conada"))
		return 582;
	else if (iParam0 == -1576586413)
		return 583;
	else if (iParam0 == 1384502824)
		return 584;
	else if (iParam0 == -1627077503)
		return 589;
	else if (iParam0 == 2100457220)
		return 585;
	else if (iParam0 == -461850249)
		return 586;
	else if (iParam0 == 268758436)
		return 587;
	else if (iParam0 == -131348178)
		return 588;
	else if (iParam0 == -1249788006)
		return 598;
	else if (iParam0 == -1933242328)
		return 597;
	else if (iParam0 == 1550581940)
		return 593;
	else if (iParam0 == 996383885)
		return 596;
	else if (iParam0 == -1386336041)
		return 595;
	else if (iParam0 == 669204833)
		return 591;
	else if (iParam0 == 1076201208)
		return 592;
	else if (iParam0 == 1748565021)
		return 594;
	else if (iParam0 == -1035489563)
		return 590;
	else if (iParam0 == joaat("mesa"))
		return 599;
	else if (iParam0 == -1763675285)
		return 600;
	else if (iParam0 == -654498607)
		return 603;
	else if (iParam0 == -979292575)
		return 604;
	else if (iParam0 == -536105557)
		return 601;
	else if (iParam0 == joaat("monstrociti"))
		return 602;
	else if (iParam0 == -897824023)
		return 605;
	else if (iParam0 == -1983622024)
		return 606;
	else if (iParam0 == joaat("streamer216"))
		return 607;
	else if (iParam0 == -1659004814)
		return 608;
	else if (iParam0 == 239897677)
		return 609;
	else if (iParam0 == 1336514315)
		return 610;
	else if (iParam0 == 1447690049)
		return 611;
	else if (iParam0 == 165968051)
		return 612;
	else if (iParam0 == joaat("coureur"))
		return 613;
	else if (iParam0 == -1233767450)
		return 614;
	else if (iParam0 == joaat("police4"))
		return 615;
	else if (iParam0 == joaat("Police5"))
		return 616;
	else if (iParam0 == joaat("riot"))
		return 617;
	else if (iParam0 == -768044142)
		return 618;
	else if (iParam0 == -478639183)
		return 619;
	else if (iParam0 == -178442374)
		return 620;
	else if (iParam0 == -741120335)
		return 621;
	else if (iParam0 == -441209695)
		return 622;
	else if (iParam0 == -465825307)
		return 623;
	else if (iParam0 == joaat("baller8"))
		return 624;
	else if (iParam0 == -38879449)
		return 625;
	else if (iParam0 == joaat("turismo3"))
		return 626;
	else if (iParam0 == -1029730482)
		return 627;
	else if (iParam0 == 372621319)
		return 628;
	else if (iParam0 == 167522317)
		return 629;
	else if (iParam0 == -1372798934)
		return 630;
	else if (iParam0 == -842765535)
		return 631;
	else if (iParam0 == 728350375)
		return 632;
	else if (iParam0 == -773802025)
		return 633;
	else if (iParam0 == -773802025)
		return 633;
	else if (iParam0 == 1737348074)
		return 635;
	else if (iParam0 == 1249425552)
		return 636;
	else if (iParam0 == 1452003510)
		return 637;
	else if (iParam0 == -1240172147)
		return 638;
	else if (iParam0 == 1307736079)
		return 639;
	else if (iParam0 == -1896488056)
		return 640;
	else if (iParam0 == 1579902654)
		return 641;
	else if (iParam0 == 1968807591)
		return 642;
	else if (iParam0 == -223461503)
		return 643;
	else if (iParam0 == 1121330119)
		return 647;
	else if (iParam0 == -946047670)
		return 648;
	else if (iParam0 == -999594302)
		return 645;
	else if (iParam0 == 1881415402)
		return 646;
	else if (iParam0 == -1958428933)
		return 644;
	else if (iParam0 == joaat("taco"))
		return 649;
	else if (iParam0 == -1948949064)
		return 650;
	else if (iParam0 == -1321131184)
		return 651;
	else if (iParam0 == 2042703219)
		return 652;
	else if (iParam0 == 1891140410)
		return 653;
	else if (iParam0 == joaat("predator"))
		return 654;
	else if (iParam0 == joaat("cargobob5"))
		return 655;
	else if (iParam0 == 858355070)
		return 656;
	else if (iParam0 == 84351789)
		return 657;
	else if (iParam0 == -660007725)
		return 659;
	else if (iParam0 == 1484920335)
		return 660;
	else if (iParam0 == 127317925)
		return 658;
	else if (iParam0 == 1992041063)
		return 661;
	else if (iParam0 == joaat("URANUS"))
		return 662;
	else if (iParam0 == -973016778)
		return 663;

	return -1;
}

int func_0xBD50253F(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("faction3"):
			return joaat("faction");
	
		case joaat("buccaneer2"):
			return joaat("buccaneer");
	
		case joaat("chino2"):
			return joaat("chino");
	
		case joaat("moonbeam2"):
			return joaat("moonbeam");
	
		case joaat("primo2"):
			return joaat("primo");
	
		case joaat("voodoo"):
			return joaat("voodoo2");
	
		case joaat("sabregt2"):
			return joaat("sabregt");
	
		case joaat("tornado5"):
			return joaat("tornado");
	
		case joaat("virgo2"):
			return joaat("virgo3");
	
		case joaat("minivan2"):
			return joaat("minivan");
	
		case joaat("slamvan3"):
			return joaat("slamvan");
	
		case joaat("sultanrs"):
			return joaat("sultan");
	
		case joaat("banshee2"):
			return joaat("banshee");
	
		case joaat("comet3"):
			return joaat("comet2");
	
		case joaat("diablous2"):
			return joaat("diablous");
	
		case joaat("fcr2"):
			return joaat("fcr");
	
		case joaat("italigtb2"):
			return joaat("italigtb");
	
		case joaat("specter2"):
			return joaat("specter");
	
		case joaat("nero2"):
			return joaat("nero");
	
		case joaat("elegy"):
			return joaat("elegy2");
	
		case joaat("technical3"):
			return joaat("technical");
	
		case joaat("insurgent3"):
			return joaat("insurgent");
	
		case joaat("monster3"):
			if (iParam1 == 0)
				return joaat("ratloader2");
			else if (iParam1 == 1)
				return joaat("monster4");
			else if (iParam1 == 2)
				return joaat("monster5");
			break;
	
		case joaat("monster5"):
			if (iParam1 == 0)
				return joaat("ratloader2");
			else if (iParam1 == 1)
				return joaat("monster3");
			else if (iParam1 == 2)
				return joaat("monster4");
			break;
	
		case joaat("monster4"):
			if (iParam1 == 0)
				return joaat("ratloader2");
			else if (iParam1 == 1)
				return joaat("monster3");
			else if (iParam1 == 2)
				return joaat("monster5");
			break;
	
		case joaat("bruiser"):
			if (iParam1 == 0)
				return joaat("glendale");
			else if (iParam1 == 1)
				return joaat("bruiser2");
			else if (iParam1 == 2)
				return joaat("bruiser3");
			break;
	
		case joaat("bruiser2"):
			if (iParam1 == 0)
				return joaat("glendale");
			else if (iParam1 == 1)
				return joaat("bruiser");
			else if (iParam1 == 2)
				return joaat("bruiser3");
			break;
	
		case joaat("bruiser3"):
			if (iParam1 == 0)
				return joaat("glendale");
			else if (iParam1 == 1)
				return joaat("bruiser");
			else if (iParam1 == 2)
				return joaat("bruiser2");
			break;
	
		case joaat("impaler2"):
			if (iParam1 == 0)
				return joaat("impaler");
			else if (iParam1 == 1)
				return joaat("impaler3");
			else if (iParam1 == 2)
				return joaat("impaler4");
			break;
	
		case joaat("impaler3"):
			if (iParam1 == 0)
				return joaat("impaler");
			else if (iParam1 == 1)
				return joaat("impaler2");
			else if (iParam1 == 2)
				return joaat("impaler4");
			break;
	
		case joaat("impaler4"):
			if (iParam1 == 0)
				return joaat("impaler");
			else if (iParam1 == 1)
				return joaat("impaler2");
			else if (iParam1 == 2)
				return joaat("impaler3");
			break;
	
		case joaat("issi4"):
			if (iParam1 == 0)
				return joaat("issi3");
			else if (iParam1 == 1)
				return joaat("issi5");
			else if (iParam1 == 2)
				return joaat("issi6");
			break;
	
		case joaat("issi5"):
			if (iParam1 == 0)
				return joaat("issi3");
			else if (iParam1 == 1)
				return joaat("issi4");
			else if (iParam1 == 2)
				return joaat("issi6");
			break;
	
		case joaat("issi6"):
			if (iParam1 == 0)
				return joaat("issi3");
			else if (iParam1 == 1)
				return joaat("issi4");
			else if (iParam1 == 2)
				return joaat("issi5");
			break;
	
		case joaat("deathbike"):
			if (iParam1 == 0)
				return joaat("gargoyle");
			else if (iParam1 == 1)
				return joaat("deathbike2");
			else if (iParam1 == 2)
				return joaat("deathbike3");
			break;
	
		case joaat("deathbike2"):
			if (iParam1 == 0)
				return joaat("gargoyle");
			else if (iParam1 == 1)
				return joaat("deathbike");
			else if (iParam1 == 2)
				return joaat("deathbike3");
			break;
	
		case joaat("deathbike3"):
			if (iParam1 == 0)
				return joaat("gargoyle");
			else if (iParam1 == 1)
				return joaat("deathbike");
			else if (iParam1 == 2)
				return joaat("deathbike2");
			break;
	
		case joaat("slamvan4"):
			if (iParam1 == 0)
				return joaat("slamvan");
			else if (iParam1 == 1)
				return joaat("slamvan5");
			else if (iParam1 == 2)
				return joaat("slamvan6");
			break;
	
		case joaat("slamvan5"):
			if (iParam1 == 0)
				return joaat("slamvan");
			else if (iParam1 == 1)
				return joaat("slamvan4");
			else if (iParam1 == 2)
				return joaat("slamvan6");
			break;
	
		case joaat("slamvan6"):
			if (iParam1 == 0)
				return joaat("slamvan");
			else if (iParam1 == 1)
				return joaat("slamvan4");
			else if (iParam1 == 2)
				return joaat("slamvan5");
			break;
	
		case joaat("dominator4"):
			if (iParam1 == 0)
				return joaat("dominator");
			else if (iParam1 == 1)
				return joaat("dominator2");
			else if (iParam1 == 2)
				return joaat("dominator5");
			else if (iParam1 == 3)
				return joaat("dominator6");
			break;
	
		case joaat("dominator5"):
			if (iParam1 == 0)
				return joaat("dominator");
			else if (iParam1 == 1)
				return joaat("dominator2");
			else if (iParam1 == 2)
				return joaat("dominator4");
			else if (iParam1 == 3)
				return joaat("dominator6");
			break;
	
		case joaat("dominator6"):
			if (iParam1 == 0)
				return joaat("dominator");
			else if (iParam1 == 1)
				return joaat("dominator2");
			else if (iParam1 == 2)
				return joaat("dominator4");
			else if (iParam1 == 3)
				return joaat("dominator5");
			break;
	
		case joaat("imperator"):
			if (iParam1 == 0)
				return joaat("imperator2");
			else if (iParam1 == 1)
				return joaat("imperator3");
			break;
	
		case joaat("imperator2"):
			if (iParam1 == 0)
				return joaat("imperator");
			else if (iParam1 == 1)
				return joaat("imperator3");
			break;
	
		case joaat("imperator3"):
			if (iParam1 == 0)
				return joaat("imperator");
			else if (iParam1 == 1)
				return joaat("imperator2");
			break;
	
		case joaat("zr380"):
			if (iParam1 == 0)
				return joaat("zr3802");
			else if (iParam1 == 1)
				return joaat("zr3803");
			break;
	
		case joaat("zr3802"):
			if (iParam1 == 0)
				return joaat("zr380");
			else if (iParam1 == 1)
				return joaat("zr3803");
			break;
	
		case joaat("zr3803"):
			if (iParam1 == 0)
				return joaat("zr380");
			else if (iParam1 == 1)
				return joaat("zr3802");
			break;
	
		case joaat("cerberus"):
			if (iParam1 == 0)
				return joaat("cerberus2");
			else if (iParam1 == 1)
				return joaat("cerberus3");
			break;
	
		case joaat("cerberus2"):
			if (iParam1 == 0)
				return joaat("cerberus");
			else if (iParam1 == 1)
				return joaat("cerberus3");
			break;
	
		case joaat("cerberus3"):
			if (iParam1 == 0)
				return joaat("cerberus");
			else if (iParam1 == 1)
				return joaat("cerberus2");
			break;
	
		case joaat("scarab"):
			if (iParam1 == 0)
				return joaat("scarab2");
			else if (iParam1 == 1)
				return joaat("scarab3");
			break;
	
		case joaat("scarab2"):
			if (iParam1 == 0)
				return joaat("scarab");
			else if (iParam1 == 1)
				return joaat("scarab3");
			break;
	
		case joaat("scarab3"):
			if (iParam1 == 0)
				return joaat("scarab");
			else if (iParam1 == 1)
				return joaat("scarab2");
			break;
	
		case joaat("brutus"):
			if (iParam1 == 0)
				return joaat("brutus2");
			else if (iParam1 == 1)
				return joaat("brutus3");
			break;
	
		case joaat("brutus2"):
			if (iParam1 == 0)
				return joaat("brutus");
			else if (iParam1 == 1)
				return joaat("brutus3");
			break;
	
		case joaat("brutus3"):
			if (iParam1 == 0)
				return joaat("brutus");
			else if (iParam1 == 1)
				return joaat("brutus2");
			break;
	
		case joaat("youga3"):
			return joaat("youga2");
	
		case joaat("gauntlet5"):
			return joaat("gauntlet3");
	
		case joaat("manana2"):
			return joaat("manana");
	
		case joaat("peyote3"):
			return joaat("peyote");
	
		case joaat("yosemite3"):
			return joaat("yosemite");
	
		case joaat("glendale2"):
			return joaat("glendale");
	
		case joaat("tenf2"):
			return joaat("tenf");
	
		case joaat("weevil2"):
			return joaat("weevil");
	
		case joaat("brioso3"):
			return joaat("brioso2");
	
		case joaat("sentinel4"):
			return joaat("sentinel3");
	}

	return 0;
}

BOOL func_0xFE274898(Hash hParam0, int iParam1)
{
	switch (hParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
	
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("sabregt2"):
			if (!/*Global_262145*/g_sMPTunables.f_14701)
				return false;
			else
				return true;
			break;
	
		case joaat("tornado5"):
			if (!/*Global_262145*/g_sMPTunables.f_14702)
				return false;
			else
				return true;
			break;
	
		case joaat("virgo2"):
			if (!/*Global_262145*/g_sMPTunables.f_14700)
				return false;
			else
				return true;
			break;
	
		case joaat("minivan2"):
			if (!/*Global_262145*/g_sMPTunables.f_14703)
				return false;
			else
				return true;
			break;
	
		case joaat("slamvan3"):
			if (!/*Global_262145*/g_sMPTunables.f_14705)
				return false;
			else
				return true;
			break;
	
		case joaat("faction3"):
			if (!/*Global_262145*/g_sMPTunables.f_14704)
				return false;
			else
				return true;
			break;
	
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("comet3"):
			if (/*Global_262145*/g_sMPTunables.f_18948)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("diablous2"):
			if (/*Global_262145*/g_sMPTunables.f_18950)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("fcr2"):
			if (/*Global_262145*/g_sMPTunables.f_18954)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("elegy"):
			if (/*Global_262145*/g_sMPTunables.f_18951)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("nero2"):
			if (/*Global_262145*/g_sMPTunables.f_18958)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("italigtb2"):
			if (/*Global_262145*/g_sMPTunables.f_18956)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("specter2"):
			if (/*Global_262145*/g_sMPTunables.f_18961)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("technical3"):
			if (/*Global_262145*/g_sMPTunables.f_20834)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("insurgent3"):
			if (/*Global_262145*/g_sMPTunables.f_20835)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return true;
	}

	return false;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

Hash func_0x9F572D68()
{
	return joaat("terbyte");
}

void func_0xA7D24319()
{
	int flags;
	Vector3 entityCoords;
	var unk3;

	if (bLocal_60)
		return;

	if (func_0x5726FF74(PLAYER::PLAYER_ID()) != 0)
		return;

	if (/*Global_2739811*/MPGlobalsAmbience.f_6880 < 6)
		return;

	flags = 542758;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(bLocal_60.f_1))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		bLocal_60.f_1 = VEHICLE::GET_CLOSEST_VEHICLE(entityCoords, 1000f, joaat("cargoplane"), flags);
		return;
	}

	bLocal_60.f_2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(bLocal_60.f_1, -1, false);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(bLocal_60.f_2) && func_0x810EAC91(bLocal_60.f_2) && !PED::IS_PED_A_PLAYER(bLocal_60.f_2))
	{
		unk3 = func_0xC9D82232(bLocal_60.f_2);
		ENTITY::DELETE_ENTITY(&unk3);
	}

	if (!func_0x810EAC91(bLocal_60.f_1))
		return;

	unk3 = func_0xC9D82232(bLocal_60.f_1);
	ENTITY::DELETE_ENTITY(&unk3);
	bLocal_60 = true;
	return;
}

var func_0xC9D82232(var uParam0)
{
	return uParam0;
}

BOOL func_0x810EAC91(Entity eParam0)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(eParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(eParam0, false, true);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(eParam0))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(eParam0, true))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(eParam0, false, true);
		
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(eParam0, true))
				return 1;
		}
	}

	return 0;
}

int func_0x5726FF74(Player plParam0)
{
	switch (func_0x5EA8DF5A(plParam0))
	{
		case 343:
		case 344:
		case 345:
		case 346:
			return func_0x48014DA(plParam0);
	
		default:
		
	}

	return -1;
}

void func_0x700552DE()
{
	Global_2709834 = !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
	Global_2709834.f_1[0] = { 369.762f, -54.702f, 98.869f };
	Global_2709834.f_32[0] = { 397.561f, -64.872f, 115.581f };
	Global_2709834.f_63[0] = 35f;
	Global_2709834.f_1[1] = { -1034.964f, -434.189f, 59.368f };
	Global_2709834.f_32[1] = { -1008.375f, -421.17f, 76.507f };
	Global_2709834.f_63[1] = 35f;
	Global_2709834.f_1[2] = { -573.272f, -717.097f, 108.513f };
	Global_2709834.f_32[2] = { -602.873f, -716.668f, 125.263f };
	Global_2709834.f_63[2] = 35f;
	Global_2709834.f_1[3] = { -1004.441f, -775.809f, 57.428f };
	Global_2709834.f_32[3] = { -1004.215f, -746.208f, 74.382f };
	Global_2709834.f_63[3] = 35f;
	return;
}

void func_0xDC07884()
{
	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return;

	if (func_0x5726FF74(PLAYER::PLAYER_ID()) == 1)
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 429, true))
			if (!bLocal_59)
				bLocal_59 = true;
		else if (bLocal_59)
			bLocal_59 = false;
	}
	else if (bLocal_59)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 429, false);
		bLocal_59 = false;
	}

	return;
}

void func_0xC65DAA2()
{
	Vehicle vehiclePedIsIn;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return;

	if (func_0x4C17DBA0() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn) && VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, -1321131184) && /*Global_101740*/g_sShopSettings.f_509 == 40 && /*Global_23970*/g_sMenuData.f_6342 == 0)
		{
			_STOPWATCH_RESET(&uLocal_54, false, false);
			uLocal_56 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
		}
		else if (!func_0xBE186BC0(&uLocal_54, 5000, false))
		{
			if (MISC::GET_FRAME_COUNT() % 15 == 0)
				MISC::CLEAR_AREA(uLocal_56, 6f, false, false, false, true);
		}
	}
	else if (!func_0xBE186BC0(&uLocal_54, 5000, false))
	{
		if (MISC::GET_FRAME_COUNT() % 15 == 0)
			MISC::CLEAR_AREA(uLocal_56, 6f, false, false, false, true);
	}

	return;
}

BOOL func_0xBE186BC0(var uParam0, int iParam1, BOOL bParam2)
{
	if (!uParam0->f_1)
		return true;

	if (iParam1 == -1)
		return true;

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

BOOL func_0x4C17DBA0()
{
	return IS_BIT_SET(Global_79788, 8);
}

void func_0x6EC4327F()
{
	if (IS_BIT_SET(/*Global_2739811*/MPGlobalsAmbience.f_4730, 16) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_vehicle_spawn")) <= 0 || !func_0x6F05646C())
	{
		MISC::CLEAR_BIT(&(/*Global_2739811*/MPGlobalsAmbience.f_4730), 16);
		HUD::SET_MINIMAP_SONAR_SWEEP(false);
	}

	return;
}

BOOL func_0x6F05646C()
{
	if (!func_0x4E5E8E48(PLAYER::PLAYER_ID()))
		return false;

	if (/*Global_2672939*/MPGlobals.f_4)
		return false;

	if (/*Global_2672939*/MPGlobals.f_4.f_2)
		return false;

	if (func_0xA439E034(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_0xA439E034(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1;
		else if (/*Global_1575084*/g_b_IsInTransition && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1;

	return false;
}

BOOL func_0x4E5E8E48(Player plParam0)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_539.f_1, 3);
}

void func_0x426AB617()
{
	if (_STOPWATCH_IS_INITIALIZED(&(/*Global_2685658*/g_TransitionSessionNonResetVars.f_3078.f_255)))
		if (_STOPWATCH_GET_TIME_PASSED(&(/*Global_2685658*/g_TransitionSessionNonResetVars.f_3078.f_255), false, false) > 55000)
			if (func_0xA3993EC8(false))
				_STOPWATCH_DESTROY(&(/*Global_2685658*/g_TransitionSessionNonResetVars.f_3078.f_255));

	return;
}

BOOL func_0xA3993EC8(BOOL bParam0)
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (func_0x6A46C9B4(player))
		if (func_0xDDB0D9A1(&(/*Global_2657991*/GlobalplayerBD[player].f_446), 0) || func_0x928E8225(player) || func_0xFE840448(player) || func_0xB2831D42(player) || func_0x296323FE(player) || func_0xA4C8B8D7(player) || func_0x88D363EA(player) || func_0xE575EF3(player) || func_0xB3E29AC5(player) || func_0xF622C929(player) && func_0x1387ACAA(player) || func_0x589A6463(player) || func_0xF8DB13F7(player) || func_0x70532CF7(player) || func_0x8622182D(player) || func_0x4FC9F912(player))
			return true;

	if (bParam0)
		if (func_0xB5AF000F(player))
			return true;
	else if (func_0xE283BBF6(player))
		return true;

	return false;
}

BOOL func_0xE283BBF6(Player plParam0)
{
	if (func_0xB5AF000F(plParam0) || func_0xAE0E4D65(plParam0) || func_0xDB07D527(plParam0) || _IS_PLAYER_IN_MUSIC_LOCKER(plParam0))
		return true;

	return false;
}

BOOL _IS_PLAYER_IN_MUSIC_LOCKER(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 19;

	return false;
}

BOOL func_0xDB07D527(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 15;

	return false;
}

BOOL func_0xAE0E4D65(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 16;

	return false;
}

BOOL func_0xB5AF000F(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 14;

	return false;
}

BOOL func_0x4FC9F912(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 31;

	return false;
}

BOOL func_0x8622182D(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 30;

	return false;
}

BOOL func_0x70532CF7(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 29;

	return false;
}

BOOL func_0xF8DB13F7(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 == 161;

	return false;
}

BOOL func_0x589A6463(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 28;

	return false;
}

BOOL func_0x1387ACAA(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_5, 26);

	return false;
}

BOOL func_0xF622C929(Player plParam0)
{
	if (func_0x928E8225(plParam0) && func_0xC2C5699D(plParam0) == plParam0)
		return true;

	return false;
}

Player func_0xC2C5699D(Player plParam0)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return plParam0;

	return /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_11;
}

BOOL func_0x928E8225(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1 && /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_11 != _INVALID_PLAYER_INDEX())
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 25;

	return false;
}

BOOL func_0xB3E29AC5(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 26;

	return false;
}

BOOL func_0xE575EF3(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 21;

	return false;
}

BOOL func_0x88D363EA(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 24;

	return false;
}

BOOL func_0x296323FE(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 23;

	return false;
}

BOOL func_0xB2831D42(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 11;

	return false;
}

BOOL func_0xFE840448(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 17;

	return false;
}

BOOL func_0x928E8225(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1 && /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_11 != _INVALID_PLAYER_INDEX())
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 20;

	return false;
}

BOOL func_0xDDB0D9A1(var uParam0, int iParam1)
{
	return IS_BIT_SET(*uParam0, iParam1);
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

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0)
{
	return uParam0->f_1;
}

void func_0xD90CE4E3()
{
	if (!func_0x440D1C81(PLAYER::PLAYER_ID()))
		return;

	if (func_0x65FE6645(PLAYER::PLAYER_ID()) && func_0xB4CE8E51(PLAYER::PLAYER_ID(), false) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		func_0x82CF9798(false);
		/*Global_1943917*/g_SimpleInteriorData.f_3860 = 3;
		func_0xF8C0ED23(0);
	}

	return;
}

void func_0xF8C0ED23(int iParam0)
{
	if (!func_0x974E48B4())
	{
		/*Global_1943917*/g_SimpleInteriorData.f_3847 = 1;
		/*Global_1943917*/g_SimpleInteriorData.f_3848 = iParam0;
	}

	return;
}

BOOL func_0x974E48B4()
{
	return /*Global_1943917*/g_SimpleInteriorData.f_740;
}

void func_0x82CF9798(BOOL bParam0)
{
	if (bParam0)
		if (!IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_268.f_314, 13))
			MISC::SET_BIT(&(/*Global_1845221*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_268.f_314), 13);
	else if (IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_268.f_314, 13))
		MISC::CLEAR_BIT(&(/*Global_1845221*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_268.f_314), 13);

	return;
}

BOOL func_0x65FE6645(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_314, 13);

	return false;
}

BOOL func_0x440D1C81(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (func_0x8622182D(plParam0) && /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_11 == plParam0)
			return true;

	return false;
}

void func_0xD9928548()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (func_0xB4CE8E51(PLAYER::PLAYER_ID(), false) && func_0x3654624B(PLAYER::PLAYER_ID(), false) && func_0x5726FF74(PLAYER::PLAYER_ID()) != -1)
	{
		if (!bLocal_52)
		{
			bLocal_52 = true;
			bLocal_53 = _STAT_GET_PACKED_BOOL(9548, -1);
		}
	}
	else if (bLocal_52)
	{
		if (!bLocal_53)
			if (_STAT_GET_PACKED_BOOL(9548, -1))
				_STAT_SET_PACKED_BOOL(9548, false, -1);
	
		bLocal_52 = false;
	}

	return;
}

void func_0xD8967A8D()
{
	if (func_0xB4CE8E51(PLAYER::PLAYER_ID(), true))
		return;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (func_0x8C5859AA() >= func_0x974E48B4())
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2073234978) > 0)
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("APPR_REG_BOSS0") || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("APPR_REG_BOSS1"))
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_X) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_Y))
					bLocal_51 = true;
			else if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("APPR_REG_BOSS2") || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("APPR_REG_BOSS3"))
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_X))
					bLocal_51 = true;

	if (bLocal_51 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2073234978) <= 0)
	{
		if (!func_0xC62FC261(PLAYER::PLAYER_ID()))
			_DISPLAY_HELP_TEXT("APPR_REG_BOSSF", -1);
	
		bLocal_51 = false;
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_0x974E48B4()
{
	return /*Global_262145*/g_sMPTunables.f_12821;
}

int func_0x8C5859AA()
{
	int i;
	int num;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			if (func_0xC62FC261(player))
				num = num + 1;
	}

	return num;
}

void func_0x943E3046()
{
	int num;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (!func_0xB4CE8E51(PLAYER::PLAYER_ID(), true))
		return;

	if (!func_0x3654624B(PLAYER::PLAYER_ID(), false))
		return;

	num = -1;

	switch (func_0x5EA8DF5A(PLAYER::PLAYER_ID()))
	{
		case 348:
			if (func_0xE3A3D5D5(PLAYER::PLAYER_ID()) == 1)
				num = 6;
			else
				return;
			break;
	
		case 349:
			if (func_0xE3A3D5D5(PLAYER::PLAYER_ID()) == 1)
				num = 5;
			else
				return;
			break;
	
		default:
			return;
	}

	if (num != -1 && /*Global_2739811*/MPGlobalsAmbience.f_6880 == num)
	{
		if (func_0x5976C0FC() && func_0x741C3B43(PLAYER::PLAYER_ID()) == 0)
		{
			/*Global_1887549*/globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_559.f_15 = 0;
			/*Global_1887549*/globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_559.f_12 = _INVALID_PLAYER_INDEX();
			/*Global_1887549*/globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_559.f_12.f_1 = -1;
		
			if (IS_BIT_SET(/*Global_1887549*/globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_559, 4))
				MISC::CLEAR_BIT(&(/*Global_1887549*/globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_559), 4);
		
			if (IS_BIT_SET(/*Global_1887549*/globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_559, 6))
				MISC::CLEAR_BIT(&(/*Global_1887549*/globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_559), 6);
		}
	}

	return;
}

int func_0x741C3B43(Player plParam0)
{
	int i;
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (func_0xD95B534C(/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_559.f_1[i]))
				num = num + 1;
		}
	}

	return num;
}

BOOL func_0xD95B534C(Player plParam0, var uParam1)
{
	return plParam0.f_1 != -1 && plParam0 != _INVALID_PLAYER_INDEX();
}

BOOL func_0x5976C0FC()
{
	return func_0x8B2E3918(PLAYER::PLAYER_ID());
}

BOOL func_0x8B2E3918(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (func_0xD95B534C(/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_559.f_12) || IS_BIT_SET(/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_559, 4))
			return 1;

	return 0;
}

int func_0xE3A3D5D5(Player plParam0)
{
	if (func_0x5EA8DF5A(plParam0) == 349)
		return func_0xE22E8209(plParam0, 349);

	return -1;
}

int func_0xE3A3D5D5(Player plParam0)
{
	if (func_0x5EA8DF5A(plParam0) == 348)
		return func_0xE22E8209(plParam0, 348);

	return -1;
}

void func_0x662FBD38()
{
	if (func_0x3C4F8B7B(PLAYER::PLAYER_ID()) && !func_0xC19ACB14(PLAYER::PLAYER_ID()))
		func_0x1173212A(false);

	if (func_0x8EA2A09B(PLAYER::PLAYER_ID()) && !func_0x4D4B5ACC(PLAYER::PLAYER_ID()))
		func_0x9F6AA048(false);

	if (func_0x3C4F8B7B(PLAYER::PLAYER_ID()) && func_0x8EA2A09B(PLAYER::PLAYER_ID()))
		if (func_0x8622182D(PLAYER::PLAYER_ID()))
			func_0x1173212A(false);
		else if (func_0xB2831D42(PLAYER::PLAYER_ID()))
			func_0x9F6AA048(false);

	return;
}

BOOL func_0xB2831D42(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 11;

	return false;
}

void func_0x9F6AA048(BOOL bParam0)
{
	if (bParam0)
		if (!IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_324.f_7, 14))
			MISC::SET_BIT(&(/*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_324.f_7), 14);
	else if (IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_324.f_7, 14))
		MISC::CLEAR_BIT(&(/*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_324.f_7), 14);

	return;
}

BOOL func_0x4D4B5ACC(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return /*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_539 != 0;

	return false;
}

BOOL func_0x8EA2A09B(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_7, 14);

	return false;
}

void func_0x1173212A(BOOL bParam0)
{
	if (bParam0)
		if (!IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_324.f_3, 4))
			MISC::SET_BIT(&(/*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_324.f_3), 4);
	else if (IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_324.f_3, 4))
		MISC::CLEAR_BIT(&(/*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_324.f_3), 4);

	return;
}

BOOL func_0xC19ACB14(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_317 != 0)
			return true;

	return false;
}

BOOL func_0x3C4F8B7B(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_3, 4);

	return false;
}

void func_0x605F91F9()
{
	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1093.14f, -807.15f, 18.28f, false) < 20f)
	{
		if (!bLocal_50 && !/*Global_2672939*/MPGlobals.f_1023.f_9)
		{
			/*Global_2672939*/MPGlobals.f_1023.f_9 = 1;
			bLocal_50 = true;
		}
	
		if (/*Global_1574582*/passive.f_6)
		{
			func_0xB7B0B293();
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (bLocal_50)
	{
		/*Global_2672939*/MPGlobals.f_1023.f_9 = 0;
		bLocal_50 = false;
	}

	return;
}

void func_0xB7B0B293()
{
	if (!func_0x1D194707(PLAYER::PLAYER_ID()))
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);

	STREAMING::REMOVE_ANIM_DICT("MP_SUICIDE");
	/*Global_1574582*/passive.f_6 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(/*Global_2672939*/MPGlobals.f_1066), "", 16);
	MISC::CLEAR_BIT(&(/*Global_2672939*/MPGlobals.f_1066.f_4), 0);
	MISC::CLEAR_BIT(&(/*Global_2672939*/MPGlobals.f_1066.f_4), 1);
	MISC::CLEAR_BIT(&(/*Global_2672939*/MPGlobals.f_1066.f_4), 2);
	MISC::CLEAR_BIT(&(/*Global_2672939*/MPGlobals.f_1066.f_4), 3);
	return;
}

BOOL func_0x1D194707(Player plParam0)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return /*Global_1887549*/globalPlayerBD_FM_3[player] != -1;

	return false;
}

void func_0x6826C142()
{
	func_0x6E1CB20E();

	if (func_0x5726FF74(PLAYER::PLAYER_ID()) != 1 || func_0x36F0DC95() < 1)
	{
		if (bLocal_45)
		{
			bLocal_45 = false;
			_STOPWATCH_DESTROY(&uLocal_47);
			iLocal_49 = 0;
			bLocal_46 = false;
		}
	
		return;
	}

	if (bLocal_45)
		return;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
	{
		_STOPWATCH_DESTROY(&uLocal_47);
		iLocal_49 = 0;
		bLocal_46 = false;
		return;
	}

	if (/*Global_2739811*/MPGlobalsAmbience.f_6880 == 4)
	{
		if (!func_0x7F5F619C(2) || bLocal_46)
		{
			if (func_0xC03C24CD() || bLocal_46)
			{
				if (!/*Global_2672939*/MPGlobals.f_1100 || bLocal_46)
				{
					if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_47, 10000, false) || bLocal_46)
					{
						bLocal_46 = true;
					
						if (func_0x6ED3CD32())
						{
							bLocal_45 = true;
							_STOPWATCH_DESTROY(&uLocal_47);
							iLocal_49 = 0;
							bLocal_46 = false;
						
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_0x6ED3CD32()
{
	switch (iLocal_49)
	{
		case 0:
			CAM::DO_SCREEN_FADE_OUT(800);
			iLocal_49 = iLocal_49 + 1;
			break;
	
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				iLocal_49 = iLocal_49 + 1;
			break;
	
		case 2:
			if (func_0xAA93B7F3(310.582f, 5956.967f, -159.272f, 180f, false, true, false, false, true, false, true, false, 0))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
				iLocal_49 = iLocal_49 + 1;
			}
			break;
	
		case 3:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
				return true;
			break;
	}

	return false;
}

BOOL func_0xAA93B7F3(float fParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, int iParam12)
{
	Vehicle vehiclePedIsUsing;
	float entityCoords;
	float value;

	Global_23831.f_6 = 1;

	if (/*Global_2672939*/MPGlobals.f_1100 && /*Global_2672939*/MPGlobals.f_1108)
	{
		func_0x9627103D(false, bParam9);
		return true;
	}

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (/*Global_2672939*/MPGlobals.f_1100)
			func_0x9627103D(false, bParam9);
	
		return false;
	}

	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		return false;

	if (!func_0x1CCCE169(false))
	{
		if (func_0xF79838EA(PLAYER::PLAYER_ID(), true, false) && !(func_0xFF286C20() || func_0xF0359272()))
		{
			if (bParam9 && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && /*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_235 == 1)
			{
			}
			else if (func_0x47FF56D2() == 28)
			{
			}
			else
			{
				return false;
			}
		}
	}

	if (fParam3 < 0f)
		fParam3 = fParam3 + 360f;

	if (fParam3 >= 360f)
		fParam3 = fParam3 + -360f;

	if (!/*Global_2672939*/MPGlobals.f_1100 && !bParam11)
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	
		if (MISC::ABSF(entityCoords - fParam0) < 0.2f && MISC::ABSF(entityCoords.f_1 - fParam0.f_1) < 0.2f && MISC::ABSF(entityCoords.f_2 - fParam0.f_2) < 1.2f)
		{
			value = fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		
			if (value > 180f)
				value = value + -360f;
		
			if (value < -180f)
				value = value + 360f;
		
			if (MISC::ABSF(value) < 1f)
			{
				/*Global_2672939*/MPGlobals.f_1100 = 0;
				/*Global_2672939*/MPGlobals.f_1101 = 0;
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					PLAYER::STOP_PLAYER_TELEPORT();
			
				return true;
			}
		}
	}

	if (!(fParam0 == /*Global_2672939*/MPGlobals.f_1102) || !(fParam0.f_1 == /*Global_2672939*/MPGlobals.f_1102.f_1) || !(fParam0.f_2 == /*Global_2672939*/MPGlobals.f_1102.f_2) || !(fParam3 == /*Global_2672939*/MPGlobals.f_1105))
	{
		if (/*Global_2672939*/MPGlobals.f_1100 == true)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), /*Global_2672939*/MPGlobals.f_1106) < func_0x19C3AA33(false))
				return false;
		
			PLAYER::STOP_PLAYER_TELEPORT();
			/*Global_2672939*/MPGlobals.f_1101 = 1;
		}
		else
		{
			/*Global_2672939*/MPGlobals.f_1101 = 0;
		}
	
		/*Global_2672939*/MPGlobals.f_1102 = { fParam0 };
		/*Global_2672939*/MPGlobals.f_1105 = fParam3;
		/*Global_2672939*/MPGlobals.f_1100 = 0;
	}

	if (bParam4)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing) && ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing) == joaat("kosatka"))
				bParam4 = false;
		}
	}

	if (!/*Global_2672939*/MPGlobals.f_1100 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
			bParam5 = false;
	
		bParam7 = bParam7;
		bParam7;
		bParam5;
		bParam8;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!IS_BIT_SET(/*Global_101740*/g_sShopSettings.f_1421[44], 16))
				func_0xDE6AAD09(0);
		
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2635516.f_503)))
				Global_2635516.f_503 = 0;
		}
	
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(vehiclePedIsUsing))
					/*Global_2672939*/MPGlobals.f_1107 = 0;
			}
		}
	
		if (/*Global_2672939*/MPGlobals.f_1107 > -1)
		{
			/*Global_2672939*/MPGlobals.f_1106 = NETWORK::GET_NETWORK_TIME();
			/*Global_2672939*/MPGlobals.f_1100 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsUsing))
						{
							ENTITY::SET_ENTITY_COORDS(vehiclePedIsUsing, fParam0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(vehiclePedIsUsing, fParam3);
						
							if (iParam12 != 0f)
								ENTITY::SET_ENTITY_ROTATION(vehiclePedIsUsing, iParam12, 0f, fParam3, 2, true);
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(vehiclePedIsUsing);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), fParam0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), fParam0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
			
				func_0x9627103D(bParam6, bParam9);
				return true;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), fParam0, fParam3, bParam4, bParam10, false);
			}
		
			/*Global_2672939*/MPGlobals.f_1106 = NETWORK::GET_NETWORK_TIME();
			/*Global_2672939*/MPGlobals.f_1100 = 1;
		}
	}

	if (/*Global_2672939*/MPGlobals.f_1100)
	{
		Global_23831.f_6 = 1;
		/*Global_2672939*/MPGlobals.f_1106 = NETWORK::GET_NETWORK_TIME();
	
		if (/*Global_2672939*/MPGlobals.f_1107 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		
			if (func_0x877B608E(&(/*Global_2672939*/MPGlobals.f_1107), fParam0, fParam3, vehiclePedIsUsing))
			{
				func_0x9627103D(bParam6, bParam9);
				return true;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), /*Global_2672939*/MPGlobals.f_1102) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
						PLAYER::STOP_PLAYER_TELEPORT();
				
					func_0x9627103D(bParam6, bParam9);
					return true;
				}
			}
		
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (iParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(vehiclePedIsUsing, iParam12, 0f, fParam3, 2, true);
						/*Global_2672939*/MPGlobals.f_1108 = 1;
						return false;
					}
				}
			
				func_0x9627103D(bParam6, bParam9);
				return true;
			}
		}
	}

	return false;
}

BOOL func_0x877B608E(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, Vehicle veParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(/*Global_2672939*/MPGlobals.f_1109) && !ENTITY::IS_ENTITY_DEAD(/*Global_2672939*/MPGlobals.f_1109, false))
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(/*Global_2672939*/MPGlobals.f_1109);

	switch (*iParam0)
	{
		case 0:
			/*Global_2672939*/MPGlobals.f_1109 = veParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(/*Global_2672939*/MPGlobals.f_1109);
		
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(/*Global_2672939*/MPGlobals.f_1109))
			{
				if (!ENTITY::IS_ENTITY_DEAD(/*Global_2672939*/MPGlobals.f_1109, false))
				{
					ENTITY::SET_ENTITY_HEADING(/*Global_2672939*/MPGlobals.f_1109, fParam4);
					ENTITY::SET_ENTITY_COORDS(/*Global_2672939*/MPGlobals.f_1109, vParam1, false, true, true, true);
					return true;
				}
			}
			break;
	}

	return false;
}

void func_0xDE6AAD09(int iParam0)
{
	int num;

	num = Global_2635516.f_2992;

	if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2635516.f_2990 == 0 && iParam0 == 0)
		num = 255;

	if (!(num == Global_2635516.f_2989))
		if (!AUDIO::IS_RADIO_RETUNING())
			Global_2635516.f_2989 = num;

	return;
}

int func_0x19C3AA33(BOOL bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
		return 10000;

	if (bParam0)
		return 5000;

	return 1000;
}

int func_0x47FF56D2()
{
	return /*Global_1575012*/g_transition_state;
}

BOOL func_0xF0359272()
{
	return IS_BIT_SET(/*Global_4718592*/g_FMMC_STRUCT.f_30, 12) && IS_BIT_SET(Global_1964609, 12) && Global_1964608 == 8;
}

BOOL func_0xFF286C20()
{
	return IS_BIT_SET(/*Global_4718592*/g_FMMC_STRUCT.f_30, 12) && IS_BIT_SET(Global_1964609, 0);
}

BOOL func_0xF79838EA(Player plParam0, BOOL bParam1, BOOL bParam2)
{
	if (/*Global_2657991*/GlobalplayerBD[plParam0].f_235 == 99)
		if (bParam2 && /*Global_2657991*/GlobalplayerBD[plParam0].f_238 == 0 || bParam2 == false)
			return false;

	if (bParam1)
		if (/*Global_2657991*/GlobalplayerBD[plParam0].f_235 == 13)
			return false;

	return true;
}

BOOL func_0x1CCCE169(BOOL bParam0)
{
	bParam0;
	return /*Global_1575056*/g_Private_IsMultiplayerCreatorRunning;
}

void func_0x9627103D(BOOL bParam0, BOOL bParam1)
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());

	if (!bParam1)
		STREAMING::CLEAR_FOCUS();

	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		PLAYER::STOP_PLAYER_TELEPORT();

	func_0xBC63612E();

	if (!IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_268.f_34, 14) && !func_0xB2626EAA())
		func_0xD4ABC353();

	return;
}

void func_0xD4ABC353()
{
	Global_2749976.f_92 = 1;
	return;
}

BOOL func_0xB2626EAA()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_0x1CCCE169(false))
		return false;

	if (IS_BIT_SET(/*Global_4718592*/g_FMMC_STRUCT.f_196532[0].f_17, 0))
		return true;

	return false;
}

BOOL func_0xC03C24CD()
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_0x5EDAC812(PLAYER::INT_TO_PLAYERINDEX(i), _GET_BOSS_OF_LOCAL_PLAYER(), true))
			if (IS_BIT_SET(Global_1976576[i].f_60.f_10, 30))
				return true;
	}

	return false;
}

BOOL func_0x5EDAC812(Player plParam0, Player plParam1, BOOL bParam2)
{
	if (func_0x6A46C9B4(plParam1))
	{
		if (!bParam2)
			if (func_0x586F6286(plParam0, plParam1))
				return false;
	
		if (/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10 != _INVALID_PLAYER_INDEX())
			return plParam1 == /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10;
	}

	return false;
}

BOOL func_0x586F6286(Player plParam0, Player plParam1)
{
	if (plParam1 != _INVALID_PLAYER_INDEX())
		if (plParam0 != _INVALID_PLAYER_INDEX())
			if (/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10 != _INVALID_PLAYER_INDEX())
				if (/*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10 == plParam0)
					return plParam1 == plParam0;

	return false;
}

int func_0x36F0DC95()
{
	if (_GET_BOSS_OF_LOCAL_PLAYER() == _INVALID_PLAYER_INDEX())
		return 0;

	return func_0x3CCE1D23(_GET_BOSS_OF_LOCAL_PLAYER());
}

int func_0x3CCE1D23(Player plParam0)
{
	if (func_0xF661080E(plParam0) == _INVALID_PLAYER_INDEX())
		return 0;

	return /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10.f_19;
}

Player func_0xF661080E(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		return /*Global_1887549*/globalPlayerBD_FM_3[plParam0].f_10;

	return _INVALID_PLAYER_INDEX();
}

void func_0x6E1CB20E()
{
	if (func_0x7F5F619C(2))
		if (!IS_BIT_SET(Global_1976576[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_60.f_10, 30))
			MISC::SET_BIT(&(Global_1976576[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_60.f_10), 30);
	else if (IS_BIT_SET(Global_1976576[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_60.f_10, 30))
		MISC::CLEAR_BIT(&(Global_1976576[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_60.f_10), 30);

	return;
}

void func_0x7AA5C38A()
{
	if (!func_0x93F61B1(PLAYER::PLAYER_ID(), false) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tuner_sandbox_activity")) == 0)
		if (Global_1950356)
			func_0xE49C42EC(0);

	return;
}

void func_0xE49C42EC(BOOL bParam0)
{
	Global_1950356 = bParam0;
	return;
}

BOOL func_0x93F61B1(Player plParam0, BOOL bParam1)
{
	if (/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_36 > 0)
		if (bParam1)
			if (IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_34, 0))
				return true;
		else
			return true;

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
	
		return /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_11;
	}

	return _INVALID_PLAYER_INDEX();
}

int func_0x406DDACB(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8;
		else if (/*Global_1575084*/g_b_IsInTransition || Global_2635516.f_2981 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8;

	return -1;
}

BOOL func_0x3B8D0381(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(/*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_8) == 9;

	return false;
}

void func_0xBEEE0798()
{
	Vehicle vehiclePedIsIn;
	Vehicle vehiclePedIsIn2;
	Vehicle vehiclePedIsIn3;

	if (!func_0x24187A96(/*Global_2739811*/MPGlobalsAmbience.f_301))
	{
		if (veLocal_44 != /*Global_2739811*/MPGlobalsAmbience.f_301)
		{
			if (!func_0x60B2061() && ENTITY::GET_ENTITY_MODEL(/*Global_2739811*/MPGlobalsAmbience.f_301) == -1321131184)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(/*Global_2739811*/MPGlobalsAmbience.f_301))
				{
					veLocal_44 = /*Global_2739811*/MPGlobalsAmbience.f_301;
					func_0x23C5DA53(/*Global_2739811*/MPGlobalsAmbience.f_301);
				}
			}
		}
	}
	else if (veLocal_44 != 0)
	{
		veLocal_44 = 0;
	}

	if (func_0x4C17DBA0())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == -1321131184)
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false))
				{
					if (/*Global_101740*/g_sShopSettings.f_509 == 9)
					{
						if (!bLocal_41)
							bLocal_41 = true;
					}
					else if (bLocal_41)
					{
						bLocal_41 = false;
						func_0x23C5DA53(vehiclePedIsIn);
					}
				}
			}
		}
	}

	if (func_0xD7F7F990(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn2))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn2, -1, false))
					bLocal_39 = true;
		}
	}
	else if (!func_0x3F54BDE4(PLAYER::PLAYER_ID()) && !func_0xBF1A1A60(PLAYER::PLAYER_ID(), true, false))
	{
		if (bLocal_39 && CAM::IS_SCREEN_FADED_IN())
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_property_int")) == 0)
			{
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_42))
				{
					_STOPWATCH_INITIALIZE(&uLocal_42, false, false);
				}
				else if (!_STOPWATCH_HAS_TIME_PASSED(&uLocal_42, 5000, false) && !bLocal_40)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						vehiclePedIsIn3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					
						if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn3))
						{
							if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn3, -1, false))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn3))
								{
									if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn3) == -1321131184)
										func_0x23C5DA53(vehiclePedIsIn3);
								
									bLocal_40 = true;
								}
							}
						}
					}
				}
				else
				{
					_STOPWATCH_DESTROY(&uLocal_42);
					bLocal_39 = false;
					bLocal_40 = false;
				}
			}
		}
	}

	return;
}

BOOL func_0x3F54BDE4(Player plParam0)
{
	return IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_34, 14);
}

BOOL func_0xD7F7F990(Player plParam0)
{
	if (IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_34, 14))
		return true;

	if (IS_BIT_SET(/*Global_1845221*/GlobalplayerBD_FM[plParam0].f_268.f_34, 11))
		return true;

	return false;
}

void func_0x23C5DA53(Vehicle veParam0)
{
	if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) == 0)
	{
		VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
		VEHICLE::SET_VEHICLE_STRONG(veParam0, true);
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 16) == 4)
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, /*Global_262145*/g_sMPTunables.f_21454 + 0.05f);
		else
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, /*Global_262145*/g_sMPTunables.f_21454);
	
		VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
	}
	else
	{
		VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
		VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, 1f);
		VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
	}

	return;
}

BOOL func_0x60B2061()
{
	if (func_0x2B8C56B7(2) || func_0x2B8C56B7(1))
		return true;

	return false;
}

BOOL func_0x2B8C56B7(int iParam0)
{
	if (iParam0 < 32)
		return IS_BIT_SET(/*Global_2672939*/MPGlobals.f_63.f_1, iParam0);

	return IS_BIT_SET(/*Global_2672939*/MPGlobals.f_63.f_2, iParam0 - 32);
}

BOOL func_0x24187A96(Vehicle veParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			return true;
	else
		return true;

	return false;
}

void func_0xA5075A65()
{
	if (func_0x88D363EA(PLAYER::PLAYER_ID()) && /*Global_2657991*/GlobalplayerBD[PLAYER::PLAYER_ID()].f_324.f_11 == PLAYER::PLAYER_ID())
	{
		func_0x6C5FB9B7();
	
		if (bLocal_35 || !bLocal_34)
			_STOPWATCH_RESET(&uLocal_37, true, false);
	}
	else
	{
		func_0x54292169();
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_37))
	{
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_37, 5000, true))
		{
			_STOPWATCH_DESTROY(&uLocal_37);
		
			if (bLocal_36)
			{
				bLocal_36 = false;
				Global_2696450 = false;
			}
		}
		else if (!bLocal_36)
		{
			if (!Global_2696450)
			{
				Global_2696450 = true;
				bLocal_36 = true;
				_STOPWATCH_RESET(&uLocal_37, true, false);
			}
		}
	}

	return;
}

void func_0x54292169()
{
	bLocal_34 = false;
	bLocal_35 = false;
	iLocal_33 = 0;
	return;
}

void func_0x6C5FB9B7()
{
	int i;
	int num;

	if (!bLocal_34)
	{
		num = iLocal_33 + 30;
	
		if (num >= 1932)
			num = 1931;
	
		for (i = iLocal_33; i <= num; i = i + 1)
		{
			if (IS_BIT_SET(Global_4547350[i].f_13, 14))
			{
				if (func_0xBF3EFB31(Global_4547350[i].f_15.f_2))
				{
					bLocal_35 = true;
					bLocal_34 = true;
					return;
				}
			}
		
			iLocal_33 = iLocal_33 + 1;
		}
	
		if (num == 1931)
			bLocal_34 = true;
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

void func_0xF10EB7D2()
{
	if (bLocal_32)
		return;

	if (_STAT_GET_PACKED_BOOL(28272, -1))
	{
		bLocal_32 = true;
		return;
	}

	if (!func_0xCFD5B39D())
		return;

	if (func_0xC74ED5D9())
		_STAT_SET_PACKED_BOOL(28272, true, -1);

	bLocal_32 = true;
	return;
}

BOOL func_0xC74ED5D9()
{
	if (func_0x5137F6D6(166, -1))
		return true;

	if (_STAT_GET_PACKED_BOOL(28287, -1))
		return true;

	if (IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(12035, -1), 0))
		return true;

	if (IS_BIT_SET(Global_1976576[PLAYER::PLAYER_ID()].f_71.f_2, 0))
		return true;

	return false;
}

BOOL func_0xCFD5B39D()
{
	if (/*Global_76640*/g_bBrowserVisible && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
		return true;

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

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_14))
	{
		MISC::SET_BIT(/*&Global_8920*/&BitSet_CellphoneDisplay_Continued, 2);
	
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_14, 60000, false))
		{
			_STOPWATCH_RESET(&uLocal_14, false, false);
			_STOPWATCH_DESTROY(&uLocal_14);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_12) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_12, 1000, false))
	{
		if (iLocal_21 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_21 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_12, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
				AUDIO::STOP_SOUND(iLocal_21);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_21);
			iLocal_21 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			_STOPWATCH_RESET(&uLocal_12, false, false);
			_STOPWATCH_DESTROY(&uLocal_12);
		}
	}

	if (!bLocal_6 && !func_0x48656DF7())
		return;

	bLocal_6 = true;
	MISC::SET_BIT(/*&Global_8920*/&BitSet_CellphoneDisplay_Continued, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_5))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_5, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_5, 8000);
			num = GET_MP_INT_CHARACTER_STAT(7869, -1);
			func_0xC00D48A9(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_16 = { ENTITY::GET_ENTITY_COORDS(obLocal_5, false) };
			iLocal_19 = 0;
		}
	}
	else
	{
		CHILIADWAKEUP_ROTATE_OBJECT();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_20 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_20 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_20, "07", obLocal_5, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_7)
			{
				if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_8, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_5, false);
					_STOPWATCH_RESET(&uLocal_8, false, false);
					_STOPWATCH_DESTROY(&uLocal_8);
					_STOPWATCH_INITIALIZE(&uLocal_10, false, false);
					bLocal_7 = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_10, false, false)) / SYSTEM::TO_FLOAT(func_0x729E933());
				num3 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_8, false, false)) / SYSTEM::TO_FLOAT(CHILIADWAKEUP_GET_LERP_TIME());
				num3 = num3 * num2;
				vector = { LERP_VECTOR(uLocal_16, CHILIADWAKEUP_GET_LERP_END_COORD(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_5, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_19 = iLocal_19 + 1;
					uLocal_16 = { ENTITY::GET_ENTITY_COORDS(obLocal_5, false) };
					_STOPWATCH_RESET(&uLocal_8, false, false);
					_STOPWATCH_DESTROY(&uLocal_8);
				
					if (CHILIADWAKEUP_GET_LERP_TIME() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_5);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
							AUDIO::STOP_SOUND(iLocal_20);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_20);
						iLocal_20 = -1;
						_STOPWATCH_INITIALIZE(&uLocal_12, false, false);
						_STOPWATCH_INITIALIZE(&uLocal_14, false, false);
						_STOPWATCH_RESET(&uLocal_10, false, false);
						_STOPWATCH_DESTROY(&uLocal_10);
						uLocal_16 = { 0f, 0f, 0f };
						iLocal_19 = 0;
						bLocal_6 = false;
						bLocal_7 = false;
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
	switch (iLocal_19)
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
	switch (iLocal_19)
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

void CHILIADWAKEUP_ROTATE_OBJECT()
{
	float entityRotation;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_5, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_5, entityRotation, 2, true);
	return;
}

BOOL func_0x48656DF7()
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && /*Global_2640052*/g_TransitionSpawnData == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_0x52131E1C(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && /*Global_2685658*/g_TransitionSessionNonResetVars.f_3078.f_178 >= 1 && /*Global_2685658*/g_TransitionSessionNonResetVars.f_3078.f_178 < 4 && func_0xC61AA4B9() && func_0x97C9EE39())
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

void func_0x157D2892()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_0xF035C7DC(PLAYER::PLAYER_ID()) && !func_0x3BED6F11(PLAYER::PLAYER_ID()))
		{
			if (!PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
				if (!IS_BIT_SET(iLocal_4, 0))
					MISC::SET_BIT(&iLocal_4, 0);
		
			if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true))
				if (!IS_BIT_SET(iLocal_4, 1))
					MISC::SET_BIT(&iLocal_4, 1);
		}
		else if (!func_0x3BED6F11(PLAYER::PLAYER_ID()))
		{
			if (func_0xA439E034(PLAYER::PLAYER_ID()))
				if (iLocal_4 != 0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					func_0x3264710A();
			else
				func_0x3264710A();
		}
		else if (iLocal_4 != 0)
		{
			iLocal_4 = 0;
		}
	}

	return;
}

void func_0x3264710A()
{
	if (IS_BIT_SET(iLocal_4, 0))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), KNOCKOFFVEHICLE_DEFAULT);
		MISC::CLEAR_BIT(&iLocal_4, 0);
	}

	if (IS_BIT_SET(iLocal_4, 1))
	{
		MISC::CLEAR_BIT(&iLocal_4, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
	}

	return;
}

BOOL func_0x3BED6F11(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(/*Global_2657991*/GlobalplayerBD[plParam0].f_324, 3);

	return false;
}

BOOL func_0xF035C7DC(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return /*Global_2657991*/GlobalplayerBD[plParam0].f_324.f_20 != -1;

	return false;
}

void FIX_FOR_5092622()
{
	if (Global_113078 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_0xDBD936D3())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

void FIX_FOR_3533670()
{
	if (!bLocal_3)
	{
		if (/*Global_1836482*/g_FinishedFreemodeInit)
		{
			if (IS_REPEAT_OFFENDER_X_0() || IS_REPEAT_OFFENDER_X())
				/*Global_262145*/g_sMPTunables.f_19912 = 1;
			else
				/*Global_262145*/g_sMPTunables.f_19912 = 0;
		
			bLocal_3 = true;
		}
	}
	else if (!/*Global_1836482*/g_FinishedFreemodeInit)
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
			MISC::SET_BIT(&(/*Global_1845221*/GlobalplayerBD_FM[i].f_832), 1);
		}
	}

	return;
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

