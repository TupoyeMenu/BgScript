#pragma region Local Var
	char* sLocal_0 = 0;
	BOOL bLocal_1 = 0;
	int iLocal_2 = 0;
	Player plLocal_3 = 0;
	int iLocal_4 = -1;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	BOOL bLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	BOOL bLocal_12 = 0;
	BOOL bLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	BOOL bLocal_21 = 0;
	Object obLocal_22 = 0;
	Object obLocal_23 = 0;
	BOOL bLocal_24 = 0;
	BOOL bLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	BOOL bLocal_40 = 0;
	BOOL bLocal_41 = 0;
	BOOL bLocal_42 = 0;
	BOOL bLocal_43 = 0;
	int iLocal_44 = 0;
	BOOL bLocal_45 = 0;
	BOOL bLocal_46 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#pragma endregion Local Var

void func_0xDE9FAF64()
{
	int num;
	BOOL flag;

	sLocal_0 = "1.72.02";
	plLocal_3 = _INVALID_PLAYER_INDEX();
	iLocal_38 = -1;
	iLocal_39 = -1;
	bLocal_43 = true;
	iLocal_44 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	Global_1576477 = MISC::GET_HASH_KEY(sLocal_0);

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_0x484F291F();
	
		flag = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	
		if (Global_2694229.f_3)
		{
			if (flag)
			{
				FIX_FOR_3280561();
				FIX_FOR_3533670();
				FIX_FOR_5092622();
				func_0x79F25806();
				func_0x215BD0B8();
				func_0x1DDB85A4();
				func_0x578C871B();
				func_0xB530650E();
				func_0x281AC778();
				func_0x639BDC70();
				func_0xC65DAA2();
				func_0xA61AFFC8();
				func_0x4B3D2F1A();
				func_0xD2BCF891();
				func_0xF3775C0();
				func_0xE56E0997();
				CHILIADWAKEUP_MAINTAIN();
			}
		
			func_0x7D91EC04();
			func_0x86F0C471();
			func_0x21757A7C(flag);
		}
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_0x21757A7C(BOOL bParam0)
{
	if (bParam0)
	{
		if (!bLocal_12)
		{
			if (func_0x60405B44())
			{
				func_0x4AE500E7(&Global_1048576);
				NETWORK::NETWORK_BAIL(51, 0, 0);
				bLocal_12 = true;
			}
		}
	}
	else if (bLocal_12)
	{
		bLocal_12 = false;
	}

	return;
}

void func_0x4AE500E7(var uParam0)
{
	int i;

	*uParam0 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 32;
	uParam0->f_10 = 0;
	uParam0->f_11 = 1;
	uParam0->f_12 = 1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44), "", 24);
	uParam0->f_67 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = -1;
	uParam0->f_72 = -1;
	uParam0->f_4 = 1000;

	for (i = 0; i <= 63; i = i + 1)
	{
		if (i < 35)
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_1195[i], "", 24);
	}

	func_0x83F63FA6(&(uParam0->f_74));
	return;
}

void func_0x83F63FA6(var uParam0)
{
	int i;
	var unk;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		uParam0->[i] = { unk };
	}

	return;
}

BOOL func_0x60405B44()
{
	int i;
	Hash hashKey;

	if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_10, 3000, false))
	{
		_STOPWATCH_RESET(&uLocal_10, false, false);
	
		if (Global_1048576.f_67 > 0)
		{
			for (i = 0; i <= Global_1048576.f_67 - 1; i = i + 1)
			{
				hashKey = MISC::GET_HASH_KEY(&Global_1048576.f_74[i]);
			
				if (func_0x5000025C(hashKey))
					return true;
			}
		}
	}

	return false;
}

BOOL func_0x5000025C(Hash hParam0)
{
	switch (hParam0)
	{
		case 1353980833:
		case -264444718:
		case -619405321:
		case 272315203:
		case 973972777:
		case -1349054386:
		case -992586115:
		case -873950947:
		case 1794933847:
		case 1144914597:
		case -1644394473:
		case -971075350:
		case 1557166877:
		case 1844966436:
		case -1869164192:
		case -1274847993:
		case -447866612:
		case -374232416:
		case 1786877744:
		case 1878942357:
		case 2010828775:
		case -1979655010:
		case 877706734:
		case -484555860:
		case 467119084:
		case -603513051:
		case -1691134529:
		case 1375870003:
		case 1256838329:
		case 1143347112:
		case -2079922581:
		case -584380916:
		case 1700357051:
		case -668162985:
		case -1669450127:
		case 1323854230:
		case -1702249703:
		case -2000439578:
		case 1919165931:
		case 1248191494:
		case 487553267:
		case 60360405:
		case 124384896:
		case 2029985126:
		case -1546822797:
		case -451530146:
		case 2113787171:
		case 1642612080:
		case 1427532094:
		case joaat("ILftw0VGzEmaDjbavoRLDA"):
		case -1738039549:
		case -191200378:
		case -297941166:
		case -1819543452:
		case -422291285:
		case -1728459505:
		case -1143692234:
		case -1249864039:
		case -888332205:
		case 1273670719:
		case 1704054677:
		case 35443586:
		case -844541994:
		case 465361:
		case 1577743630:
		case -137112501:
		case -827758392:
		case 1637918252:
		case 1303864770:
		case 112089010:
		case 511100447:
		case -1593906097:
		case 2067181637:
		case 490549700:
		case -1254107161:
		case 1417500888:
		case -1320695507:
		case 319564771:
		case -1842227191:
		case -1038651575:
		case 8963787:
		case 1514436675:
		case 1926811590:
		case -1165309910:
		case 1454264907:
		case 554108128:
		case 1120762277:
		case -833749804:
		case 1885714027:
		case -1447160645:
		case 1099444592:
		case 1088622293:
		case 115692680:
		case -1949362093:
		case 760332755:
		case -1361135836:
		case 370319006:
		case 349446284:
		case 1981504962:
		case -382600698:
		case 1258403474:
		case 2024232450:
		case -992187276:
		case 1305003769:
			return true;
	
		default:
		
	}

	return false;
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

void func_0x86F0C471()
{
	int i;

	if (func_0xAB543684())
	{
		bLocal_43 = true;
	
		if (iLocal_44 == -1)
			iLocal_44 = */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314;
	
		if (iLocal_44 != */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314)
			if (*/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314 > 0 && */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314 < 50 && iLocal_44 > */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314)
				/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90320[*/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314].f_165.f_8 = -1;
	
		iLocal_44 = */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314;
		return;
	}

	iLocal_44 = -1;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		bLocal_43 = true;
		return;
	}

	if (!bLocal_43)
		return;

	for (i = 0; i <= 49; i = i + 1)
	{
		/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90320[i].f_165.f_8 = -1;
	}

	bLocal_43 = false;
	return;
}

BOOL func_0xAB543684()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2136380241) > 0;
}

void func_0x7D91EC04()
{
	if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_smpl_interior_int")) <= 0)
	{
		if (bLocal_46)
		{
			Global_1950198.f_770 = 0;
			bLocal_46 = false;
		}
	
		return;
	}

	if (!IS_BIT_SET(/*Global_1574589*/session, 8) && !IS_BIT_SET(/*Global_1574589*/session, 7) && !IS_BIT_SET(/*Global_1574589*/session, 4) && !(func_0x63090B4B() && */*Global_4718592*/g_FMMC_STRUCT.f_133086 == 0))
		return;

	Global_1950198.f_770 = 1;
	bLocal_46 = true;
	return;
}

BOOL func_0x63090B4B()
{
	return IS_BIT_SET(Global_2685150, 4);
}

BOOL func_0xFA5B473E(Player plParam0, BOOL bParam1)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (bParam1 || _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658291[plParam0].f_325.f_8 != -1)
				return func_0xEE599357(Global_2658291[plParam0].f_325.f_8) == 33;

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
	
		case 174:
		case 175:
		case 176:
			return 32;
	
		case 177:
		case 178:
		case 179:
			return 33;
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
				if (player == Global_2673271.f_3)
					return Global_2673271.f_2;
				else if (Global_2658291[player] != 4)
					return false;
		
			return true;
		}
	}

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

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_32))
	{
		MISC::SET_BIT(&Global_9464, 2);
	
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_32, 60000, false))
		{
			_STOPWATCH_RESET(&uLocal_32, false, false);
			_STOPWATCH_DESTROY(&uLocal_32);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_30) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_30, 1000, false))
	{
		if (iLocal_39 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_39 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_39, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_30, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_39))
				AUDIO::STOP_SOUND(iLocal_39);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_39);
			iLocal_39 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			_STOPWATCH_RESET(&uLocal_30, false, false);
			_STOPWATCH_DESTROY(&uLocal_30);
		}
	}

	if (!bLocal_24 && !func_0x48656DF7())
		return;

	bLocal_24 = true;
	MISC::SET_BIT(&Global_9464, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_23))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_23 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_23, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_23, 8000);
			num = GET_MP_INT_CHARACTER_STAT(7869, -1);
			func_0xC00D48A9(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_34 = { ENTITY::GET_ENTITY_COORDS(obLocal_23, false) };
			iLocal_37 = 0;
		}
	}
	else
	{
		CHILIADWAKEUP_ROTATE_OBJECT();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_38 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_38 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_38, "07", obLocal_23, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_25)
			{
				if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_26, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_23, false);
					_STOPWATCH_RESET(&uLocal_26, false, false);
					_STOPWATCH_DESTROY(&uLocal_26);
					_STOPWATCH_INITIALIZE(&uLocal_28, false, false);
					bLocal_25 = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_28, false, false)) / SYSTEM::TO_FLOAT(func_0x729E933());
				num3 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_26, false, false)) / SYSTEM::TO_FLOAT(CHILIADWAKEUP_GET_LERP_TIME());
				num3 = num3 * num2;
				vector = { LERP_VECTOR(uLocal_34, CHILIADWAKEUP_GET_LERP_END_COORD(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_23, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_37 = iLocal_37 + 1;
					uLocal_34 = { ENTITY::GET_ENTITY_COORDS(obLocal_23, false) };
					_STOPWATCH_RESET(&uLocal_26, false, false);
					_STOPWATCH_DESTROY(&uLocal_26);
				
					if (CHILIADWAKEUP_GET_LERP_TIME() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_23);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_38))
							AUDIO::STOP_SOUND(iLocal_38);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_38);
						iLocal_38 = -1;
						_STOPWATCH_INITIALIZE(&uLocal_30, false, false);
						_STOPWATCH_INITIALIZE(&uLocal_32, false, false);
						_STOPWATCH_RESET(&uLocal_28, false, false);
						_STOPWATCH_DESTROY(&uLocal_28);
						uLocal_34 = { 0f, 0f, 0f };
						iLocal_37 = 0;
						bLocal_24 = false;
						bLocal_25 = false;
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
	switch (iLocal_37)
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
	switch (iLocal_37)
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

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_23, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_23, entityRotation, 2, true);
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
			Global_2741298 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741298 = 1;
		}
	}

	return num;
}

int func_0x47FF56D2()
{
	return Global_1574927;
}

int GET_MP_INT_CHARACTER_STAT(int iParam0, int iParam1)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16715)
	{
		statHash = func_0x505A9F99(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_0x48656DF7()
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_2640098 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_0x52131E1C(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2686090.f_3083.f_178 >= 1 && Global_2686090.f_3083.f_178 < 4 && func_0xC61AA4B9() && func_0x97C9EE39())
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

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1)
{
	if (iParam1 == -1)
		iParam1 = func_0x47FF56D2();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void _STOPWATCH_DESTROY(var uParam0)
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0)
{
	return uParam0->f_1;
}

void func_0xE56E0997()
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		bLocal_45 = false;
		return;
	}

	if (bLocal_45)
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (/*Global_4718592*/g_FMMC_STRUCT.f_185991[i] == 113)
			/*Global_4718592*/g_FMMC_STRUCT.f_185991[i] = 107;
	}

	bLocal_45 = true;
	return;
}

void func_0xF3775C0()
{
	struct<5> eventData;
	int i;
	eEventType eventAtIndex;
	Ped ped;
	int j;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) == 0)
		return;

	for (i = 0; i <= SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK) - 1; i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case EVENT_NETWORK_SCRIPT_EVENT:
				if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 5))
				{
					if (eventData == -487774749)
					{
						if (eventData.f_3 < 0 || eventData.f_3 >= 50)
							return;
					
						for (j = 0; j <= */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314 - 1; j = j + 1)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Global_1058124.f_157[j]))
							{
							}
							else if (func_0x2004C1BE(Global_1058124.f_157[j]) == eventData.f_3)
							{
								ped = Global_1058124.f_157[j];
								break;
							}
						}
					
						if (!PED::IS_PED_INJURED(ped) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ped))
							TASK::CLEAR_PED_TASKS(ped);
					}
				}
				break;
		}
	}

	return;
}

int func_0x2004C1BE(Entity eParam0)
{
	int _int;

	if (eParam0 == 0)
		return -1;

	_int = -1;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", INT))
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "MC_EntityID"))
			_int = DECORATOR::DECOR_GET_INT(eParam0, "MC_EntityID");

	return _int;
}

void func_0xD2BCF891()
{
	if (func_0xEAE183ED() == 178 && func_0xAC9DE117() == 482563055)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_22))
			return;
	
		STREAMING::REQUEST_MODEL(joaat("prop_dummy_car"));
	
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_dummy_car")))
		{
			obLocal_22 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_dummy_car"), -1628.8046f, 486.4122f, 118.4275f, false, false, false, 0);
			ENTITY::SET_ENTITY_ROTATION(obLocal_22, 0f, 0f, -35.6617f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_22, true);
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_22, true, 0);
			ENTITY::SET_ENTITY_VISIBLE(obLocal_22, false, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_dummy_car"));
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(obLocal_22))
	{
		OBJECT::DELETE_OBJECT(&obLocal_22);
	}

	return;
}

int func_0xAC9DE117()
{
	return Global_1882572[PLAYER::PLAYER_ID()].f_158.f_43.f_6;
}

int func_0xEAE183ED()
{
	return Global_2658291[PLAYER::PLAYER_ID()].f_325.f_8;
}

void func_0x4B3D2F1A()
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false))
		{
			if (!bLocal_21)
			{
				bLocal_21 = true;
				PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), 10000000f);
				PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (bLocal_21)
		{
			bLocal_21 = false;
			PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), -1f);
			PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), true);
		}
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

void func_0xA61AFFC8()
{
	if (IS_BIT_SET(Global_1845250[PLAYER::PLAYER_ID()].f_260.f_439.f_2, 17))
		if (!Global_2733002.f_5828)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_rc_vehicle")) == 0 && !IS_BIT_SET(Global_1845250[PLAYER::PLAYER_ID()].f_260.f_439.f_2, 16))
				MISC::CLEAR_BIT(&(Global_1845250[PLAYER::PLAYER_ID()].f_260.f_439.f_2), 17);

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
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn) && VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, -1321131184) && Global_102481.f_530 == 40 && Global_24529.f_6342 == 0)
		{
			_STOPWATCH_RESET(&uLocal_16, false, false);
			uLocal_18 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
		}
		else if (!func_0xBE186BC0(&uLocal_16, 5000, false))
		{
			if (MISC::GET_FRAME_COUNT() % 15 == 0)
				MISC::CLEAR_AREA(uLocal_18, 6f, false, false, false, true);
		}
	}
	else if (!func_0xBE186BC0(&uLocal_16, 5000, false))
	{
		if (MISC::GET_FRAME_COUNT() % 15 == 0)
			MISC::CLEAR_AREA(uLocal_18, 6f, false, false, false, true);
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
	return IS_BIT_SET(Global_80529, 8);
}

void func_0x639BDC70()
{
	if (iLocal_4.f_2 >= */*Global_262145*/g_sMPTunables.f_35612)
		return;

	switch (iLocal_4.f_1)
	{
		case 0:
			if (Global_2709274.f_567 && Global_2709903 != -1)
			{
				iLocal_4 = Global_2709903;
				STREAMING::REQUEST_MODEL(func_0x26530429(iLocal_4));
				iLocal_4.f_1 = iLocal_4.f_1 + 1;
			}
			break;
	
		case 1:
			STREAMING::REQUEST_MODEL(func_0x26530429(iLocal_4));
		
			if (STREAMING::HAS_MODEL_LOADED(func_0x26530429(iLocal_4)))
			{
				if (!Global_2709274.f_567)
				{
					func_0xC44972DB(iLocal_4);
					func_0x11A84E69();
					iLocal_4.f_2 = iLocal_4.f_2 + 1;
				}
			}
			break;
	}

	return;
}

void func_0x11A84E69()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4.f_3))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_4.f_3));

	iLocal_4.f_1 = 0;
	iLocal_4 = -1;
	return;
}

void func_0xC44972DB(int iParam0)
{
	Vector3 vector;

	vector = { func_0x5B2695C0(iParam0) };
	vector.f_2 = vector.f_2 - 2.5f;
	iLocal_4.f_3 = OBJECT::CREATE_OBJECT(func_0x26530429(iParam0), vector, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_4.f_3, func_0xEDA5FBD9(iParam0), 2, true);
	OBJECT::SET_OBJECT_TARGETTABLE(iLocal_4.f_3, false, 0);
	ENTITY::SET_ENTITY_PROOFS(iLocal_4.f_3, true, true, true, true, true, false, false, false);

	if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iLocal_4.f_3))
		if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_4.f_3))
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_4.f_3), false);

	ENTITY::FREEZE_ENTITY_POSITION(iLocal_4.f_3, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_4.f_3, 200);
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

void func_0x281AC778()
{
	if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false))
	{
		if (Global_2658291[PLAYER::PLAYER_ID()].f_325.f_11 != _INVALID_PLAYER_INDEX() && plLocal_3 != Global_2658291[PLAYER::PLAYER_ID()].f_325.f_11)
			plLocal_3 = Global_2658291[PLAYER::PLAYER_ID()].f_325.f_11;
	}
	else if (plLocal_3 != _INVALID_PLAYER_INDEX() && !func_0x3BED6F11(PLAYER::PLAYER_ID()) && !func_0xC2ABD0AE() && !Global_1950198.f_4247 && !func_0xF44991F9())
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			plLocal_3 = _INVALID_PLAYER_INDEX();
			return;
		}
		else
		{
			func_0x84674B(plLocal_3);
		}
	}

	return;
}

BOOL func_0x84674B(Player plParam0)
{
	BOOL num;
	int num2;

	num = 1;

	if (plParam0 != _INVALID_PLAYER_INDEX() && !func_0x9304C87C() && !(func_0xC2ABD0AE() && func_0xC70756E7(Global_1950198.f_5246)) && !(Global_1950198.f_4247 && func_0xC70756E7(Global_1950198.f_4248)))
	{
		num2 = plParam0 + 32;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				if (NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
				{
					num = 0;
				}
				else if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(Global_2673271.f_4.f_16) == num2)
				{
					if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
					{
						NETWORK::NETWORK_END_TUTORIAL_SESSION();
						num = 0;
					}
				}
			}
		}
	}
	else
	{
		plParam0 == _INVALID_PLAYER_INDEX();
		func_0x9304C87C();
		func_0xC2ABD0AE() && func_0xC70756E7(Global_1950198.f_5246);
		Global_1950198.f_4247 && func_0xC70756E7(Global_1950198.f_4248);
	}

	return num;
}

BOOL func_0xC70756E7(int iParam0)
{
	return func_0xEE599357(iParam0) == 33;
}

BOOL func_0x9304C87C()
{
	return IS_BIT_SET(Global_1950198.f_14, 10);
}

BOOL func_0xF44991F9()
{
	return IS_BIT_SET(Global_1950198.f_3, 8);
}

BOOL func_0xC2ABD0AE()
{
	return Global_1950198.f_5246 != -1;
}

BOOL func_0x3BED6F11(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2658291[plParam0].f_325, 3);

	return false;
}

void func_0xB530650E()
{
	if (func_0x928E8225(PLAYER::PLAYER_ID()))
	{
		if (!bLocal_42)
		{
			if (func_0x8DF3D75D() && MISC::ARE_STRINGS_EQUAL(&(Global_2685150.f_863), "HMwhhWMuj0eVrnz-ElDZSA") || MISC::ARE_STRINGS_EQUAL(&(Global_2685150.f_863), "4HkiMVABAUWZ3392QoS9bA") || MISC::ARE_STRINGS_EQUAL(&(Global_2685150.f_863), "Qzo6rxTfH02iLYn25aGVSw"))
			{
				func_0x6A6128A5();
				func_0x9065A07A();
				bLocal_42 = true;
			}
		}
	}
	else
	{
		bLocal_42 = false;
	}

	return;
}

void func_0x9065A07A()
{
	MISC::CLEAR_BIT(&(Global_2685150.f_2), 14);
	return;
}

void func_0x6A6128A5()
{
	MISC::SET_BIT(&Global_2685150, 7);
	return;
}

BOOL func_0x8DF3D75D()
{
	return IS_BIT_SET(Global_2685150, 5);
}

BOOL func_0x928E8225(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658291[plParam0].f_325.f_8 != -1 && Global_2658291[plParam0].f_325.f_11 != _INVALID_PLAYER_INDEX())
				return func_0xEE599357(Global_2658291[plParam0].f_325.f_8) == 5;

	return false;
}

void func_0x578C871B()
{
	int i;

	if (!func_0xAB543684())
	{
		bLocal_41 = false;
		return;
	}

	if (bLocal_41)
		return;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(/*Global_4718592*/g_FMMC_STRUCT.f_132513)))
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (/*Global_4718592*/g_FMMC_STRUCT.f_3605[i].f_38 == -4)
			/*Global_4718592*/g_FMMC_STRUCT.f_3605[i].f_38 = -1;
	}

	bLocal_41 = true;
	return;
}

void func_0x1DDB85A4()
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) == 0)
	{
		bLocal_40 = false;
		return;
	}

	if (!func_0xA607388B())
		return;

	if (bLocal_40)
		return;

	for (i = 0; i <= */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314 - 1; i = i + 1)
	{
		if (/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90320[i].f_5 == 50f)
			/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90320[i].f_5 = 49.999f;
	}

	for (i = 0; i <= */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_68411 - 1; i = i + 1)
	{
		if (/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_68415[i].f_4 == 50f)
			/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_68415[i].f_4 = 49.999f;
	}

	bLocal_40 = true;
	return;
}

BOOL func_0xA607388B()
{
	if (*/*Global_4718592*/g_FMMC_STRUCT.f_132500 == /*Global_262145*/g_sMPTunables.f_37343[0] || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == /*Global_262145*/g_sMPTunables.f_37343[1] || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == /*Global_262145*/g_sMPTunables.f_37343[2] || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == /*Global_262145*/g_sMPTunables.f_37343[3] || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == /*Global_262145*/g_sMPTunables.f_37343[4])
		return true;

	return false;
}

void func_0x215BD0B8()
{
	BOOL flag;

	flag = Global_1950198.f_5391 == 88 || Global_1950198.f_5391 == 147;

	if (!bLocal_13)
	{
		if (func_0xEE599357(Global_1950198.f_5391.f_1) == 33 && flag && !/*Global_4718592*/g_FMMC_STRUCT.f_3602)
		{
			/*Global_4718592*/g_FMMC_STRUCT.f_3602 = 1;
			bLocal_13 = true;
			_STOPWATCH_RESET(&uLocal_14, false, false);
		}
	}
	else
	{
		if (/*Global_4718592*/g_FMMC_STRUCT.f_3602 && func_0x51850598(uLocal_14, 10000, false))
		{
			/*Global_4718592*/g_FMMC_STRUCT.f_3602 = 0;
			bLocal_13 = false;
			_STOPWATCH_DESTROY(&uLocal_14);
		}
	
		if (func_0xEE599357(Global_1950198.f_5391.f_1) != 33 || !flag && /*Global_4718592*/g_FMMC_STRUCT.f_3602)
		{
			/*Global_4718592*/g_FMMC_STRUCT.f_3602 = 0;
			bLocal_13 = false;
			_STOPWATCH_DESTROY(&uLocal_14);
		}
	}

	return;
}

BOOL func_0x51850598(int iParam0, var uParam1, int iParam2, BOOL bParam3)
{
	if (!_STOPWATCH_IS_INITIALIZED(&iParam0))
		return 0;

	if (iParam2 == -1)
		return 1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
			return 1;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
		return 1;

	return 0;
}

void func_0x79F25806()
{
	if (!func_0xAB543684())
		return;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) <= 0)
		return;

	if (Global_1058075 == 78)
	{
		MISC::SET_BIT(&Global_1844819, 3);
		Global_1844819.f_2 = -1;
	}

	return;
}

void FIX_FOR_5092622()
{
	if (Global_113847 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_0xDBD936D3())
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
	return Global_1574634.f_18;
}

void FIX_FOR_3533670()
{
	if (!bLocal_9)
	{
		if (Global_1836491)
		{
			if (IS_REPEAT_OFFENDER_X_0() || IS_REPEAT_OFFENDER_X())
				/*Global_262145*/g_sMPTunables.f_20001 = 1;
			else
				/*Global_262145*/g_sMPTunables.f_20001 = 0;
		
			bLocal_9 = true;
		}
	}
	else if (!Global_1836491)
	{
		bLocal_9 = false;
	}

	return;
}

int IS_REPEAT_OFFENDER_X()
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < /*Global_262145*/g_sMPTunables.f_10805)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < /*Global_262145*/g_sMPTunables.f_10801 - 1; i = i + 1)
	{
		if (unk[i] < /*Global_262145*/g_sMPTunables.f_10805)
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

	if (num < /*Global_262145*/g_sMPTunables.f_10804)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < /*Global_262145*/g_sMPTunables.f_10800 - 1; i = i + 1)
	{
		if (unk[i] < /*Global_262145*/g_sMPTunables.f_10804)
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
			MISC::SET_BIT(&(Global_1845250[i].f_828), 1);
		}
	}

	return;
}

void func_0x484F291F()
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

Player _INVALID_PLAYER_INDEX()
{
	return -1;
}

