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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#pragma endregion Local Var

void func_0xB608DC9B()
{
	int num;

	sLocal_0 = "1.70.01";
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
			func_0x6CF572F7();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693671.f_3)
		{
			FIX_FOR_3280561();
			FIX_FOR_3533670();
			FIX_FOR_5092622();
			func_0x157D2892();
			CHILIADWAKEUP_MAINTAIN();
			func_0xF10EB7D2();
			func_0xA5075A65();
			func_0x715AA924();
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
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_22))
		OBJECT::DELETE_OBJECT(&obLocal_22);

	return;
}

void func_0x4C6D28F8()
{
	if (!Global_2684718.f_24)
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

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
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
	
		return Global_2657991[plParam0].f_324.f_11;
	}

	return _INVALID_PLAYER_INDEX();
}

Player func_0xF661080E(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		return Global_1887549[plParam0].f_10;

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

	return func_0x6A46C9B4(Global_1887549[plParam0].f_10);
}

BOOL func_0xC62FC261(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x6A46C9B4(Global_1887549[plParam0].f_10))
			return Global_1887549[plParam0].f_10 == plParam0;

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

int func_0x406DDACB(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657991[plParam0].f_324.f_8;
		else if (Global_1575084 || Global_2635516.f_2981 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657991[plParam0].f_324.f_8;

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
				if (player == Global_2672939.f_3)
					return Global_2672939.f_2;
				else if (Global_2657991[player] != 4)
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

BOOL func_0x3B8D0381(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657991[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(Global_2657991[plParam0].f_324.f_8) == 9;

	return false;
}

void func_0xA5075A65()
{
	if (func_0x88D363EA(PLAYER::PLAYER_ID()) && Global_2657991[PLAYER::PLAYER_ID()].f_324.f_11 == PLAYER::PLAYER_ID())
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

void _STOPWATCH_DESTROY(var uParam0)
{
	uParam0->f_1 = 0;
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

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0)
{
	return uParam0->f_1;
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

BOOL func_0x88D363EA(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657991[plParam0].f_324.f_8 != -1)
				return func_0xEE599357(Global_2657991[plParam0].f_324.f_8) == 24;

	return false;
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2)
{
	if (iParam2 == -1)
		iParam2 = func_0x47FF56D2();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_0x47FF56D2()
{
	return /*Global_1574926*/g_Private_ACTIVE_CHARACTER;
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
			Global_2751934 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2751934 = 1;
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
	if (Global_76640 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
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

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_14))
	{
		MISC::SET_BIT(&Global_8920, 2);
	
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
	MISC::SET_BIT(&Global_8920, 2);

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

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_5, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_5, entityRotation, 2, true);
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
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_2640052 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_0x52131E1C(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2685658.f_3078.f_178 >= 1 && Global_2685658.f_3078.f_178 < 4 && func_0xC61AA4B9() && func_0x97C9EE39())
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

BOOL func_0xA439E034(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657991[plParam0].f_324.f_8 != -1;
		else if (Global_1575084 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657991[plParam0].f_324.f_8 != -1;

	return false;
}

BOOL func_0x3BED6F11(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657991[plParam0].f_324, 3);

	return false;
}

BOOL func_0xF035C7DC(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_2657991[plParam0].f_324.f_20 != -1;

	return false;
}

void FIX_FOR_5092622()
{
	if (Global_113078 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_0xDBD936D3())
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
	return /*Global_1574633*/g_TransitionData.f_18;
}

void FIX_FOR_3533670()
{
	if (!bLocal_3)
	{
		if (Global_1836482)
		{
			if (IS_REPEAT_OFFENDER_X_0() || IS_REPEAT_OFFENDER_X())
				/*Global_262145*/g_sMPTunables.f_19912 = 1;
			else
				/*Global_262145*/g_sMPTunables.f_19912 = 0;
		
			bLocal_3 = true;
		}
	}
	else if (!Global_1836482)
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
			MISC::SET_BIT(&(Global_1845221[i].f_832), 1);
		}
	}

	return;
}

void func_0x6CF572F7()
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

