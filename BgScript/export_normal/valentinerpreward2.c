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
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	Object obLocal_32 = 0;
	BOOL bLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0.f;
	Hash hLocal_43 = 0;
	Object obLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	BOOL bLocal_48 = 0;
	BOOL bLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	float fLocal_57 = 0.f;
	float fLocal_58 = 0.f;
	BOOL bLocal_59 = 0;
	Hash hLocal_60 = 0;
	BOOL bLocal_61 = 0;
	BOOL bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#pragma endregion Local Var

void func_0x781FB738()
{
	int num;

	sLocal_0 = "1.69.05a";
	iLocal_19 = -1;
	iLocal_20 = -1;
	uLocal_36 = { 5022.5645f, -5738f, 16.0937f };
	uLocal_39 = { 5033.8535f, -5747.7485f, 20.4291f };
	fLocal_42 = 2f;
	iLocal_47 = -1;
	iLocal_50 = -1;
	iLocal_63 = -1;
	iLocal_64 = -1;
	iLocal_65 = -1;
	iLocal_66 = -1;
	iLocal_67 = -1;
	iLocal_68 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	Global_1578030 = MISC::GET_HASH_KEY(sLocal_0);

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_0x75D67F14();
	
		func_0xE69DADEC();
		func_0x109BC0D6();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693440.f_3)
		{
			FIX_FOR_3280561();
			FIX_FOR_3533670();
			FIX_FOR_5092622();
			func_0x46F6CB8F();
			CHILIADWAKEUP_MAINTAIN();
			func_0xB333D603();
			func_0x5F76544B();
			func_0x455A0262();
			func_0x6AF3BC1C();
			func_0x7585F36();
			func_0x1774FC3F();
			func_0x363E3964();
			func_0xD13380E();
			func_0x313073A8();
		}
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_0xF4189EB7();
			func_0x1F921654();
			func_0x4C6D28F8();
			func_0xD5159B9E();
			func_0x45DA7A3();
			func_0x8566D7EF();
		}
		else if (Global_2693440.f_3)
		{
			func_0xEFFC3CA9();
			func_0x486BE352();
		}
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_0x486BE352()
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_32))
		OBJECT::DELETE_OBJECT(&obLocal_32);

	if (bLocal_33)
	{
		Global_262145.f_29242 = 20000;
		Global_262145.f_29243 = 99000;
		bLocal_33 = false;
	}

	Global_1058421 = { 0f, 0f, 0f };
	Global_1058116.f_292 = 0;
	return;
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
									bLocal_33 = true;
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

void func_0x4C6D28F8()
{
	if (!Global_2684504.f_24)
		return;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_36, uLocal_39, fLocal_42, false, true, 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_32))
	{
		obLocal_32 = OBJECT::CREATE_OBJECT(joaat("prop_const_fence02b"), 5025.56f, -5740.52f, 16f, false, false, false);
		ENTITY::SET_ENTITY_HEADING(obLocal_32, -42.2f);
		ENTITY::SET_ENTITY_ALPHA(obLocal_32, 0, false);
		ENTITY::SET_ENTITY_NOWEAPONDECALS(obLocal_32, true);
	}

	if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		if (func_0x932F3142(uLocal_34, 750, false))
			return;
	else
		_STOPWATCH_RESET(&uLocal_34, false, false);

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

	if (func_0x62114499(3) != *Global_4718592.f_127178)
	{
		uLocal_27 = { func_0xA9B5EBA8() };
		_STOPWATCH_DESTROY(&uLocal_30);
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
			uLocal_27 = { ENTITY::GET_ENTITY_COORDS(entityIndexOfCutsceneEntity, false) };
	}
	else if (!_IS_NULL_VECTOR(uLocal_27))
	{
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_30))
			_STOPWATCH_INITIALIZE(&uLocal_30, false, false);
	
		if (func_0x932F3142(uLocal_30, 5000, false))
		{
			uLocal_27 = { func_0xA9B5EBA8() };
			_STOPWATCH_DESTROY(&uLocal_30);
		}
	
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entity))
		{
			ENTITY::SET_ENTITY_COORDS(entity, uLocal_27, true, false, false, true);
			uLocal_27 = { func_0xA9B5EBA8() };
			_STOPWATCH_DESTROY(&uLocal_30);
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
		bLocal_24 = true;
	}
	else if (bLocal_24)
	{
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_25))
			_STOPWATCH_INITIALIZE(&uLocal_25, false, false);
	
		if (func_0x932F3142(uLocal_25, 5000, false))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 366, true);
			bLocal_24 = false;
			_STOPWATCH_DESTROY(&uLocal_25);
		}
	}

	return;
}

void func_0x313073A8()
{
	if (Global_1980263.f_9 != -1)
	{
		if (!bLocal_62)
		{
			iLocal_63 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD);
			iLocal_64 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD);
			iLocal_65 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1);
			iLocal_66 = PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD);
			iLocal_67 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF);
			iLocal_68 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF);
			bLocal_62 = true;
		}
		else if (iLocal_63 != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD) || iLocal_64 != PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD) || iLocal_65 != PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1) || iLocal_66 != PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD) || iLocal_67 != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF) || iLocal_68 != PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TEEF))
		{
			Global_1980263.f_9 = -1;
			Global_1980263.f_10 = -1;
			bLocal_62 = false;
		}
	}

	return;
}

void func_0xD13380E()
{
	if (bLocal_61)
		if (func_0xDBD936D3())
			bLocal_61 = false;
		else
			return;

	if (func_0x47FF56D2() == 26 && Global_1980302)
	{
		Global_1980302 = false;
		bLocal_61 = true;
	}

	return;
}

int func_0x47FF56D2()
{
	return Global_1575011;
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
		if (hLocal_60 != 0)
			hLocal_60 = 0;
	
		if (bLocal_59)
			bLocal_59 = false;
	
		return;
	}

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(playersLastVehicle))
		hLocal_60 = ENTITY::GET_ENTITY_MODEL(playersLastVehicle);

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

	if (!bLocal_59)
	{
		closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(0f, 0f, -50f, 1f, hLocal_60, 2);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(closestVehicle))
		{
			ENTITY::SET_ENTITY_COORDS(closestVehicle, entityCoords, false, false, false, false);
			ENTITY::SET_ENTITY_HEADING(closestVehicle, entityHeading);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(closestVehicle, 1084227584);
			bLocal_59 = true;
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

	if (iLocal_50 != num || bLocal_49 != flag)
	{
		func_0xDEB37B1F(num, &uLocal_51, &uLocal_54, &fLocal_57, &fLocal_58);
		iLocal_50 = num;
		bLocal_49 = flag;
	}

	if (Global_1943520.f_4811.f_4 == -1 && Global_1943520.f_4811.f_4 != iLocal_50)
		Global_1943520.f_4811.f_4 = iLocal_50;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_51, uLocal_54, fLocal_57, false, true, 0))
	{
		entityHeading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		num2 = MISC::ABSF(fLocal_58 - entityHeading);
		flag2 = num2 < 60f || num2 > 300f;
	
		if (!flag2)
			return;
	
		for (i = 0; i < 32; i = i + 1)
		{
			if (func_0x8ACF6631(i, iLocal_50))
				num3 = num3 + 1;
		}
	
		if (num3 == 0 || num3 == 1 && func_0x8ACF6631(_GET_BOSS_OF_LOCAL_PLAYER(), iLocal_50))
			if (func_0x67F162DB())
				func_0xD40A0568(iLocal_50);
	}

	return;
}

void func_0xD40A0568(int iParam0)
{
	if (bLocal_49)
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

BOOL func_0x7CD5054C(Player plParam0, int iParam1)
{
	return IS_BIT_SET(Global_1887305[plParam0].f_10.f_4, iParam1);
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

Player _INVALID_PLAYER_INDEX()
{
	return -1;
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

void func_0x7585F36()
{
	int num;
	BOOL flag;

	if (IS_BIT_SET(Global_2738934.f_460.f_5, 0))
		bLocal_48 = true;
	else
		bLocal_48 = false;

	if (bLocal_48)
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

	if (num != -1 && iLocal_47 != num)
		iLocal_47 = num;

	if (iLocal_47 == -1)
		return;

	Global_262145.f_35477 = 500f;
	Global_262145.f_35478 = 500f;
	Global_262145.f_35479 = 500f;
	Global_262145.f_35480 = 500f;

	switch (iLocal_47)
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

int func_0x48014DA(Player plParam0)
{
	if (func_0x8B0CDA01(plParam0, false))
		return Global_1887305[plParam0].f_10.f_182;

	return -1;
}

BOOL func_0x8B0CDA01(Player plParam0, BOOL bParam1)
{
	if (Global_1887305[plParam0].f_10.f_33 != -1 || bParam1 && Global_1887305[plParam0].f_10.f_32 != -1)
		return true;

	return false;
}

int func_0x48014DA(Player plParam0)
{
	if (func_0x8B0CDA01(plParam0, false))
		return Global_1887305[plParam0].f_10.f_33;

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

int func_0x47FF56D2()
{
	return Global_1574926;
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

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1)
{
	if (iParam1 == -1)
		iParam1 = func_0x47FF56D2();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
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
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_45))
			_STOPWATCH_INITIALIZE(&uLocal_45, false, false);
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_45, 10000, false))
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
	else if (_STOPWATCH_IS_INITIALIZED(&uLocal_45))
		_STOPWATCH_DESTROY(&uLocal_45);

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
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_44))
		{
			ENTITY::SET_ENTITY_VISIBLE(obLocal_44, false, false);
		}
		else
		{
			hLocal_43 = joaat("apa_heist_apart2_door");
		
			if (func_0x350793CC(hLocal_43))
			{
				obLocal_44 = OBJECT::CREATE_OBJECT(hLocal_43, 122.271f, 12.916f, 67.282f, false, false, true);
			
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_44))
				{
					ENTITY::SET_ENTITY_COORDS(obLocal_44, 122.271f, 12.916f, 67.282f, false, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(obLocal_44, 0f, 90.525f, 70.35f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_44, true);
					ENTITY::SET_ENTITY_VISIBLE(obLocal_44, false, false);
					ENTITY::SET_ENTITY_PROOFS(obLocal_44, true, true, true, true, true, true, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_43);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(obLocal_44))
	{
		OBJECT::DELETE_OBJECT(&obLocal_44);
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

int func_0xF9396AAC()
{
	int num;

	num = 0;
	return num;
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

void func_0x75D67F14()
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

