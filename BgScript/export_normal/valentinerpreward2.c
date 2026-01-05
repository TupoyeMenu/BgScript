#pragma region Local Var
	char* sLocal_0 = 0;
	BOOL bLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	BOOL bLocal_5 = 0;
	Player plLocal_6 = 0;
	int iLocal_7 = -1;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	BOOL bLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	BOOL bLocal_15 = 0;
	BOOL bLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	BOOL bLocal_24 = 0;
	Object obLocal_25 = 0;
	Object obLocal_26 = 0;
	BOOL bLocal_27 = 0;
	BOOL bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	BOOL bLocal_43 = 0;
	BOOL bLocal_44 = 0;
	BOOL bLocal_45 = 0;
	BOOL bLocal_46 = 0;
	BOOL bLocal_47 = 0;
	BOOL bLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	BOOL bLocal_52 = 0;
	Vehicle veLocal_53 = 0;
	Vehicle veLocal_54 = 0;
	Vehicle veLocal_55 = 0;
	Vehicle veLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	int iLocal_60 = 0;
	BOOL bLocal_61 = 0;
	Vehicle veLocal_62 = 0;
	int iLocal_63 = 0;
	BOOL bLocal_64 = 0;
	BOOL bLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	BOOL bLocal_68 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#pragma endregion Local Var

void func_0x7467AB9A()
{
	int num;
	BOOL flag;

	sLocal_0 = "1.72.07";
	plLocal_6 = _INVALID_PLAYER_INDEX();
	iLocal_41 = -1;
	iLocal_42 = -1;
	bLocal_48 = true;
	iLocal_49 = -1;
	iLocal_67 = 1;
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
			func_0x60F9DAD0();
	
		flag = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	
		if (Global_2694229.f_3)
		{
			if (flag)
			{
				FIX_FOR_3280561();
				FIX_FOR_3533670();
				FIX_FOR_5092622();
				func_0x79F25806();
				func_0xDED9A580();
				func_0xD6B17D14();
				func_0x281AC778();
				func_0x639BDC70();
				func_0xC65DAA2();
				func_0xA61AFFC8();
				func_0x4B3D2F1A();
				func_0xD2BCF891();
				func_0xB70590F1();
				func_0xF3775C0();
				func_0xE56E0997();
				func_0x9101CF40();
				func_0xB22BB7ED();
				func_0x71147B0D();
				func_0xB8A76119();
				func_0x369E58FD();
				func_0xEEAA8E89();
				func_0x85CB41F7();
				func_0xF1D13D85();
				func_0x21CD1533();
				func_0xA5B616AF();
				func_0xAD7A4F2E();
				func_0xE90AB120();
				func_0x20E02622();
				func_0x1F9858CF();
				func_0x98EFE483();
				func_0x61FD846F();
				func_0xA8BF0C93();
				func_0xB9ECF789();
				func_0x2E27DAA5();
				func_0xED57783B();
				CHILIADWAKEUP_MAINTAIN();
			}
		
			func_0x1DDB85A4();
			func_0x578C871B();
			func_0x7D91EC04();
			func_0x86F0C471();
			func_0x752FF3F9();
			func_0xE4017DE5();
			func_0x21757A7C(flag);
			func_0xE2974991();
		}
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_0xE2974991()
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) <= 0)
	{
		bLocal_46 = false;
		return;
	}

	if (*/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314 <= 0)
		return;

	if (bLocal_46)
		return;

	for (i = 0; i <= */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314 - 1; i = i + 1)
	{
		/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90320[i].f_744 = 0;
	}

	bLocal_46 = true;
	return;
}

void func_0x21757A7C(BOOL bParam0)
{
	if (bParam0)
	{
		if (!bLocal_15)
		{
			if (func_0x60405B44())
			{
				func_0x4AE500E7(&Global_1048576);
				NETWORK::NETWORK_BAIL(51, 0, 0);
				bLocal_15 = true;
			}
		}
	}
	else if (bLocal_15)
	{
		bLocal_15 = false;
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

	if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_13, 3000, false))
	{
		_STOPWATCH_RESET(&uLocal_13, false, false);
	
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
		case -370319006:
		case -1633460737:
		case 1981504962:
		case -1381896991:
		case 50444107:
		case 827236257:
		case -666476108:
		case 240635129:
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

void func_0xE4017DE5()
{
	Ped ped;
	BOOL toggle;

	if (!func_0xAB543684())
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped) || PED::IS_PED_INJURED(ped))
		return;

	toggle = true;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) > 0)
		toggle = !Global_1575065;

	if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()) != toggle)
		ENTITY::SET_ENTITY_INVINCIBLE(ped, toggle, 0);

	return;
}

BOOL func_0xAB543684()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2136380241) > 0;
}

void func_0x752FF3F9()
{
	if (!func_0xAB543684())
		return;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) == 0)
	{
		bLocal_57 = false;
		return;
	}

	if (bLocal_57)
		return;

	if (/*Global_4718592*/g_FMMC_STRUCT.f_3553 == -1 || /*Global_4718592*/g_FMMC_STRUCT.f_3553 > 4)
		return;

	if (/*Global_4718592*/g_FMMC_STRUCT.f_203587[/*Global_4718592*/g_FMMC_STRUCT.f_3553] > -1)
		return;

	func_0xDED4219D(joaat("WEAPON_RPG"), 10, false);
	func_0xDED4219D(joaat("WEAPON_STICKYBOMB"), 10, false);
	func_0xDED4219D(joaat("WEAPON_PISTOL"), 500, true);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), joaat("COMPONENT_AT_PI_SUPP_02"));
	func_0xDED4219D(joaat("WEAPON_ASSAULTRIFLE"), 1000, false);
	bLocal_57 = true;
	return;
}

void func_0xDED4219D(Hash hParam0, int iParam1, BOOL bParam2)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), hParam0, false))
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), hParam0, iParam1, false, bParam2);

	return;
}

void func_0x86F0C471()
{
	int i;

	if (func_0xAB543684())
	{
		bLocal_48 = true;
	
		if (iLocal_49 == -1)
			iLocal_49 = */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314;
	
		if (iLocal_49 != */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314)
		{
			if (*/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314 >= 0 && */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314 < 50 && iLocal_49 > */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314)
			{
				/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90320[*/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314].f_165.f_8 = -1;
				/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90320[*/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314].f_785 = -1;
			}
		}
	
		iLocal_49 = */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90314;
		return;
	}

	iLocal_49 = -1;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		bLocal_48 = true;
		return;
	}

	if (!bLocal_48)
		return;

	for (i = 0; i <= 49; i = i + 1)
	{
		/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90320[i].f_165.f_8 = -1;
		/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_90320[i].f_785 = -1;
	}

	bLocal_48 = false;
	return;
}

void func_0x7D91EC04()
{
	if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_smpl_interior_int")) <= 0)
	{
		if (bLocal_52)
		{
			Global_1950198.f_770 = 0;
			bLocal_52 = false;
		}
	
		return;
	}

	if (!IS_BIT_SET(/*Global_1574589*/session, 8) && !IS_BIT_SET(/*Global_1574589*/session, 7) && !IS_BIT_SET(/*Global_1574589*/session, 4) && !(func_0x63090B4B() && */*Global_4718592*/g_FMMC_STRUCT.f_133086 == 0))
		return;

	Global_1950198.f_770 = 1;
	bLocal_52 = true;
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

void func_0x578C871B()
{
	int i;

	if (!func_0xAB543684())
	{
		bLocal_45 = false;
		return;
	}

	if (bLocal_45)
		return;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(/*Global_4718592*/g_FMMC_STRUCT.f_132513)))
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (/*Global_4718592*/g_FMMC_STRUCT.f_3605[i].f_38 == -4)
		{
			/*Global_4718592*/g_FMMC_STRUCT.f_3605[i].f_38 = -1;
			bLocal_45 = true;
		}
	}

	return;
}

void func_0x1DDB85A4()
{
	int i;
	int j;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) == 0)
	{
		bLocal_44 = false;
		return;
	}

	if (!func_0xA607388B())
		return;

	if (bLocal_44)
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

	for (j = 0; j <= 3; j = j + 1)
	{
		if (/*Global_4718592*/g_FMMC_STRUCT.f_3605[j].f_38 == -4)
			/*Global_4718592*/g_FMMC_STRUCT.f_3605[j].f_38 = -1;
	}

	bLocal_44 = true;
	return;
}

BOOL func_0xA607388B()
{
	if (*/*Global_4718592*/g_FMMC_STRUCT.f_132500 == /*Global_262145*/g_sMPTunables.f_37343[0] || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == /*Global_262145*/g_sMPTunables.f_37343[1] || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == /*Global_262145*/g_sMPTunables.f_37343[2] || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == /*Global_262145*/g_sMPTunables.f_37343[3] || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == /*Global_262145*/g_sMPTunables.f_37343[4])
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

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_35))
	{
		MISC::SET_BIT(&Global_9464, 2);
	
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_35, 60000, false))
		{
			_STOPWATCH_RESET(&uLocal_35, false, false);
			_STOPWATCH_DESTROY(&uLocal_35);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_33) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_33, 1000, false))
	{
		if (iLocal_42 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_42 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_42, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_33, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_42))
				AUDIO::STOP_SOUND(iLocal_42);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_42);
			iLocal_42 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			_STOPWATCH_RESET(&uLocal_33, false, false);
			_STOPWATCH_DESTROY(&uLocal_33);
		}
	}

	if (!bLocal_27 && !func_0x48656DF7())
		return;

	bLocal_27 = true;
	MISC::SET_BIT(&Global_9464, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_26))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_26 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_26, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_26, 8000);
			num = GET_MP_INT_CHARACTER_STAT(7869, -1);
			func_0xC00D48A9(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_37 = { ENTITY::GET_ENTITY_COORDS(obLocal_26, false) };
			iLocal_40 = 0;
		}
	}
	else
	{
		CHILIADWAKEUP_ROTATE_OBJECT();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_41 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_41 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_41, "07", obLocal_26, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_28)
			{
				if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_29, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_26, false);
					_STOPWATCH_RESET(&uLocal_29, false, false);
					_STOPWATCH_DESTROY(&uLocal_29);
					_STOPWATCH_INITIALIZE(&uLocal_31, false, false);
					bLocal_28 = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_31, false, false)) / SYSTEM::TO_FLOAT(func_0x729E933());
				num3 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_29, false, false)) / SYSTEM::TO_FLOAT(CHILIADWAKEUP_GET_LERP_TIME());
				num3 = num3 * num2;
				vector = { LERP_VECTOR(uLocal_37, CHILIADWAKEUP_GET_LERP_END_COORD(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_26, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_40 = iLocal_40 + 1;
					uLocal_37 = { ENTITY::GET_ENTITY_COORDS(obLocal_26, false) };
					_STOPWATCH_RESET(&uLocal_29, false, false);
					_STOPWATCH_DESTROY(&uLocal_29);
				
					if (CHILIADWAKEUP_GET_LERP_TIME() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_26);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_41))
							AUDIO::STOP_SOUND(iLocal_41);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_41);
						iLocal_41 = -1;
						_STOPWATCH_INITIALIZE(&uLocal_33, false, false);
						_STOPWATCH_INITIALIZE(&uLocal_35, false, false);
						_STOPWATCH_RESET(&uLocal_31, false, false);
						_STOPWATCH_DESTROY(&uLocal_31);
						uLocal_37 = { 0f, 0f, 0f };
						iLocal_40 = 0;
						bLocal_27 = false;
						bLocal_28 = false;
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
	switch (iLocal_40)
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
	switch (iLocal_40)
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

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_26, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_26, entityRotation, 2, true);
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

void func_0xED57783B()
{
	int num;
	Vector3 vector;
	Vector3 vector2;
	int num2;
	BOOL flag;
	int num3;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_0x3BED6F11(Global_2673271.f_4.f_16) || !func_0xDBD936D3())
		return;

	num = func_0xEAE183ED();
	func_0x58547348(num);

	if (num != -1)
		return;

	if (!func_0x84068466())
		return;

	num2 = iLocal_67;

	if (func_0xB809D982(Global_2673271.f_4.f_16, num2))
	{
		flag = false;
		num3 = func_0x78FF4B91(num2);
		vector = { func_0x3CA28A3E(num3, -24.971f, -14.7995f, 0.0333f, 0) };
		vector2 = { func_0x3CA28A3E(num3, -23.5152f, -13.2081f, 2.4182f, 0) };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673271.f_4.f_11, vector, vector2, 4.8f, false, true))
		{
			if (!IS_BIT_SET(Global_1950198.f_5172.f_11, 0))
			{
				MISC::SET_BIT(&(Global_1950198.f_5172.f_11), 0);
				bLocal_68 = true;
			}
		
			flag = true;
		}
	
		vector = { func_0x3CA28A3E(num3, -22.4718f, -18.1247f, -0.0715f, 0) };
		vector2 = { func_0x3CA28A3E(num3, -24.2669f, -18.0151f, 2.2536f, 0) };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673271.f_4.f_11, vector, vector2, 2.2f, false, true) && func_0xAF5C86C8(Global_2673271.f_4.f_16, num2))
		{
			if (!IS_BIT_SET(Global_1950198.f_5172.f_11, 0))
			{
				MISC::SET_BIT(&(Global_1950198.f_5172.f_11), 0);
				bLocal_68 = true;
			}
		
			flag = true;
		}
	
		if (flag)
		{
			return;
		}
		else if (bLocal_68)
		{
			MISC::CLEAR_BIT(&(Global_1950198.f_5172.f_11), 0);
			bLocal_68 = false;
		}
	}

	iLocal_67 = (iLocal_67 + 1) % 4;
	return;
}

BOOL func_0xAF5C86C8(Player plParam0, int iParam1)
{
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		if (!func_0xC1205A6F(iParam1))
			return false;
	
		num = iParam1 - 1;
		return !IS_BIT_SET(Global_1882572[plParam0].f_158.f_43.f_2[num], 23);
	}

	return false;
}

BOOL func_0xC1205A6F(int iParam0)
{
	int num;

	num = iParam0;

	if (num <= 0 || num >= 4)
		return false;

	return true;
}

Vector3 func_0x3CA28A3E(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	Vector3 vector;
	float heading;

	vector = { func_0xEB184B86(iParam0, iParam4) };
	heading = func_0xE3B5C6E0(iParam0, iParam4);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, fParam1);
}

float func_0xE3B5C6E0(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 177:
			return -84.083f;
	
		case 178:
			return 17.77f;
	
		case 179:
			return -51.69f;
	}

	return 0f;
}

Vector3 func_0xEB184B86(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 177:
					return -2586.065f, 1909.995f, 166.37543f;
			
				case 178:
					return -1666.3678f, 478.9271f, 128.22156f;
			
				case 179:
					return 539.7012f, 749.08936f, 201.36165f;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 177:
					return -2568.9338f, 1920.2028f, 155.51825f;
			
				case 178:
					return -1679.8766f, 493.596f, 117.36438f;
			
				case 179:
					return 548.6964f, 766.88684f, 190.50447f;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 177:
					return -2587.4958f, 1893.193f, 155.51833f;
			
				case 178:
					return -1649.6301f, 480.9779f, 117.364456f;
			
				case 179:
					return 547.4955f, 734.136f, 190.50447f;
			}
			break;
	
		default:
			switch (iParam0)
			{
				case 177:
					return -2586.065f, 1909.995f, 166.37543f;
			
				case 178:
					return -1666.3678f, 478.9271f, 128.22156f;
			
				case 179:
					return 539.7012f, 749.08936f, 201.36165f;
			}
			break;
	}

	return 0f, 0f, 0f;
}

int func_0x78FF4B91(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 177;
	
		case 2:
			return 178;
	
		case 3:
			return 179;
	
		default:
		
	}

	return -1;
}

BOOL func_0xB809D982(Player plParam0, int iParam1)
{
	if (iParam1 > 0 && iParam1 < 4)
		if (plParam0 != _INVALID_PLAYER_INDEX())
			return IS_BIT_SET(Global_1882572[plParam0].f_158.f_43, iParam1);

	return false;
}

BOOL func_0x84068466()
{
	return _STAT_GET_PACKED_BOOL(54768, -1);
}

void func_0x58547348(int iParam0)
{
	Vector3 vector;
	Vector3 vector2;

	switch (iParam0)
	{
		case 179:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673271.f_4.f_11, 519.18304f, 714.13135f, 191.72446f, 528.8624f, 722.0759f, 194.05295f, 29.0625f, false, true))
			{
				func_0xF8C0ED23(0);
				return;
			}
		
			vector = { func_0x3CA28A3E(iParam0, -24.971f, -14.7995f, 0.0333f, 0) };
			vector2 = { func_0x3CA28A3E(iParam0, -23.5152f, -13.2081f, 1.1932f, 0) };
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673271.f_4.f_11, vector, vector2, 4.8f, false, true))
			{
				func_0xF8C0ED23(0);
				return;
			}
			break;
	
		case 178:
		case 177:
			vector = { func_0x3CA28A3E(iParam0, -24.971f, -14.7995f, 0.0333f, 0) };
			vector2 = { func_0x3CA28A3E(iParam0, -23.5152f, -13.2081f, 1.1932f, 0) };
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673271.f_4.f_11, vector, vector2, 4.8f, false, true))
			{
				func_0xF8C0ED23(0);
				return;
			}
			break;
	}

	return;
}

void func_0xF8C0ED23(int iParam0)
{
	if (!func_0x974E48B4())
	{
		Global_1950198.f_3977 = 1;
		Global_1950198.f_3978 = iParam0;
	}

	return;
}

BOOL func_0x974E48B4()
{
	return Global_1950198.f_764;
}

int func_0xEAE183ED()
{
	return Global_2658291[PLAYER::PLAYER_ID()].f_325.f_8;
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

BOOL func_0x3BED6F11(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2658291[plParam0].f_325, 3);

	return false;
}

void func_0x2E27DAA5()
{
	if (IS_BIT_SET(Global_2685150.f_3, 4) && !_IS_FMMC_ACTIVE())
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
	return Global_1845250[PLAYER::PLAYER_ID()].f_185 != 0;
}

void func_0xB9ECF789()
{
	if (Global_1950191 == 31)
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);

	return;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

void func_0xA8BF0C93()
{
	int num;

	if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false))
	{
		num = func_0xEAE183ED();
	
		if (func_0x25292AB7(num, -1))
		{
			if (bLocal_65 && IS_BIT_SET(Global_1950198.f_4, 7))
			{
				MISC::CLEAR_BIT(&(Global_1950198.f_4), 7);
				bLocal_65 = false;
			}
		}
		else if (!bLocal_65 && !IS_BIT_SET(Global_1950198.f_4, 7))
		{
			MISC::SET_BIT(&(Global_1950198.f_4), 7);
			bLocal_65 = true;
		}
	}
	else if (bLocal_65 && IS_BIT_SET(Global_1950198.f_4, 7))
	{
		MISC::CLEAR_BIT(&(Global_1950198.f_4), 7);
		bLocal_65 = false;
	}

	return;
}

BOOL func_0x25292AB7(int iParam0, int iParam1)
{
	Player player;
	BOOL flag;
	int num;

	if (Global_1950198.f_751 == 0)
		return true;

	player = Global_2658291[PLAYER::PLAYER_ID()].f_325.f_11;
	flag = false;
	num = -1;

	if (player != _INVALID_PLAYER_INDEX())
	{
		num = func_0x5EA8DF5A(player);
	
		if (num != -1)
			flag = true;
	}

	if (IS_BIT_SET(Global_1950198.f_751, 31))
	{
		if (!func_0xB809D982(PLAYER::PLAYER_ID(), func_0x5163992(iParam0)))
			return true;
	
		if (flag)
			return func_0xE40D6326(player);
	}
	else
	{
		if (!_NETWORK_IS_PLAYER_VALID(player, false, true))
			return true;
	
		if (!func_0xB809D982(player, func_0x5163992(iParam0)))
			return true;
	
		if (flag)
			return func_0xE40D6326(player);
	}

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
	return IS_BIT_SET(Global_1892653[plParam0].f_10.f_4, iParam1);
}

int func_0x5163992(int iParam0)
{
	switch (iParam0)
	{
		case 177:
			return 1;
	
		case 178:
			return 2;
	
		case 179:
			return 3;
	
		default:
		
	}

	return 0;
}

int func_0x5EA8DF5A(Player plParam0)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0x3654624B(plParam0, false))
			return Global_1892653[plParam0].f_10.f_34;

	return -1;
}

BOOL func_0x3654624B(Player plParam0, BOOL bParam1)
{
	if (func_0x6A46C9B4(plParam0))
		if (Global_1892653[plParam0].f_10.f_34 != -1 || bParam1 && Global_1892653[plParam0].f_10.f_33 != -1)
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

void func_0x61FD846F()
{
	if (func_0x5EA8DF5A(PLAYER::PLAYER_ID()) == 309 && func_0xC22B942A(PLAYER::PLAYER_PED_ID(), func_0x6288DC5(177, 0), true) < 130f)
	{
		if (!bLocal_64)
		{
			ENTITY::CREATE_MODEL_HIDE(func_0x6288DC5(177, 0), 5f, joaat("prop_lrggate_01c_r"), false);
			ENTITY::CREATE_MODEL_HIDE(func_0x6288DC5(177, 1), 5f, joaat("prop_lrggate_01c_l"), false);
			bLocal_64 = true;
		}
	}
	else if (bLocal_64)
	{
		ENTITY::REMOVE_MODEL_HIDE(func_0x6288DC5(177, 0), 5f, joaat("prop_lrggate_01c_r"), false);
		ENTITY::REMOVE_MODEL_HIDE(func_0x6288DC5(177, 1), 5f, joaat("prop_lrggate_01c_l"), false);
		bLocal_64 = false;
	}

	return;
}

float func_0xC22B942A(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4)
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

Vector3 func_0x6288DC5(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 178:
			switch (iParam1)
			{
				case 0:
					return -1693.4988f, 486.2354f, 129.2232f;
			
				case 1:
					return -1688.2344f, 487.7502f, 129.2232f;
			
				default:
					break;
			}
			break;
	
		case 177:
			switch (iParam1)
			{
				case 0:
					return -2556.654f, 1915.729f, 169.076f;
			
				case 1:
					return -2559.187f, 1910.86f, 169.076f;
			
				default:
					break;
			}
			break;
	
		case 179:
			switch (iParam1)
			{
				case 0:
					return 536.9908f, 777.0703f, 202.3633f;
			
				case 1:
					return 540.3844f, 772.7703f, 202.3633f;
			
				default:
					break;
			}
			break;
	}

	return func_0xA9B5EBA8();
}

Vector3 func_0xA9B5EBA8()
{
	return 0f, 0f, 0f;
}

void func_0x98EFE483()
{
	int num;
	Vector3 vector;
	float heading;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_0xA0EF6C96(Global_2673271.f_4.f_16))
		return;

	num = func_0xEAE183ED();
	vector = { func_0xEB184B86(num, 0) };
	heading = func_0xE3B5C6E0(num, 0);
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, func_0xB5B801D1(iLocal_63)) };

	if (func_0xEF03168F(iLocal_63, func_0xB59E25E2(Global_2673271.f_4.f_16)) && MISC::ABSF(offsetFromCoordAndHeadingInWorldCoords.f_2 - Global_2673271.f_4.f_11.f_2) <= 1.25f)
	{
		if (iLocal_63 != 12)
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(Global_2673271.f_4.f_15) && SYSTEM::VDIST2(Global_2673271.f_4.f_11, offsetFromCoordAndHeadingInWorldCoords) < 9f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_2673271.f_4.f_15, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, func_0x97AC3813(iLocal_63, 0)), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, func_0x97AC3813(iLocal_63, 1)), 1.15f, false, true, 0))
				{
					func_0xD7EC669C(11, -1);
					return;
				}
			}
		}
	}

	iLocal_63 = iLocal_63 + 1;

	if (iLocal_63 >= 13)
		iLocal_63 = 0;

	return;
}

void func_0xD7EC669C(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1677542.f_1047), iParam0);

	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				Global_1677542.f_170[iParam1] = 1;
			break;
	}

	return;
}

Vector3 func_0x97AC3813(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2.725f, -5.9208f, 0f;
			
				case 1:
					return 3.3025f, -4.9013f, 2f;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3.367f, -12.4312f, 0f;
			
				case 1:
					return 2.26f, -12.4156f, 2f;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 23.896f, -7.045f, 0f;
			
				case 1:
					return 22.922f, -7.038f, 2.021f;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 22.767f, 8.106f, 0f;
			
				case 1:
					return 23.344f, 7.311f, 1.986f;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 12.913f, 1.267f, -3.641f;
			
				case 1:
					return 13.477f, 0.445f, -1.668f;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 18.014f, -9.543f, -3.654f;
			
				case 1:
					return 18.011f, -10.553f, -1.654f;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
					return -0.516f, 8.643f, -4.046f;
			
				case 1:
					return -1.668f, 8.643f, -2.043f;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 17.16f, 0.339f, -10.775f;
			
				case 1:
					return 17.165f, -0.731f, -8.883f;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 29.957f, -7.94f, -15.285f;
			
				case 1:
					return 30.697f, -7.433f, -13.299f;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					return 17.143f, 0.439f, -15.285f;
			
				case 1:
					return 17.113f, -0.724f, -13.265f;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 36.33f, 3.457f, -3.653f;
			
				case 1:
					return 36.837f, 2.729f, -1.668f;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					return 29.689f, -7.797f, 0f;
			
				case 1:
					return 31.462f, -10.351f, 2.02f;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 1.229f, 7.699f, -4.054f;
			
				case 1:
					return 1.212f, 6.619f, -2.065f;
			
				default:
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_0xEF03168F(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case -1071930051:
					return true;
			
				default:
				
			}
		
			return false;
	
		case 7:
			switch (iParam1)
			{
				case 346703605:
					return true;
			
				case 1983507683:
					return true;
			
				default:
				
			}
		
			return false;
	}

	if (iParam1 == 0)
		return false;

	return true;
}

int func_0xB59E25E2(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1882572[plParam0].f_158.f_43.f_6;

	return 0;
}

Vector3 func_0xB5B801D1(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3.1411f, -5.1791f, 0f;
	
		case 1:
			return 2.6011f, -12.3328f, 0f;
	
		case 3:
			return 23.5864f, -7.0954f, 0f;
	
		case 4:
			return 22.9631f, 7.8564f, 0f;
	
		case 5:
			return 13.544f, 0.444f, -1.665f;
	
		case 6:
			return 18.006f, -9.862f, -3.654f;
	
		case 7:
			return -0.731f, 8.719f, -4.054f;
	
		case 8:
			return 17.169f, 0.339f, -10.781f;
	
		case 9:
			return 30.059f, -8.102f, -15.285f;
	
		case 10:
			return 17.169f, 0.339f, -15.282f;
	
		case 11:
			return 29.962f, -9.431f, 1.463f;
	
		case 2:
			return 36.355f, 3.438f, -2.125f;
	
		case 12:
			return 1.229f, 7.699f, -4.054f;
	}

	return 0f, 0f, 0f;
}

BOOL func_0xA0EF6C96(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (func_0xFA5B473E(plParam0, false) && Global_2658291[plParam0].f_325.f_11 == plParam0)
			return true;

	return false;
}

void func_0x1F9858CF()
{
	Vector3 entityCoords;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (!func_0x22898702() && !func_0xAB351EE4(*/*Global_4718592*/g_FMMC_STRUCT.f_192777))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };

	if (IS_BIT_SET(*/*Global_4718592*/g_FMMC_STRUCT.f_185512, 4))
	{
		vector = { -1666.3678f, 478.9271f, 128.22156f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1647.266f, 490.222f, 129.22166f, -1654.3751f, 480.8793f, 130.4f, 0.29f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector), -1345223810);
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1670.3148f, 463.31012f, 127.92162f, -1673.2775f, 462.3141f, 129.22162f, 1.5f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector), 1774198988);
	}

	if (IS_BIT_SET(*/*Global_4718592*/g_FMMC_STRUCT.f_185512, 8))
	{
		vector2 = { 539.7012f, 749.08936f, 201.36165f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 545.75275f, 738.48254f, 202.36162f, 556.873f, 735.25415f, 203.3617f, 0.29f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector2), -1345223810);
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 523.8675f, 747.2859f, 201.4861f, 521.7375f, 749.7493f, 201.86261f, 1.5f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector2), 1774198988);
	}

	if (IS_BIT_SET(*/*Global_4718592*/g_FMMC_STRUCT.f_185512, 10))
	{
		vector3 = { -2586.065f, 1909.995f, 166.37543f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -2586.5732f, 1897.8909f, 167.37553f, -2578.9717f, 1889.0901f, 168.37553f, 0.29f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector3), -1345223810);
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1670.3148f, 463.31012f, 127.92162f, -1673.2775f, 462.3141f, 129.22162f, 1.5f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector3), 1774198988);
	}

	return;
}

BOOL func_0xAB351EE4(int iParam0)
{
	return iParam0 == 95;
}

BOOL func_0x22898702()
{
	if (*/*Global_4718592*/g_FMMC_STRUCT.f_132500 == func_0x62114499(5) || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == func_0x62114499(6) || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == func_0x62114499(7))
		return true;

	return false;
}

int func_0x62114499(int iParam0)
{
	if (iParam0 != -1)
		return /*Global_262145*/g_sMPTunables.f_37058[iParam0];

	return -1;
}

void func_0x20E02622()
{
	Vehicle vehiclePedIsIn;

	if (func_0xE248B6DA(PLAYER::PLAYER_ID()))
	{
		if (!bLocal_61)
			bLocal_61 = true;
	}
	else if (bLocal_61)
	{
		bLocal_61 = false;
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(vehiclePedIsIn);
							bLocal_61 = true;
						}
						else
						{
							ENTITY::SET_ENTITY_INVINCIBLE(vehiclePedIsIn, false, 0);
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_0xE248B6DA(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2658291[plParam0].f_325.f_7, 22);

	return false;
}

void func_0xE90AB120()
{
	if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false))
	{
		if (!IS_BIT_SET(Global_2733002.f_976, 0))
		{
			bLocal_58 = true;
			MISC::SET_BIT(&(Global_2733002.f_976), 0);
		}
	}
	else if (bLocal_58)
	{
		bLocal_58 = false;
		MISC::CLEAR_BIT(&(Global_2733002.f_976), 0);
	}

	return;
}

void func_0xAD7A4F2E()
{
	if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false) && !func_0x9AF12B5E(PLAYER::PLAYER_ID()) && Global_2731953.f_4 != -1 && Global_2731953.f_5 == 0 && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		Global_2731953.f_4 = -1;

	return;
}

BOOL func_0x9AF12B5E(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2658291[plParam0].f_203, 9);

	return false;
}

void func_0xA5B616AF()
{
	int num;
	Vector3 vector;
	float heading;

	if (MISC::GET_FRAME_COUNT() % 60 == 0)
	{
		if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false) && Global_2658291[PLAYER::PLAYER_ID()].f_325.f_11 == PLAYER::PLAYER_ID() && !func_0x3BED6F11(PLAYER::PLAYER_ID()))
		{
			if (func_0xA47F3BF(veLocal_62, true) || func_0xFF26C60A(&veLocal_62))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(veLocal_62) < 0.75f)
				{
					num = func_0x406DDACB(PLAYER::PLAYER_ID());
					vector = { func_0x3CA28A3E(num, func_0x21158019(), 0) };
					heading = func_0x90A6BEA8(num, func_0x22FB54B8(), 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(veLocal_62, vector, false, false, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_62, heading);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_62, 1084227584);
					VEHICLE::SET_VEHICLE_FIXED(veLocal_62);
					ENTITY::SET_ENTITY_HEALTH(veLocal_62, 1000, 0, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_62, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(veLocal_62, 1000f);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(veLocal_62, 0f);
					VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(veLocal_62, 1000f);
					VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(veLocal_62, 1000f);
				}
			}
		}
	}

	return;
}

float func_0x90A6BEA8(int iParam0, float fParam1, int iParam2)
{
	float i;

	for (i = fParam1 + func_0xE3B5C6E0(iParam0, iParam2); i < 0f; i = i + 360f)
	{
	}

	while (i >= 360f)
	{
		i = i - 360f;
	}

	return i;
}

float func_0x22FB54B8()
{
	return 89.3175f;
}

Vector3 func_0x21158019()
{
	return 24.4139f, -0.7575f, 5.7428f;
}

int func_0x406DDACB(Player plParam0)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2658291[plParam0].f_325.f_8;
		else if (Global_1575090 || Global_2635562.f_2981 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2658291[plParam0].f_325.f_8;

	return -1;
}

BOOL func_0xFF26C60A(var uParam0)
{
	int allVehicles;
	int i;

	allVehicles = VEHICLE::GET_ALL_VEHICLES(&Global_1576515);

	for (i = 0; i < allVehicles; i = i + 1)
	{
		if (func_0xA47F3BF(Global_1576515[i], true))
		{
			*uParam0 = Global_1576515[i];
			return 1;
		}
	}

	return 0;
}

BOOL func_0xA47F3BF(Vehicle veParam0, BOOL bParam1)
{
	if (Global_80280)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Mansion_Spawned_Heli"))
				return true;

	return false;
}

void func_0x21CD1533()
{
	int num;
	int num2;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("freemode")) == 0 || !func_0x129F0515())
		return;

	if (iLocal_60 == 0)
		if (Global_1572206)
			iLocal_60 = 1;
	else if (iLocal_60 == 2)
		if (!Global_1572206)
			iLocal_60 = 0;

	if (iLocal_60 != 1)
		return;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_TOTAL_EVC"));

	if (!_STAT_GET_PACKED_BOOL(54793, -1))
		if (num >= 100000000 || num < 0)
			_STAT_SET_PACKED_BOOL(54793, true, -1);

	if (!_STAT_GET_PACKED_BOOL(54794, -1))
		if (num >= 500000000 || num < 0)
			_STAT_SET_PACKED_BOOL(54794, true, -1);

	if (!_STAT_GET_PACKED_BOOL(54795, -1))
		if (num >= 1000000000 || num < 0)
			_STAT_SET_PACKED_BOOL(54795, true, -1);

	if (!_STAT_GET_PACKED_BOOL(54815, -1))
	{
		if (func_0x37BA4DA(Global_2673271.f_4.f_16, false))
			num2 = num2 + 1;
	
		if (func_0xC0138E59(true))
			num2 = num2 + 1;
	
		if (func_0x15F41A9(true))
			num2 = num2 + 1;
	
		if (func_0x65D44E93(true, true))
			num2 = num2 + 1;
	
		if (func_0xF7BDB917(true))
			num2 = num2 + 1;
	
		if (func_0xCB9D5B95())
			num2 = num2 + 1;
	
		if (func_0x45A12DE4(true))
			num2 = num2 + 1;
	
		if (func_0x9C3FCDF3(true))
			num2 = num2 + 1;
	
		if (func_0xC5BFFB24())
			num2 = num2 + 1;
	
		if (func_0xAB6A9189())
			num2 = num2 + 1;
	
		if (_STAT_GET_PACKED_BOOL(42015, -1) && _STAT_GET_PACKED_BOOL(42016, -1) && _STAT_GET_PACKED_BOOL(42017, -1) && _STAT_GET_PACKED_BOOL(42018, -1) && _STAT_GET_PACKED_BOOL(42019, -1) && _STAT_GET_PACKED_BOOL(42020, -1) && _STAT_GET_PACKED_BOOL(42021, -1) && _STAT_GET_PACKED_BOOL(42022, -1))
			num2 = num2 + 1;
	
		if (num2 >= 5)
			_STAT_SET_PACKED_BOOL(54815, true, -1);
	}

	iLocal_60 = 2;
	return;
}

BOOL func_0xAB6A9189()
{
	int num;

	num = GET_MP_INT_CHARACTER_STAT(8283, -1);

	if (IS_BIT_SET(num, 6) && IS_BIT_SET(num, 7) && IS_BIT_SET(num, 8) && IS_BIT_SET(num, 9) && IS_BIT_SET(num, 10) && IS_BIT_SET(num, 11))
		return true;

	return false;
}

BOOL func_0xC5BFFB24()
{
	return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(8977, -1), 2);
}

BOOL func_0x9C3FCDF3(BOOL bParam0)
{
	if (func_0x49EDDACA(0, bParam0) && func_0x49EDDACA(1, bParam0) && func_0x49EDDACA(2, bParam0))
		return true;

	return false;
}

BOOL func_0x49EDDACA(int iParam0, BOOL bParam1)
{
	if (bParam1)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(9905, -1), func_0x3129FCFF(iParam0));

	return func_0xC3B996D0(PLAYER::PLAYER_ID(), iParam0);
}

BOOL func_0xC3B996D0(Player plParam0, int iParam1)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1983167[plParam0].f_27, func_0x3129FCFF(iParam1));

	return false;
}

int func_0x3129FCFF(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 16;
	
		case 2:
			return 17;
	
		default:
		
	}

	return -1;
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
		return IS_BIT_SET(Global_1983167[plParam0].f_27, 2);

	return false;
}

BOOL func_0xCB9D5B95()
{
	return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(10394, -1), 6);
}

BOOL func_0xF7BDB917(BOOL bParam0)
{
	if (bParam0)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(12462, -1), 26);

	return func_0x45B60CFD(PLAYER::PLAYER_ID());
}

BOOL func_0x45B60CFD(Player plParam0)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1983167[plParam0].f_59, 26);

	return false;
}

BOOL func_0x65D44E93(BOOL bParam0, BOOL bParam1)
{
	if (bParam1)
		if (bParam0)
			return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(11950, -1), 12);
		else
			return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(11950, -1), 13);

	return func_0xE0C52CA2(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_0xE0C52CA2(Player plParam0, BOOL bParam1)
{
	if (func_0x6A46C9B4(plParam0))
		if (bParam1)
			return IS_BIT_SET(Global_1983167[plParam0].f_62.f_1, 12);
		else
			return IS_BIT_SET(Global_1983167[plParam0].f_62.f_1, 13);

	return false;
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
		return IS_BIT_SET(Global_1983167[plParam0].f_73, 12);

	return false;
}

BOOL func_0xC0138E59(BOOL bParam0)
{
	if (bParam0)
		return IS_BIT_SET(GET_MP_INT_CHARACTER_STAT(12444, -1), 15);

	return func_0xCD4F156D(PLAYER::PLAYER_ID());
}

BOOL func_0xCD4F156D(Player plParam0)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1983167[plParam0].f_121, 15);

	return false;
}

BOOL func_0x37BA4DA(Player plParam0, BOOL bParam1)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (i < 5 || bParam1)
			if (!func_0xAFD3AE3B(plParam0, i))
				return false;
	}

	return true;
}

BOOL func_0xAFD3AE3B(Player plParam0, int iParam1)
{
	if (func_0x6A46C9B4(plParam0))
	{
		switch (iParam1)
		{
			case 0:
				return IS_BIT_SET(Global_1983167[plParam0].f_145, 1);
		
			case 1:
				return IS_BIT_SET(Global_1983167[plParam0].f_145, 2);
		
			case 2:
				return IS_BIT_SET(Global_1983167[plParam0].f_145, 3);
		
			case 3:
				return IS_BIT_SET(Global_1983167[plParam0].f_145, 4);
		
			case 4:
				return IS_BIT_SET(Global_1983167[plParam0].f_145, 5);
		
			case 5:
			case 6:
			case 7:
				return IS_BIT_SET(Global_1983167[plParam0].f_145, 6);
		
			default:
			
		}
	}

	return false;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2)
{
	if (iParam2 == -1)
		iParam2 = func_0x47FF56D2();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
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

BOOL func_0x129F0515()
{
	return func_0xD64AD64C(func_0x47FF56D2() + 1);
}

BOOL func_0xD64AD64C(int iParam0)
{
	return Global_1574538[iParam0];
}

void func_0xF1D13D85()
{
	int num;
	Interior interior;

	if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false) && func_0x5976C0FC() == 1)
	{
		if (func_0x884CC8C4(PLAYER::PLAYER_ID()))
		{
			bLocal_59 = true;
		}
		else if (bLocal_59)
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				num = func_0x406DDACB(PLAYER::PLAYER_ID());
				interior = func_0x7D33EF75(num, 1);
			
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_0x3CA28A3E(num, 8.088f, 6.713f, -4.45f, 1), func_0x3CA28A3E(num, 16.337f, 6.94f, 4.9f, 1), 4f, false, true, 0))
					INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), interior, -1685080178);
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_0x3CA28A3E(num, 2.619f, -28.674f, 0f, 1), func_0x3CA28A3E(num, 1.85f, 36.371f, 4.5f, 1), 28f, false, true, 0))
					INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), interior, -1333592204);
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_0x3CA28A3E(num, 2.619f, -28.674f, -4.5f, 1), func_0x3CA28A3E(num, 1.85f, 36.371f, 0f, 1), 28f, false, true, 0))
					INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), interior, -1108713331);
			}
		
			bLocal_59 = false;
		}
	}
	else
	{
		bLocal_59 = false;
	}

	return;
}

Interior func_0x7D33EF75(int iParam0, int iParam1)
{
	var interiorType;
	Vector3 vector;
	var unk18;

	func_0x9C5570D9(iParam0, &interiorType, &vector, &unk18, iParam1);
	return INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vector, &interiorType);
}

void func_0x9C5570D9(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4)
{
	TEXT_LABEL_ASSIGN_STRING(sParam1, func_0x9831FD0B(iParam0, iParam4), 64);
	*uParam2 = { func_0xEB184B86(iParam0, iParam4) };
	*uParam3 = func_0xE3B5C6E0(iParam0, iParam4);
	return;
}

char* func_0x9831FD0B(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "m25_2_int_mansion";
	
		case 1:
			return "m25_2_int_mansion_garage";
	
		case 2:
			return "m25_2_int_mansion_2";
	
		default:
		
	}

	return "m25_2_int_mansion_garage";
}

BOOL func_0x884CC8C4(Player plParam0)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(Global_1882572[plParam0].f_158.f_43.f_1, 2);
}

int func_0x5976C0FC()
{
	return func_0x1A54F100(PLAYER::PLAYER_ID());
}

int func_0x1A54F100(Player plParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2658291[plParam0].f_325.f_3, 28, 31);
}

void func_0x85CB41F7()
{
	int num;
	int i;
	int offset;

	if (!func_0x6A46C9B4(Global_2673271.f_4.f_16) || !func_0xC5A11BDA(Global_2673271.f_4.f_16) || !(func_0xFA5B473E(Global_2673271.f_4.f_16, true) || func_0xA6BA8EBE(212) || func_0xA6BA8EBE(213) || func_0xA6BA8EBE(214)))
		return;

	num = 0;
	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		num = func_0x7A3E8890(Global_2673271.f_4.f_16, i);
		offset = func_0x5620EEAB(func_0xA20A9EB0(num));
	
		if (offset == -1)
		{
		}
		else if (func_0xEC234B1D(Global_2673271.f_4.f_16, num) && !func_0x3B5C1BC0(Global_2673271.f_4.f_16, num))
		{
			if (!IS_BIT_SET(Global_1674229, offset))
				MISC::SET_BIT(&Global_1674229, offset);
		}
		else if (IS_BIT_SET(Global_1674229, offset))
		{
			MISC::CLEAR_BIT(&Global_1674229, offset);
		}
	}

	return;
}

BOOL func_0x3B5C1BC0(Player plParam0, int iParam1)
{
	int num;

	if (func_0xEC234B1D(plParam0, iParam1))
	{
		num = func_0x2D272D9D(plParam0, iParam1);
	
		if (Global_1845250[plParam0].f_260.f_205[num].f_4 > 0 && Global_1845250[plParam0].f_260.f_205[num].f_7)
			return true;
	}

	return false;
}

int func_0x2D272D9D(Player plParam0, int iParam1)
{
	int i;

	if (func_0x69036A4A(iParam1) && plParam0 != _INVALID_PLAYER_INDEX())
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1845250[plParam0].f_260.f_205[i] == iParam1)
				return i;
		}
	}

	return -1;
}

BOOL func_0x69036A4A(int iParam0)
{
	if (iParam0 == 33 || iParam0 == 0)
		return false;

	return true;
}

BOOL func_0xEC234B1D(Player plParam0, int iParam1)
{
	int i;

	if (func_0x69036A4A(iParam1) && plParam0 != _INVALID_PLAYER_INDEX())
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1845250[plParam0].f_260.f_205[i] == iParam1)
				return true;
		}
	}

	return false;
}

int func_0x5620EEAB(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
	
		case 1:
			return 2;
	
		case 4:
			return 3;
	
		case 2:
			return 4;
	
		case 0:
			return 5;
	
		case 5:
			return 6;
	
		case 6:
			return 7;
	
		default:
		
	}

	return -1;
}

int func_0xA20A9EB0(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
	
		case 2:
			return 1;
	
		case 3:
			return 4;
	
		case 4:
			return 2;
	
		case 5:
			return 0;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 4;
	
		case 9:
			return 2;
	
		case 10:
			return 0;
	
		case 11:
			return 3;
	
		case 12:
			return 1;
	
		case 13:
			return 4;
	
		case 14:
			return 2;
	
		case 15:
			return 0;
	
		case 16:
			return 3;
	
		case 17:
			return 1;
	
		case 18:
			return 4;
	
		case 19:
			return 2;
	
		case 20:
			return 0;
	
		case 21:
			return 5;
	
		case 22:
			return 5;
	
		case 23:
			return 5;
	
		case 24:
			return 5;
	
		case 25:
			return 5;
	
		case 26:
			return 5;
	
		case 27:
			return 5;
	
		case 28:
			return 5;
	
		case 29:
			return 5;
	
		case 30:
			return 5;
	
		case 31:
			return 5;
	
		case 32:
			return 6;
	
		default:
		
	}

	return -1;
}

int func_0x7A3E8890(Player plParam0, int iParam1)
{
	int num;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (iParam1 < 0 || iParam1 >= 7)
		return 0;

	if (func_0x69036A4A(Global_1845250[plParam0].f_260.f_205[iParam1]))
		num = Global_1845250[plParam0].f_260.f_205[iParam1];

	return num;
}

BOOL func_0xA6BA8EBE(int iParam0)
{
	if (Global_24098 || Global_24097 || Global_24099)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}

	if (Global_118[iParam0].f_8 != 198)
		if (Global_21610.f_1 == 10)
			if (Global_8778 == iParam0)
				return 1;
			else
				return 0;
		else
			return 0;

	return 0;
}

BOOL func_0xC5A11BDA(Player plParam0)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(Global_1882572[plParam0].f_158.f_43.f_1, 5);
}

void func_0xEEAA8E89()
{
	if (func_0x25CF96AB())
	{
		if (!bLocal_43 && !Global_1576473)
		{
			Global_1576473 = true;
			bLocal_43 = true;
		}
	}
	else if (bLocal_43)
	{
		bLocal_43 = false;
	}

	return;
}

BOOL func_0x25CF96AB()
{
	if (*/*Global_4718592*/g_FMMC_STRUCT.f_132500 == 193443741 || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == -1655398699 || */*Global_4718592*/g_FMMC_STRUCT.f_132500 == 846282902)
		return true;

	return false;
}

void func_0x369E58FD()
{
	Vector3 vector;
	Vector3 vector2;
	int allVehicles;
	int i;
	var minimum;
	float maximum;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	var offsetFromCoordAndHeadingInWorldCoords2;
	var offsetFromCoordAndHeadingInWorldCoords3;
	Vector3 offsetFromCoordAndHeadingInWorldCoords4;
	BOOL flag;
	BOOL flag2;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (*/*Global_4718592*/g_FMMC_STRUCT.f_132500 != /*Global_262145*/g_sMPTunables.f_37058[2])
		return;

	vector = { -941.45f, -2601.8f, -8.925f };
	vector2 = { -920.331f, -2584.174f, -8.925f };

	if (IS_BIT_SET(Global_1574951, 4) && func_0xE868219() >= 2)
	{
		Global_2686090.f_7150[func_0x9876103(18, 0)] = { vector };
		Global_2686090.f_7150[func_0x9876103(18, 0)].f_3 = -49.93f;
		Global_2686090.f_7150[func_0x9876103(18, 1)] = { vector2 };
		Global_2686090.f_7150[func_0x9876103(18, 1)].f_3 = 130.61f;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_53) || !ENTITY::DOES_ENTITY_EXIST(veLocal_55) || !ENTITY::DOES_ENTITY_EXIST(veLocal_54) || !ENTITY::DOES_ENTITY_EXIST(veLocal_56))
	{
		allVehicles = VEHICLE::GET_ALL_VEHICLES(&Global_1576515);
		i = 0;
	
		for (i = 0; i < allVehicles; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1576515[i]))
			{
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_1576515[i]) != joaat("metrotrain"))
			{
			}
			else
			{
				if (func_0xCA595B0(Global_1576515[i]) == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_53))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_53) != Global_1576515[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_54) != Global_1576515[i])
							veLocal_53 = Global_1576515[i];
				
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_54))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_53) != Global_1576515[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_54) != Global_1576515[i])
							veLocal_54 = Global_1576515[i];
				}
			
				if (func_0xCA595B0(Global_1576515[i]) == 1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_55))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_55) != Global_1576515[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_56) != Global_1576515[i])
							veLocal_55 = Global_1576515[i];
				
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_56))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_55) != Global_1576515[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_56) != Global_1576515[i])
							veLocal_56 = Global_1576515[i];
				}
			}
		}
	
		return;
	}

	MISC::GET_MODEL_DIMENSIONS(joaat("metrotrain"), &minimum, &maximum);
	maximum = 0f;
	maximum.f_2 = 0f;
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_53, false), ENTITY::GET_ENTITY_HEADING(veLocal_53), maximum) };
	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_54, false), ENTITY::GET_ENTITY_HEADING(veLocal_54), maximum) };
	MISC::GET_MODEL_DIMENSIONS(joaat("metrotrain"), &minimum, &maximum);
	maximum = 0f;
	maximum.f_2 = 0f;
	offsetFromCoordAndHeadingInWorldCoords3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_55, false), ENTITY::GET_ENTITY_HEADING(veLocal_55), maximum) };
	offsetFromCoordAndHeadingInWorldCoords4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_56, false), ENTITY::GET_ENTITY_HEADING(veLocal_56), maximum) };
	flag2 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(veLocal_56, veLocal_53) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(veLocal_56, veLocal_54);

	if (SYSTEM::VDIST2(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords4) < SYSTEM::POW(5f, 2f) || flag2)
		flag = true;

	if (flag)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_55))
			VEHICLE::SET_TRAIN_SPEED(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_55), 0f);
	
		/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_89361[1].f_8 = 0;
		MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_89361[1].f_9), 8);
		MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_89361[1].f_9), 9);
		MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_89361[1].f_9), 10);
		MISC::SET_BIT(&(/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_89361[1].f_9), 11);
	}

	if (flag2)
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_53))
			ENTITY::SET_ENTITY_COORDS(veLocal_53, vector, true, false, false, true);

	if (flag2)
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_55))
			ENTITY::SET_ENTITY_COORDS(veLocal_55, vector2, true, false, false, true);

	return;
}

int func_0xCA595B0(Vehicle veParam0)
{
	int _int;

	if (veParam0 == 0)
		return -1;

	_int = -1;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_TrainID", INT))
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "MC_TrainID"))
			_int = DECORATOR::DECOR_GET_INT(veParam0, "MC_TrainID");

	return _int;
}

int func_0x9876103(int iParam0, int iParam1)
{
	int i;

	for (i = 0; i <= */*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_220133 - 1; i = i + 1)
	{
		if (/*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_220117[i] != iParam0 || /*Global_4980736*/g_FMMC_STRUCT_ENTITIES.f_220117[i].f_1 != iParam1)
		{
		}
		else
		{
			return i;
		}
	}

	return -1;
}

int func_0xE868219()
{
	int i;

	for (i = 6; i >= 0; i = i + -1)
	{
		if (IS_BIT_SET(Global_2686090.f_3914, i))
			return i;
	}

	return 0;
}

void func_0xB8A76119()
{
	if (Global_2733002.f_5765.f_3 != -1)
		if (Global_2733002.f_5659 == -1)
			Global_2733002.f_5659 = func_0xC1761AC0();

	return;
}

int func_0xC1761AC0()
{
	return (func_0xE2B66CA5(15) + PLAYER::PLAYER_ID()) % 15;
}

int func_0xE2B66CA5(int iParam0)
{
	return Global_2733002.f_5765.f_3 % iParam0;
}

void func_0x71147B0D()
{
	if (IS_BIT_SET(Global_1950198.f_8, 11))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(Global_1970261) && NETWORK::NETWORK_IS_ENTITY_CONCEALED(Global_1970261))
		{
			if (!_STOPWATCH_IS_INITIALIZED(&uLocal_3))
			{
				_STOPWATCH_INITIALIZE(&uLocal_3, false, false);
			}
			else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_3, 10000, false))
			{
				func_0x55E67D32();
				_STOPWATCH_DESTROY(&uLocal_3);
			}
		}
	}

	return;
}

void func_0x55E67D32()
{
	MISC::CLEAR_BIT(&(Global_1950198.f_8), 11);
	func_0x5551F163();
	func_0xA470E5DD(PLAYER::PLAYER_ID(), false);
	func_0x679967FD(PLAYER::PLAYER_ID(), false);
	func_0x9E26F8DC(false);
	return;
}

void func_0x9E26F8DC(BOOL bParam0)
{
	if (bParam0)
		Global_1950198.f_5351 = 1;
	else
		Global_1950198.f_5351 = 0;

	return;
}

void func_0x679967FD(Player plParam0, BOOL bParam1)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (bParam1)
			if (!IS_BIT_SET(Global_2658291[plParam0].f_325.f_5, 11))
				MISC::SET_BIT(&(Global_2658291[plParam0].f_325.f_5), 11);
		else if (IS_BIT_SET(Global_2658291[plParam0].f_325.f_5, 11))
			MISC::CLEAR_BIT(&(Global_2658291[plParam0].f_325.f_5), 11);

	return;
}

void func_0xA470E5DD(Player plParam0, BOOL bParam1)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (bParam1)
			if (!IS_BIT_SET(Global_2658291[plParam0].f_325.f_5, 14))
				MISC::SET_BIT(&(Global_2658291[plParam0].f_325.f_5), 14);
		else if (IS_BIT_SET(Global_2658291[plParam0].f_325.f_5, 14))
			MISC::CLEAR_BIT(&(Global_2658291[plParam0].f_325.f_5), 14);

	return;
}

void func_0x5551F163()
{
	if (Global_1970261 != 0)
		Global_1970261 = 0;

	return;
}

void func_0xB22BB7ED()
{
	if (!func_0xDBD936D3())
	{
		if (bLocal_5)
			bLocal_5 = false;
	
		return;
	}

	if (bLocal_5)
		return;

	if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false) && Global_2658291[PLAYER::PLAYER_ID()].f_325.f_11 == PLAYER::PLAYER_ID() && !func_0x47FF56D2())
	{
		if (!func_0x66668FD6(PLAYER::PLAYER_ID()))
		{
			_STAT_SET_PACKED_BOOL(func_0x54F9FE5C(1), false, -1);
			_STAT_SET_PACKED_BOOL(func_0x54F9FE5C(2), false, -1);
			_STAT_SET_PACKED_BOOL(func_0x54F9FE5C(3), false, -1);
		}
	
		bLocal_5 = true;
	}

	return;
}

int func_0x54F9FE5C(int iParam0)
{
	if (!func_0xC1205A6F(iParam0))
		return 0;

	switch (iParam0)
	{
		case 1:
			return 28330;
	
		case 2:
			return 28331;
	
		case 3:
			return 28332;
	
		default:
		
	}

	return 0;
}

BOOL func_0x66668FD6(Player plParam0)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(Global_1882572[plParam0].f_158.f_43.f_1, 3);
}

BOOL func_0x47FF56D2()
{
	return Global_77342;
}

void func_0x9101CF40()
{
	if (func_0x4228A1C2())
		if (!IS_BIT_SET(Global_1950198.f_5172.f_1, 31))
			MISC::SET_BIT(&(Global_1950198.f_5172.f_1), 31);
	else if (IS_BIT_SET(Global_1950198.f_5172.f_1, 31))
		MISC::CLEAR_BIT(&(Global_1950198.f_5172.f_1), 31);

	return;
}

BOOL func_0x4228A1C2()
{
	return Global_1836875.f_94;
}

void func_0xE56E0997()
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		bLocal_51 = false;
		return;
	}

	if (bLocal_51)
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (/*Global_4718592*/g_FMMC_STRUCT.f_185991[i] == 113)
			/*Global_4718592*/g_FMMC_STRUCT.f_185991[i] = 107;
	}

	bLocal_51 = true;
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
							else if (func_0x2618609F(Global_1058124.f_157[j]) == eventData.f_3)
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

int func_0x2618609F(Entity eParam0)
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

void func_0xB70590F1()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bLocal_50)
			bLocal_50 = false;
	
		return;
	}

	if (!Global_1836261)
		return;

	if (!bLocal_50)
	{
		if (!func_0x3650ADA8(13))
			func_0xD158A706();
	
		bLocal_50 = true;
	}

	return;
}

void func_0xD158A706()
{
	HUD::SET_MINIMAP_COMPONENT(20, false, -1);
	HUD::SET_MINIMAP_COMPONENT(22, false, -1);
	HUD::SET_MINIMAP_COMPONENT(21, false, -1);
	return;
}

BOOL func_0x3650ADA8(int iParam0)
{
	return */*Global_4718592*/g_FMMC_STRUCT.f_192778 >= iParam0;
}

void func_0xD2BCF891()
{
	if (func_0xEAE183ED() == 178 && func_0xAC9DE117() == 482563055)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_25))
			return;
	
		STREAMING::REQUEST_MODEL(joaat("prop_dummy_car"));
	
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_dummy_car")))
		{
			obLocal_25 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_dummy_car"), -1628.8046f, 486.4122f, 118.4275f, false, false, false, 0);
			ENTITY::SET_ENTITY_ROTATION(obLocal_25, 0f, 0f, -35.6617f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_25, true);
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_25, true, 0);
			ENTITY::SET_ENTITY_VISIBLE(obLocal_25, false, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_dummy_car"));
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(obLocal_25))
	{
		OBJECT::DELETE_OBJECT(&obLocal_25);
	}

	return;
}

int func_0xAC9DE117()
{
	return Global_1882572[PLAYER::PLAYER_ID()].f_158.f_43.f_6;
}

void func_0x4B3D2F1A()
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		if (func_0xFA5B473E(PLAYER::PLAYER_ID(), false))
		{
			if (!bLocal_24)
			{
				bLocal_24 = true;
				PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), 10000000f);
				PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (bLocal_24)
		{
			bLocal_24 = false;
			PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), -1f);
			PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), true);
		}
	}

	return;
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
			_STOPWATCH_RESET(&uLocal_19, false, false);
			uLocal_21 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
		}
		else if (!func_0xBE186BC0(&uLocal_19, 5000, false))
		{
			if (MISC::GET_FRAME_COUNT() % 15 == 0)
				MISC::CLEAR_AREA(uLocal_21, 6f, false, false, false, true);
		}
	}
	else if (!func_0xBE186BC0(&uLocal_19, 5000, false))
	{
		if (MISC::GET_FRAME_COUNT() % 15 == 0)
			MISC::CLEAR_AREA(uLocal_21, 6f, false, false, false, true);
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
	if (iLocal_7.f_2 >= */*Global_262145*/g_sMPTunables.f_35612)
		return;

	switch (iLocal_7.f_1)
	{
		case 0:
			if (Global_2709274.f_567 && Global_2709903 != -1)
			{
				iLocal_7 = Global_2709903;
				STREAMING::REQUEST_MODEL(func_0x26530429(iLocal_7));
				iLocal_7.f_1 = iLocal_7.f_1 + 1;
			}
			break;
	
		case 1:
			STREAMING::REQUEST_MODEL(func_0x26530429(iLocal_7));
		
			if (STREAMING::HAS_MODEL_LOADED(func_0x26530429(iLocal_7)))
			{
				if (!Global_2709274.f_567)
				{
					func_0xC44972DB(iLocal_7);
					func_0x11A84E69();
					iLocal_7.f_2 = iLocal_7.f_2 + 1;
				}
			}
			break;
	}

	return;
}

void func_0x11A84E69()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_7.f_3))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_7.f_3));

	iLocal_7.f_1 = 0;
	iLocal_7 = -1;
	return;
}

void func_0xC44972DB(int iParam0)
{
	Vector3 vector;

	vector = { func_0x5B2695C0(iParam0) };
	vector.f_2 = vector.f_2 - 2.5f;
	iLocal_7.f_3 = OBJECT::CREATE_OBJECT(func_0x26530429(iParam0), vector, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_7.f_3, func_0xEDA5FBD9(iParam0), 2, true);
	OBJECT::SET_OBJECT_TARGETTABLE(iLocal_7.f_3, false, 0);
	ENTITY::SET_ENTITY_PROOFS(iLocal_7.f_3, true, true, true, true, true, false, false, false);

	if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iLocal_7.f_3))
		if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_7.f_3))
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_7.f_3), false);

	ENTITY::FREEZE_ENTITY_POSITION(iLocal_7.f_3, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_7.f_3, 200);
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
		if (Global_2658291[PLAYER::PLAYER_ID()].f_325.f_11 != _INVALID_PLAYER_INDEX() && plLocal_6 != Global_2658291[PLAYER::PLAYER_ID()].f_325.f_11)
			plLocal_6 = Global_2658291[PLAYER::PLAYER_ID()].f_325.f_11;
	}
	else if (plLocal_6 != _INVALID_PLAYER_INDEX() && !func_0x3BED6F11(PLAYER::PLAYER_ID()) && !func_0xC2ABD0AE() && !Global_1950198.f_4247 && !func_0xF44991F9())
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			plLocal_6 = _INVALID_PLAYER_INDEX();
			return;
		}
		else
		{
			func_0x84674B(plLocal_6);
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

void func_0xD6B17D14()
{
	if (func_0x928E8225(PLAYER::PLAYER_ID()))
	{
		if (!bLocal_47)
		{
			if (func_0x8DF3D75D() && MISC::ARE_STRINGS_EQUAL(&(Global_2685150.f_863), "SStkBAsLAkaLStFT7XVe0Q") || MISC::ARE_STRINGS_EQUAL(&(Global_2685150.f_863), "2pzrsV4cE0e0S7s1lTrDeg") || MISC::ARE_STRINGS_EQUAL(&(Global_2685150.f_863), "9LUl3hK6q0yF3TxCS23h4A"))
			{
				func_0x6A6128A5();
				func_0x9065A07A();
				bLocal_47 = true;
			}
		}
	}
	else
	{
		bLocal_47 = false;
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

void func_0xDED9A580()
{
	BOOL flag;

	flag = Global_1950198.f_5391 == 88 || Global_1950198.f_5391 == 147;

	if (!bLocal_16)
	{
		if (Global_1950198.f_5391.f_1 != -1 && func_0xEE599357(Global_1950198.f_5391.f_1) == 33 && flag && !/*Global_4718592*/g_FMMC_STRUCT.f_3602)
		{
			/*Global_4718592*/g_FMMC_STRUCT.f_3602 = 1;
			bLocal_16 = true;
			_STOPWATCH_RESET(&uLocal_17, false, false);
		}
	}
	else
	{
		if (/*Global_4718592*/g_FMMC_STRUCT.f_3602 && func_0x51850598(uLocal_17, 10000, false))
		{
			/*Global_4718592*/g_FMMC_STRUCT.f_3602 = 0;
			bLocal_16 = false;
			_STOPWATCH_DESTROY(&uLocal_17);
		}
	
		if (Global_1950198.f_5391.f_1 == -1 || func_0xEE599357(Global_1950198.f_5391.f_1) != 33 || !flag && /*Global_4718592*/g_FMMC_STRUCT.f_3602)
		{
			/*Global_4718592*/g_FMMC_STRUCT.f_3602 = 0;
			bLocal_16 = false;
			_STOPWATCH_DESTROY(&uLocal_17);
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

void FIX_FOR_3533670()
{
	if (!bLocal_12)
	{
		if (Global_1836491)
		{
			if (IS_REPEAT_OFFENDER_X_0() || IS_REPEAT_OFFENDER_X())
				/*Global_262145*/g_sMPTunables.f_20001 = 1;
			else
				/*Global_262145*/g_sMPTunables.f_20001 = 0;
		
			bLocal_12 = true;
		}
	}
	else if (!Global_1836491)
	{
		bLocal_12 = false;
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

void func_0x60F9DAD0()
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

