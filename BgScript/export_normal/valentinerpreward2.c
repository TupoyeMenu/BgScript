#pragma region Local Var
	char* sLocal_0 = 0;
	int iLocal_1 = 0;
	BOOL bLocal_2 = 0;
	int iLocal_3 = 0;
	BOOL bLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	BOOL bLocal_7 = 0;
	Object obLocal_8 = 0;
	BOOL bLocal_9 = 0;
	BOOL bLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = -1;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	BOOL bLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	Object obLocal_37 = 0;
	Vehicle veLocal_38 = 0;
	Vehicle veLocal_39 = 0;
	Vehicle veLocal_40 = 0;
	Vehicle veLocal_41 = 0;
	Vehicle veLocal_42 = 0;
	BOOL bLocal_43 = 0;
	BOOL bLocal_44 = 0;
	BOOL bLocal_45 = 0;
	BOOL bLocal_46 = 0;
	var uLocal_47 = 0;
	BOOL bLocal_48 = 0;
	BOOL bLocal_49 = 0;
	int iLocal_50 = 0;
	BOOL bLocal_51 = 0;
	BOOL bLocal_52 = 0;
	int iLocal_53 = 0;
	BOOL bLocal_54 = 0;
	BOOL bLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 4;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#pragma endregion Local Var

void func_0x41B3F44() // Position - 0x0 (0)
{
	int num;
	BOOL flag;

	sLocal_0 = "1.73.07";
	iLocal_1 = 7;
	iLocal_23 = -1;
	iLocal_24 = -1;
	iLocal_30 = 1;
	iLocal_50 = -1;
	iLocal_53 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	Global_1576482 = MISC::GET_HASH_KEY(sLocal_0);
	Global_1576483 = iLocal_1;

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_0xB401A131();
	
		flag = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	
		if (Global_2694337.f_3)
		{
			if (flag)
			{
				FIX_FOR_3280561();
				func_0x35808C0E();
				func_0x5BED8FCC();
				func_0x3A732D3A();
				func_0xA36E646E();
				func_0xC91C4BDB();
				func_0x3009E1C3();
				func_0x1EF959D2();
				func_0x9FFFA267();
				func_0x702CE6E2();
				func_0x369E58FD();
				func_0x74971B25();
				func_0xE56E0997();
				func_0xEDDC604();
				func_0x6D002A40();
				func_0x3EC3F8FD();
				func_0x13925C62();
				func_0xD0EF835E();
				func_0x76B80006();
				func_0xAAFAE437();
				func_0x578A85EC();
				func_0xC589C7A3();
				func_0x2BD88F0B();
				func_0x3814269A();
				func_0x3B67A795();
				func_0xA53E1EB4();
				func_0xB1D07BEA();
				func_0x1BA4DA7E();
				func_0xE14985A9();
				func_0xCC8F99D1();
				func_0xA2C27B4E();
				func_0x9C3F8C27();
				func_0x19118056();
			}
		
			func_0xFD25BD04();
			func_0x704D0C43();
			func_0x3A8B2E2C();
			func_0x58DD0C67();
			func_0x4486FD47();
			func_0x8771322C();
			func_0x21757A7C(flag);
		}
	
		NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_0x21757A7C(BOOL bParam0) // Position - 0x130 (304)
{
	if (bParam0)
	{
		if (!bLocal_7)
		{
			if (func_0x60405B44())
			{
				func_0x4AE500E7(&Global_1048576);
				NETWORK::NETWORK_BAIL(51, 0, 0);
				bLocal_7 = true;
			}
		}
	}
	else if (bLocal_7)
	{
		bLocal_7 = false;
	}

	return;
}

void func_0x4AE500E7(var uParam0) // Position - 0x168 (360)
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
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_1195[i /*6*/], "", 24);
	}

	func_0x83F63FA6(&(uParam0->f_74));
	return;
}

void func_0x83F63FA6(var uParam0) // Position - 0x1F0 (496)
{
	int i;
	var unk;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		uParam0->[i /*70*/] = { unk };
	}

	return;
}

BOOL func_0x60405B44() // Position - 0x21C (540)
{
	int i;
	Hash hashKey;

	if (func_0x3E6EF13(&uLocal_5, 3000, false))
	{
		func_0x5EA17708(&uLocal_5, false, false);
	
		if (Global_1048576.f_67 > 0)
		{
			for (i = 0; i <= Global_1048576.f_67 - 1; i = i + 1)
			{
				hashKey = MISC::GET_HASH_KEY(&Global_1048576.f_74[i /*70*/]);
			
				if (func_0x5000025C(hashKey))
					return true;
			}
		}
	}

	return false;
}

BOOL func_0x5000025C(Hash hParam0) // Position - 0x27A (634)
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
		case -1862345025:
		case -1381896991:
		case 50444107:
		case 827236257:
		case -666476108:
		case 240635129:
		case -260768998:
		case 254409656:
		case 1452334774:
		case -1965837132:
		case -2069471763:
		case 1341497216:
		case -1574762065:
		case -565556149:
		case 679244544:
		case 973440054:
			return true;
	
		default:
		
	}

	return false;
}

void func_0x5EA17708(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x53A (1338)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		else
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*uParam0 = MISC::GET_GAME_TIMER();

	uParam0->f_1 = 1;
	return;
}

BOOL func_0x3E6EF13(var uParam0, int iParam1, BOOL bParam2) // Position - 0x577 (1399)
{
	if (iParam1 == -1)
		return true;

	func_0xCFF63EEF(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

void func_0xCFF63EEF(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5D5 (1493)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}

	return;
}

void func_0x8771322C() // Position - 0x61A (1562)
{
	int fileDict;
	int dict;
	int dict2;

	if (*Global_4718592.f_197292 == -1)
	{
		bLocal_54 = false;
		return;
	}

	if (IS_BIT_SET(Global_2685152.f_46.f_4, 0))
	{
		if (!bLocal_55)
		{
			if (IS_BIT_SET(Global_2685152.f_46.f_4, 8))
			{
				if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
				{
					bLocal_54 = false;
					bLocal_55 = true;
				}
			}
		}
	}
	else if (bLocal_55)
	{
		bLocal_55 = false;
	}

	if (bLocal_54)
		return;

	if (Global_4718592 != 0)
	{
		bLocal_54 = true;
		return;
	}

	if (Global_4718592.f_2 == 14 || Global_4718592.f_2 == 5 || Global_4718592.f_2 == 6)
	{
		bLocal_54 = true;
		return;
	}

	fileDict = DATAFILE::DATAFILE_GET_FILE_DICT(0);

	if (fileDict == 0)
		return;

	dict = DATAFILE::DATADICT_GET_DICT(fileDict, "mission");

	if (dict == 0)
		return;

	dict2 = DATAFILE::DATADICT_GET_DICT(dict, "gen");

	if (dict2 == 0)
		return;

	func_0x18634ABF(&dict2);
	bLocal_54 = true;
	return;
}

void func_0x18634ABF(var uParam0) // Position - 0x6F6 (1782)
{
	var unk;
	int i;

	unk.f_1 = 1;
	unk.f_8 = 12;
	unk.f_8.f_1 = 1;
	unk.f_8.f_1.f_2 = 1;
	unk.f_8.f_1.f_2.f_2 = 1;
	unk.f_8.f_1.f_2.f_2.f_2 = 1;
	unk.f_8.f_1.f_2.f_2.f_2.f_2 = 1;
	unk.f_8.f_1.f_2.f_2.f_2.f_2.f_2 = 1;
	unk.f_8.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 1;
	unk.f_8.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1;
	unk.f_8.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1;
	unk.f_8.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1;
	unk.f_8.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1;
	unk.f_8.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1;
	unk.f_33 = 12;
	unk.f_46 = 12;
	unk.f_59 = 12;
	unk.f_72 = 12;
	unk.f_85 = 12;
	unk.f_98 = 12;
	unk.f_111 = 12;
	unk.f_124 = 12;
	unk.f_137 = 12;
	unk.f_150 = 12;
	unk.f_163 = 12;
	unk.f_176 = 12;
	unk.f_189 = 12;
	unk.f_202 = 12;
	unk.f_215 = 12;
	unk.f_228 = 12;
	unk.f_228.f_1 = 4;
	unk.f_228.f_1.f_5 = 4;
	unk.f_228.f_1.f_5.f_5 = 4;
	unk.f_228.f_1.f_5.f_5.f_5 = 4;
	unk.f_228.f_1.f_5.f_5.f_5.f_5 = 4;
	unk.f_228.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_228.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_228.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_228.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_228.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_228.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_228.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_289 = 12;
	unk.f_302 = 12;
	i = 0;

	for (i = 0; i <= 9; i = i + 1)
	{
		func_0x6A9194FA(&Global_4718592.f_208680[i /*346*/], &unk, uParam0, i, false);
	}

	return;
}

void func_0x6A9194FA(var uParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x82C (2092)
{
	var unk;
	int i;
	int j;

	if (!IS_BIT_SET(uParam0->[0], 0))
	{
	}

	if (!IS_BIT_SET(uParam0->[0], 2))
	{
	}

	func_0xE0BB03BB("avrad", &(uParam0->f_3), uParam2, uParam1, iParam3, 0, -2340845, -1);

	for (i = 0; i <= 0; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "iebs", 16);
	
		if (i > 0)
		{
			TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
			TEXT_LABEL_APPEND_INT(&unk, i, 16);
		}
	
		func_0xE0BB03BB(&unk, &uParam0->[i], uParam2, &uParam1->f_1[i], iParam3, 0, -2340845, -1);
	}

	if (bParam4 && !IS_BIT_SET(uParam0->[0], 2))
		func_0x1AF34C1E(iParam3);

	func_0xF047451B("paccc", &(uParam0->f_4), uParam2, &(uParam1->f_4), iParam3, 0f, -904994889);
	func_0xE0BB03BB("lgtsi", &(uParam0->f_5), uParam2, &(uParam1->f_5), iParam3, -1, -2340845, -1);
	func_0xE0BB03BB("paot", &(uParam0->f_6), uParam2, &(uParam1->f_6), iParam3, -1, -2340845, -1);
	func_0xE0BB03BB("bdtp", &(uParam0->f_7), uParam2, &(uParam1->f_7), iParam3, -1, -2340845, -1);

	for (i = 0; i <= 11; i = i + 1)
	{
		if (bParam4 && !IS_BIT_SET(uParam0->[0], 0))
		{
			func_0xE045811B(iParam3, i);
		}
		else
		{
			for (j = 0; j <= 0; j = j + 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "bs", 16);
				TEXT_LABEL_APPEND_INT(&unk, i, 16);
				TEXT_LABEL_APPEND_STRING(&unk, "t", 16);
				TEXT_LABEL_APPEND_INT(&unk, j, 16);
				func_0xE0BB03BB(&unk, &uParam0->f_9[i /*28*/][j], uParam2, &uParam1->f_8[i /*2*/][j], iParam3, 0, -2340845, -1);
			}
		}
	
		TEXT_LABEL_ASSIGN_STRING(&unk, "actv", 16);
	
		if (i > 0)
			TEXT_LABEL_APPEND_INT(&unk, i + 1, 16);
	
		func_0x521CE999(&unk, &(uParam0->f_9[i /*28*/].f_2), uParam2, &uParam1->f_33[i], iParam3, 0f, 0f, 0f, 0f, 0f, 0f);
		TEXT_LABEL_ASSIGN_STRING(&unk, "achf", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xF047451B(&unk, &(uParam0->f_9[i /*28*/].f_5), uParam2, &uParam1->f_46[i], iParam3, 0f, -904994889);
		TEXT_LABEL_ASSIGN_STRING(&unk, "awt", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xE0BB03BB(&unk, &(uParam0->f_9[i /*28*/].f_6), uParam2, &uParam1->f_59[i], iParam3, 0, -2340845, -1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "awr", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xE0BB03BB(&unk, &(uParam0->f_9[i /*28*/].f_7), uParam2, &uParam1->f_72[i], iParam3, 0, -2340845, -1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "awl", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0x521CE999(&unk, &(uParam0->f_9[i /*28*/].f_8), uParam2, &uParam1->f_85[i], iParam3, 0f, 0f, 0f, 0f, 0f, 0f);
		TEXT_LABEL_ASSIGN_STRING(&unk, "awlr", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xE0BB03BB(&unk, &(uParam0->f_9[i /*28*/].f_11), uParam2, &uParam1->f_98[i], iParam3, 0, -2340845, -1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "aht", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xF047451B(&unk, &(uParam0->f_9[i /*28*/].f_12), uParam2, &uParam1->f_111[i], iParam3, 0f, -904994889);
		TEXT_LABEL_ASSIGN_STRING(&unk, "agrd", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xF047451B(&unk, &(uParam0->f_9[i /*28*/].f_13), uParam2, &uParam1->f_124[i], iParam3, 0f, -904994889);
		TEXT_LABEL_ASSIGN_STRING(&unk, "ags", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xE0BB03BB(&unk, &(uParam0->f_9[i /*28*/].f_14), uParam2, &uParam1->f_137[i], iParam3, -1, -2340845, -1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "agsf", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xE0BB03BB(&unk, &(uParam0->f_9[i /*28*/].f_15), uParam2, &uParam1->f_150[i], iParam3, 0, -2340845, -1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "agvr", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xF047451B(&unk, &(uParam0->f_9[i /*28*/].f_16), uParam2, &uParam1->f_163[i], iParam3, 0f, -904994889);
		TEXT_LABEL_ASSIGN_STRING(&unk, "agvg", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xE0BB03BB(&unk, &(uParam0->f_9[i /*28*/].f_17), uParam2, &uParam1->f_176[i], iParam3, -1, -2340845, -1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "pgtlp", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xE0BB03BB(&unk, &(uParam0->f_9[i /*28*/].f_19), uParam2, &uParam1->f_202[i], iParam3, 0, -2340845, -1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "pgtco", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xE0BB03BB(&unk, &(uParam0->f_9[i /*28*/].f_18), uParam2, &uParam1->f_189[i], iParam3, 0, -2340845, -1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "gtcst", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		uParam0->f_9[i /*28*/].f_20 = func_0x2911FD7F(&unk, uParam2, &uParam1->f_215[i], iParam3, 0, 0);
		TEXT_LABEL_ASSIGN_STRING(&unk, "gtcss", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xE0BB03BB(&unk, &(uParam0->f_9[i /*28*/].f_26), uParam2, &uParam1->f_289[i], iParam3, 0, -2340845, -1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "gtcsd", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_0xE0BB03BB(&unk, &(uParam0->f_9[i /*28*/].f_27), uParam2, &uParam1->f_302[i], iParam3, -1, -2340845, -1);
	
		for (j = 0; j <= 3; j = j + 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "cs", 16);
			TEXT_LABEL_APPEND_INT(&unk, i, 16);
			TEXT_LABEL_APPEND_STRING(&unk, "i", 16);
			TEXT_LABEL_APPEND_INT(&unk, j, 16);
			func_0xE0BB03BB(&unk, &uParam0->f_9[i /*28*/].f_21[j], uParam2, &uParam1->f_228[i /*5*/][j], iParam3, 0, -2340845, -1);
		}
	}

	func_0xE0BB03BB("inpgt", &(uParam0->f_2), uParam2, &(uParam1->f_3), iParam3, -1, -2340845, -1);
	return;
}

var func_0x2911FD7F(char* sParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0xD57 (3415)
{
	var unk;

	func_0xE0BB03BB(sParam0, &unk, uParam1, uParam2, iParam3, iParam4, iParam5, -1);
	return unk;
}

void func_0x521CE999(const char* sParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10) // Position - 0xD74 (3444)
{
	if (*uParam2 == 0)
		return;

	if (*uParam3 == 0)
		*uParam3 = DATAFILE::DATADICT_GET_ARRAY(*uParam2, sParam0);

	if (*uParam3 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam3, iParam4) == 5)
		*uParam1 = { DATAFILE::DATAARRAY_GET_VECTOR(*uParam3, iParam4) };
	else if (func_0x353CEA88())
		if (!func_0xDC26C397(fParam8))
			*uParam1 = { fParam8 };
	else
		*uParam1 = { fParam5 };

	return;
}

BOOL func_0xDC26C397(float fParam0, var uParam1, var uParam2) // Position - 0xDE7 (3559)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_0x353CEA88() // Position - 0xE11 (3601)
{
	if (func_0x3650ADA8(2))
		return false;

	return true;
}

BOOL func_0x3650ADA8(int iParam0) // Position - 0xE26 (3622)
{
	return *Global_4718592.f_197292 >= iParam0;
}

void func_0xE045811B(int iParam0, int iParam1) // Position - 0xE3B (3643)
{
	if (func_0xB7602DB2(Global_4980736.f_93162[iParam0 /*1277*/].f_575, Global_4980736.f_93162[iParam0 /*1277*/].f_583, Global_4980736.f_93162[iParam0 /*1277*/].f_584, &(Global_4980736.f_93162[iParam0 /*1277*/].f_595), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 0);

	if (func_0x9D4D0BCD(Global_4980736.f_93162[iParam0 /*1277*/].f_580, Global_4980736.f_93162[iParam0 /*1277*/].f_584, &(Global_4980736.f_93162[iParam0 /*1277*/].f_595), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 1);

	if (func_0x68D7C058(Global_4980736.f_93162[iParam0 /*1277*/].f_581, Global_4980736.f_93162[iParam0 /*1277*/].f_584, &(Global_4980736.f_93162[iParam0 /*1277*/].f_595), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 2);

	if (func_0x34639DD6(Global_4980736.f_93162[iParam0 /*1277*/].f_581, Global_4980736.f_93162[iParam0 /*1277*/].f_584, &(Global_4980736.f_93162[iParam0 /*1277*/].f_595), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 3);

	if (func_0x2FAC1B6A(Global_4980736.f_93162[iParam0 /*1277*/].f_581, Global_4980736.f_93162[iParam0 /*1277*/].f_584, &(Global_4980736.f_93162[iParam0 /*1277*/].f_595), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 4);

	if (func_0x206594DE(Global_4980736.f_93162[iParam0 /*1277*/].f_581, Global_4980736.f_93162[iParam0 /*1277*/].f_584, &(Global_4980736.f_93162[iParam0 /*1277*/].f_594), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 5);

	if (func_0x6ABBA61F(Global_4980736.f_93162[iParam0 /*1277*/].f_581, Global_4980736.f_93162[iParam0 /*1277*/].f_584, &(Global_4980736.f_93162[iParam0 /*1277*/].f_594), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 6);

	if (func_0x68D7C058(Global_4980736.f_93162[iParam0 /*1277*/].f_583, Global_4980736.f_93162[iParam0 /*1277*/].f_584, &(Global_4980736.f_93162[iParam0 /*1277*/].f_594), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 7);

	if (func_0xEC19B717(Global_4980736.f_93162[iParam0 /*1277*/].f_583, Global_4980736.f_93162[iParam0 /*1277*/].f_584, &(Global_4980736.f_93162[iParam0 /*1277*/].f_594), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 8);

	if (func_0x9F73F8B4(Global_4980736.f_93162[iParam0 /*1277*/].f_583, Global_4980736.f_93162[iParam0 /*1277*/].f_584, &(Global_4980736.f_93162[iParam0 /*1277*/].f_594), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 9);

	if (func_0x192C41F8(iParam0, &(Global_4980736.f_93162[iParam0 /*1277*/].f_591), &(Global_4980736.f_93162[iParam0 /*1277*/].f_594), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 10);

	if (func_0x7371D210(iParam0, &(Global_4980736.f_93162[iParam0 /*1277*/].f_591), &(Global_4980736.f_93162[iParam0 /*1277*/].f_594), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 11);

	if (func_0x62C41768(&(Global_4980736.f_93162[iParam0 /*1277*/].f_592), &(Global_4980736.f_93162[iParam0 /*1277*/].f_594), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 12);

	if (func_0x9D4D0BCD(Global_4980736.f_93162[iParam0 /*1277*/].f_590, Global_4980736.f_93162[iParam0 /*1277*/].f_591, &(Global_4980736.f_93162[iParam0 /*1277*/].f_593), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 13);

	if (func_0x61A72216(Global_4980736.f_93162[iParam0 /*1277*/].f_588, &(Global_4980736.f_93162[iParam0 /*1277*/].f_593), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 14);

	if (func_0x15F04C8(Global_4980736.f_93162[iParam0 /*1277*/].f_589, &(Global_4980736.f_93162[iParam0 /*1277*/].f_593), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 15);

	if (func_0xC1ECA7C4(Global_4980736.f_93162[iParam0 /*1277*/].f_590, &(Global_4980736.f_93162[iParam0 /*1277*/].f_593), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 16);

	if (func_0xF0D9B561(Global_4980736.f_93162[iParam0 /*1277*/].f_590, &(Global_4980736.f_93162[iParam0 /*1277*/].f_593), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 17);

	if (func_0xEA20C2B9(Global_4980736.f_93162[iParam0 /*1277*/].f_584, Global_4980736.f_93162[iParam0 /*1277*/].f_585, &(Global_4980736.f_93162[iParam0 /*1277*/].f_593), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 18);

	if (func_0x3E522142(&(Global_4980736.f_93162[iParam0 /*1277*/].f_596), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 19);

	if (func_0xC9FD2717(Global_4980736.f_93162[iParam0 /*1277*/].f_592, &(Global_4980736.f_93162[iParam0 /*1277*/].f_593), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 20);

	if (func_0x1DAE6267(Global_4980736.f_93162[iParam0 /*1277*/].f_592, &(Global_4980736.f_93162[iParam0 /*1277*/].f_593), iParam1))
		func_0xA6E47D73(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), iParam1, 21);

	return;
}

BOOL func_0x1DAE6267(int iParam0, var uParam1, int iParam2) // Position - 0x14CD (5325)
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return IS_BIT_SET(iParam0, 22);
		
			case 1:
				return IS_BIT_SET(iParam0, 23);
		
			case 2:
				return IS_BIT_SET(iParam0, 24);
		
			case 3:
				return IS_BIT_SET(iParam0, 25);
		
			case 4:
				return IS_BIT_SET(iParam0, 26);
		
			case 5:
				return IS_BIT_SET(iParam0, 27);
		
			case 6:
				return IS_BIT_SET(iParam0, 28);
		
			case 7:
				return IS_BIT_SET(iParam0, 29);
		
			case 8:
				return IS_BIT_SET(*uParam1, 0);
		
			case 9:
				return IS_BIT_SET(*uParam1, 1);
		
			case 10:
				return IS_BIT_SET(*uParam1, 2);
		
			case 11:
				return IS_BIT_SET(*uParam1, 3);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0xC9FD2717(int iParam0, var uParam1, int iParam2) // Position - 0x1596 (5526)
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return IS_BIT_SET(iParam0, 14);
		
			case 1:
				return IS_BIT_SET(iParam0, 15);
		
			case 2:
				return IS_BIT_SET(iParam0, 16);
		
			case 3:
				return IS_BIT_SET(iParam0, 17);
		
			case 4:
				return IS_BIT_SET(iParam0, 18);
		
			case 5:
				return IS_BIT_SET(iParam0, 19);
		
			case 6:
				return IS_BIT_SET(iParam0, 20);
		
			case 7:
				return IS_BIT_SET(iParam0, 21);
		
			case 8:
				return IS_BIT_SET(*uParam1, 4);
		
			case 9:
				return IS_BIT_SET(*uParam1, 5);
		
			case 10:
				return IS_BIT_SET(*uParam1, 6);
		
			case 11:
				return IS_BIT_SET(*uParam1, 7);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x3E522142(var uParam0, int iParam1) // Position - 0x165F (5727)
{
	if (iParam1 < 12 && iParam1 >= 0)
	{
		switch (iParam1)
		{
			case 0:
				return IS_BIT_SET(*uParam0, 0);
		
			case 1:
				return IS_BIT_SET(*uParam0, 1);
		
			case 2:
				return IS_BIT_SET(*uParam0, 2);
		
			case 3:
				return IS_BIT_SET(*uParam0, 3);
		
			case 4:
				return IS_BIT_SET(*uParam0, 4);
		
			case 5:
				return IS_BIT_SET(*uParam0, 5);
		
			case 6:
				return IS_BIT_SET(*uParam0, 6);
		
			case 7:
				return IS_BIT_SET(*uParam0, 7);
		
			case 8:
				return IS_BIT_SET(*uParam0, 8);
		
			case 9:
				return IS_BIT_SET(*uParam0, 9);
		
			case 10:
				return IS_BIT_SET(*uParam0, 10);
		
			case 11:
				return IS_BIT_SET(*uParam0, 11);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0xEA20C2B9(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x172C (5932)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 28);
		
			case 1:
				return IS_BIT_SET(iParam0, 29);
		
			case 2:
				return IS_BIT_SET(iParam0, 30);
		
			case 3:
				return IS_BIT_SET(iParam0, 31);
		
			case 4:
				return IS_BIT_SET(iParam1, 0);
		
			case 5:
				return IS_BIT_SET(iParam1, 1);
		
			case 6:
				return IS_BIT_SET(iParam1, 2);
		
			case 7:
				return IS_BIT_SET(iParam1, 3);
		
			case 8:
				return IS_BIT_SET(*uParam2, 8);
		
			case 9:
				return IS_BIT_SET(*uParam2, 9);
		
			case 10:
				return IS_BIT_SET(*uParam2, 10);
		
			case 11:
				return IS_BIT_SET(*uParam2, 11);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0xF0D9B561(int iParam0, var uParam1, int iParam2) // Position - 0x17F5 (6133)
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return IS_BIT_SET(iParam0, 8);
		
			case 1:
				return IS_BIT_SET(iParam0, 9);
		
			case 2:
				return IS_BIT_SET(iParam0, 10);
		
			case 3:
				return IS_BIT_SET(iParam0, 11);
		
			case 4:
				return IS_BIT_SET(iParam0, 12);
		
			case 5:
				return IS_BIT_SET(iParam0, 13);
		
			case 6:
				return IS_BIT_SET(iParam0, 14);
		
			case 7:
				return IS_BIT_SET(iParam0, 15);
		
			case 8:
				return IS_BIT_SET(*uParam1, 12);
		
			case 9:
				return IS_BIT_SET(*uParam1, 13);
		
			case 10:
				return IS_BIT_SET(*uParam1, 14);
		
			case 11:
				return IS_BIT_SET(*uParam1, 15);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0xC1ECA7C4(int iParam0, var uParam1, int iParam2) // Position - 0x18C2 (6338)
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return IS_BIT_SET(iParam0, 0);
		
			case 1:
				return IS_BIT_SET(iParam0, 1);
		
			case 2:
				return IS_BIT_SET(iParam0, 2);
		
			case 3:
				return IS_BIT_SET(iParam0, 3);
		
			case 4:
				return IS_BIT_SET(iParam0, 4);
		
			case 5:
				return IS_BIT_SET(iParam0, 5);
		
			case 6:
				return IS_BIT_SET(iParam0, 6);
		
			case 7:
				return IS_BIT_SET(iParam0, 7);
		
			case 8:
				return IS_BIT_SET(*uParam1, 16);
		
			case 9:
				return IS_BIT_SET(*uParam1, 17);
		
			case 10:
				return IS_BIT_SET(*uParam1, 18);
		
			case 11:
				return IS_BIT_SET(*uParam1, 19);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x15F04C8(int iParam0, var uParam1, int iParam2) // Position - 0x1987 (6535)
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return IS_BIT_SET(iParam0, 17);
		
			case 1:
				return IS_BIT_SET(iParam0, 18);
		
			case 2:
				return IS_BIT_SET(iParam0, 19);
		
			case 3:
				return IS_BIT_SET(iParam0, 20);
		
			case 4:
				return IS_BIT_SET(iParam0, 21);
		
			case 5:
				return IS_BIT_SET(iParam0, 22);
		
			case 6:
				return IS_BIT_SET(iParam0, 23);
		
			case 7:
				return IS_BIT_SET(iParam0, 24);
		
			case 8:
				return IS_BIT_SET(*uParam1, 20);
		
			case 9:
				return IS_BIT_SET(*uParam1, 21);
		
			case 10:
				return IS_BIT_SET(*uParam1, 22);
		
			case 11:
				return IS_BIT_SET(*uParam1, 23);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x61A72216(int iParam0, var uParam1, int iParam2) // Position - 0x1A54 (6740)
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return IS_BIT_SET(iParam0, 15);
		
			case 1:
				return IS_BIT_SET(iParam0, 16);
		
			case 2:
				return IS_BIT_SET(iParam0, 17);
		
			case 3:
				return IS_BIT_SET(iParam0, 18);
		
			case 4:
				return IS_BIT_SET(iParam0, 19);
		
			case 5:
				return IS_BIT_SET(iParam0, 20);
		
			case 6:
				return IS_BIT_SET(iParam0, 21);
		
			case 7:
				return IS_BIT_SET(iParam0, 22);
		
			case 8:
				return IS_BIT_SET(*uParam1, 24);
		
			case 9:
				return IS_BIT_SET(*uParam1, 25);
		
			case 10:
				return IS_BIT_SET(*uParam1, 26);
		
			case 11:
				return IS_BIT_SET(*uParam1, 27);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x9D4D0BCD(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x1B21 (6945)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 25);
		
			case 1:
				return IS_BIT_SET(iParam0, 26);
		
			case 2:
				return IS_BIT_SET(iParam0, 27);
		
			case 3:
				return IS_BIT_SET(iParam0, 28);
		
			case 4:
				return IS_BIT_SET(iParam0, 29);
		
			case 5:
				return IS_BIT_SET(iParam0, 30);
		
			case 6:
				return IS_BIT_SET(iParam0, 31);
		
			case 7:
				return IS_BIT_SET(iParam1, 0);
		
			case 8:
				return IS_BIT_SET(*uParam2, 28);
		
			case 9:
				return IS_BIT_SET(*uParam2, 29);
		
			case 10:
				return IS_BIT_SET(*uParam2, 30);
		
			case 11:
				return IS_BIT_SET(*uParam2, 31);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x62C41768(int iParam0, var uParam1, int iParam2) // Position - 0x1BED (7149)
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return IS_BIT_SET(*iParam0, 0);
		
			case 1:
				return IS_BIT_SET(*iParam0, 1);
		
			case 2:
				return IS_BIT_SET(*iParam0, 2);
		
			case 3:
				return IS_BIT_SET(*iParam0, 3);
		
			case 4:
				return IS_BIT_SET(*iParam0, 4);
		
			case 5:
				return IS_BIT_SET(*iParam0, 5);
		
			case 6:
				return IS_BIT_SET(*iParam0, 6);
		
			case 7:
				return IS_BIT_SET(*iParam0, 7);
		
			case 8:
				return IS_BIT_SET(*uParam1, 0);
		
			case 9:
				return IS_BIT_SET(*uParam1, 1);
		
			case 10:
				return IS_BIT_SET(*uParam1, 2);
		
			case 11:
				return IS_BIT_SET(*uParam1, 3);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x7371D210(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x1CB6 (7350)
{
	if (iParam0 != -1)
		if (IS_BIT_SET(Global_4980736.f_93162[iParam0 /*1277*/].f_575, 14))
			return true;

	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(*iParam1, 9);
		
			case 1:
				return IS_BIT_SET(*iParam1, 10);
		
			case 2:
				return IS_BIT_SET(*iParam1, 11);
		
			case 3:
				return IS_BIT_SET(*iParam1, 12);
		
			case 4:
				return IS_BIT_SET(*iParam1, 13);
		
			case 5:
				return IS_BIT_SET(*iParam1, 14);
		
			case 6:
				return IS_BIT_SET(*iParam1, 15);
		
			case 7:
				return IS_BIT_SET(*iParam1, 16);
		
			case 8:
				return IS_BIT_SET(*uParam2, 4);
		
			case 9:
				return IS_BIT_SET(*uParam2, 5);
		
			case 10:
				return IS_BIT_SET(*uParam2, 6);
		
			case 11:
				return IS_BIT_SET(*uParam2, 7);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x192C41F8(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x1DA8 (7592)
{
	if (iParam0 != -1)
		if (IS_BIT_SET(Global_4980736.f_93162[iParam0 /*1277*/].f_575, 13))
			return true;

	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(*iParam1, 1);
		
			case 1:
				return IS_BIT_SET(*iParam1, 2);
		
			case 2:
				return IS_BIT_SET(*iParam1, 3);
		
			case 3:
				return IS_BIT_SET(*iParam1, 4);
		
			case 4:
				return IS_BIT_SET(*iParam1, 5);
		
			case 5:
				return IS_BIT_SET(*iParam1, 6);
		
			case 6:
				return IS_BIT_SET(*iParam1, 7);
		
			case 7:
				return IS_BIT_SET(*iParam1, 8);
		
			case 8:
				return IS_BIT_SET(*uParam2, 8);
		
			case 9:
				return IS_BIT_SET(*uParam2, 9);
		
			case 10:
				return IS_BIT_SET(*uParam2, 10);
		
			case 11:
				return IS_BIT_SET(*uParam2, 11);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x9F73F8B4(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x1E97 (7831)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 20);
		
			case 1:
				return IS_BIT_SET(iParam0, 21);
		
			case 2:
				return IS_BIT_SET(iParam0, 22);
		
			case 3:
				return IS_BIT_SET(iParam0, 23);
		
			case 4:
				return IS_BIT_SET(iParam0, 24);
		
			case 5:
				return IS_BIT_SET(iParam1, 25);
		
			case 6:
				return IS_BIT_SET(iParam1, 26);
		
			case 7:
				return IS_BIT_SET(iParam1, 27);
		
			case 8:
				return IS_BIT_SET(*uParam2, 12);
		
			case 9:
				return IS_BIT_SET(*uParam2, 13);
		
			case 10:
				return IS_BIT_SET(*uParam2, 14);
		
			case 11:
				return IS_BIT_SET(*uParam2, 15);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0xEC19B717(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x1F64 (8036)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 11);
		
			case 1:
				return IS_BIT_SET(iParam0, 12);
		
			case 2:
				return IS_BIT_SET(iParam0, 13);
		
			case 3:
				return IS_BIT_SET(iParam0, 14);
		
			case 4:
				return IS_BIT_SET(iParam0, 15);
		
			case 5:
				return IS_BIT_SET(iParam1, 22);
		
			case 6:
				return IS_BIT_SET(iParam1, 23);
		
			case 7:
				return IS_BIT_SET(iParam1, 24);
		
			case 8:
				return IS_BIT_SET(*uParam2, 16);
		
			case 9:
				return IS_BIT_SET(*uParam2, 17);
		
			case 10:
				return IS_BIT_SET(*uParam2, 18);
		
			case 11:
				return IS_BIT_SET(*uParam2, 19);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x68D7C058(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x2031 (8241)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 0);
		
			case 1:
				return IS_BIT_SET(iParam0, 1);
		
			case 2:
				return IS_BIT_SET(iParam0, 2);
		
			case 3:
				return IS_BIT_SET(iParam0, 3);
		
			case 4:
				return IS_BIT_SET(iParam0, 4);
		
			case 5:
				return IS_BIT_SET(iParam1, 19);
		
			case 6:
				return IS_BIT_SET(iParam1, 20);
		
			case 7:
				return IS_BIT_SET(iParam1, 21);
		
			case 8:
				return IS_BIT_SET(*uParam2, 20);
		
			case 9:
				return IS_BIT_SET(*uParam2, 21);
		
			case 10:
				return IS_BIT_SET(*uParam2, 22);
		
			case 11:
				return IS_BIT_SET(*uParam2, 23);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x6ABBA61F(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x20F9 (8441)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 22);
		
			case 1:
				return IS_BIT_SET(iParam0, 23);
		
			case 2:
				return IS_BIT_SET(iParam0, 24);
		
			case 3:
				return IS_BIT_SET(iParam0, 25);
		
			case 4:
				return IS_BIT_SET(iParam0, 26);
		
			case 5:
				return IS_BIT_SET(iParam1, 16);
		
			case 6:
				return IS_BIT_SET(iParam1, 17);
		
			case 7:
				return IS_BIT_SET(iParam1, 18);
		
			case 8:
				return IS_BIT_SET(*uParam2, 24);
		
			case 9:
				return IS_BIT_SET(*uParam2, 25);
		
			case 10:
				return IS_BIT_SET(*uParam2, 26);
		
			case 11:
				return IS_BIT_SET(*uParam2, 27);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x206594DE(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x21C6 (8646)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 17);
		
			case 1:
				return IS_BIT_SET(iParam0, 18);
		
			case 2:
				return IS_BIT_SET(iParam0, 19);
		
			case 3:
				return IS_BIT_SET(iParam0, 20);
		
			case 4:
				return IS_BIT_SET(iParam0, 21);
		
			case 5:
				return IS_BIT_SET(iParam1, 13);
		
			case 6:
				return IS_BIT_SET(iParam1, 14);
		
			case 7:
				return IS_BIT_SET(iParam1, 15);
		
			case 8:
				return IS_BIT_SET(*uParam2, 28);
		
			case 9:
				return IS_BIT_SET(*uParam2, 29);
		
			case 10:
				return IS_BIT_SET(*uParam2, 30);
		
			case 11:
				return IS_BIT_SET(*uParam2, 31);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x2FAC1B6A(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x2293 (8851)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 10);
		
			case 1:
				return IS_BIT_SET(iParam0, 11);
		
			case 2:
				return IS_BIT_SET(iParam0, 12);
		
			case 3:
				return IS_BIT_SET(iParam0, 13);
		
			case 4:
				return IS_BIT_SET(iParam0, 14);
		
			case 5:
				return IS_BIT_SET(iParam1, 10);
		
			case 6:
				return IS_BIT_SET(iParam1, 11);
		
			case 7:
				return IS_BIT_SET(iParam1, 12);
		
			case 8:
				return IS_BIT_SET(*uParam2, 0);
		
			case 9:
				return IS_BIT_SET(*uParam2, 1);
		
			case 10:
				return IS_BIT_SET(*uParam2, 2);
		
			case 11:
				return IS_BIT_SET(*uParam2, 3);
		}
	}

	return false;
}

BOOL func_0x34639DD6(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x2368 (9064)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 5);
		
			case 1:
				return IS_BIT_SET(iParam0, 6);
		
			case 2:
				return IS_BIT_SET(iParam0, 7);
		
			case 3:
				return IS_BIT_SET(iParam0, 8);
		
			case 4:
				return IS_BIT_SET(iParam0, 9);
		
			case 5:
				return IS_BIT_SET(iParam1, 7);
		
			case 6:
				return IS_BIT_SET(iParam1, 8);
		
			case 7:
				return IS_BIT_SET(iParam1, 9);
		
			case 8:
				return IS_BIT_SET(*uParam2, 4);
		
			case 9:
				return IS_BIT_SET(*uParam2, 5);
		
			case 10:
				return IS_BIT_SET(*uParam2, 6);
		
			case 11:
				return IS_BIT_SET(*uParam2, 7);
		
			default:
			
		}
	}

	return false;
}

BOOL func_0x68D7C058(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x242D (9261)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 0);
		
			case 1:
				return IS_BIT_SET(iParam0, 1);
		
			case 2:
				return IS_BIT_SET(iParam0, 2);
		
			case 3:
				return IS_BIT_SET(iParam0, 3);
		
			case 4:
				return IS_BIT_SET(iParam0, 4);
		
			case 5:
				return IS_BIT_SET(iParam1, 4);
		
			case 6:
				return IS_BIT_SET(iParam1, 5);
		
			case 7:
				return IS_BIT_SET(iParam1, 6);
		
			case 8:
				return IS_BIT_SET(*uParam2, 8);
		
			case 9:
				return IS_BIT_SET(*uParam2, 9);
		
			case 10:
				return IS_BIT_SET(*uParam2, 10);
		
			case 11:
				return IS_BIT_SET(*uParam2, 11);
		}
	}

	return false;
}

BOOL func_0x9D4D0BCD(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x24FE (9470)
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return IS_BIT_SET(iParam0, 25);
		
			case 1:
				return IS_BIT_SET(iParam0, 26);
		
			case 2:
				return IS_BIT_SET(iParam0, 27);
		
			case 3:
				return IS_BIT_SET(iParam0, 28);
		
			case 4:
				return IS_BIT_SET(iParam0, 29);
		
			case 5:
				return IS_BIT_SET(iParam1, 1);
		
			case 6:
				return IS_BIT_SET(iParam1, 2);
		
			case 7:
				return IS_BIT_SET(iParam1, 3);
		
			case 8:
				return IS_BIT_SET(*uParam2, 12);
		
			case 9:
				return IS_BIT_SET(*uParam2, 13);
		
			case 10:
				return IS_BIT_SET(*uParam2, 14);
		
			case 11:
				return IS_BIT_SET(*uParam2, 15);
		
			default:
			
		}
	}

	return false;
}

void func_0xA6E47D73(var uParam0, int iParam1, int iParam2) // Position - 0x25C8 (9672)
{
	if (iParam1 > 12 || iParam1 <= -1)
		return;

	MISC::SET_BIT(&uParam0->f_9[iParam1 /*28*/][iParam2 / 32], iParam2 % 32);
	return;
}

BOOL func_0xB7602DB2(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4) // Position - 0x25FD (9725)
{
	if (iParam4 < 12 && iParam4 >= 0)
	{
		switch (iParam4)
		{
			case 0:
				return IS_BIT_SET(iParam0, 6);
		
			case 1:
				return IS_BIT_SET(iParam0, 16);
		
			case 2:
				return IS_BIT_SET(iParam0, 17);
		
			case 3:
				return IS_BIT_SET(iParam0, 18);
		
			case 4:
				return IS_BIT_SET(iParam0, 19);
		
			case 5:
				return IS_BIT_SET(iParam1, 30);
		
			case 6:
				return IS_BIT_SET(iParam1, 31);
		
			case 7:
				return IS_BIT_SET(iParam2, 0);
		
			case 8:
				return IS_BIT_SET(*uParam3, 12);
		
			case 9:
				return IS_BIT_SET(*uParam3, 13);
		
			case 10:
				return IS_BIT_SET(*uParam3, 14);
		
			case 11:
				return IS_BIT_SET(*uParam3, 15);
		
			default:
			
		}
	}

	return false;
}

void func_0xF047451B(char* sParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, int iParam6) // Position - 0x26C8 (9928)
{
	if (*uParam2 == 0)
		return;

	if (*uParam3 == 0)
		*uParam3 = DATAFILE::DATADICT_GET_ARRAY(*uParam2, sParam0);

	if (*uParam3 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam3, iParam4) == 3)
		*uParam1 = DATAFILE::DATAARRAY_GET_FLOAT(*uParam3, iParam4);
	else if (func_0x353CEA88())
		if (iParam6 != -2340845.8f)
			*uParam1 = iParam6;
	else
		*uParam1 = fParam5;

	return;
}

void func_0x1AF34C1E(int iParam0) // Position - 0x2733 (10035)
{
	if (IS_BIT_SET(Global_4980736.f_93162[iParam0 /*1277*/].f_575, 15))
		func_0xC6CB0094(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), 1);

	if (IS_BIT_SET(Global_4980736.f_93162[iParam0 /*1277*/].f_587, 30))
		func_0xC6CB0094(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), 7);

	if (IS_BIT_SET(Global_4980736.f_93162[iParam0 /*1277*/].f_592, 9))
		func_0xC6CB0094(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), 3);

	if (IS_BIT_SET(Global_4980736.f_93162[iParam0 /*1277*/].f_589, 30))
		func_0xC6CB0094(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), 4);

	if (IS_BIT_SET(Global_4980736.f_93162[iParam0 /*1277*/].f_582, 13))
		func_0xC6CB0094(&(Global_4980736.f_93162[iParam0 /*1277*/].f_166), 5);

	return;
}

void func_0xC6CB0094(var uParam0, int iParam1) // Position - 0x2817 (10263)
{
	MISC::SET_BIT(&uParam0->[iParam1 / 32], iParam1 % 32);
	return;
}

void func_0xE0BB03BB(char* sParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x2831 (10289)
{
	if (*uParam2 == 0)
		return;

	if (*uParam3 == 0)
		*uParam3 = DATAFILE::DATADICT_GET_ARRAY(*uParam2, sParam0);

	if (*uParam3 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam3, iParam4) == 2)
		*uParam1 = DATAFILE::DATAARRAY_GET_INT(*uParam3, iParam4);
	else if (func_0x353CEA88())
		if (iParam6 != -2340845)
			*uParam1 = iParam6;
	else
		*uParam1 = iParam5;

	if (iParam7 != -1)
		!func_0x37869336(uParam1, iParam7);

	return;
}

BOOL func_0x37869336(var uParam0, int iParam1) // Position - 0x28AD (10413)
{
	BOOL flag;

	flag = *uParam0 && iParam1 ^ -1;
	*uParam0 = *uParam0 && iParam1;
	return flag == false;
}

void func_0x4486FD47() // Position - 0x28CC (10444)
{
	int i;
	int j;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2136380241) == 0)
		return;

	if (*Global_4718592.f_163319 <= 0)
		return;

	for (i = 0; i <= *Global_4718592.f_163319 - 1; i = i + 1)
	{
		if (Global_4718592.f_163320[i /*2279*/].f_1645 <= 0)
		{
		}
		else
		{
			for (j = 0; j <= Global_4718592.f_163320[i /*2279*/].f_1645 - 1; j = j + 1)
			{
				if (Global_4718592.f_163320[i /*2279*/].f_1715[j] == 9 && SYSTEM::ROUND(Global_4718592.f_163320[i /*2279*/].f_1781[j]) == 1)
					Global_4718592.f_163320[i /*2279*/].f_1781[j] = 2f;
			}
		}
	}

	return;
}

void func_0x58DD0C67() // Position - 0x299F (10655)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0 && IS_BIT_SET(Global_1575014, 20))
		MISC::CLEAR_BIT(&Global_1575014, 20);

	return;
}

void func_0x3A8B2E2C() // Position - 0x29CB (10699)
{
	BOOL flag;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_survival_creator")) == 0)
		return;

	flag = false;

	if (Global_4718592 != 3)
	{
		Global_4718592 = 3;
		bLocal_49 = true;
		flag = true;
	}

	if (Global_1574608)
	{
		Global_1574608 = false;
		Global_1574530 = 0;
		bLocal_49 = true;
		flag = true;
	}

	if (bLocal_49)
	{
		if (Global_24569.f_9243)
			Global_24569.f_9243 = 0;
	
		if (!flag)
			bLocal_49 = false;
	}

	return;
}

void func_0x704D0C43() // Position - 0x2A2E (10798)
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2136380241) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) == 0)
	{
		bLocal_51 = false;
		return;
	}

	if (bLocal_51)
		return;

	if (Global_5242880 <= 0)
		return;

	bLocal_51 = true;

	for (i = 0; i <= Global_5242880 - 1; i = i + 1)
	{
		if (Global_5242880.f_1[i /*170*/].f_10 == -2)
		{
			Global_5242880.f_1[i /*170*/].f_10 = -1;
			MISC::SET_BIT(&(Global_5242880.f_1[i /*170*/].f_23), 21);
		}
		else if (Global_5242880.f_1[i /*170*/].f_10 != -1 && IS_BIT_SET(Global_5242880.f_1[i /*170*/].f_10, 31))
		{
			MISC::CLEAR_BIT(&(Global_5242880.f_1[i /*170*/].f_10), 31);
			MISC::SET_BIT(&(Global_5242880.f_1[i /*170*/].f_23), 21);
		}
	}

	return;
}

void func_0xFD25BD04() // Position - 0x2B04 (11012)
{
	BOOL flag;
	int i;

	if (!bLocal_51)
		return;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2136380241) == 0)
	{
		iLocal_50 = -1;
		return;
	}

	if (Global_5242880 <= 0)
		return;

	if (iLocal_50 != Global_1059360.f_11)
	{
		if (iLocal_50 == 3 || Global_1059360.f_11 == 3)
		{
			flag = Global_1059360.f_11 == 3;
		
			for (i = 0; i <= Global_5242880 - 1; i = i + 1)
			{
				if (flag)
					if (IS_BIT_SET(Global_5242880.f_1[i /*170*/].f_23, 21))
						if (Global_5242880.f_1[i /*170*/].f_10 == -1)
							Global_5242880.f_1[i /*170*/].f_10 = -2;
						else
							MISC::SET_BIT(&(Global_5242880.f_1[i /*170*/].f_10), 31);
				else if (Global_5242880.f_1[i /*170*/].f_10 == -2)
					Global_5242880.f_1[i /*170*/].f_10 = -1;
				else if (Global_5242880.f_1[i /*170*/].f_10 != -1 && IS_BIT_SET(Global_5242880.f_1[i /*170*/].f_10, 31))
					MISC::CLEAR_BIT(&(Global_5242880.f_1[i /*170*/].f_10), 31);
			}
		}
	}

	iLocal_50 = Global_1059360.f_11;
	return;
}

void func_0x19118056() // Position - 0x2C23 (11299)
{
	Hash model;
	int num;
	int data;
	float num2;
	float num3;
	Vector3 vector;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_17))
	{
		MISC::SET_BIT(&Global_9503, 2);
	
		if (func_0x3E6EF13(&uLocal_17, 60000, false))
		{
			func_0x5EA17708(&uLocal_17, false, false);
			_STOPWATCH_DESTROY(&uLocal_17);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_15) && func_0x3E6EF13(&uLocal_15, 1000, false))
	{
		if (iLocal_24 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_24 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_24, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_0x3E6EF13(&uLocal_15, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_24))
				AUDIO::STOP_SOUND(iLocal_24);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_24);
			iLocal_24 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_0x5EA17708(&uLocal_15, false, false);
			_STOPWATCH_DESTROY(&uLocal_15);
		}
	}

	if (!bLocal_9 && !func_0x61E5B0C0())
		return;

	bLocal_9 = true;
	MISC::SET_BIT(&Global_9503, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_8))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_8, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_8, 8000);
			num = GET_MP_INT_CHARACTER_STAT(7869, -1);
			func_0xC00D48A9(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_19 = { ENTITY::GET_ENTITY_COORDS(obLocal_8, false) };
			iLocal_22 = 0;
		}
	}
	else
	{
		CHILIADWAKEUP_ROTATE_OBJECT();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_23 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_23 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_23, "07", obLocal_8, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_10)
			{
				if (func_0x3E6EF13(&uLocal_11, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_8, false);
					func_0x5EA17708(&uLocal_11, false, false);
					_STOPWATCH_DESTROY(&uLocal_11);
					func_0xCFF63EEF(&uLocal_13, false, false);
					bLocal_10 = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(func_0x8C4F01CE(&uLocal_13, false, false)) / SYSTEM::TO_FLOAT(func_0x729E933());
				num3 = SYSTEM::TO_FLOAT(func_0x8C4F01CE(&uLocal_11, false, false)) / SYSTEM::TO_FLOAT(CHILIADWAKEUP_GET_LERP_TIME());
				num3 = num3 * num2;
				vector = { LERP_VECTOR(uLocal_19, CHILIADWAKEUP_GET_LERP_END_COORD(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_8, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_22 = iLocal_22 + 1;
					uLocal_19 = { ENTITY::GET_ENTITY_COORDS(obLocal_8, false) };
					func_0x5EA17708(&uLocal_11, false, false);
					_STOPWATCH_DESTROY(&uLocal_11);
				
					if (CHILIADWAKEUP_GET_LERP_TIME() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_8);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_23))
							AUDIO::STOP_SOUND(iLocal_23);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_23);
						iLocal_23 = -1;
						func_0xCFF63EEF(&uLocal_15, false, false);
						func_0xCFF63EEF(&uLocal_17, false, false);
						func_0x5EA17708(&uLocal_13, false, false);
						_STOPWATCH_DESTROY(&uLocal_13);
						uLocal_19 = { 0f, 0f, 0f };
						iLocal_22 = 0;
						bLocal_9 = false;
						bLocal_10 = false;
					}
				}
			}
		}
	}

	return;
}

Vector3 LERP_VECTOR(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x2EC8 (11976)
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

Vector3 CHILIADWAKEUP_GET_LERP_END_COORD() // Position - 0x2EE3 (12003)
{
	switch (iLocal_22)
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

int CHILIADWAKEUP_GET_LERP_TIME() // Position - 0x2F55 (12117)
{
	switch (iLocal_22)
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

int func_0x729E933() // Position - 0x2F93 (12179)
{
	return 3150;
}

int func_0x8C4F01CE(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2F9E (12190)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void CHILIADWAKEUP_ROTATE_OBJECT() // Position - 0x2FE5 (12261)
{
	float entityRotation;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_8, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_8, entityRotation, 2, true);
	return;
}

void func_0xC00D48A9(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3016 (12310)
{
	Hash statName;

	statName = func_0x505A9F99(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

Hash func_0x505A9F99(int iParam0, int iParam1) // Position - 0x3039 (12345)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, GET_SLOT_NUMBER(iParam1));
}

int GET_SLOT_NUMBER(int iCharacter) // Position - 0x304E (12366)
{
	int num;
	int num2;

	num = iCharacter;

	if (num == -1)
	{
		num2 = func_0x47FF56D2();
	
		if (num2 > -1)
		{
			Global_2741491 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741491 = 1;
		}
	}

	return num;
}

int func_0x47FF56D2() // Position - 0x3082 (12418)
{
	return Global_1574928;
}

int GET_MP_INT_CHARACTER_STAT(int iParam0, int iParam1) // Position - 0x308E (12430)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16764)
	{
		statHash = func_0x505A9F99(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_0x61E5B0C0() // Position - 0x30BD (12477)
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_2640100 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_0x52131E1C(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2686119.f_3083.f_178 >= 1 && Global_2686119.f_3083.f_178 < 4 && func_0x3EA48773() && func_0x1F699EBA())
		return true;

	return false;
}

BOOL func_0x1F699EBA() // Position - 0x313E (12606)
{
	if (_STAT_GET_PACKED_BOOL(15476, -1) && GET_MP_INT_CHARACTER_STAT(5453, func_0x47FF56D2()) > 577)
		return true;

	return false;
}

BOOL func_0x3EA48773() // Position - 0x316A (12650)
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

BOOL func_0x52131E1C(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x31E1 (12769)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam1) <= fParam4 * fParam4;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x31FE (12798)
{
	if (iParam1 == -1)
		iParam1 = func_0x47FF56D2();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x321A (12826)
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x3227 (12839)
{
	return uParam0->f_1;
}

void func_0x9C3F8C27() // Position - 0x3233 (12851)
{
	if (Global_1970021)
		if (Global_1980400)
			Global_1970021 = false;

	return;
}

void func_0xA2C27B4E() // Position - 0x324E (12878)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("freemode")) == 0 || !func_0x129F0515())
		return;

	if (func_0x3E6EF13(&uLocal_65, 5000, false))
	{
		func_0x5EA17708(&uLocal_65, false, false);
	
		if (func_0x70C30001(1) || func_0x70C30001(3) || func_0x70C30001(2))
			if (func_0x31D8CA48() && _STAT_GET_PACKED_BOOL(54734, -1))
				_STAT_SET_PACKED_BOOL(54734, false, -1);
	}

	return;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x32C4 (12996)
{
	if (iParam2 == -1)
		iParam2 = func_0x47FF56D2();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

BOOL func_0x31D8CA48() // Position - 0x32E2 (13026)
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() >= GET_MP_INT_CHARACTER_STAT(13092, -1);
}

BOOL func_0x70C30001(int iParam0) // Position - 0x32F7 (13047)
{
	int num;

	if (func_0xC09E3FE(iParam0))
	{
		num = func_0x17B5F984(iParam0);
	
		if (num != 16764)
			return GET_MP_INT_CHARACTER_STAT(num, -1) != 0;
	}
	else
	{
		return false;
	}

	return false;
}

int func_0x17B5F984(int iParam0) // Position - 0x332C (13100)
{
	switch (iParam0)
	{
		case 1:
			return 14169;
	
		case 2:
			return 14197;
	
		case 3:
			return 14225;
	}

	return 16764;
}

BOOL func_0xC09E3FE(int iParam0) // Position - 0x336B (13163)
{
	int num;

	num = iParam0;

	if (num <= 0 || num >= 4)
		return false;

	return true;
}

BOOL func_0x129F0515() // Position - 0x338D (13197)
{
	return func_0xD64AD64C(func_0x47FF56D2() + 1);
}

BOOL func_0xD64AD64C(int iParam0) // Position - 0x339F (13215)
{
	return Global_1574538[iParam0];
}

void func_0xCC8F99D1() // Position - 0x33AF (13231)
{
	if (Global_1989773)
		func_0x1B5FF1EC();

	return;
}

void func_0x1B5FF1EC() // Position - 0x33C2 (13250)
{
	if (func_0x8E975DBA())
		Global_2673273.f_1023.f_17 = 1;

	return;
}

BOOL func_0x8E975DBA() // Position - 0x33DB (13275)
{
	if (Global_2673273.f_1023.f_5 == -1)
		return false;

	return true;
}

void func_0xE14985A9() // Position - 0x33F5 (13301)
{
	if (Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 != PLAYER::PLAYER_ID())
		return;

	if (!func_0xDB07D527(PLAYER::PLAYER_ID()))
		return;

	if (func_0x5976C0FC() != 0)
		return;

	Global_262145.f_26578 = func_0x564457B1();
	return;
}

int func_0x564457B1() // Position - 0x343C (13372)
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45696[i /*32*/])
		{
			switch (MISC::GET_HASH_KEY(&(Global_45696[i /*32*/].f_8)))
			{
				case joaat("MPTV_SEAT"):
				case joaat("MPTV_SEAT_CLU"):
				case joaat("MPTV_SEAT_CLUP"):
				case joaat("MPTV_SEATO"):
				case joaat("MPTV_SEATONP"):
				case joaat("MPTV_SEAT_KMO"):
				case joaat("MPTV_SEAT_KMONP"):
				case joaat("MPTV_SEATO2"):
				case joaat("MPTV_SEATO2NP"):
				case joaat("MPTV_SEAT_KMO2"):
				case joaat("MPTV_SEAT_NA"):
				case joaat("MPTV_SEAT_NA_PC"):
				case joaat("MPTV_SEAT_OFF"):
				case joaat("MPTV_SEAT_OFFNP"):
				case joaat("MPTV_SEAT_KM"):
				case joaat("MPTV_SEAT_KM_OF"):
					return 1;
			}
		}
	}

	return 0;
}

int func_0x5976C0FC() // Position - 0x34DA (13530)
{
	return func_0x1A54F100(PLAYER::PLAYER_ID());
}

int func_0x1A54F100(Player plParam0) // Position - 0x34EA (13546)
{
	return MISC::GET_BITS_IN_RANGE(Global_2658293[plParam0 /*468*/].f_325.f_3, 28, 31);
}

BOOL func_0xDB07D527(Player plParam0) // Position - 0x3507 (13575)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658293[plParam0 /*468*/].f_325.f_8 != -1)
				return func_0xEE599357(Global_2658293[plParam0 /*468*/].f_325.f_8) == 15;

	return false;
}

int func_0xEE599357(int iParam0) // Position - 0x354E (13646)
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

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x3A9E (15006)
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
				if (player == Global_2673273.f_3)
					return Global_2673273.f_2;
				else if (Global_2658293[player /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x3AFE (15102)
{
	return -1;
}

void func_0x1BA4DA7E() // Position - 0x3B07 (15111)
{
	int i;
	BOOL flag;
	int _int;

	if (*Global_4718592.f_132931 != Global_262145.f_30436[7])
	{
		iLocal_59 = 0;
		return;
	}

	if (Global_1058150.f_272 <= 0)
		return;

	flag = false;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_60[i]))
		{
			if (IS_BIT_SET(iLocal_59, 0 + i))
			{
				func_0xDD0CA8BE(66 + i);
				MISC::CLEAR_BIT(&iLocal_59, 0 + i);
			}
		
			if (!flag)
				flag = true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_60[i], false))
		{
			if (!IS_BIT_SET(iLocal_59, 0 + i))
				MISC::SET_BIT(&iLocal_59, 0 + i);
		}
		else if (IS_BIT_SET(iLocal_59, 0 + i))
		{
			func_0xDD0CA8BE(66 + i);
			MISC::CLEAR_BIT(&iLocal_59, 0 + i);
		}
	}

	if (flag)
	{
		for (i = 0; i <= Global_1058150.f_272 - 1; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1058150.f_157[i]))
			{
			}
			else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(Global_1058150.f_157[i], "MC_EntityID"))
				{
					_int = DECORATOR::DECOR_GET_INT(Global_1058150.f_157[i], "MC_EntityID");
				
					if (_int >= 66 && _int <= 69)
						uLocal_60[_int - 66] = Global_1058150.f_157[i];
				}
			}
		}
	}

	return;
}

void func_0xDD0CA8BE(int iParam0) // Position - 0x3C55 (15445)
{
	Hash eventData;
	int playerBits;

	eventData = -1946226138;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_4 = 92;
	eventData.f_6 = iParam0;
	iParam0 > -1;
	playerBits = func_0x62EC6C23(true, true);

	if (!(playerBits == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 19, playerBits, eventData);

	return;
}

int func_0x62EC6C23(BOOL bParam0, BOOL bParam1) // Position - 0x3C9B (15515)
{
	var address;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(player, false, false))
			if (player != PLAYER::PLAYER_ID() || bParam0)
				if (bParam1)
					MISC::SET_BIT(&address, i);
				else if (!func_0x1A32E11A(player, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_0x1A32E11A(Player plParam0, int iParam1) // Position - 0x3D00 (15616)
{
	BOOL flag;

	if (!func_0x6A46C9B4(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_0xAA57225E(-1, false) == 8;
	else
		flag = Global_1845298[plParam0 /*881*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_0xAA57225E(int iParam0, BOOL bParam1) // Position - 0x3D59 (15705)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_0x47FF56D2();

	if (Global_1575075[num2] == 1)
	{
		num = 8;
	}
	else
	{
		num = Global_1574922[num2];
		bParam1;
	}

	return num;
}

BOOL func_0x6A46C9B4(Player plParam0) // Position - 0x3D95 (15765)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

void func_0xB1D07BEA() // Position - 0x3DB7 (15799)
{
	if (!func_0xDA2E4073())
		return;

	if (Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_880 == 3 && !func_0x4617447A(0))
		Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_880 = 4;

	return;
}

BOOL func_0x4617447A(int iParam0) // Position - 0x3DF7 (15863)
{
	BOOL num;
	int i;
	Player player;

	num = 1;

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)))
		{
			player = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (Global_1845298[player /*881*/] == iParam0 && !func_0x1A32E11A(player, 0) && !func_0xC4063029(player))
				num = 0;
		}
	}

	return num;
}

BOOL func_0xC4063029(Player plParam0) // Position - 0x3E57 (15959)
{
	return IS_BIT_SET(Global_1845298[plParam0 /*881*/].f_97.f_32, 5);
}

BOOL func_0xDA2E4073() // Position - 0x3E6E (15982)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return func_0x4228A1C2();

	return func_0xDB57D53B(*Global_4718592.f_132931);
}

BOOL func_0xDB57D53B(int iParam0) // Position - 0x3E92 (16018)
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 21; i = i + 1)
	{
		if (Global_262145.f_6059[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_0x4228A1C2() // Position - 0x3ECC (16076)
{
	return Global_2685152.f_22;
}

void func_0xA53E1EB4() // Position - 0x3EDA (16090)
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		if (bLocal_58)
			bLocal_58 = false;
	
		return;
	}

	if (bLocal_58)
		return;

	if (*Global_4718592.f_132931 != Global_262145.f_28854[0])
	{
		bLocal_58 = true;
		return;
	}

	for (i = 0; i <= 11; i = i + 1)
	{
		Global_4980736.f_93162[0 /*1277*/].f_166.f_9[i /*28*/].f_17 = -1;
		Global_4980736.f_93162[1 /*1277*/].f_166.f_9[i /*28*/].f_17 = -1;
	}

	bLocal_58 = true;
	return;
}

void func_0x3B67A795() // Position - 0x3F65 (16229)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		if (bLocal_57)
			bLocal_57 = false;
	
		return;
	}

	if (bLocal_57)
		return;

	if (*Global_4718592.f_132931 != Global_262145.f_32265[4])
	{
		bLocal_57 = true;
		return;
	}

	Global_4718592.f_208680[0 /*346*/].f_9[1 /*28*/].f_13 = 9f;
	Global_4718592.f_208680[0 /*346*/].f_9[2 /*28*/].f_13 = 9f;
	bLocal_57 = true;
	return;
}

void func_0x3814269A() // Position - 0x3FDF (16351)
{
	BOOL flag;
	int i;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (!Global_2685152.f_25)
		return;

	flag = false;

	for (i = 0; i < 11; i = i + 1)
	{
		if (*Global_4718592.f_132931 == Global_262145.f_29498[i])
			flag = true;
	}

	if (!flag)
		Global_2685152.f_25 = 0;

	return;
}

void func_0x2BD88F0B() // Position - 0x403E (16446)
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-635282018) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) == 0)
	{
		if (bLocal_56)
			bLocal_56 = false;
	
		return;
	}

	if (bLocal_56)
		return;

	if (Global_4980736.f_7125 <= 0)
		return;

	for (i = 0; i <= Global_4980736.f_7125 - 1; i = i + 1)
	{
		if (Global_4980736.f_7128[i /*668*/].f_157 == 1 || Global_4980736.f_7128[i /*668*/].f_157 == 0)
			if (Global_4980736.f_7128[i /*668*/].f_158 > 1)
				Global_4980736.f_7128[i /*668*/].f_158 = 1;
	}

	bLocal_56 = true;
	return;
}

void func_0xC589C7A3() // Position - 0x410C (16652)
{
	if (*Global_4718592.f_132931 != Global_262145.f_33216[6])
		return;

	if (func_0x3129D82() == 1 && Global_4718592.f_111807[0] != 20)
		Global_4718592.f_111807[0] = 20;

	return;
}

int func_0x3129D82() // Position - 0x415B (16731)
{
	int i;

	for (i = 6; i >= 0; i = i + -1)
	{
		if (func_0x3B320728(i))
			return i;
	}

	return -1;
}

BOOL func_0x3B320728(int iParam0) // Position - 0x4184 (16772)
{
	if (iParam0 < 0 || iParam0 >= 7)
		return false;

	return IS_BIT_SET(Global_2686119.f_3930, iParam0);
}

void func_0x578A85EC() // Position - 0x41AB (16811)
{
	Ped ped;
	Vector3 vector;
	float heading;

	if (func_0xAB4D17EF(Global_2673273.f_4.f_16) != 4 || Global_2733190.f_5662 < 5)
	{
		iLocal_53 = -1;
		return;
	}

	if (iLocal_53 == -1)
	{
		if (_NETWORK_IS_PLAYER_VALID(Global_2673273.f_4.f_16, true, true) && !PLAYER::IS_PLAYER_CONTROL_ON(Global_2673273.f_4.f_16) && !func_0x612EAB6A(Global_2673273.f_4.f_16, false, false) && IS_BIT_SET(Global_1845298[Global_2673273.f_4.f_16 /*881*/].f_879, 16))
			func_0xEEFF5D52();
	}
	else
	{
		ped = PLAYER::PLAYER_PED_ID();
	
		if (!IS_BIT_SET(Global_1845298[Global_2673273.f_4.f_16 /*881*/].f_879, 16) && !ENTITY::IS_ENTITY_PLAYING_ANIM(ped, "anim@scripted@heist@ig9_control_tower@male@", "loop_electric_box", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(ped, "anim@scripted@heist@ig9_control_tower@male@", "exit_electric_box", 3))
		{
			func_0x1D1A53E0(&vector, &heading);
			ENTITY::SET_ENTITY_COORDS(ped, vector, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(ped, heading);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			iLocal_53 = -1;
		}
	}

	return;
}

void func_0x1D1A53E0(var uParam0, var uParam1) // Position - 0x42AE (17070)
{
	switch (iLocal_53)
	{
		case 0:
			*uParam0 = { 5263.021f, -5428.8184f, 89.7288f };
			*uParam1 = 51.8304f;
			break;
	
		case 1:
			*uParam0 = { 5264.774f, -5429.721f, 108.1544f };
			*uParam1 = 139.2505f;
			break;
	
		case 2:
			*uParam0 = { 5267.1777f, -5426.7036f, 140.0453f };
			*uParam1 = 321.4792f;
			break;
	
		case 3:
			*uParam0 = { 5265.64f, -5420.846f, 64.5976f };
			*uParam1 = 54.8586f;
			break;
	
		case 4:
			*uParam0 = { 5261.5234f, -5432.7314f, 64.5972f };
			*uParam1 = 140.0567f;
			break;
	}

	return;
}

void func_0xEEFF5D52() // Position - 0x4371 (17265)
{
	if (func_0x1FB736D4(Global_2673273.f_4.f_11, 5261.94f, -5428.05f, 89.73f, 1f, false))
		iLocal_53 = 0;
	else if (func_0x1FB736D4(Global_2673273.f_4.f_11, 5264.2163f, -5430.572f, 108.1535f, 1f, false))
		iLocal_53 = 1;
	else if (func_0x1FB736D4(Global_2673273.f_4.f_11, 5267.6377f, -5425.772f, 140.0445f, 1f, false))
		iLocal_53 = 2;
	else if (func_0x1FB736D4(Global_2673273.f_4.f_11, 5264.5312f, -5419.9517f, 64.5961f, 1f, false))
		iLocal_53 = 3;
	else if (func_0x1FB736D4(Global_2673273.f_4.f_11, 5261.1045f, -5434.021f, 64.5966f, 1f, false))
		iLocal_53 = 4;

	return;
}

BOOL func_0x1FB736D4(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7) // Position - 0x443E (17470)
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - fParam3) <= fParam6)
			if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= fParam6)
				if (MISC::ABSF(fParam0.f_2 - fParam3.f_2) <= fParam6)
					return true;
	else if (MISC::ABSF(fParam0 - fParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= fParam6)
			return true;

	return false;
}

BOOL func_0x612EAB6A(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x44B9 (17593)
{
	if (Global_2658293[plParam0 /*468*/].f_236 == 99)
		if (bParam2 && Global_2658293[plParam0 /*468*/].f_239 == 0 || bParam2 == false)
			return false;

	if (bParam1)
		if (Global_2658293[plParam0 /*468*/].f_236 == 13)
			return false;

	return true;
}

int func_0xAB4D17EF(Player plParam0) // Position - 0x4510 (17680)
{
	if (func_0x5EA8DF5A(plParam0) == 256)
		return func_0x48014DA(plParam0);

	return -1;
}

int func_0x48014DA(Player plParam0) // Position - 0x452E (17710)
{
	if (func_0xF79CCA47(plParam0, false))
		return Global_1892925[plParam0 /*615*/].f_10.f_183;

	return -1;
}

BOOL func_0xF79CCA47(Player plParam0, BOOL bParam1) // Position - 0x4551 (17745)
{
	if (func_0x6A46C9B4(plParam0))
		if (Global_1892925[plParam0 /*615*/].f_10.f_34 != -1 || bParam1 && Global_1892925[plParam0 /*615*/].f_10.f_33 != -1)
			return true;

	return false;
}

int func_0x5EA8DF5A(Player plParam0) // Position - 0x4595 (17813)
{
	if (func_0x6A46C9B4(plParam0))
		if (func_0xF79CCA47(plParam0, false))
			return Global_1892925[plParam0 /*615*/].f_10.f_34;

	return -1;
}

void func_0xAAFAE437() // Position - 0x45C1 (17857)
{
	int i;
	int num;

	if (bLocal_52)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("freemode")) == 0)
			bLocal_52 = false;
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("freemode")) == 0 || !func_0x129F0515())
		return;

	if (_STAT_GET_PACKED_BOOL(60118, -1))
	{
		bLocal_52 = true;
		return;
	}

	if (!func_0x84068466())
	{
		_STAT_SET_PACKED_BOOL(60118, true, -1);
		bLocal_52 = true;
		return;
	}

	for (i = 1; i <= 4 - 1; i = i + 1)
	{
		num = i;
		func_0xEB093EAC(24, num, 17, 32);
		func_0xEB093EAC(25, num, 17, 32);
		func_0xEB093EAC(26, num, 17, 32);
		func_0xEB093EAC(27, num, 17, 32);
		func_0xEB093EAC(28, num, 17, 32);
	}

	_STAT_SET_PACKED_BOOL(60118, true, -1);
	bLocal_52 = true;
	return;
}

void func_0xEB093EAC(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4683 (18051)
{
	int num;
	int num2;
	int num3;
	int num4;

	num = func_0x78FF4B91(iParam1);
	num2 = func_0x841107BD(iParam0, num);
	num3 = _STAT_GET_PACKED_INT(num2, -1);

	if (num3 >= iParam2)
	{
		num4 = num3 + 1;
	
		if (num4 >= iParam3)
			num4 = 0;
	
		func_0x4C8CAB3D(num2, num4, -1);
	}

	return;
}

void func_0x4C8CAB3D(int iParam0, int iParam1, int iParam2) // Position - 0x46C6 (18118)
{
	if (iParam2 == -1)
		iParam2 = func_0x47FF56D2();

	if (iParam1 < 0)
		iParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
	return;
}

int _STAT_GET_PACKED_INT(int iParam0, int iParam1) // Position - 0x46EE (18158)
{
	if (iParam1 == -1)
		iParam1 = func_0x47FF56D2();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_0x841107BD(int iParam0, int iParam1) // Position - 0x470A (18186)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 177:
					return 59816;
			
				case 178:
					return 59833;
			
				case 179:
					return 59850;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 177:
					return 59817;
			
				case 178:
					return 59834;
			
				case 179:
					return 59851;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 177:
					return 59818;
			
				case 178:
					return 59835;
			
				case 179:
					return 59852;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 177:
					return 59860;
			
				case 178:
					return 59871;
			
				case 179:
					return 59882;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 177:
					return 59861;
			
				case 178:
					return 59872;
			
				case 179:
					return 59883;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 177:
					return 59862;
			
				case 178:
					return 59873;
			
				case 179:
					return 59884;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 177:
					return 59863;
			
				case 178:
					return 59874;
			
				case 179:
					return 59885;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 177:
					return 59864;
			
				case 178:
					return 59875;
			
				case 179:
					return 59886;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 177:
					return 59865;
			
				case 178:
					return 59876;
			
				case 179:
					return 59887;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 177:
					return 59866;
			
				case 178:
					return 59877;
			
				case 179:
					return 59888;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 177:
					return 59867;
			
				case 178:
					return 59878;
			
				case 179:
					return 59889;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 177:
					return 59868;
			
				case 178:
					return 59879;
			
				case 179:
					return 59890;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 177:
					return 59869;
			
				case 178:
					return 59880;
			
				case 179:
					return 59891;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 177:
					return 59870;
			
				case 178:
					return 59881;
			
				case 179:
					return 59892;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 177:
					return 60037;
			
				case 178:
					return 60041;
			
				case 179:
					return 60045;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 177:
					return 60038;
			
				case 178:
					return 60042;
			
				case 179:
					return 60046;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 177:
					return 60039;
			
				case 178:
					return 60043;
			
				case 179:
					return 60047;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 177:
					return 60040;
			
				case 178:
					return 60044;
			
				case 179:
					return 60048;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 177:
					return 24958;
			
				case 178:
					return 7675;
			
				case 179:
					return 7678;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 177:
					return 24959;
			
				case 178:
					return 7676;
			
				case 179:
					return 7679;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 177:
					return 24960;
			
				case 178:
					return 7677;
			
				case 179:
					return 7680;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 177:
					return 59810;
			
				case 178:
					return 59827;
			
				case 179:
					return 59844;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 177:
					return 59811;
			
				case 178:
					return 59828;
			
				case 179:
					return 59845;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 177:
					return 59812;
			
				case 178:
					return 59829;
			
				case 179:
					return 59846;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 177:
					return 59802;
			
				case 178:
					return 59819;
			
				case 179:
					return 59836;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 177:
					return 59803;
			
				case 178:
					return 59820;
			
				case 179:
					return 59837;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 177:
					return 59804;
			
				case 178:
					return 59821;
			
				case 179:
					return 59838;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 177:
					return 59805;
			
				case 178:
					return 59822;
			
				case 179:
					return 59839;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 177:
					return 59806;
			
				case 178:
					return 59823;
			
				case 179:
					return 59840;
			}
			break;
	
		default:
			break;
	}

	return 60188;
}

int func_0x78FF4B91(int iParam0) // Position - 0x4E57 (20055)
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

BOOL func_0x84068466() // Position - 0x4E88 (20104)
{
	return _STAT_GET_PACKED_BOOL(54768, -1);
}

void func_0x76B80006() // Position - 0x4E99 (20121)
{
	Interior interiorAtCoordsWithType;
	int num;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-635282018) == 0)
		return;

	if (*Global_4718592.f_132931 != Global_262145.f_37389[3])
		return;

	if (!IS_BIT_SET(Global_1058038.f_13, 1))
		return;

	interiorAtCoordsWithType = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2583.9f, 5961.4f, -49f, "m26_1_int_art_worshop");
	interiorAtCoordsWithType == 0;

	if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoordsWithType) && INTERIOR::IS_INTERIOR_READY(interiorAtCoordsWithType))
		return;

	INTERIOR::CAP_INTERIOR(interiorAtCoordsWithType, false);
	INTERIOR::DISABLE_INTERIOR(interiorAtCoordsWithType, false);

	if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoordsWithType))
	{
		if (IS_BIT_SET(*Global_4718592.f_189727, 0))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_EMP");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_EMP");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 1))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_CARD");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_CARD");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 2))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_DRILLS");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_DRILLS");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 3))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_HAZMAT");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_HAZMAT");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 4))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_MANHOLE");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_MANHOLE");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 5))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_TRACKER");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_TRACKER");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 6))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_HACKING");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_HACKING");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 7))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_TACTICAL");
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_THERMITE");
		}
		else
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_TACTICAL");
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_THERMITE");
		}
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 8))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_MAIL_SUITS");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_MAIL_SUITS");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 9))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_DOOR");
			num = func_0xE1B4762(Global_1925989);
		
			switch (num)
			{
				case 0:
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_ANGEL");
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_HAVILAND");
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_OG");
					break;
			
				case 1:
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_ANGEL");
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_HAVILAND");
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_OG");
					break;
			
				case 2:
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_ANGEL");
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_HAVILAND");
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_OG");
					break;
			}
		}
		else
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_DOOR");
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_ANGEL");
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_HAVILAND");
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_VAULT_HACKING_OG");
		}
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 10))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_GLASS_CUTTER");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_GLASS_CUTTER");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 11))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_STREET_WEAPONS");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_STREET_WEAPONS");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 12))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_STEALTH_WEAPONS");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_STEALTH_WEAPONS");
	
		if (IS_BIT_SET(*Global_4718592.f_189727, 13))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_MILITARY_WEAPONS");
		else
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, "SET_MILITARY_WEAPONS");
	
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != interiorAtCoordsWithType && INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW() != interiorAtCoordsWithType)
			INTERIOR::REFRESH_INTERIOR(interiorAtCoordsWithType);
	
		INTERIOR::PIN_INTERIOR_IN_MEMORY(interiorAtCoordsWithType);
	}

	return;
}

int func_0xE1B4762(Player plParam0) // Position - 0x5221 (21025)
{
	int i;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_0xA5E2C6F8(plParam0, i))
			return i;
	}

	return 0;
}

BOOL func_0xA5E2C6F8(Player plParam0, int iParam1) // Position - 0x5259 (21081)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		if (iParam1 < 0 || iParam1 >= 3)
			return false;
	
		switch (iParam1)
		{
			case 0:
				return IS_BIT_SET(Global_1882652[plParam0 /*321*/].f_158.f_43.f_1, 8);
		
			case 1:
				return IS_BIT_SET(Global_1882652[plParam0 /*321*/].f_158.f_43.f_1, 9);
		
			case 2:
				return IS_BIT_SET(Global_1882652[plParam0 /*321*/].f_158.f_43.f_1, 10);
		
			default:
			
		}
	}

	return false;
}

void func_0xD0EF835E() // Position - 0x52D8 (21208)
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-635282018) <= 0)
	{
		bLocal_48 = false;
		return;
	}

	if (!func_0x39484892())
	{
		bLocal_48 = false;
		return;
	}

	if (bLocal_48)
		return;

	for (i = 0; i <= 34; i = i + 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&Global_114963.f_14150[i /*104*/], "KSC_TXT_BRB3"))
		{
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&(Global_114963.f_14150[i /*104*/].f_83), "~a~", 64);
			Global_114963.f_14150[i /*104*/].f_66 = 2;
			bLocal_48 = true;
			break;
		}
	}

	return;
}

BOOL func_0x39484892() // Position - 0x535D (21341)
{
	return func_0x9213C121(*Global_4718592.f_132931);
}

BOOL func_0x9213C121(int iParam0) // Position - 0x5373 (21363)
{
	if (iParam0 == 0)
		return 0;

	if (iParam0 == 97645458 || iParam0 == -1784228215 || iParam0 == 1207616054 || iParam0 == -1792579181 || iParam0 == -425660339 || iParam0 == -1938166757 || iParam0 == 2029245399)
		return 1;

	if (iParam0 == func_0xB6C89AD2(16) || iParam0 == func_0xB6C89AD2(17) || iParam0 == func_0xB6C89AD2(18) || iParam0 == func_0xB6C89AD2(19) || iParam0 == func_0xB6C89AD2(20) || iParam0 == func_0xB6C89AD2(21) || iParam0 == func_0xB6C89AD2(22))
		return 1;

	return 0;
}

int func_0xB6C89AD2(int iParam0) // Position - 0x5453 (21587)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_37389[0];
	
		case 9:
			return Global_262145.f_37389[1];
	
		case 10:
			return Global_262145.f_37389[2];
	
		case 16:
			return Global_262145.f_37389[3];
	
		case 17:
			return Global_262145.f_37389[4];
	
		case 18:
			return Global_262145.f_37389[5];
	
		case 19:
			return Global_262145.f_37389[6];
	
		case 20:
			return Global_262145.f_37389[7];
	
		case 21:
			return Global_262145.f_37389[8];
	
		case 22:
			return Global_262145.f_37389[9];
	
		default:
		
	}

	return -1;
}

void func_0x13925C62() // Position - 0x5537 (21815)
{
	int i;
	var entityCoords;
	Vector3 entityVelocity;

	if (*Global_4718592.f_132931 != Global_262145.f_37389[8] && *Global_4718592.f_132931 != Global_262145.f_37389[9])
		return;

	if (!IS_BIT_SET(Global_1058101.f_20[2], 14))
		return;

	for (i = 0; i <= Global_1058150.f_273 - 1; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1058150.f_238[i]) && ENTITY::GET_ENTITY_MODEL(Global_1058150.f_238[i]) == joaat("annihilator2"))
		{
			if (!func_0x91AE09A8(Global_1058150.f_238[i]) && !VEHICLE::IS_ANY_PED_RAPPELLING_FROM_HELI(Global_1058150.f_238[i]))
				if (IS_BIT_SET(Global_4718592.f_208680[1 /*346*/].f_9[0 /*28*/][0], 22))
					MISC::CLEAR_BIT(&Global_4718592.f_208680[1 /*346*/].f_9[0 /*28*/][0], 22);
		
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1058150.f_238[i]))
				break;
		
			entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_1058150.f_238[i], true) };
		
			if (entityCoords.f_2 < 42f || entityCoords.f_2 > 60f)
			{
				entityVelocity = { ENTITY::GET_ENTITY_VELOCITY(Global_1058150.f_238[i]) };
			
				if (entityCoords.f_2 > 60f)
					entityVelocity.f_2 = entityVelocity.f_2 - 1f;
				else if (entityCoords.f_2 > 58f)
					entityVelocity.f_2 = entityVelocity.f_2 - 0.5f;
				else if (entityCoords.f_2 < 35f)
					entityVelocity.f_2 = entityVelocity.f_2 + 1f;
				else if (entityCoords.f_2 < 40f)
					entityVelocity.f_2 = entityVelocity.f_2 + 0.5f;
				else
					entityVelocity.f_2 = entityVelocity.f_2 + 0.1f;
			
				ENTITY::SET_ENTITY_VELOCITY(Global_1058150.f_238[i], entityVelocity);
			}
		
			if (!ENTITY::IS_ENTITY_UPRIGHT(Global_1058150.f_238[i], 5f))
				PHYSICS::SET_DAMPING(Global_1058150.f_238[i], 3, 0f);
			else
				PHYSICS::SET_DAMPING(Global_1058150.f_238[i], 3, 2f);
		
			break;
		}
	}

	return;
}

BOOL func_0x91AE09A8(Vehicle veParam0) // Position - 0x574D (22349)
{
	int i;
	int num;
	Ped pedInVehicleSeat;

	num = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0) + 1;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, i - 1, false))
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, i - 1, false);
			
				if (!PED::IS_PED_INJURED(pedInVehicleSeat))
					if (PED::IS_PED_A_PLAYER(pedInVehicleSeat))
						return true;
			}
		}
	}

	return false;
}

void func_0x3EC3F8FD() // Position - 0x57B1 (22449)
{
	int i;
	var src;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (!IS_BIT_SET(Global_1575014, 20))
		{
			if (!bLocal_46)
			{
				bLocal_46 = true;
				src.f_71 = -1;
				src.f_72 = -1;
				src.f_73 = 2;
			
				for (i = 0; i < 16; i = i + 1)
				{
					MISC::COPY_SCRIPT_STRUCT(&Global_1013430.f_4[i /*95*/], &src, 95);
				}
			}
		}
	}
	else if (bLocal_46)
	{
		bLocal_46 = false;
	}

	return;
}

void func_0x6D002A40() // Position - 0x5819 (22553)
{
	if (!IS_BIT_SET(Global_1057199.f_106, 28))
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_0x622AB124(*Global_4718592.f_132931) || func_0x622AB124(*Global_4718592.f_132931))
			MISC::SET_BIT(&(Global_1057199.f_106), 28);

	return;
}

int func_0x622AB124(int iParam0) // Position - 0x5868 (22632)
{
	int i;
	int j;

	if (iParam0 != 0)
	{
		for (j = 0; j < 25; j = j + 1)
		{
			if (Global_262145.f_7031[j] == 370)
			{
				for (i = 0; i < Global_262145.f_6183[j]; i = i + 1)
				{
					if (iParam0 == Global_262145.f_4732[j /*51*/][i])
						return 1;
				}
			}
		}
	}

	return 0;
}

int func_0x622AB124(int iParam0) // Position - 0x58CF (22735)
{
	int i;
	int j;

	if (iParam0 != 0)
	{
		for (j = 0; j < 25; j = j + 1)
		{
			if (Global_262145.f_7031[j] == 302)
			{
				for (i = 0; i < Global_262145.f_6183[j]; i = i + 1)
				{
					if (iParam0 == Global_262145.f_4732[j /*51*/][i])
						return 1;
				}
			}
		}
	}

	return 0;
}

void func_0xEDDC604() // Position - 0x5936 (22838)
{
	int i;

	if (IS_BIT_SET(Global_1057199.f_106, 28) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_1057199.f_10 == 0 || Global_1057199.f_10 == 2)
	{
		if (!bLocal_45 && !func_0xE9AD6F23())
		{
			bLocal_45 = true;
		
			for (i = 0; i < 18; i = i + 1)
			{
				Global_1057199.f_12[i] = -1;
			}
		}
	}
	else
	{
		IS_BIT_SET(Global_1057199.f_106, 28);
	
		if (bLocal_45)
			bLocal_45 = false;
	}

	return;
}

BOOL func_0xE9AD6F23() // Position - 0x59B6 (22966)
{
	if (*Global_4718592.f_133517 == 5 || *Global_4718592.f_133517 == 6)
		return true;

	return false;
}

void func_0xE56E0997() // Position - 0x59E4 (23012)
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		bLocal_44 = false;
		return;
	}

	if (bLocal_44)
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_4718592.f_190203[i] == 113)
			Global_4718592.f_190203[i] = 107;
	}

	bLocal_44 = true;
	return;
}

void func_0x74971B25() // Position - 0x5A3D (23101)
{
	Vector3 entityCoords;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bLocal_43)
		{
			PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
			bLocal_43 = false;
		}
	
		return;
	}

	if (!func_0x42AD524() && !func_0xAB351EE4(*Global_4718592.f_197291))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };

	if (IS_BIT_SET(*Global_4718592.f_189722, 4))
	{
		vector = { -1666.3678f, 478.9271f, 128.22156f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1647.504f, 490f, 128.221f, -1645.773f, 492.209f, 130.09f, 1f, false, true))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		}
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1670.2731f, 463.26147f, 127.92162f, -1673.2775f, 462.3141f, 129.22162f, 1.6f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector), 1774198988);
	}

	if (IS_BIT_SET(*Global_4718592.f_189722, 8))
	{
		vector2 = { 539.7012f, 749.08936f, 201.36165f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 556.71313f, 735.3046f, 201.36159f, 559.4353f, 734.5082f, 203.23059f, 1f, false, true))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		}
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 523.8675f, 747.2859f, 201.4861f, 521.7375f, 749.7493f, 201.86261f, 1.5f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector2), 1774198988);
	}

	if (IS_BIT_SET(*Global_4718592.f_189722, 10))
	{
		vector3 = { -2586.065f, 1909.995f, 166.37543f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -2579.114f, 1889.248f, 166.37537f, -2577.2593f, 1887.112f, 168.0445f, 1f, false, true))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		}
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1670.3148f, 463.31012f, 127.92162f, -1673.2775f, 462.3141f, 129.22162f, 1.5f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector3), 1774198988);
	}

	if (PED::CAN_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		bLocal_43 = true;
	}

	return;
}

BOOL func_0xAB351EE4(int iParam0) // Position - 0x5C98 (23704)
{
	return iParam0 == 95;
}

BOOL func_0x42AD524() // Position - 0x5CA5 (23717)
{
	if (*Global_4718592.f_132931 == func_0x62114499(5) || *Global_4718592.f_132931 == func_0x62114499(6) || *Global_4718592.f_132931 == func_0x62114499(7))
		return true;

	return false;
}

int func_0x62114499(int iParam0) // Position - 0x5CF1 (23793)
{
	if (iParam0 != -1)
		return Global_262145.f_37061[iParam0];

	return -1;
}

void func_0x369E58FD() // Position - 0x5D10 (23824)
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

	if (*Global_4718592.f_132931 != Global_262145.f_37061[2])
		return;

	vector = { -941.45f, -2601.8f, -8.925f };
	vector2 = { -920.331f, -2584.174f, -8.925f };

	if (IS_BIT_SET(Global_1574952, 4) && func_0xE868219() >= 2)
	{
		Global_2686119.f_7207[func_0xE532870F(18, 0) /*5*/] = { vector };
		Global_2686119.f_7207[func_0xE532870F(18, 0) /*5*/].f_3 = -49.93f;
		Global_2686119.f_7207[func_0xE532870F(18, 1) /*5*/] = { vector2 };
		Global_2686119.f_7207[func_0xE532870F(18, 1) /*5*/].f_3 = 130.61f;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_39) || !ENTITY::DOES_ENTITY_EXIST(veLocal_41) || !ENTITY::DOES_ENTITY_EXIST(veLocal_40) || !ENTITY::DOES_ENTITY_EXIST(veLocal_42))
	{
		allVehicles = VEHICLE::GET_ALL_VEHICLES(&Global_1576521);
		i = 0;
	
		for (i = 0; i < allVehicles; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1576521[i]))
			{
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_1576521[i]) != joaat("metrotrain"))
			{
			}
			else
			{
				if (func_0x1C00C61B(Global_1576521[i]) == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_39))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_39) != Global_1576521[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_40) != Global_1576521[i])
							veLocal_39 = Global_1576521[i];
				
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_40))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_39) != Global_1576521[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_40) != Global_1576521[i])
							veLocal_40 = Global_1576521[i];
				}
			
				if (func_0x1C00C61B(Global_1576521[i]) == 1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_41))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_41) != Global_1576521[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_42) != Global_1576521[i])
							veLocal_41 = Global_1576521[i];
				
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_42))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_41) != Global_1576521[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_42) != Global_1576521[i])
							veLocal_42 = Global_1576521[i];
				}
			}
		}
	
		return;
	}

	MISC::GET_MODEL_DIMENSIONS(joaat("metrotrain"), &minimum, &maximum);
	maximum = 0f;
	maximum.f_2 = 0f;
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_39, false), ENTITY::GET_ENTITY_HEADING(veLocal_39), maximum) };
	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_40, false), ENTITY::GET_ENTITY_HEADING(veLocal_40), maximum) };
	MISC::GET_MODEL_DIMENSIONS(joaat("metrotrain"), &minimum, &maximum);
	maximum = 0f;
	maximum.f_2 = 0f;
	offsetFromCoordAndHeadingInWorldCoords3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_41, false), ENTITY::GET_ENTITY_HEADING(veLocal_41), maximum) };
	offsetFromCoordAndHeadingInWorldCoords4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_42, false), ENTITY::GET_ENTITY_HEADING(veLocal_42), maximum) };
	flag2 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(veLocal_42, veLocal_39) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(veLocal_42, veLocal_40);

	if (SYSTEM::VDIST2(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords4) < SYSTEM::POW(5f, 2f) || flag2)
		flag = true;

	if (flag)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_41))
			VEHICLE::SET_TRAIN_SPEED(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_41), 0f);
	
		Global_4980736.f_92195[1 /*240*/].f_8 = 0;
		MISC::SET_BIT(&(Global_4980736.f_92195[1 /*240*/].f_9), 8);
		MISC::SET_BIT(&(Global_4980736.f_92195[1 /*240*/].f_9), 9);
		MISC::SET_BIT(&(Global_4980736.f_92195[1 /*240*/].f_9), 10);
		MISC::SET_BIT(&(Global_4980736.f_92195[1 /*240*/].f_9), 11);
	}

	if (flag2)
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_39))
			ENTITY::SET_ENTITY_COORDS(veLocal_39, vector, true, false, false, true);

	if (flag2)
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_41))
			ENTITY::SET_ENTITY_COORDS(veLocal_41, vector2, true, false, false, true);

	return;
}

int func_0x1C00C61B(Vehicle veParam0) // Position - 0x60D0 (24784)
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

int func_0xE532870F(int iParam0, int iParam1) // Position - 0x610C (24844)
{
	int i;

	for (i = 0; i <= *Global_4980736.f_224044 - 1; i = i + 1)
	{
		if (Global_4980736.f_224028[i /*3*/] != iParam0 || Global_4980736.f_224028[i /*3*/].f_1 != iParam1)
		{
		}
		else
		{
			return i;
		}
	}

	return -1;
}

int func_0xE868219() // Position - 0x6165 (24933)
{
	int i;

	for (i = 6; i >= 0; i = i + -1)
	{
		if (IS_BIT_SET(Global_2686119.f_3930, i))
			return i;
	}

	return 0;
}

void func_0x702CE6E2() // Position - 0x6192 (24978)
{
	int num;
	Vector3 vector;
	float heading;

	if (func_0x2BF5F4A(PLAYER::PLAYER_ID(), false))
	{
		if (!func_0x3C4F8B7B(PLAYER::PLAYER_ID()) && !func_0x2B8C56B7(1) && ENTITY::DOES_ENTITY_EXIST(Global_2733190.f_313) && func_0xB51BDB7B(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_8))
			func_0x3CCFB7A2(true, false, true, false, false, false, false, false, true);
	
		if (MISC::GET_FRAME_COUNT() % 60 == 0 && !func_0x53D2F50(PLAYER::PLAYER_ID()) && Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 == PLAYER::PLAYER_ID())
		{
			if (func_0x18B53E75(veLocal_38, true) || func_0xFF26C60A(&veLocal_38))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(veLocal_38) < 0.75f)
				{
					num = func_0x791628E0(PLAYER::PLAYER_ID());
					vector = { func_0x3CA28A3E(num, func_0x21158019(), 0) };
					heading = func_0x90A6BEA8(num, func_0x22FB54B8(), 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(veLocal_38, vector, false, false, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_38, heading);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_38, 1084227584);
					VEHICLE::SET_VEHICLE_FIXED(veLocal_38);
					ENTITY::SET_ENTITY_HEALTH(veLocal_38, 1000, 0, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_38, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(veLocal_38, 1000f);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(veLocal_38, 0f);
					VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(veLocal_38, 1000f);
					VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(veLocal_38, 1000f);
				}
			}
		}
	}

	return;
}

float func_0x90A6BEA8(int iParam0, float fParam1, int iParam2) // Position - 0x62D7 (25303)
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

float func_0xE3B5C6E0(int iParam0, int iParam1) // Position - 0x631A (25370)
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

float func_0x22FB54B8() // Position - 0x635D (25437)
{
	return 89.3175f;
}

Vector3 func_0x3CA28A3E(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4) // Position - 0x636A (25450)
{
	Vector3 vector;
	float heading;

	vector = { func_0xEB184B86(iParam0, iParam4) };
	heading = func_0xE3B5C6E0(iParam0, iParam4);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, fParam1);
}

Vector3 func_0xEB184B86(int iParam0, int iParam1) // Position - 0x6396 (25494)
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

Vector3 func_0x21158019() // Position - 0x6526 (25894)
{
	return 24.4139f, -0.7575f, 5.7428f;
}

int func_0x791628E0(Player plParam0) // Position - 0x653D (25917)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2658293[plParam0 /*468*/].f_325.f_8;
		else if (Global_1575095 || Global_2635562.f_2983 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2658293[plParam0 /*468*/].f_325.f_8;

	return -1;
}

BOOL func_0xFF26C60A(var uParam0) // Position - 0x65AC (26028)
{
	int allVehicles;
	int i;

	allVehicles = VEHICLE::GET_ALL_VEHICLES(&Global_1576521);

	for (i = 0; i < allVehicles; i = i + 1)
	{
		if (func_0x18B53E75(Global_1576521[i], true))
		{
			*uParam0 = Global_1576521[i];
			return 1;
		}
	}

	return 0;
}

BOOL func_0x18B53E75(Vehicle veParam0, BOOL bParam1) // Position - 0x65F1 (26097)
{
	if (Global_80337)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Mansion_Spawned_Heli"))
				return true;

	return false;
}

BOOL func_0x53D2F50(Player plParam0) // Position - 0x6630 (26160)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_325, 3);

	return false;
}

void func_0x3CCFB7A2(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x6661 (26209)
{
	int num;

	num = func_0xD38245D3();

	switch (num)
	{
		case 0:
			func_0x9151F337(true);
			func_0x63691423(false);
			break;
	
		case 1:
			func_0x4825532(true);
			func_0xC346EC15(false);
			break;
	
		case 2:
			func_0x284465DC(true);
			break;
	
		case -1:
			break;
	}

	if (bParam0)
	{
		func_0xD038FA6B(2);
		func_0xA44E1C87(false);
		func_0xAFA9BCE(false);
		func_0xA133DBDB(false);
	
		if (!bParam7)
		{
			func_0x4A678806(true);
			func_0xB57A2F3E(true);
		}
	}
	else
	{
		func_0xD038FA6B(1);
	}

	if (bParam1)
		func_0xD038FA6B(11);

	if (bParam7)
		func_0xD038FA6B(43);

	if (bParam2)
	{
		func_0xA44E1C87(false);
		func_0xAFA9BCE(false);
		func_0xA133DBDB(false);
	
		if (!bParam7)
		{
			func_0x4A678806(true);
			func_0xB57A2F3E(true);
		}
	
		func_0xD038FA6B(32);
		func_0xC4BCBCC5(false);
		func_0xA74B7D9E(false);
		func_0x87742AAE(false);
	
		switch (num)
		{
			case 0:
				func_0xC4BCBCC5(true);
				break;
		
			case 1:
				func_0xA74B7D9E(true);
				break;
		
			case 2:
				func_0x87742AAE(true);
				break;
		
			case -1:
				break;
		}
	
		if (NETWORK::HAS_NETWORK_TIME_STARTED())
			Global_2733190.f_5624 = NETWORK::GET_NETWORK_TIME();
	
		if (bParam3)
			if (!func_0x23DFA9E0(PLAYER::PLAYER_ID()) && !func_0x3BE2A2C8(PLAYER::PLAYER_ID()))
				func_0xD038FA6B(33);
		else
			func_0xE0BC02E(33);
	}
	else if (bParam5)
	{
		func_0xD038FA6B(37);
	}

	if (bParam4)
	{
		func_0xD038FA6B(36);
		func_0xA44E1C87(false);
		func_0xAFA9BCE(false);
		func_0xA133DBDB(false);
	
		if (!bParam7)
		{
			func_0x4A678806(true);
			func_0xB57A2F3E(true);
		}
	}

	if (func_0x2B8C56B7(36))
		if (func_0x2B8C56B7(2))
			func_0xE0BC02E(36);

	if (bParam6)
		func_0xD038FA6B(38);

	if (bParam8)
		func_0xD038FA6B(45);

	return;
}

void func_0xE0BC02E(int iParam0) // Position - 0x6815 (26645)
{
	if (iParam0 < 32)
		if (IS_BIT_SET(Global_2673273.f_63.f_5, iParam0))
			MISC::CLEAR_BIT(&(Global_2673273.f_63.f_5), iParam0);
	else if (IS_BIT_SET(Global_2673273.f_63.f_6, iParam0 - 32))
		MISC::CLEAR_BIT(&(Global_2673273.f_63.f_6), iParam0 - 32);

	return;
}

BOOL func_0x3BE2A2C8(Player plParam0) // Position - 0x6865 (26725)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_325.f_6, 16);

	return false;
}

BOOL func_0x23DFA9E0(Player plParam0) // Position - 0x688B (26763)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_325.f_2, 6);

	return false;
}

void func_0x87742AAE(BOOL bParam0) // Position - 0x68B0 (26800)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_1950702.f_11, 31))
			MISC::SET_BIT(&(Global_1950702.f_11), 31);
	else if (IS_BIT_SET(Global_1950702.f_11, 31))
		MISC::CLEAR_BIT(&(Global_1950702.f_11), 31);

	return;
}

void func_0xA74B7D9E(BOOL bParam0) // Position - 0x68F1 (26865)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_1950702.f_11, 29))
			MISC::SET_BIT(&(Global_1950702.f_11), 29);
	else if (IS_BIT_SET(Global_1950702.f_11, 29))
		MISC::CLEAR_BIT(&(Global_1950702.f_11), 29);

	return;
}

void func_0xC4BCBCC5(BOOL bParam0) // Position - 0x6932 (26930)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_1950702.f_1, 30))
			MISC::SET_BIT(&(Global_1950702.f_1), 30);
	else if (IS_BIT_SET(Global_1950702.f_1, 30))
		MISC::CLEAR_BIT(&(Global_1950702.f_1), 30);

	return;
}

void func_0xB57A2F3E(BOOL bParam0) // Position - 0x6973 (26995)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2, 25))
			MISC::SET_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2), 25);
	else if (IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2, 25))
		MISC::CLEAR_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2), 25);

	return;
}

void func_0x4A678806(BOOL bParam0) // Position - 0x69DC (27100)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2, 15))
			MISC::SET_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2), 15);
	else if (IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2, 15))
		MISC::CLEAR_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2), 15);

	return;
}

void func_0xA133DBDB(BOOL bParam0) // Position - 0x6A45 (27205)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2, 27))
			MISC::SET_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2), 27);
	else if (IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2, 27))
		MISC::CLEAR_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2), 27);

	return;
}

void func_0xAFA9BCE(BOOL bParam0) // Position - 0x6AAE (27310)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318, 12))
			MISC::SET_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318), 12);
	else if (IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318, 12))
		MISC::CLEAR_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318), 12);

	return;
}

void func_0xA44E1C87(BOOL bParam0) // Position - 0x6B1B (27419)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2, 26))
			MISC::SET_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2), 26);
	else if (IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2, 26))
		MISC::CLEAR_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2), 26);

	return;
}

void func_0xD038FA6B(int iParam0) // Position - 0x6B84 (27524)
{
	if (iParam0 < 32)
		if (!IS_BIT_SET(Global_2673273.f_63.f_5, iParam0))
			MISC::SET_BIT(&(Global_2673273.f_63.f_5), iParam0);
	else if (!IS_BIT_SET(Global_2673273.f_63.f_6, iParam0 - 32))
		MISC::SET_BIT(&(Global_2673273.f_63.f_6), iParam0 - 32);

	return;
}

void func_0x284465DC(BOOL bParam0) // Position - 0x6BD6 (27606)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_320, 3))
			MISC::SET_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_320), 3);
	else if (IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_320, 3))
		MISC::CLEAR_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_320), 3);

	return;
}

void func_0xC346EC15(BOOL bParam0) // Position - 0x6C3F (27711)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_6, 18))
			MISC::SET_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_6), 18);
	else if (IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_6, 18))
		MISC::CLEAR_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_6), 18);

	return;
}

void func_0x4825532(BOOL bParam0) // Position - 0x6CA8 (27816)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_320, 2))
			MISC::SET_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_320), 2);
	else if (IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_320, 2))
		MISC::CLEAR_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_320), 2);

	return;
}

void func_0x63691423(BOOL bParam0) // Position - 0x6D11 (27921)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2, 21))
			MISC::SET_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2), 21);
	else if (IS_BIT_SET(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2, 21))
		MISC::CLEAR_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_2), 21);

	return;
}

void func_0x9151F337(BOOL bParam0) // Position - 0x6D7A (28026)
{
	if (bParam0)
		if (!IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318, 28))
			MISC::SET_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318), 28);
	else if (IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318, 28))
		MISC::CLEAR_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318), 28);

	return;
}

int func_0xD38245D3() // Position - 0x6DE7 (28135)
{
	if (func_0xB419CA1C(PLAYER::PLAYER_ID()))
		return _STAT_GET_PACKED_INT(41243, -1);

	return -1;
}

BOOL func_0xB419CA1C(Player plParam0) // Position - 0x6E07 (28167)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845298[plParam0 /*881*/].f_260.f_310, 1);

	return false;
}

BOOL func_0xB51BDB7B(int iParam0) // Position - 0x6E2D (28205)
{
	Vector3 vector;
	Vector3 entityCoords;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_2733190.f_313))
		return false;

	func_0xFC863A2E(iParam0, &vector);
	entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_2733190.f_313, true) };
	return OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, vector, vector.f_3, vector.f_6, false, true);
}

void func_0xFC863A2E(int iParam0, var uParam1) // Position - 0x6E78 (28280)
{
	switch (iParam0)
	{
		case 177:
			*uParam1 = { -2702.5205f, 1869.4298f, 97.50078f };
			uParam1->f_3 = { -2525.8145f, 1910.0856f, 188.60635f };
			uParam1->f_6 = 150f;
			break;
	
		case 179:
			*uParam1 = { 495.5306f, 671.16345f, 137.16374f };
			uParam1->f_3 = { 588.5647f, 823.25714f, 220.52295f };
			uParam1->f_6 = 150f;
			break;
	
		case 178:
			*uParam1 = { -1629.059f, 393.254f, 77.77f };
			uParam1->f_3 = { -1666.403f, 513.049f, 144.058f };
			uParam1->f_6 = 150f;
			break;
	}

	return;
}

BOOL func_0x2B8C56B7(int iParam0) // Position - 0x6F35 (28469)
{
	if (iParam0 < 32)
		return IS_BIT_SET(Global_2673273.f_63.f_5, iParam0);

	return IS_BIT_SET(Global_2673273.f_63.f_6, iParam0 - 32);
}

BOOL func_0x3C4F8B7B(Player plParam0) // Position - 0x6F63 (28515)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_325.f_2, 4);

	return false;
}

BOOL func_0x2BF5F4A(Player plParam0, BOOL bParam1) // Position - 0x6F88 (28552)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (bParam1 || _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658293[plParam0 /*468*/].f_325.f_8 != -1)
				return func_0xEE599357(Global_2658293[plParam0 /*468*/].f_325.f_8) == 33;

	return false;
}

void func_0x9FFFA267() // Position - 0x6FD7 (28631)
{
	BOOL flag;
	int num;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;
	Vector3 vector4;
	Vector3 vector5;
	Vector3 vector6;
	Vector3 vector7;
	Vector3 vector8;
	int num2;
	int num3;

	if (IS_BIT_SET(Global_1950702.f_6, 11) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		flag = false;
		num = func_0x791628E0(PLAYER::PLAYER_ID());
	
		if (num == 178 || num == 177)
		{
			vector = { func_0x3CA28A3E(num, 39.806f, -60.056f, -7.18f, 0) };
			vector2 = { func_0x3CA28A3E(num, 30.886f, -66.37f, -5.169f, 0) };
			vector3 = { func_0x3CA28A3E(num, 34.273f, -54.396f, -7.18f, 0) };
			vector4 = { func_0x3CA28A3E(num, 37.014f, -58.107f, -5.169f, 0) };
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector, vector2, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector3, vector4, 2.5f, false, true, 0))
				flag = true;
		}
		else if (num == 179)
		{
			vector5 = { func_0x3CA28A3E(num, 27.85f, -38.986f, -7.149f, 0) };
			vector6 = { func_0x3CA28A3E(num, 28.146f, -48.013f, -5.138f, 0) };
			vector7 = { func_0x3CA28A3E(num, 22.746f, -50.462f, -7.149f, 0) };
			vector8 = { func_0x3CA28A3E(num, 18.001f, -50.472f, -5.138f, 0) };
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector5, vector6, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector7, vector8, 2.5f, false, true, 0))
				flag = true;
		}
	
		if (flag)
		{
			num2 = func_0x219FA119(PLAYER::PLAYER_PED_ID());
			num3 = func_0x671ED513(num2);
		
			if (num3 == -1)
			{
			}
			else if (Global_45933[num3 /*5*/].f_3 >= 8)
			{
				Global_45933[num3 /*5*/].f_3 = 7;
			}
		}
	}

	return;
}

int func_0x671ED513(int iParam0) // Position - 0x71A2 (29090)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45933[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_0x219FA119(Ped pedParam0) // Position - 0x71D2 (29138)
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (pedParam0 == Global_45933[i /*5*/].f_1)
			return Global_45933[i /*5*/];
	}

	return -1;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x7213 (29203)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

void func_0x1EF959D2() // Position - 0x7234 (29236)
{
	if (func_0xEAE183ED() == 178 && func_0xAC9DE117() == 482563055)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
			return;
	
		STREAMING::REQUEST_MODEL(joaat("prop_dummy_car"));
	
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_dummy_car")))
		{
			obLocal_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_dummy_car"), -1628.8046f, 486.4122f, 118.4275f, false, false, false, 0);
			ENTITY::SET_ENTITY_ROTATION(obLocal_37, 0f, 0f, -35.6617f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_37, true);
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_37, true, false);
			ENTITY::SET_ENTITY_VISIBLE(obLocal_37, false, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_dummy_car"));
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
	{
		OBJECT::DELETE_OBJECT(&obLocal_37);
	}

	return;
}

int func_0xAC9DE117() // Position - 0x72D5 (29397)
{
	return Global_1882652[PLAYER::PLAYER_ID() /*321*/].f_158.f_43.f_6;
}

int func_0xEAE183ED() // Position - 0x72EE (29422)
{
	return Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_8;
}

void func_0x3009E1C3() // Position - 0x7306 (29446)
{
	Vehicle vehiclePedIsIn;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return;

	if (func_0x4C17DBA0() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn) && VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, -1321131184) && Global_102538.f_530 == 40 && Global_24569.f_6342 == 0)
		{
			func_0x5EA17708(&uLocal_32, false, false);
			uLocal_34 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
		}
		else if (!func_0xB234D910(&uLocal_32, 5000, false))
		{
			if (MISC::GET_FRAME_COUNT() % 15 == 0)
				MISC::CLEAR_AREA(uLocal_34, 6f, false, false, false, true);
		}
	}
	else if (!func_0xB234D910(&uLocal_32, 5000, false))
	{
		if (MISC::GET_FRAME_COUNT() % 15 == 0)
			MISC::CLEAR_AREA(uLocal_34, 6f, false, false, false, true);
	}

	return;
}

BOOL func_0xB234D910(var uParam0, int iParam1, BOOL bParam2) // Position - 0x73D7 (29655)
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

BOOL func_0x4C17DBA0() // Position - 0x7444 (29764)
{
	return IS_BIT_SET(Global_80586, 8);
}

void func_0xC91C4BDB() // Position - 0x7453 (29779)
{
	int num;
	Vector3 vector;
	Vector3 vector2;
	int num2;
	BOOL flag;
	int num3;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_0x53D2F50(Global_2673273.f_4.f_16) || !func_0xDBD936D3())
		return;

	num = func_0xEAE183ED();
	func_0x58547348(num);

	if (num != -1)
		return;

	if (!func_0x84068466())
		return;

	num2 = iLocal_30;

	if (func_0xA864C4C6(Global_2673273.f_4.f_16, num2))
	{
		flag = false;
		num3 = func_0x78FF4B91(num2);
		vector = { func_0x3CA28A3E(num3, -24.971f, -14.7995f, 0.0333f, 0) };
		vector2 = { func_0x3CA28A3E(num3, -23.5152f, -13.2081f, 2.4182f, 0) };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673273.f_4.f_11, vector, vector2, 4.8f, false, true))
		{
			if (!IS_BIT_SET(Global_1950702.f_5173.f_11, 0))
			{
				MISC::SET_BIT(&(Global_1950702.f_5173.f_11), 0);
				bLocal_31 = true;
			}
		
			flag = true;
		}
	
		vector = { func_0x3CA28A3E(num3, -22.4718f, -18.1247f, -0.0715f, 0) };
		vector2 = { func_0x3CA28A3E(num3, -24.2669f, -18.0151f, 2.2536f, 0) };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673273.f_4.f_11, vector, vector2, 2.2f, false, true) && func_0xAF5C86C8(Global_2673273.f_4.f_16, num2))
		{
			if (!IS_BIT_SET(Global_1950702.f_5173.f_11, 0))
			{
				MISC::SET_BIT(&(Global_1950702.f_5173.f_11), 0);
				bLocal_31 = true;
			}
		
			flag = true;
		}
	
		if (flag)
		{
			return;
		}
		else if (bLocal_31)
		{
			MISC::CLEAR_BIT(&(Global_1950702.f_5173.f_11), 0);
			bLocal_31 = false;
		}
	}

	iLocal_30 = (iLocal_30 + 1) % 4;
	return;
}

BOOL func_0xAF5C86C8(Player plParam0, int iParam1) // Position - 0x75EC (30188)
{
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		if (!func_0xC09E3FE(iParam1))
			return false;
	
		num = iParam1 - 1;
		return !IS_BIT_SET(Global_1882652[plParam0 /*321*/].f_158.f_43.f_2[num], 23);
	}

	return false;
}

BOOL func_0xA864C4C6(Player plParam0, int iParam1) // Position - 0x762C (30252)
{
	if (iParam1 > 0 && iParam1 < 4)
		if (plParam0 != _INVALID_PLAYER_INDEX())
			return IS_BIT_SET(Global_1882652[plParam0 /*321*/].f_158.f_43, iParam1);

	return false;
}

void func_0x58547348(int iParam0) // Position - 0x7661 (30305)
{
	Vector3 vector;
	Vector3 vector2;

	switch (iParam0)
	{
		case 179:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673273.f_4.f_11, 519.18304f, 714.13135f, 191.72446f, 528.8624f, 722.0759f, 194.05295f, 29.0625f, false, true))
			{
				func_0xF8C0ED23(0);
				return;
			}
		
			vector = { func_0x3CA28A3E(iParam0, -24.971f, -14.7995f, 0.0333f, 0) };
			vector2 = { func_0x3CA28A3E(iParam0, -23.5152f, -13.2081f, 1.1932f, 0) };
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673273.f_4.f_11, vector, vector2, 4.8f, false, true))
			{
				func_0xF8C0ED23(0);
				return;
			}
			break;
	
		case 178:
		case 177:
			vector = { func_0x3CA28A3E(iParam0, -24.971f, -14.7995f, 0.0333f, 0) };
			vector2 = { func_0x3CA28A3E(iParam0, -23.5152f, -13.2081f, 1.1932f, 0) };
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673273.f_4.f_11, vector, vector2, 4.8f, false, true))
			{
				func_0xF8C0ED23(0);
				return;
			}
			break;
	}

	return;
}

void func_0xF8C0ED23(int iParam0) // Position - 0x777E (30590)
{
	if (!func_0x974E48B4())
	{
		Global_1950702.f_3978 = 1;
		Global_1950702.f_3979 = iParam0;
	}

	return;
}

BOOL func_0x974E48B4() // Position - 0x779F (30623)
{
	return Global_1950702.f_765;
}

BOOL func_0xDBD936D3() // Position - 0x77AE (30638)
{
	if (func_0x4228A1C2() == 0)
		return true;

	return false;
}

int func_0x4228A1C2() // Position - 0x77C3 (30659)
{
	return Global_1574635.f_18;
}

void func_0xA36E646E() // Position - 0x77D1 (30673)
{
	switch (iLocal_29)
	{
		case 0:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appjipmp")) > 0)
				iLocal_29 = 2;
			break;
	
		case 1:
			if (func_0xC4063029(PLAYER::PLAYER_ID()) && func_0xEDAE0057())
			{
				iLocal_29 = 2;
				return;
			}
		
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appjipmp")) <= 0)
				iLocal_29 = 0;
			break;
	
		case 2:
			if (!func_0xC4063029(PLAYER::PLAYER_ID()))
			{
				iLocal_29 = 0;
				return;
			}
		
			if (func_0x4228A1C2())
				iLocal_29 = 3;
			break;
	
		case 3:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appjipmp")) <= 0 && !func_0xC4063029(PLAYER::PLAYER_ID()))
			{
				iLocal_29 = 0;
				return;
			}
		
			if (IS_BIT_SET(Global_4718592.f_35, 21))
				iLocal_29 = 4;
			break;
	
		case 4:
			if (!func_0xC4063029(PLAYER::PLAYER_ID()))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appjipmp")) <= 0)
				{
					iLocal_29 = 0;
					return;
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_4718592.f_35), 21);
					iLocal_29 = 0;
				}
			}
		
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926875)
			{
				iLocal_29 = 0;
				return;
			}
			break;
	}

	return;
}

BOOL func_0x4228A1C2() // Position - 0x78DC (30940)
{
	return Global_2694337.f_7;
}

BOOL func_0xEDAE0057() // Position - 0x78EA (30954)
{
	return IS_BIT_SET(Global_2685152.f_2, 11);
}

BOOL func_0xC4063029(Player plParam0) // Position - 0x78FB (30971)
{
	return IS_BIT_SET(Global_1845298[plParam0 /*881*/].f_36.f_18, 5);
}

void func_0x3A732D3A() // Position - 0x7912 (30994)
{
	if (iLocal_25.f_2 >= *Global_262145.f_35613)
		return;

	switch (iLocal_25.f_1)
	{
		case 0:
			if (Global_2709385.f_567 && Global_2710014 != -1)
			{
				iLocal_25 = Global_2710014;
				STREAMING::REQUEST_MODEL(func_0xA0FCC530(iLocal_25));
				iLocal_25.f_1 = iLocal_25.f_1 + 1;
			}
			break;
	
		case 1:
			STREAMING::REQUEST_MODEL(func_0xA0FCC530(iLocal_25));
		
			if (STREAMING::HAS_MODEL_LOADED(func_0xA0FCC530(iLocal_25)))
			{
				if (!Global_2709385.f_567)
				{
					func_0xC44972DB(iLocal_25);
					func_0x11A84E69();
					iLocal_25.f_2 = iLocal_25.f_2 + 1;
				}
			}
			break;
	}

	return;
}

void func_0x11A84E69() // Position - 0x79B7 (31159)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_25.f_3))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_25.f_3));

	iLocal_25.f_1 = 0;
	iLocal_25 = -1;
	return;
}

void func_0xC44972DB(int iParam0) // Position - 0x79DA (31194)
{
	Vector3 vector;

	vector = { func_0x5B2695C0(iParam0) };
	vector.f_2 = vector.f_2 - 2.5f;
	iLocal_25.f_3 = OBJECT::CREATE_OBJECT(func_0xA0FCC530(iParam0), vector, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_25.f_3, func_0xEDA5FBD9(iParam0), 2, true);
	OBJECT::SET_OBJECT_TARGETTABLE(iLocal_25.f_3, false, 0);
	ENTITY::SET_ENTITY_PROOFS(iLocal_25.f_3, true, true, true, true, true, false, false, false);

	if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iLocal_25.f_3))
		if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_25.f_3))
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_25.f_3), false);

	ENTITY::FREEZE_ENTITY_POSITION(iLocal_25.f_3, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_25.f_3, 200);
	return;
}

Vector3 func_0xEDA5FBD9(int iParam0) // Position - 0x7A6F (31343)
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

int func_0x7B2479C8(int iParam0) // Position - 0x7C59 (31833)
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

Vector3 func_0x5B2695C0(int iParam0) // Position - 0x7CD1 (31953)
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

Hash func_0xA0FCC530(int iParam0) // Position - 0x7FBB (32699)
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

void func_0x5BED8FCC() // Position - 0x8014 (32788)
{
	if (Global_113904 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_0xDBD936D3())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

void func_0x35808C0E() // Position - 0x8040 (32832)
{
	if (!bLocal_4)
	{
		if (Global_1836537)
		{
			if (IS_REPEAT_OFFENDER_X_0() || IS_REPEAT_OFFENDER_X())
				Global_262145.f_20001 = 1;
			else
				Global_262145.f_20001 = 0;
		
			bLocal_4 = true;
		}
	}
	else if (!Global_1836537)
	{
		bLocal_4 = false;
	}

	return;
}

int IS_REPEAT_OFFENDER_X() // Position - 0x808A (32906)
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10805)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10801 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10805)
			return 0;
	}

	return 1;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x8119 (33049)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int IS_REPEAT_OFFENDER_X_0() // Position - 0x8137 (33079)
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10804)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10800 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10804)
			return 0;
	}

	return 1;
}

void FIX_FOR_3280561() // Position - 0x81C6 (33222)
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		for (i = 0; i < 32; i = i + 1)
		{
			MISC::SET_BIT(&(Global_1845298[i /*881*/].f_828), 1);
		}
	}

	return;
}

void func_0xB401A131() // Position - 0x81F9 (33273)
{
	if (bLocal_2)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		DISPLAY_TEXT_WITH_LITERAL_STRING_FOR_RELEASE_F9(0.69f, 0.06f, "STRING", sLocal_0);
	}

	if (!bLocal_2)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_3)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_3 = iLocal_3 + 1;
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_3 = iLocal_3 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
			
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_3 = iLocal_3 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
			
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_3 = iLocal_3 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
			
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
					{
						bLocal_2 = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
			}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_3)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					iLocal_3 = iLocal_3 + 1;
					SYSTEM::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_3 = iLocal_3 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
		
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					iLocal_3 = iLocal_3 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
		
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_3 = iLocal_3 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
		
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					bLocal_2 = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
		}
	}

	return;
}

void DISPLAY_TEXT_WITH_LITERAL_STRING_FOR_RELEASE_F9(float DisplayAtX, float DisplayAtY, char* pTextLabel, char* pLiteralString) // Position - 0x83F9 (33785)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(pTextLabel);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(pLiteralString);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(DisplayAtX, DisplayAtY, 0);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x8416 (33814)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

