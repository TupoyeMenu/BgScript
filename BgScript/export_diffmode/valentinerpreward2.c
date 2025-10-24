#pragma region Local Var
	char* sLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	int iLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
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
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	int iLocal_diffmode = -1;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	var uLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	int iLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	BOOL bLocal_diffmode = 0;
	var uScriptParam_diffmode = 0;
	var uScriptParam_diffmode = 0;
#pragma endregion Local Var

void func_0x39D29571()
{
	int num;
	BOOL flag;

	sLocal_diffmode = "1.71.15";
	iLocal_diffmode = -1;
	iLocal_diffmode = -1;
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
			func_0x3D33B359();
	
		flag = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	
		if (Global_diffmode.f_diffmode)
		{
			if (flag)
			{
				func_0x2AADB392();
				FIX_FOR_3280561();
				FIX_FOR_3533670();
				FIX_FOR_5092622();
				func_0xCB14918B();
				func_0xFE6ECE6C();
				func_0xC65DAA2();
				func_0x639BDC70();
				func_0xA7D24319();
				func_0xA21B3D4D();
				func_0xA61AFFC8();
				func_0xB65866DD();
				func_0x720621F5();
				func_0xC69FD747();
				func_0xDA2428DC();
				func_0xFB849614();
				func_0xF4361BE();
				func_0x7C01FB90();
				func_0xE6095B94();
				func_0x4FC39DE8();
				func_0x49F54B86();
				func_0xEEAA8E89();
				func_0xCD428281();
				func_0x2E27DAA5();
				func_0x98CC0F83();
				func_0x3E4F60C4();
				CHILIADWAKEUP_MAINTAIN();
			}
		
			func_0x21757A7C(flag);
		}
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_0x7C91786D();
			func_0x98149D24();
			func_0x9258B57A();
			func_0x94E2F4C8();
			func_0x523B43E8();
			func_0xB533E4FE();
			func_0xE83AA9B();
		}
		else
		{
			func_0xDA10D4C2();
			func_0x69D2274F();
			func_0xDFB8A2F7();
			func_0xFD4E02DE();
			func_0x1236F3A1();
		}
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_0x1236F3A1()
{
	if (!bLocal_diffmode)
		return;

	STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_sum2_hal");
	STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_sb_hal");
	STREAMING::REMOVE_ANIM_DICT("anim@scripted@cayo@ig3_und_dj@male@");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_25-1/CP_Survival_01");
	bLocal_diffmode = false;
	return;
}

void func_0xFD4E02DE()
{
	if (bLocal_diffmode && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		bLocal_diffmode = false;
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, false);
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

void func_0xDFB8A2F7()
{
	int i;

	if (!bLocal_diffmode)
		return;

	i = 0;

	for (i = 0; i <= 79; i = i + 1)
	{
		g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode = -1;
		g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode = 0;
		g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode.f_diffmode = -1;
	}

	bLocal_diffmode = false;
	return;
}

void func_0x69D2274F()
{
	bLocal_diffmode = false;
	return;
}

void func_0xDA10D4C2()
{
	if (!bLocal_diffmode)
		return;

	bLocal_diffmode = false;
	return;
}

void func_0xE83AA9B()
{
	BOOL flag;

	if (!func_0x10443771())
		return;

	if (!IS_BIT_SET(g_FMMC_STRUCT.f_diffmode.f_diffmode, 0))
		return;

	if (bLocal_diffmode)
		return;

	flag = true;
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_sum2_hal");

	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_sum2_hal"))
		flag = false;

	STREAMING::REQUEST_ANIM_DICT("anim@scripted@cayo@ig3_und_dj@male@");

	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@scripted@cayo@ig3_und_dj@male@"))
		flag = false;

	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_sb_hal");

	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_sb_hal"))
		flag = false;

	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_25-1/CP_Survival_01", false, -1))
		AUDIO::START_AUDIO_SCENE("DLC_25-1_CP_Mixer_Scene");
	else
		flag = false;

	if (flag)
		bLocal_diffmode = true;

	return;
}

BOOL func_0x10443771()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_survival_controller")) != 0 && *g_FMMC_STRUCT.f_diffmode == 846282902)
		return true;

	return false;
}

void func_0xB533E4FE()
{
	if (!func_0xAC971DCB())
		return;

	bLocal_diffmode = true;
	return;
}

BOOL func_0xAC971DCB()
{
	if (func_0xC27F0324() || func_0x9388197B())
		return true;

	return false;
}

BOOL func_0x9388197B()
{
	return *g_FMMC_STRUCT.f_diffmode == 846282902;
}

BOOL func_0xC27F0324()
{
	if (*g_FMMC_STRUCT.f_diffmode == 193443741 || *g_FMMC_STRUCT.f_diffmode == -1655398699)
		return true;

	return false;
}

void func_0x523B43E8()
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		func_0xDA10D4C2();
		return;
	}

	if (*g_FMMC_STRUCT_ENTITIES.f_diffmode <= 0)
		return;

	if (bLocal_diffmode)
		return;

	i = 0;

	for (i = 0; i <= *g_FMMC_STRUCT_ENTITIES.f_diffmode - 1; i = i + 1)
	{
		switch (g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode)
		{
			case 0:
				g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode = 2;
				break;
		
			case 1:
				g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode = 3;
				break;
		
			case 2:
				g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode = 1;
				break;
		
			case 3:
				g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode = 0;
				break;
		
			case 4:
				g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode = 4;
				break;
		
			case 5:
				g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode = 5;
				break;
		}
	}

	bLocal_diffmode = true;
	return;
}

void func_0x94E2F4C8()
{
	Ped ped;

	if (!func_0xC27F0324())
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(ped))
		return;

	if (func_0x725AB07())
		ENTITY::SET_ENTITY_HEALTH(ped, 0, 0, 0);

	if (*g_FMMC_STRUCT.f_diffmode == 193443741)
		g_FMMC_STRUCT.f_diffmode.f_diffmode[1][1] = { 5418.98f, -5281.209f, 31.871f };

	return;
}

BOOL func_0x725AB07()
{
	Vector3 entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 4971.265f, -5599.038f, 21.581f, 4966.532f, -5596.015f, 25.92f, 4.7f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 5331.904f, -5269.143f, 31.882f, 5328.33f, -5271.978f, 35.306f, 4.9f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 4925.597f, -5246.02f, 0.662f, 4914.906f, -5230.586f, 6.162f, 7.7f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 5002.021f, -5163.803f, 1.265f, 4997.479f, -5165.987f, 5.465f, 7.2f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 4962.361f, -5105.874f, 1.315f, 4960.437f, -5110.083f, 5.315f, 6.6f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 4982.459f, -5117.539f, 0.405f, 4983.283f, -5141.973f, 6.505f, 9.6f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 5099.659f, -4607.892f, 4.984f, 5101.544f, -4600.625f, -0.016f, 11.4f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 5036.837f, -4631.759f, 2.902f, 5028.892f, -4630.369f, 24.902f, 8.251f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 5172.585f, -4673.358f, -1.544f, 5177.304f, -4651.978f, 5.156f, 6.8f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 5106.161f, -4691.227f, -0.621f, 5103.538f, -4700.86f, 5.479f, 7.6f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 5089.564f, -4682.24f, -0.292f, 5110.383f, -4687.894f, 5.808f, 11.8f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 5112.343f, -4686.252f, 0.039f, 5110.703f, -4685.817f, 5.739f, 8f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 5145.25f, -4617.14f, -0.519f, 5130.701f, -4613.415f, 4.806f, 9.1f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 5066.369f, -4589.542f, -1.172f, 5064.887f, -4593.603f, 4.328f, 8.2f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 4980.143f, -5722.522f, -4.542f, 4964.252f, -5753.576f, 24.558f, 22.4f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 4984.447f, -5212.608f, -0.797f, 5004.749f, -5197.745f, 7.302f, 19.1f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 4901.264f, -4944.955f, -2.378f, 4909.098f, -4940.388f, 3.778f, 3.6f, false, true))
		return true;

	return false;
}

void func_0x9258B57A()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) != 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller")) != 0)
	{
		bLocal_diffmode = true;
		return;
	}

	func_0xDFB8A2F7();
	return;
}

void func_0x98149D24()
{
	int num;
	int num2;

	if (func_0x2607B81(*g_FMMC_STRUCT.f_diffmode) != 4)
		return;

	num = *g_sMPTunables.f_diffmode + *g_sMPTunables.f_diffmode;
	num2 = Global_diffmode.f_diffmode.f_diffmode;

	if (num2 == num)
		_STAT_SET_PACKED_BOOL(28317, true, -1);

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
	return Global_diffmode;
}

int func_0x2607B81(int iParam0)
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_0x62114499(i))
			return i;
	}

	return -1;
}

int func_0x62114499(int iParam0)
{
	if (iParam0 != -1)
		return g_sMPTunables.f_diffmode[iParam0];

	return -1;
}

void func_0x7C91786D()
{
	int i;

	if (func_0x3650ADA8(11) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		func_0x69D2274F();
		return;
	}

	if (bLocal_diffmode)
		return;

	for (i = 0; i <= *g_FMMC_STRUCT_ENTITIES.f_diffmode - 1; i = i + 1)
	{
		g_FMMC_STRUCT_ENTITIES.f_diffmode[i].f_diffmode = 0;
	}

	bLocal_diffmode = true;
	return;
}

BOOL func_0x3650ADA8(int iParam0)
{
	return *g_FMMC_STRUCT.f_diffmode >= iParam0;
}

void func_0x21757A7C(BOOL bParam0)
{
	if (bParam0)
	{
		if (!bLocal_diffmode)
		{
			if (func_0x60405B44())
			{
				func_0x94EE10A4(&Global_diffmode);
				NETWORK::NETWORK_BAIL(51, 0, 0);
				bLocal_diffmode = true;
			}
		}
	}
	else if (bLocal_diffmode)
	{
		bLocal_diffmode = false;
	}

	return;
}

void func_0x94EE10A4(var uParam0)
{
	int i;

	*uParam0 = 0;
	uParam0->f_diffmode = 0;
	uParam0->f_diffmode = 32;
	uParam0->f_diffmode = 0;
	uParam0->f_diffmode = 1;
	uParam0->f_diffmode = 1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_diffmode), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_diffmode), "", 24);
	uParam0->f_diffmode = 0;
	uParam0->f_diffmode = 0;
	uParam0->f_diffmode = 1;
	uParam0->f_diffmode = -1;
	uParam0->f_diffmode = -1;
	uParam0->f_diffmode = 1000;

	for (i = 0; i <= 63; i = i + 1)
	{
		if (i < 35)
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_diffmode[i], "", 24);
	}

	func_0x83F63FA6(&(uParam0->f_diffmode));
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

	if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_diffmode, 3000, false))
	{
		_STOPWATCH_RESET(&uLocal_diffmode, false, false);
	
		if (Global_diffmode.f_diffmode > 0)
		{
			for (i = 0; i <= Global_diffmode.f_diffmode - 1; i = i + 1)
			{
				hashKey = MISC::GET_HASH_KEY(&Global_diffmode.f_diffmode[i]);
			
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

	pStopwatch->f_diffmode = 1;
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
		MISC::SET_BIT(&Global_diffmode, 2);
	
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
	MISC::SET_BIT(&Global_diffmode, 2);

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
			Global_diffmode = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_diffmode = 1;
		}
	}

	return num;
}

int GET_MP_INT_CHARACTER_STAT(int iParam0, int iParam1)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15525)
	{
		statHash = func_0x505A9F99(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_0x48656DF7()
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_diffmode == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_0x52131E1C(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_diffmode.f_diffmode.f_diffmode >= 1 && Global_diffmode.f_diffmode.f_diffmode < 4 && func_0xC61AA4B9() && func_0x97C9EE39())
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
	uParam0->f_diffmode = 0;
	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0)
{
	return uParam0->f_diffmode;
}

void func_0x3E4F60C4()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (IS_BIT_SET(Global_diffmode.f_diffmode, 18))
	{
		if (Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode == PLAYER::PLAYER_ID())
		{
			if (!IS_BIT_SET(Global_diffmode.f_diffmode, 0))
			{
				func_0x5032D8D6(true, 88);
				bLocal_diffmode = true;
			}
		}
	}
	else if (bLocal_diffmode)
	{
		bLocal_diffmode = false;
	}

	return;
}

void func_0x5032D8D6(BOOL bParam0, int iParam1)
{
	if (IS_BIT_SET(Global_diffmode.f_diffmode.f_diffmode, 17))
		return;

	if (!func_0xE6E86512())
		if (bParam0)
			return;

	if (iParam1 == -1 || iParam1 == 177)
		return;

	if (bParam0 != IS_BIT_SET(Global_diffmode.f_diffmode, 0))
	{
		NETWORK::NETWORK_SUPPRESS_INVITE(bParam0);
	
		if (bParam0)
		{
			MISC::SET_BIT(&(Global_diffmode.f_diffmode), 0);
			Global_diffmode.f_diffmode = iParam1;
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_diffmode.f_diffmode), 0);
			Global_diffmode.f_diffmode = -1;
		}
	}

	return;
}

BOOL func_0xE6E86512()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_diffmode.f_diffmode != 0 || Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

void func_0x98CC0F83()
{
	if (Global_diffmode.f_diffmode.f_diffmode || Global_diffmode.f_diffmode.f_diffmode)
		PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_X, true);

	return;
}

void func_0x2E27DAA5()
{
	if (IS_BIT_SET(Global_diffmode.f_diffmode, 4) && !_IS_FMMC_ACTIVE())
	{
		PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE, true);
		PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_PAUSE, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	}

	return;
}

BOOL _IS_FMMC_ACTIVE()
{
	return Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode != 0;
}

void func_0xCD428281()
{
	BOOL flag;
	int i;
	Player player;
	Vehicle vehicle;
	Hash entityModel;

	flag = false;

	if (func_0x296323FE(PLAYER::PLAYER_ID()))
	{
		for (i = 0; i < 32; i = i + 1)
		{
			player = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (player == _INVALID_PLAYER_INDEX() || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) || !func_0xF65A303(player) || func_0xE39633AF(player) || func_0x9AF12B5E(player))
			{
			}
			else
			{
				vehicle = Global_diffmode.f_diffmode[player];
			
				if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehicle) || !func_0xA574C5C7(vehicle, true) || func_0xB52E673A(vehicle, true) || NETWORK::NETWORK_IS_ENTITY_CONCEALED(vehicle) || NETWORK::NETWORK_IS_ENTITY_FADING(vehicle) || !ENTITY::IS_ENTITY_VISIBLE(vehicle) || ENTITY::GET_ENTITY_ALPHA(vehicle) != 255)
				{
				}
				else if (!func_0x23FD5308(vehicle))
				{
				}
				else
				{
					entityModel = ENTITY::GET_ENTITY_MODEL(vehicle);
				
					if (entityModel == joaat("elegy") || entityModel == joaat("banshee2"))
					{
						flag = true;
						break;
					}
				}
			}
		}
	}

	if (flag)
		if (!Global_diffmode)
			Global_diffmode = true;
	else if (Global_diffmode)
		Global_diffmode = false;

	return;
}

BOOL func_0x23FD5308(Vehicle veParam0)
{
	float num;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
	{
		num = 5f;
	
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(veParam0, false)) < num)
			return true;
	}

	return false;
}

BOOL func_0xB52E673A(Vehicle veParam0, BOOL bParam1)
{
	if (Global_diffmode)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))
				if (DECORATOR::DECOR_GET_INT(veParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
					return true;

	return false;
}

BOOL func_0xA574C5C7(Vehicle veParam0, BOOL bParam1)
{
	if (Global_diffmode)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))
				return true;

	return false;
}

BOOL func_0x9AF12B5E(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_diffmode[plParam0].f_diffmode, 9);

	return false;
}

BOOL func_0xE39633AF(Player plParam0)
{
	if (plParam0 > -1)
	{
		if (Global_diffmode[plParam0].f_diffmode > -1)
			if (func_0x1BE0B176(Global_diffmode[plParam0].f_diffmode) == 4)
				return true;
	
		if (IS_BIT_SET(Global_diffmode[plParam0].f_diffmode, 4))
			return true;
	}

	return false;
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

BOOL func_0xF65A303(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_diffmode[plParam0].f_diffmode.f_diffmode, 8);

	return false;
}

Player _INVALID_PLAYER_INDEX()
{
	return -1;
}

BOOL func_0x296323FE(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_diffmode[plParam0].f_diffmode.f_diffmode != -1)
				return func_0xEE599357(Global_diffmode[plParam0].f_diffmode.f_diffmode) == 23;

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
				if (player == Global_diffmode.f_diffmode)
					return Global_diffmode.f_diffmode;
				else if (Global_diffmode[player] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_0xEEAA8E89()
{
	if (func_0xAC971DCB())
	{
		if (!bLocal_diffmode && !Global_diffmode)
		{
			Global_diffmode = true;
			bLocal_diffmode = true;
		}
	}
	else if (bLocal_diffmode)
	{
		bLocal_diffmode = false;
	}

	return;
}

void func_0x49F54B86()
{
	if (Global_diffmode.f_diffmode > -1 || Global_diffmode != -1)
	{
		if (Global_diffmode.f_diffmode == 19 || Global_diffmode == 19)
		{
			if (passive || g_PassiveModeStored.bEnabled)
			{
				passive = 0;
				g_PassiveModeStored.bEnabled = 0;
			}
		}
	}

	return;
}

void func_0x4FC39DE8()
{
	Vehicle vehiclePedIsIn;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("cargobob5"))
		{
			if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(vehiclePedIsIn))
			{
				if (!bLocal_diffmode)
				{
					bLocal_diffmode = true;
					VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(vehiclePedIsIn, 0);
				}
			}
			else if (!bLocal_diffmode)
			{
				bLocal_diffmode = true;
			}
		}
		else if (bLocal_diffmode)
		{
			bLocal_diffmode = false;
		}
	}
	else if (bLocal_diffmode)
	{
		bLocal_diffmode = false;
	}

	return;
}

void func_0xE6095B94()
{
	int i;
	int j;

	if (!func_0x1BE08D57(PLAYER::PLAYER_ID()))
		return;

	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1559.4f, 381.29f, -50.18f, 0.5f, 0.5f, 1f, false, true, 0))
	{
		if (!bLocal_diffmode)
		{
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_PAUSE_MENU_ACTIVE() || IS_BIT_SET(session, 7) || IS_BIT_SET(session, 8) || IS_BIT_SET(session, 4) || IS_BIT_SET(session, 1) || _IS_FMMC_ACTIVE() || IS_BIT_SET(Global_diffmode.f_diffmode, 5))
			{
				MISC::SET_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 9);
				bLocal_diffmode = true;
			
				for (i = 0; i < 12; i = i + 1)
				{
					Global_diffmode.f_diffmode[i] = 1;
				}
			}
		}
	}
	else if (bLocal_diffmode)
	{
		if (!IS_BIT_SET(session, 7) && !IS_BIT_SET(session, 8) && !IS_BIT_SET(session, 4) && !IS_BIT_SET(session, 1) && !_IS_FMMC_ACTIVE() && !IS_BIT_SET(Global_diffmode.f_diffmode, 5))
		{
			bLocal_diffmode = false;
			MISC::CLEAR_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 9);
		
			for (j = 0; j < 12; j = j + 1)
			{
				Global_diffmode.f_diffmode[j] = 0;
			}
		}
	}

	return;
}

BOOL func_0x1BE08D57(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_diffmode[plParam0].f_diffmode.f_diffmode != -1 && Global_diffmode[plParam0].f_diffmode.f_diffmode == plParam0)
				return func_0xEE599357(Global_diffmode[plParam0].f_diffmode.f_diffmode) == 20;

	return false;
}

void func_0x7C01FB90()
{
	if (func_0x1F743529(true) || HUD::IS_WARNING_MESSAGE_ACTIVE())
		_STOPWATCH_RESET(&(Global_diffmode.f_diffmode.f_diffmode), false, false);

	return;
}

BOOL func_0x1F743529(BOOL bParam0)
{
	if (bParam0)
		return Global_diffmode.f_diffmode && Global_diffmode.f_diffmode == 4;

	return Global_diffmode.f_diffmode;
}

void func_0xF4361BE()
{
	if (IS_BIT_SET(Global_diffmode.f_diffmode, 5))
		MISC::SET_BIT(&(Global_diffmode.f_diffmode), 1);
	else
		MISC::CLEAR_BIT(&(Global_diffmode.f_diffmode), 1);

	return;
}

void func_0xFB849614()
{
	if (bLocal_diffmode)
		return;

	if (!func_0xDBD936D3() || !_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		return;

	if (GET_MP_INT_CHARACTER_STAT(10874, -1) > 5 && !func_0x2A5561CE(5, true))
	{
		func_0x6C8BFBBD(5, true);
	
		if (!func_0x26A98E05(PLAYER::PLAYER_ID()))
		{
			func_0xA44E1C87(true);
			func_0xCE87D4C(true);
		}
	
		if (!func_0x23DFA9E0(PLAYER::PLAYER_ID()))
		{
			func_0xCCDAE1BD(true);
			func_0x66B48161(true);
		}
	}

	bLocal_diffmode = true;
	return;
}

void func_0x66B48161(BOOL bParam0)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 10))
			MISC::SET_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 10);
	else if (IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 10))
		MISC::CLEAR_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 10);

	return;
}

void func_0xCCDAE1BD(BOOL bParam0)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 8))
			MISC::SET_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 8);
	else if (IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 8))
		MISC::CLEAR_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 8);

	return;
}

BOOL func_0x23DFA9E0(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_diffmode[plParam0].f_diffmode.f_diffmode, 6);

	return false;
}

void func_0xCE87D4C(BOOL bParam0)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 31))
			MISC::SET_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 31);
	else if (IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 31))
		MISC::CLEAR_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 31);

	return;
}

void func_0xA44E1C87(BOOL bParam0)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 26))
			MISC::SET_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 26);
	else if (IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode, 26))
		MISC::CLEAR_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode), 26);

	return;
}

BOOL func_0x26A98E05(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_diffmode[plParam0].f_diffmode.f_diffmode, 0);

	return false;
}

void func_0x6C8BFBBD(int iParam0, BOOL bParam1)
{
	int address;

	address = GET_MP_INT_CHARACTER_STAT(12462, -1);

	if (bParam1)
		MISC::SET_BIT(&address, func_0xFD9D1331(iParam0, true));
	else
		MISC::CLEAR_BIT(&address, func_0xFD9D1331(iParam0, true));

	func_0xC00D48A9(12462, address, -1, true);
	return;
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

BOOL func_0x2A5561CE(int iParam0, BOOL bParam1)
{
	if (bParam1)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(12462, -1), func_0xFD9D1331(iParam0, true));

	return func_0xE415E602(PLAYER::PLAYER_ID(), iParam0);
}

BOOL func_0xE415E602(Player plParam0, int iParam1)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_diffmode[plParam0].f_diffmode, func_0xFD9D1331(iParam1, true));

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
	return Global_diffmode.f_diffmode;
}

void func_0xDA2428DC()
{
	if (!IS_BIT_SET(Global_diffmode[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_diffmode, 22))
		if (Global_diffmode.f_diffmode[0] == 0)
			Global_diffmode.f_diffmode[0] = 244;
	else if (Global_diffmode.f_diffmode[0] != 0)
		Global_diffmode.f_diffmode[0] = 0;

	return;
}

void func_0xC69FD747()
{
	Hash hashNameForComponent;

	if (!func_0xE584E457())
		return;

	hashNameForComponent = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 1, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_BERD), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_BERD));

	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hashNameForComponent, joaat("REBREATHER"), 0) && func_0xC51351A5())
	{
		if (PED::GET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			AUDIO::SET_AUDIO_FLAG("SuppressPlayerScubaBreathing", false);
		}
	}
	else if (!PED::GET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_DIES_IN_SINKING_VEHICLE(PLAYER::PLAYER_PED_ID(), true);
		AUDIO::SET_AUDIO_FLAG("SuppressPlayerScubaBreathing", true);
	}

	return;
}

BOOL func_0xC51351A5()
{
	var entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	if (IS_BIT_SET(Global_diffmode.f_diffmode, 15) || GET_MP_INT_CHARACTER_STAT(2048, -1) == 0 || Global_diffmode || entityCoords.f_diffmode < -140f || Global_diffmode && !Global_diffmode)
		return false;

	return true;
}

BOOL func_0xE584E457()
{
	int num;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return false;

	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		return false;

	if (!func_0xDBD936D3())
		return false;

	num = (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_BERD) * 1000) + PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_BERD);

	if (iLocal_diffmode == num)
		return false;

	iLocal_diffmode = num;
	return true;
}

void func_0x720621F5()
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
		
			if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) && entityModel == 471399650 || entityModel == 1484920335 && func_0x60F4FB46(entityModel))
			{
				if (func_0x4C17DBA0())
				{
					if (!bLocal_diffmode)
						bLocal_diffmode = true;
				}
				else if (bLocal_diffmode)
				{
					if (func_0x60F4FB46(entityModel))
					{
						if (func_0xE48228D0(entityModel))
						{
							VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(vehiclePedIsIn, false, true);
							func_0x6FDFDA19(vehiclePedIsIn);
						}
					}
				
					bLocal_diffmode = false;
				}
			}
			else if (bLocal_diffmode)
			{
				bLocal_diffmode = false;
			}
		}
		else if (bLocal_diffmode)
		{
			bLocal_diffmode = false;
		}
	}
	else if (bLocal_diffmode)
	{
		bLocal_diffmode = false;
	}

	return;
}

void func_0x6FDFDA19(Vehicle veParam0)
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
		case 1484920335:
		case 471399650:
			return true;
	}

	return false;
}

BOOL func_0x4C17DBA0()
{
	return IS_BIT_SET(Global_diffmode, 8);
}

BOOL func_0x60F4FB46(Hash hParam0)
{
	if (!Global_diffmode || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	switch (hParam0)
	{
		case joaat("feltzer3"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 0);
	
		case joaat("comet5"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 1);
	
		case joaat("bati2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 2);
	
		case joaat("stingergt"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 3);
	
		case joaat("sanchez"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 4);
	
		case joaat("sanchez2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 5);
	
		case joaat("infernus"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 6);
	
		case joaat("cog55"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 7);
	
		case joaat("ninef"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 8);
	
		case joaat("ninef2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 9);
	
		case joaat("cheburek"):
		case -1466692365:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 10);
	
		case joaat("savestra"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 11);
	
		case joaat("xa21"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 12);
	
		case joaat("s80"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 13);
	
		case joaat("double"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 14);
	
		case joaat("buffalo2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 15);
	
		case joaat("ztype"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 16);
	
		case joaat("cog552"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 17);
	
		case joaat("baller5"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 18);
	
		case joaat("bati"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 19);
	
		case -1233767450:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 20);
	
		case 1737348074:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 21);
	
		case joaat("weevil2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 22);
	
		case joaat("zentorno"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 23);
	
		case joaat("jester4"):
		case joaat("driftjester"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 24);
	
		case joaat("le7b"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 25);
	
		case joaat("dukes2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 26);
	
		case -1249788006:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 27);
	
		case -1933242328:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 28);
	
		case joaat("caracara2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 29);
	
		case joaat("comet7"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 30);
	
		case joaat("futo2"):
		case joaat("driftfuto"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 0);
	
		case joaat("manchez2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 1);
	
		case joaat("zombieb"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 2);
	
		case joaat("shotaro"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 3);
	
		case -223461503:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 4);
	
		case joaat("Police5"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 5);
	
		case 1249425552:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 6);
	
		case 1452003510:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 7);
	
		case joaat("rumpo3"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 8);
	
		case -361348193:
		case joaat("gauntlet4"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 9);
	
		case joaat("comet6"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 10);
	
		case joaat("krieger"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 11);
	
		case joaat("vigero2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 12);
	
		case -1948949064:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 13);
	
		case -1321131184:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 14);
	
		case 2042703219:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 15);
	
		case 1891140410:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 16);
	
		case joaat("zorrusso"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 17);
	
		case joaat("tigon"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 18);
	
		case joaat("cyclone"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 19);
	
		case joaat("neo"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 20);
	
		case joaat("locust"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 21);
	
		case 1484920335:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 22);
	
		case 457814204:
		case 1992041063:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 23);
	
		case joaat("jb7002"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 24);
	
		case 127317925:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 25);
	
		case joaat("URANUS"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 26);
	
		case -973016778:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 27);
	
		case -660007725:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 28);
	
		case 471399650:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 29);
	
		case joaat("hellion"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 0);
	
		case joaat("schafter4"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 1);
	
		case joaat("schafter6"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 2);
	
		case joaat("xls2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 3);
	
		case joaat("raiden"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 4);
	
		case joaat("akuma"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 5);
	
		case joaat("sheava"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 6);
	
		case joaat("paragon"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 7);
	
		case joaat("viseris"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 8);
	
		case joaat("imorgon"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 9);
	
		case joaat("pfister811"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 10);
	
		case joaat("comet2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 11);
	
		case joaat("torero"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 12);
	
		case joaat("tyrus"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 13);
	
		case joaat("hakuchou"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 14);
	
		case joaat("sc1"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 15);
	
		case joaat("stanier"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 16);
	
		case joaat("zion3"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 17);
	
		case joaat("cognoscenti2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 18);
	
		case joaat("deviant"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 19);
	
		case joaat("contender"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 20);
	
		case joaat("revolter"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 21);
	
		case joaat("gp1"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 22);
	
		case joaat("hermes"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 23);
	
		case joaat("swinger"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 24);
	
		case joaat("police4"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 25);
	
		case -773802025:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 26);
	
		case -1628000569:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 27);
	
		case joaat("jugular"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 28);
	
		case joaat("tenf"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 29);
	
		case joaat("tenf2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 30);
	
		case joaat("baller6"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 0);
	
		case joaat("deveste"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 1);
	
		case joaat("torero2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 2);
	
		case 1748565021:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 3);
	
		case joaat("hakuchou2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 4);
	
		case joaat("calico"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 5);
	
		case joaat("dominator8"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 6);
	
		case joaat("dominator7"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 7);
	
		case joaat("euros"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 8);
	
		case joaat("vstr"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 9);
	
		case joaat("dominator"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 10);
	
		case joaat("reever"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 11);
	
		case joaat("remus"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 12);
	
		case -178442374:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 13);
	
		case joaat("dubsta3"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 14);
	
		case joaat("shinobi"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 15);
	
		case joaat("kuruma"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 16);
	
		case joaat("cognoscenti"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 17);
	
		case joaat("xls"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 18);
	
		case 554408685:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 19);
	
		case 1966698497:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 20);
	
		case -1508420500:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 21);
	
		case joaat("POLICEB2"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 22);
	
		case joaat("Minimus"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 23);
	
		case -1585673997:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 24);
	
		case 691148275:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 25);
	
		case -1982433631:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 26);
	
		case 687627128:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 27);
	
		case 1761301369:
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 28);
	
		case -401558446:
		case joaat("HARDY"):
			return IS_BIT_SET(*g_sMPTunables.f_diffmode, 29);
	
		default:
		
	}

	return false;
}

void func_0xB65866DD()
{
	MISC::CLEAR_BIT(&(Global_diffmode.f_diffmode), 3);
	return;
}

void func_0xA61AFFC8()
{
	if (IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode.f_diffmode, 17))
		if (!Global_diffmode.f_diffmode)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_rc_vehicle")) == 0 && !IS_BIT_SET(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode.f_diffmode, 16))
				MISC::CLEAR_BIT(&(Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode.f_diffmode), 17);

	return;
}

void func_0xA21B3D4D()
{
	BOOL flag;
	int randomIntInRange;

	if (Global_diffmode.f_diffmode.f_diffmode >= 6)
		flag = true;

	if (flag)
	{
		randomIntInRange = -1;
	
		while (randomIntInRange == -1)
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		
			if (randomIntInRange == _STAT_GET_PACKED_INT(24956, -1))
				randomIntInRange = -1;
		}
	
		Global_diffmode.f_diffmode.f_diffmode = randomIntInRange;
	}

	return;
}

int _STAT_GET_PACKED_INT(int iParam0, int iParam1)
{
	if (iParam1 == -1)
		iParam1 = func_0x47FF56D2();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

void func_0xA7D24319()
{
	int flags;
	Vector3 entityCoords;
	var unk3;

	if (bLocal_diffmode)
		return;

	if (func_0x5726FF74(PLAYER::PLAYER_ID()) != 0)
		return;

	if (Global_diffmode.f_diffmode < 6)
		return;

	flags = 542758;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(bLocal_diffmode.f_diffmode))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		bLocal_diffmode.f_diffmode = VEHICLE::GET_CLOSEST_VEHICLE(entityCoords, 1000f, joaat("cargoplane"), flags);
		return;
	}

	bLocal_diffmode.f_diffmode = VEHICLE::GET_PED_IN_VEHICLE_SEAT(bLocal_diffmode.f_diffmode, -1, false);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(bLocal_diffmode.f_diffmode) && func_0x810EAC91(bLocal_diffmode.f_diffmode) && !PED::IS_PED_A_PLAYER(bLocal_diffmode.f_diffmode))
	{
		unk3 = func_0xC9D82232(bLocal_diffmode.f_diffmode);
		ENTITY::DELETE_ENTITY(&unk3);
	}

	if (!func_0x810EAC91(bLocal_diffmode.f_diffmode))
		return;

	unk3 = func_0xC9D82232(bLocal_diffmode.f_diffmode);
	ENTITY::DELETE_ENTITY(&unk3);
	bLocal_diffmode = true;
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

int func_0x48014DA(Player plParam0)
{
	if (func_0x3654624B(plParam0, false))
		return Global_diffmode[plParam0].f_diffmode.f_diffmode;

	return -1;
}

BOOL func_0x3654624B(Player plParam0, BOOL bParam1)
{
	if (func_0x6A46C9B4(plParam0))
		if (Global_diffmode[plParam0].f_diffmode.f_diffmode != -1 || bParam1 && Global_diffmode[plParam0].f_diffmode.f_diffmode != -1)
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

int func_0x5EA8DF5A(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x3654624B(plParam0, false))
			return Global_diffmode[plParam0].f_diffmode.f_diffmode;

	return -1;
}

void func_0x639BDC70()
{
	if (iLocal_diffmode.f_diffmode >= *g_sMPTunables.f_diffmode)
		return;

	switch (iLocal_diffmode.f_diffmode)
	{
		case 0:
			if (Global_diffmode.f_diffmode && Global_diffmode != -1)
			{
				iLocal_diffmode = Global_diffmode;
				STREAMING::REQUEST_MODEL(func_0x502A0740(iLocal_diffmode));
				iLocal_diffmode.f_diffmode = iLocal_diffmode.f_diffmode + 1;
			}
			break;
	
		case 1:
			STREAMING::REQUEST_MODEL(func_0x502A0740(iLocal_diffmode));
		
			if (STREAMING::HAS_MODEL_LOADED(func_0x502A0740(iLocal_diffmode)))
			{
				if (!Global_diffmode.f_diffmode)
				{
					func_0xC44972DB(iLocal_diffmode);
					func_0x11A84E69();
					iLocal_diffmode.f_diffmode = iLocal_diffmode.f_diffmode + 1;
				}
			}
			break;
	}

	return;
}

void func_0x11A84E69()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_diffmode.f_diffmode))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_diffmode.f_diffmode));

	iLocal_diffmode.f_diffmode = 0;
	iLocal_diffmode = -1;
	return;
}

void func_0xC44972DB(int iParam0)
{
	Vector3 vector;

	vector = { func_0x5B2695C0(iParam0) };
	vector.f_diffmode = vector.f_diffmode - 2.5f;
	iLocal_diffmode.f_diffmode = OBJECT::CREATE_OBJECT(func_0x502A0740(iParam0), vector, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_diffmode.f_diffmode, func_0xEDA5FBD9(iParam0), 2, true);
	OBJECT::SET_OBJECT_TARGETTABLE(iLocal_diffmode.f_diffmode, false, 0);
	ENTITY::SET_ENTITY_PROOFS(iLocal_diffmode.f_diffmode, true, true, true, true, true, false, false, false);

	if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iLocal_diffmode.f_diffmode))
		if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_diffmode.f_diffmode))
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_diffmode.f_diffmode), false);

	ENTITY::FREEZE_ENTITY_POSITION(iLocal_diffmode.f_diffmode, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_diffmode.f_diffmode, 200);
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

Hash func_0x502A0740(int iParam0)
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

void func_0xC65DAA2()
{
	Vehicle vehiclePedIsIn;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return;

	if (func_0x4C17DBA0() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn) && VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, -1321131184) && Global_diffmode.f_diffmode == 40 && Global_diffmode.f_diffmode == 0)
		{
			_STOPWATCH_RESET(&uLocal_diffmode, false, false);
			uLocal_diffmode = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
		}
		else if (!func_0xBE186BC0(&uLocal_diffmode, 5000, false))
		{
			if (MISC::GET_FRAME_COUNT() % 15 == 0)
				MISC::CLEAR_AREA(uLocal_diffmode, 6f, false, false, false, true);
		}
	}
	else if (!func_0xBE186BC0(&uLocal_diffmode, 5000, false))
	{
		if (MISC::GET_FRAME_COUNT() % 15 == 0)
			MISC::CLEAR_AREA(uLocal_diffmode, 6f, false, false, false, true);
	}

	return;
}

BOOL func_0xBE186BC0(var uParam0, int iParam1, BOOL bParam2)
{
	if (!uParam0->f_diffmode)
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

void func_0xFE6ECE6C()
{
	if (Global_diffmode.f_diffmode)
	{
		if (Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode == 174)
		{
			if (_STAT_GET_PACKED_INT(24926, -1) == 100)
			{
				func_0x4C8CAB3D(24926, 99, -1);
				bLocal_diffmode = 1;
			}
		
			if (_STAT_GET_PACKED_INT(24925, -1) == 100)
			{
				func_0x4C8CAB3D(24925, 99, -1);
				bLocal_diffmode = 1;
			}
		}
	
		if (Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode == 176)
		{
			if (_STAT_GET_PACKED_INT(24924, -1) == 100)
			{
				func_0x4C8CAB3D(24924, 99, -1);
				bLocal_diffmode = true;
			}
		
			if (_STAT_GET_PACKED_INT(24925, -1) == 100)
			{
				func_0x4C8CAB3D(24925, 99, -1);
				bLocal_diffmode = 1;
			}
		}
	
		if (Global_diffmode[PLAYER::PLAYER_ID()].f_diffmode.f_diffmode == 175)
		{
			if (_STAT_GET_PACKED_INT(24924, -1) == 100)
			{
				func_0x4C8CAB3D(24924, 99, -1);
				bLocal_diffmode = true;
			}
		
			if (_STAT_GET_PACKED_INT(24926, -1) == 100)
			{
				func_0x4C8CAB3D(24926, 99, -1);
				bLocal_diffmode = 1;
			}
		}
	}
	else if (func_0xCF99D737())
	{
		if (func_0x6DF81F4A(1))
		{
			func_0x4C8CAB3D(24924, 100, -1);
			bLocal_diffmode = false;
		}
	
		if (func_0x6DF81F4A(2))
		{
			func_0x4C8CAB3D(24926, 100, -1);
			bLocal_diffmode = false;
		}
	
		if (func_0x6DF81F4A(3))
		{
			func_0x4C8CAB3D(24925, 100, -1);
			bLocal_diffmode = false;
		}
	}

	return;
}

BOOL func_0x6DF81F4A(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return bLocal_diffmode;
	
		case 2:
			return bLocal_diffmode;
	
		case 3:
			return bLocal_diffmode;
	}

	return false;
}

BOOL func_0xCF99D737()
{
	if (bLocal_diffmode || bLocal_diffmode || bLocal_diffmode)
		return true;

	return false;
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

void func_0xCB14918B()
{
	if (!g_sMPTunables.f_diffmode)
		if (func_0x6AB0796B(PLAYER::PLAYER_ID()) && func_0x3BE2A2C8(PLAYER::PLAYER_ID()) || func_0x6AB0796B(PLAYER::PLAYER_ID()) && func_0x23DFA9E0(PLAYER::PLAYER_ID()))
			g_sMPTunables.f_diffmode = 1;
	else if (!(func_0x6AB0796B(PLAYER::PLAYER_ID()) && func_0x3BE2A2C8(PLAYER::PLAYER_ID())) && !(func_0x6AB0796B(PLAYER::PLAYER_ID()) && func_0x23DFA9E0(PLAYER::PLAYER_ID())))
		g_sMPTunables.f_diffmode = 0;

	return;
}

BOOL func_0x23DFA9E0(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_diffmode[plParam0].f_diffmode.f_diffmode, 6);

	return false;
}

BOOL func_0x6AB0796B(Player plParam0)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (func_0x3B8D0381(plParam0) && Global_diffmode[plParam0].f_diffmode.f_diffmode == plParam0)
		return true;

	return false;
}

BOOL func_0x3B8D0381(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_diffmode[plParam0].f_diffmode.f_diffmode != -1)
				return func_0xEE599357(Global_diffmode[plParam0].f_diffmode.f_diffmode) == 9;

	return false;
}

BOOL func_0x3BE2A2C8(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_diffmode[plParam0].f_diffmode.f_diffmode, 16);

	return false;
}

BOOL func_0x6AB0796B(Player plParam0)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (func_0x6456149A(plParam0) && Global_diffmode[plParam0].f_diffmode.f_diffmode == plParam0)
		return true;

	return false;
}

BOOL func_0x6456149A(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_diffmode[plParam0].f_diffmode.f_diffmode != -1)
				return func_0xEE599357(Global_diffmode[plParam0].f_diffmode.f_diffmode) == 7;

	return false;
}

void FIX_FOR_5092622()
{
	if (Global_diffmode && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_0xDBD936D3())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

void FIX_FOR_3533670()
{
	if (!bLocal_diffmode)
	{
		if (Global_diffmode)
		{
			if (IS_REPEAT_OFFENDER_X_0() || IS_REPEAT_OFFENDER_X())
				g_sMPTunables.f_diffmode = 1;
			else
				g_sMPTunables.f_diffmode = 0;
		
			bLocal_diffmode = true;
		}
	}
	else if (!Global_diffmode)
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
			MISC::SET_BIT(&(Global_diffmode[i].f_diffmode), 1);
		}
	}

	return;
}

void func_0x2AADB392()
{
	if (func_0x5EA8DF5A(PLAYER::PLAYER_ID()) == 361 && CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_0x9A91EAD3();
		func_0xA833E89D();
	}
	else
	{
		bLocal_diffmode = false;
		bLocal_diffmode = false;
	}

	return;
}

void func_0xA833E89D()
{
	Ped entityIndexOfCutsceneEntity;
	Vehicle vehicleIndexFromEntityIndex;
	int num;

	if (bLocal_diffmode)
		return;

	entityIndexOfCutsceneEntity = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Madrazos_Baller", 0);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityIndexOfCutsceneEntity))
		return;

	vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entityIndexOfCutsceneEntity);
	VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(vehicleIndexFromEntityIndex, &num);

	if (num == 1)
		VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(vehicleIndexFromEntityIndex, 99);
	else if (num == 99)
		bLocal_diffmode = true;

	return;
}

void func_0x9A91EAD3()
{
	Entity entityIndexOfCutsceneEntity;
	Entity entityIndexOfCutsceneEntity2;

	if (bLocal_diffmode)
		return;

	entityIndexOfCutsceneEntity = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Veh_Light", 0);
	entityIndexOfCutsceneEntity2 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("MP_1", 0);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityIndexOfCutsceneEntity))
		return;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityIndexOfCutsceneEntity2))
		return;

	if (ENTITY::IS_ENTITY_VISIBLE(entityIndexOfCutsceneEntity))
	{
		ENTITY::SET_ENTITY_VISIBLE(entityIndexOfCutsceneEntity, false, false);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(entityIndexOfCutsceneEntity2, -1229327143))
	{
		ENTITY::SET_ENTITY_VISIBLE(entityIndexOfCutsceneEntity, true, false);
		bLocal_diffmode = true;
	}

	return;
}

void func_0x3D33B359()
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

