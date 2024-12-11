#pragma region Local Var
	char* sLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	int iLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	int iLocal_diffmode = 0;
	Object obLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	int iLocal_diffmode = 0;
	int iLocal_diffmode = 0;
	int iLocal_diffmode = 0;
	Object obLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	float fLocal_diffmode = 0.f;
	BOOL bLocal_diffmode = 0;
	int iLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	Vehicle veLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	int iLocal_diffmode = 0;
	var uScriptParam_diffmode = 0;
	var uScriptParam_diffmode = 0;
#pragma endregion Local Var

void func_0xB608DC9B()
{
	int num;

	sLocal_diffmode = "1.70.02";
	iLocal_diffmode = -1;
	iLocal_diffmode = -1;
	uLocal_diffmode = { 5022.5645f, -5738f, 16.0937f };
	uLocal_diffmode = { 5033.8535f, -5747.7485f, 20.4291f };
	fLocal_diffmode = 2f;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_diffmode == uScriptParam_diffmode;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	Global_diffmode = MISC::GET_HASH_KEY(sLocal_diffmode);

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_0x6C688EEE();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && g_sCURRENT_UGC_STATUS.f_diffmode)
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
			func_0x45EA9AB8();
			func_0x6F20BE1C();
			func_0x662FBD38();
		}
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			func_0x4C6D28F8();
		else
			func_0x13AAE849();
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_0x13AAE849()
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_diffmode))
		OBJECT::DELETE_OBJECT(&obLocal_diffmode);

	return;
}

void func_0x4C6D28F8()
{
	if (!Join_session_trigger.f_diffmode)
		return;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_diffmode, uLocal_diffmode, fLocal_diffmode, false, true, 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_diffmode))
	{
		obLocal_diffmode = OBJECT::CREATE_OBJECT(joaat("prop_const_fence02b"), 5025.56f, -5740.52f, 16f, false, false, false);
		ENTITY::SET_ENTITY_HEADING(obLocal_diffmode, -42.2f);
		ENTITY::SET_ENTITY_ALPHA(obLocal_diffmode, 0, false);
		ENTITY::SET_ENTITY_NOWEAPONDECALS(obLocal_diffmode, true);
	}

	if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		if (func_0x932F3142(uLocal_diffmode, 750, false))
			return;
	else
		_STOPWATCH_RESET(&uLocal_diffmode, false, false);

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

	pStopwatch->f_diffmode = 1;
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
			if (GlobalplayerBD[plParam0].f_diffmode.f_diffmode != -1)
				return func_0xEE599357(GlobalplayerBD[plParam0].f_diffmode.f_diffmode) == 11;

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
				if (player == MPGlobals.f_diffmode)
					return MPGlobals.f_diffmode;
				else if (GlobalplayerBD[player] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX()
{
	return -1;
}

BOOL func_0x8622182D(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (GlobalplayerBD[plParam0].f_diffmode.f_diffmode != -1)
				return func_0xEE599357(GlobalplayerBD[plParam0].f_diffmode.f_diffmode) == 30;

	return false;
}

void func_0x9F6AA048(BOOL bParam0)
{
	if (bParam0)
		if (!IS_BIT_SET(GlobalplayerBD[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 14))
			MISC::SET_BIT(&(GlobalplayerBD[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 14);
	else if (IS_BIT_SET(GlobalplayerBD[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 14))
		MISC::CLEAR_BIT(&(GlobalplayerBD[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 14);

	return;
}

BOOL func_0x4D4B5ACC(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return GlobalplayerBD_FM[plParam0].f_diffmode.f_diffmode != 0;

	return false;
}

BOOL func_0x8EA2A09B(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(GlobalplayerBD[plParam0].f_diffmode.f_diffmode, 14);

	return false;
}

void func_0x1173212A(BOOL bParam0)
{
	if (bParam0)
		if (!IS_BIT_SET(GlobalplayerBD[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 4))
			MISC::SET_BIT(&(GlobalplayerBD[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 4);
	else if (IS_BIT_SET(GlobalplayerBD[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 4))
		MISC::CLEAR_BIT(&(GlobalplayerBD[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 4);

	return;
}

BOOL func_0xC19ACB14(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (GlobalplayerBD_FM[plParam0].f_diffmode.f_diffmode != 0)
			return true;

	return false;
}

BOOL func_0x3C4F8B7B(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(GlobalplayerBD[plParam0].f_diffmode.f_diffmode, 4);

	return false;
}

void func_0x6F20BE1C()
{
	if (passive.f_diffmode && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		if (func_0x7BB65268() || func_0xCE102224() || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1093.14f, -807.15f, 18.28f, false) < 10f)
		{
			func_0xED159A66();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}

	return;
}

void func_0xED159A66()
{
	if (!func_0x1D194707(PLAYER::PLAYER_ID()))
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);

	STREAMING::REMOVE_ANIM_DICT("MP_SUICIDE");
	passive.f_diffmode = 0;
	TEXT_LABEL_ASSIGN_STRING(&(MPGlobals.f_diffmode), "", 16);
	MISC::CLEAR_BIT(&(MPGlobals.f_diffmode.f_diffmode), 0);
	MISC::CLEAR_BIT(&(MPGlobals.f_diffmode.f_diffmode), 1);
	MISC::CLEAR_BIT(&(MPGlobals.f_diffmode.f_diffmode), 2);
	MISC::CLEAR_BIT(&(MPGlobals.f_diffmode.f_diffmode), 3);
	return;
}

BOOL func_0x1D194707(Player plParam0)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return globalPlayerBD_FM_3[player] != -1;

	return false;
}

BOOL func_0xCE102224()
{
	if (Global_diffmode || func_0x47FF56D2() == 2)
		return 1;

	return 0;
}

int func_0x47FF56D2()
{
	return Global_diffmode;
}

BOOL func_0x7BB65268()
{
	return IS_BIT_SET(Join_session_trigger, 20);
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_0x45EA9AB8()
{
	func_0x6E1CB20E();

	if (func_0x5726FF74(PLAYER::PLAYER_ID()) != 1 || func_0x36F0DC95() < 1)
	{
		if (bLocal_diffmode)
		{
			bLocal_diffmode = false;
			_STOPWATCH_DESTROY(&uLocal_diffmode);
			iLocal_diffmode = 0;
			bLocal_diffmode = false;
		}
	
		return;
	}

	if (bLocal_diffmode)
		return;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
	{
		_STOPWATCH_DESTROY(&uLocal_diffmode);
		iLocal_diffmode = 0;
		bLocal_diffmode = false;
		return;
	}

	if (MPGlobalsAmbience.f_diffmode == 4)
	{
		if (!func_0x7F5F619C(2) || bLocal_diffmode)
		{
			if (func_0xC03C24CD() || bLocal_diffmode)
			{
				if (!MPGlobals.f_diffmode || bLocal_diffmode)
				{
					if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_diffmode, 10000, false) || bLocal_diffmode)
					{
						bLocal_diffmode = true;
					
						if (func_0x6ED3CD32())
						{
							bLocal_diffmode = true;
							_STOPWATCH_DESTROY(&uLocal_diffmode);
							iLocal_diffmode = 0;
							bLocal_diffmode = false;
						
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
	switch (iLocal_diffmode)
	{
		case 0:
			CAM::DO_SCREEN_FADE_OUT(800);
			iLocal_diffmode = iLocal_diffmode + 1;
			break;
	
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				iLocal_diffmode = iLocal_diffmode + 1;
			break;
	
		case 2:
			if (func_0xAA93B7F3(310.582f, 5956.967f, -159.272f, 180f, false, true, false, false, true, false, true, false, 0))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
				iLocal_diffmode = iLocal_diffmode + 1;
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

	Global_diffmode.f_diffmode = 1;

	if (MPGlobals.f_diffmode && MPGlobals.f_diffmode)
	{
		func_0x9627103D(false, bParam9);
		return true;
	}

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (MPGlobals.f_diffmode)
			func_0x9627103D(false, bParam9);
	
		return false;
	}

	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		return false;

	if (!func_0x1CCCE169(false))
	{
		if (func_0xF79838EA(PLAYER::PLAYER_ID(), true, false) && !(func_0xFF286C20() || func_0xF0359272()))
		{
			if (bParam9 && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && GlobalplayerBD[PLAYER::PLAYER_ID()].f_diffmode == 1)
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

	if (!MPGlobals.f_diffmode && !bParam11)
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	
		if (MISC::ABSF(entityCoords - fParam0) < 0.2f && MISC::ABSF(entityCoords.f_diffmode - fParam0.f_diffmode) < 0.2f && MISC::ABSF(entityCoords.f_diffmode - fParam0.f_diffmode) < 1.2f)
		{
			value = fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		
			if (value > 180f)
				value = value + -360f;
		
			if (value < -180f)
				value = value + 360f;
		
			if (MISC::ABSF(value) < 1f)
			{
				MPGlobals.f_diffmode = 0;
				MPGlobals.f_diffmode = 0;
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					PLAYER::STOP_PLAYER_TELEPORT();
			
				return true;
			}
		}
	}

	if (!(fParam0 == MPGlobals.f_diffmode) || !(fParam0.f_diffmode == MPGlobals.f_diffmode.f_diffmode) || !(fParam0.f_diffmode == MPGlobals.f_diffmode.f_diffmode) || !(fParam3 == MPGlobals.f_diffmode))
	{
		if (MPGlobals.f_diffmode == true)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), MPGlobals.f_diffmode) < func_0x19C3AA33(false))
				return false;
		
			PLAYER::STOP_PLAYER_TELEPORT();
			MPGlobals.f_diffmode = 1;
		}
		else
		{
			MPGlobals.f_diffmode = 0;
		}
	
		MPGlobals.f_diffmode = { fParam0 };
		MPGlobals.f_diffmode = fParam3;
		MPGlobals.f_diffmode = 0;
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

	if (!MPGlobals.f_diffmode && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
			bParam5 = false;
	
		bParam7 = bParam7;
		bParam7;
		bParam5;
		bParam8;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!IS_BIT_SET(g_sShopSettings.f_diffmode[44], 16))
				func_0xDE6AAD09(0);
		
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_diffmode.f_diffmode)))
				Global_diffmode.f_diffmode = 0;
		}
	
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(vehiclePedIsUsing))
					MPGlobals.f_diffmode = 0;
			}
		}
	
		if (MPGlobals.f_diffmode > -1)
		{
			MPGlobals.f_diffmode = NETWORK::GET_NETWORK_TIME();
			MPGlobals.f_diffmode = 1;
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
		
			MPGlobals.f_diffmode = NETWORK::GET_NETWORK_TIME();
			MPGlobals.f_diffmode = 1;
		}
	}

	if (MPGlobals.f_diffmode)
	{
		Global_diffmode.f_diffmode = 1;
		MPGlobals.f_diffmode = NETWORK::GET_NETWORK_TIME();
	
		if (MPGlobals.f_diffmode > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		
			if (func_0x877B608E(&(MPGlobals.f_diffmode), fParam0, fParam3, vehiclePedIsUsing))
			{
				func_0x9627103D(bParam6, bParam9);
				return true;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), MPGlobals.f_diffmode) < 2f)
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
						MPGlobals.f_diffmode = 1;
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
	if (ENTITY::DOES_ENTITY_EXIST(MPGlobals.f_diffmode) && !ENTITY::IS_ENTITY_DEAD(MPGlobals.f_diffmode, false))
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(MPGlobals.f_diffmode);

	switch (*iParam0)
	{
		case 0:
			MPGlobals.f_diffmode = veParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(MPGlobals.f_diffmode);
		
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(MPGlobals.f_diffmode))
			{
				if (!ENTITY::IS_ENTITY_DEAD(MPGlobals.f_diffmode, false))
				{
					ENTITY::SET_ENTITY_HEADING(MPGlobals.f_diffmode, fParam4);
					ENTITY::SET_ENTITY_COORDS(MPGlobals.f_diffmode, vParam1, false, true, true, true);
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

	num = Global_diffmode.f_diffmode;

	if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_diffmode.f_diffmode == 0 && iParam0 == 0)
		num = 255;

	if (!(num == Global_diffmode.f_diffmode))
		if (!AUDIO::IS_RADIO_RETUNING())
			Global_diffmode.f_diffmode = num;

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
	return g_transition_state;
}

BOOL func_0xF0359272()
{
	return IS_BIT_SET(g_FMMC_STRUCT.f_diffmode, 12) && IS_BIT_SET(Global_diffmode, 12) && Global_diffmode == 8;
}

BOOL func_0xFF286C20()
{
	return IS_BIT_SET(g_FMMC_STRUCT.f_diffmode, 12) && IS_BIT_SET(Global_diffmode, 0);
}

BOOL func_0xF79838EA(Player plParam0, BOOL bParam1, BOOL bParam2)
{
	if (GlobalplayerBD[plParam0].f_diffmode == 99)
		if (bParam2 && GlobalplayerBD[plParam0].f_diffmode == 0 || bParam2 == false)
			return false;

	if (bParam1)
		if (GlobalplayerBD[plParam0].f_diffmode == 13)
			return false;

	return true;
}

BOOL func_0x1CCCE169(BOOL bParam0)
{
	bParam0;
	return g_Private_IsMultiplayerCreatorRunning;
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

	if (!IS_BIT_SET(GlobalplayerBD_FM[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 14) && !func_0xB2626EAA())
		func_0xD4ABC353();

	return;
}

void func_0xD4ABC353()
{
	Global_diffmode.f_diffmode = 1;
	return;
}

BOOL func_0xB2626EAA()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_0x1CCCE169(false))
		return false;

	if (IS_BIT_SET(g_FMMC_STRUCT.f_diffmode[0].f_diffmode, 0))
		return true;

	return false;
}

void func_0xBC63612E()
{
	var unk;

	MPGlobals.f_diffmode = 0;
	MPGlobals.f_diffmode = 0;
	MPGlobals.f_diffmode = { 9999.9f, 9999.9f, 9999.9f };
	MPGlobals.f_diffmode = -1;
	MPGlobals.f_diffmode = 0;
	Global_diffmode.f_diffmode = { unk };
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
	if (pStopwatch->f_diffmode == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_diffmode = 1;
	}

	return;
}

BOOL func_0xC03C24CD()
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_0x5EDAC812(PLAYER::INT_TO_PLAYERINDEX(i), _GET_BOSS_OF_LOCAL_PLAYER(), true))
			if (IS_BIT_SET(Global_diffmode[i].f_diffmode.f_diffmode, 30))
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
	
		if (globalPlayerBD_FM_3[plParam0].f_diffmode != _INVALID_PLAYER_INDEX())
			return plParam1 == globalPlayerBD_FM_3[plParam0].f_diffmode;
	}

	return false;
}

BOOL func_0x586F6286(Player plParam0, Player plParam1)
{
	if (plParam1 != _INVALID_PLAYER_INDEX())
		if (plParam0 != _INVALID_PLAYER_INDEX())
			if (globalPlayerBD_FM_3[plParam0].f_diffmode != _INVALID_PLAYER_INDEX())
				if (globalPlayerBD_FM_3[plParam0].f_diffmode == plParam0)
					return plParam1 == plParam0;

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

Player _GET_BOSS_OF_LOCAL_PLAYER()
{
	return globalPlayerBD_FM_3[PLAYER::PLAYER_ID()].f_diffmode;
}

BOOL func_0x7F5F619C(int iParam0)
{
	return func_0x1995C9E6(&(MPGlobals.f_diffmode), iParam0);
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

void _STOPWATCH_DESTROY(var uParam0)
{
	uParam0->f_diffmode = 0;
	return;
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

	return globalPlayerBD_FM_3[plParam0].f_diffmode.f_diffmode;
}

Player func_0xF661080E(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		return globalPlayerBD_FM_3[plParam0].f_diffmode;

	return _INVALID_PLAYER_INDEX();
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

int func_0x48014DA(Player plParam0)
{
	if (func_0x3654624B(plParam0, false))
		return globalPlayerBD_FM_3[plParam0].f_diffmode.f_diffmode;

	return -1;
}

BOOL func_0x3654624B(Player plParam0, BOOL bParam1)
{
	if (func_0x6A46C9B4(plParam0))
		if (globalPlayerBD_FM_3[plParam0].f_diffmode.f_diffmode != -1 || bParam1 && globalPlayerBD_FM_3[plParam0].f_diffmode.f_diffmode != -1)
			return true;

	return false;
}

int func_0x5EA8DF5A(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x3654624B(plParam0, false))
			return globalPlayerBD_FM_3[plParam0].f_diffmode.f_diffmode;

	return -1;
}

void func_0x6E1CB20E()
{
	if (func_0x7F5F619C(2))
		if (!IS_BIT_SET(Global_diffmode[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_diffmode.f_diffmode, 30))
			MISC::SET_BIT(&(Global_diffmode[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_diffmode.f_diffmode), 30);
	else if (IS_BIT_SET(Global_diffmode[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_diffmode.f_diffmode, 30))
		MISC::CLEAR_BIT(&(Global_diffmode[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_diffmode.f_diffmode), 30);

	return;
}

void func_0x7AA5C38A()
{
	if (!func_0x93F61B1(PLAYER::PLAYER_ID(), false) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tuner_sandbox_activity")) == 0)
		if (Global_diffmode)
			func_0xE49C42EC(0);

	return;
}

void func_0xE49C42EC(BOOL bParam0)
{
	Global_diffmode = bParam0;
	return;
}

BOOL func_0x93F61B1(Player plParam0, BOOL bParam1)
{
	if (GlobalplayerBD_FM[plParam0].f_diffmode.f_diffmode > 0)
		if (bParam1)
			if (IS_BIT_SET(GlobalplayerBD_FM[plParam0].f_diffmode.f_diffmode, 0))
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
	
		return GlobalplayerBD[plParam0].f_diffmode.f_diffmode;
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

	return func_0x6A46C9B4(globalPlayerBD_FM_3[plParam0].f_diffmode);
}

BOOL func_0xC62FC261(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x6A46C9B4(globalPlayerBD_FM_3[plParam0].f_diffmode))
			return globalPlayerBD_FM_3[plParam0].f_diffmode == plParam0;

	return false;
}

int func_0x406DDACB(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return GlobalplayerBD[plParam0].f_diffmode.f_diffmode;
		else if (g_b_IsInTransition || Global_diffmode.f_diffmode && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return GlobalplayerBD[plParam0].f_diffmode.f_diffmode;

	return -1;
}

BOOL func_0x3B8D0381(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (GlobalplayerBD[plParam0].f_diffmode.f_diffmode != -1)
				return func_0xEE599357(GlobalplayerBD[plParam0].f_diffmode.f_diffmode) == 9;

	return false;
}

void func_0xBEEE0798()
{
	Vehicle vehiclePedIsIn;
	Vehicle vehiclePedIsIn2;
	Vehicle vehiclePedIsIn3;

	if (!func_0x24187A96(MPGlobalsAmbience.f_diffmode))
	{
		if (veLocal_diffmode != MPGlobalsAmbience.f_diffmode)
		{
			if (!func_0x60B2061() && ENTITY::GET_ENTITY_MODEL(MPGlobalsAmbience.f_diffmode) == -1321131184)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(MPGlobalsAmbience.f_diffmode))
				{
					veLocal_diffmode = MPGlobalsAmbience.f_diffmode;
					func_0x23C5DA53(MPGlobalsAmbience.f_diffmode);
				}
			}
		}
	}
	else if (veLocal_diffmode != 0)
	{
		veLocal_diffmode = 0;
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
					if (g_sShopSettings.f_diffmode == 9)
					{
						if (!bLocal_diffmode)
							bLocal_diffmode = true;
					}
					else if (bLocal_diffmode)
					{
						bLocal_diffmode = false;
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
					bLocal_diffmode = true;
		}
	}
	else if (!func_0x3F54BDE4(PLAYER::PLAYER_ID()) && !func_0xBF1A1A60(PLAYER::PLAYER_ID(), true, false))
	{
		if (bLocal_diffmode && CAM::IS_SCREEN_FADED_IN())
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_property_int")) == 0)
			{
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_diffmode))
				{
					_STOPWATCH_INITIALIZE(&uLocal_diffmode, false, false);
				}
				else if (!_STOPWATCH_HAS_TIME_PASSED(&uLocal_diffmode, 5000, false) && !bLocal_diffmode)
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
								
									bLocal_diffmode = true;
								}
							}
						}
					}
				}
				else
				{
					_STOPWATCH_DESTROY(&uLocal_diffmode);
					bLocal_diffmode = false;
					bLocal_diffmode = false;
				}
			}
		}
	}

	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0)
{
	return uParam0->f_diffmode;
}

BOOL func_0xBF1A1A60(Player plParam0, BOOL bParam1, BOOL bParam2)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(GlobalplayerBD_FM[plParam0].f_diffmode.f_diffmode, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(GlobalplayerBD_FM[plParam0].f_diffmode.f_diffmode, 1))
			return true;

	if (bParam2)
		if (GlobalplayerBD[plParam0].f_diffmode.f_diffmode != -1)
			return true;

	return false;
}

BOOL func_0x3F54BDE4(Player plParam0)
{
	return IS_BIT_SET(GlobalplayerBD_FM[plParam0].f_diffmode.f_diffmode, 14);
}

BOOL func_0xD7F7F990(Player plParam0)
{
	if (IS_BIT_SET(GlobalplayerBD_FM[plParam0].f_diffmode.f_diffmode, 14))
		return true;

	if (IS_BIT_SET(GlobalplayerBD_FM[plParam0].f_diffmode.f_diffmode, 11))
		return true;

	return false;
}

BOOL func_0x4C17DBA0()
{
	return IS_BIT_SET(Global_diffmode, 8);
}

void func_0x23C5DA53(Vehicle veParam0)
{
	if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) == 0)
	{
		VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
		VEHICLE::SET_VEHICLE_STRONG(veParam0, true);
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 16) == 4)
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, g_sMPTunables.f_diffmode + 0.05f);
		else
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, g_sMPTunables.f_diffmode);
	
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
		return IS_BIT_SET(MPGlobals.f_diffmode.f_diffmode, iParam0);

	return IS_BIT_SET(MPGlobals.f_diffmode.f_diffmode, iParam0 - 32);
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
	if (func_0x88D363EA(PLAYER::PLAYER_ID()) && GlobalplayerBD[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode == PLAYER::PLAYER_ID())
	{
		func_0x6C5FB9B7();
	
		if (bLocal_diffmode || !bLocal_diffmode)
			_STOPWATCH_RESET(&uLocal_diffmode, true, false);
	}
	else
	{
		func_0x54292169();
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_diffmode))
	{
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_diffmode, 5000, true))
		{
			_STOPWATCH_DESTROY(&uLocal_diffmode);
		
			if (bLocal_diffmode)
			{
				bLocal_diffmode = false;
				Global_diffmode = false;
			}
		}
		else if (!bLocal_diffmode)
		{
			if (!Global_diffmode)
			{
				Global_diffmode = true;
				bLocal_diffmode = true;
				_STOPWATCH_RESET(&uLocal_diffmode, true, false);
			}
		}
	}

	return;
}

void func_0x54292169()
{
	bLocal_diffmode = false;
	bLocal_diffmode = false;
	iLocal_diffmode = 0;
	return;
}

void func_0x6C5FB9B7()
{
	int i;
	int num;

	if (!bLocal_diffmode)
	{
		num = iLocal_diffmode + 30;
	
		if (num >= 1932)
			num = 1931;
	
		for (i = iLocal_diffmode; i <= num; i = i + 1)
		{
			if (IS_BIT_SET(Global_diffmode[i].f_diffmode, 14))
			{
				if (func_0xBF3EFB31(Global_diffmode[i].f_diffmode.f_diffmode))
				{
					bLocal_diffmode = true;
					bLocal_diffmode = true;
					return;
				}
			}
		
			iLocal_diffmode = iLocal_diffmode + 1;
		}
	
		if (num == 1931)
			bLocal_diffmode = true;
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
			if (GlobalplayerBD[plParam0].f_diffmode.f_diffmode != -1)
				return func_0xEE599357(GlobalplayerBD[plParam0].f_diffmode.f_diffmode) == 24;

	return false;
}

void func_0xF10EB7D2()
{
	if (bLocal_diffmode)
		return;

	if (_STAT_GET_PACKED_BOOL(28272, -1))
	{
		bLocal_diffmode = true;
		return;
	}

	if (!func_0xCFD5B39D())
		return;

	if (func_0xC74ED5D9())
		_STAT_SET_PACKED_BOOL(28272, true, -1);

	bLocal_diffmode = true;
	return;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2)
{
	if (iParam2 == -1)
		iParam2 = func_0x47FF56D2();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_0x47FF56D2()
{
	return g_Private_ACTIVE_CHARACTER;
}

BOOL func_0xC74ED5D9()
{
	if (func_0x5137F6D6(166, -1))
		return true;

	if (_STAT_GET_PACKED_BOOL(28287, -1))
		return true;

	if (IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(12035, -1), 0))
		return true;

	if (IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 0))
		return true;

	return false;
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
			MPGlobalsStats = 0;
			num = num2;
		}
		else
		{
			num = 0;
			MPGlobalsStats = 1;
		}
	}

	return num;
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
	if (g_bBrowserVisible && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
		return true;

	return false;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1)
{
	if (iParam1 == -1)
		iParam1 = func_0x47FF56D2();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void CHILIADWAKEUP_MAINTAIN()
{
	Hash model;
	int num;
	int data;
	float num2;
	float num3;
	Vector3 vector;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_diffmode))
	{
		MISC::SET_BIT(&BitSet_CellphoneDisplay_Continued, 2);
	
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_diffmode, 60000, false))
		{
			_STOPWATCH_RESET(&uLocal_diffmode, false, false);
			_STOPWATCH_DESTROY(&uLocal_diffmode);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_diffmode) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_diffmode, 1000, false))
	{
		if (iLocal_diffmode == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_diffmode = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_diffmode, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_diffmode, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_diffmode))
				AUDIO::STOP_SOUND(iLocal_diffmode);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_diffmode);
			iLocal_diffmode = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			_STOPWATCH_RESET(&uLocal_diffmode, false, false);
			_STOPWATCH_DESTROY(&uLocal_diffmode);
		}
	}

	if (!bLocal_diffmode && !func_0x48656DF7())
		return;

	bLocal_diffmode = true;
	MISC::SET_BIT(&BitSet_CellphoneDisplay_Continued, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_diffmode))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_diffmode = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_diffmode, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_diffmode, 8000);
			num = GET_MP_INT_CHARACTER_STAT(7869, -1);
			func_0xC00D48A9(7869, num + 1, -1, true);
			data.f_diffmode = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_diffmode = { ENTITY::GET_ENTITY_COORDS(obLocal_diffmode, false) };
			iLocal_diffmode = 0;
		}
	}
	else
	{
		CHILIADWAKEUP_ROTATE_OBJECT();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_diffmode == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_diffmode = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_diffmode, "07", obLocal_diffmode, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_diffmode)
			{
				if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_diffmode, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_diffmode, false);
					_STOPWATCH_RESET(&uLocal_diffmode, false, false);
					_STOPWATCH_DESTROY(&uLocal_diffmode);
					_STOPWATCH_INITIALIZE(&uLocal_diffmode, false, false);
					bLocal_diffmode = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_diffmode, false, false)) / SYSTEM::TO_FLOAT(func_0x729E933());
				num3 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_diffmode, false, false)) / SYSTEM::TO_FLOAT(CHILIADWAKEUP_GET_LERP_TIME());
				num3 = num3 * num2;
				vector = { LERP_VECTOR(uLocal_diffmode, CHILIADWAKEUP_GET_LERP_END_COORD(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_diffmode, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_diffmode = iLocal_diffmode + 1;
					uLocal_diffmode = { ENTITY::GET_ENTITY_COORDS(obLocal_diffmode, false) };
					_STOPWATCH_RESET(&uLocal_diffmode, false, false);
					_STOPWATCH_DESTROY(&uLocal_diffmode);
				
					if (CHILIADWAKEUP_GET_LERP_TIME() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_diffmode);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_diffmode))
							AUDIO::STOP_SOUND(iLocal_diffmode);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_diffmode);
						iLocal_diffmode = -1;
						_STOPWATCH_INITIALIZE(&uLocal_diffmode, false, false);
						_STOPWATCH_INITIALIZE(&uLocal_diffmode, false, false);
						_STOPWATCH_RESET(&uLocal_diffmode, false, false);
						_STOPWATCH_DESTROY(&uLocal_diffmode);
						uLocal_diffmode = { 0f, 0f, 0f };
						iLocal_diffmode = 0;
						bLocal_diffmode = false;
						bLocal_diffmode = false;
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
	switch (iLocal_diffmode)
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
	switch (iLocal_diffmode)
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

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_diffmode, 2) };
	entityRotation = 0f;
	entityRotation.f_diffmode = 0f;
	entityRotation.f_diffmode = entityRotation.f_diffmode + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_diffmode, entityRotation, 2, true);
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

BOOL func_0x48656DF7()
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && g_TransitionSpawnData == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_0x52131E1C(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && g_TransitionSessionNonResetVars.f_diffmode.f_diffmode >= 1 && g_TransitionSessionNonResetVars.f_diffmode.f_diffmode < 4 && func_0xC61AA4B9() && func_0x97C9EE39())
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
				if (!IS_BIT_SET(iLocal_diffmode, 0))
					MISC::SET_BIT(&iLocal_diffmode, 0);
		
			if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true))
				if (!IS_BIT_SET(iLocal_diffmode, 1))
					MISC::SET_BIT(&iLocal_diffmode, 1);
		}
		else if (!func_0x3BED6F11(PLAYER::PLAYER_ID()))
		{
			if (func_0xA439E034(PLAYER::PLAYER_ID()))
				if (iLocal_diffmode != 0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					func_0x3264710A();
			else
				func_0x3264710A();
		}
		else if (iLocal_diffmode != 0)
		{
			iLocal_diffmode = 0;
		}
	}

	return;
}

void func_0x3264710A()
{
	if (IS_BIT_SET(iLocal_diffmode, 0))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), KNOCKOFFVEHICLE_DEFAULT);
		MISC::CLEAR_BIT(&iLocal_diffmode, 0);
	}

	if (IS_BIT_SET(iLocal_diffmode, 1))
	{
		MISC::CLEAR_BIT(&iLocal_diffmode, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
	}

	return;
}

BOOL func_0xA439E034(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return GlobalplayerBD[plParam0].f_diffmode.f_diffmode != -1;
		else if (g_b_IsInTransition && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return GlobalplayerBD[plParam0].f_diffmode.f_diffmode != -1;

	return false;
}

BOOL func_0x3BED6F11(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(GlobalplayerBD[plParam0].f_diffmode, 3);

	return false;
}

BOOL func_0xF035C7DC(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return GlobalplayerBD[plParam0].f_diffmode.f_diffmode != -1;

	return false;
}

void FIX_FOR_5092622()
{
	if (Global_diffmode && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_0xDBD936D3())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

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
	return g_TransitionData.f_diffmode;
}

void FIX_FOR_3533670()
{
	if (!bLocal_diffmode)
	{
		if (g_FinishedFreemodeInit)
		{
			if (IS_REPEAT_OFFENDER_X_0() || IS_REPEAT_OFFENDER_X())
				g_sMPTunables.f_diffmode = 1;
			else
				g_sMPTunables.f_diffmode = 0;
		
			bLocal_diffmode = true;
		}
	}
	else if (!g_FinishedFreemodeInit)
	{
		bLocal_diffmode = false;
	}

	return;
}

int IS_REPEAT_OFFENDER_X()
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < g_sMPTunables.f_diffmode)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < g_sMPTunables.f_diffmode - 1; i = i + 1)
	{
		if (unk[i] < g_sMPTunables.f_diffmode)
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

	if (num < g_sMPTunables.f_diffmode)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < g_sMPTunables.f_diffmode - 1; i = i + 1)
	{
		if (unk[i] < g_sMPTunables.f_diffmode)
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
			MISC::SET_BIT(&(GlobalplayerBD_FM[i].f_diffmode), 1);
		}
	}

	return;
}

void func_0x6C688EEE()
{
	if (bLocal_diffmode)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		DISPLAY_TEXT_WITH_LITERAL_STRING_FOR_RELEASE_F9(0.69f, 0.06f, "STRING", sLocal_diffmode);
	}

	if (!bLocal_diffmode)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_diffmode)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_diffmode = iLocal_diffmode + 1;
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_diffmode = iLocal_diffmode + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_diffmode = 0;
					}
					break;
			
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_diffmode = iLocal_diffmode + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_diffmode = 0;
					}
					break;
			
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_diffmode = iLocal_diffmode + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_diffmode = 0;
					}
					break;
			
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
					{
						bLocal_diffmode = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_diffmode = 0;
					}
					break;
			}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_diffmode)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					iLocal_diffmode = iLocal_diffmode + 1;
					SYSTEM::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_diffmode = iLocal_diffmode + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_diffmode = 0;
				}
				break;
		
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					iLocal_diffmode = iLocal_diffmode + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_diffmode = 0;
				}
				break;
		
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_diffmode = iLocal_diffmode + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_diffmode = 0;
				}
				break;
		
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					bLocal_diffmode = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_diffmode = 0;
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

