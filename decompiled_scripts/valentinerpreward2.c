#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	struct<3> Local_16 = { 0, 0, 0 } ;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	struct<13> Local_30 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[3] = { 0, 0, 0 };
	struct<2> Local_53 = { 0, 0 } ;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<2> Local_67 = { 0, 0 } ;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71[415] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	bool bLocal_498 = 0;
	int iLocal_499 = 0;
	struct<2> Local_500[3];
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 10;
	var uLocal_514 = -1;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = -1;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = -1;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = -1;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = -1;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = -1;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = -1;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = -1;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = -1;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = -1;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	int iLocal_704 = 0;
	int iLocal_705 = 0;
	int iLocal_706 = 0;
	int iLocal_707 = 0;
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	int iLocal_717 = 0;
	int iLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.67.10";
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_24 = 10000;
	iLocal_492 = 1;
	iLocal_705 = -1;
	iLocal_706 = -1;
	iLocal_707 = -1;
	iLocal_710 = -1;
	iLocal_712 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	Global_1578010 = MISC::GET_HASH_KEY(sLocal_0);
	func_360();
	while (true)
	{
		if (func_359())
		{
			func_357();
		}
		func_350();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
		{
			func_349();
			func_348();
			func_345();
			func_343();
			func_342();
			func_339();
			func_337();
			func_331();
			func_323();
			func_322();
			func_314();
			func_306();
			func_305();
			func_300();
			func_289();
			func_285();
			func_254();
			func_252();
			func_251();
			func_249();
			func_241();
			func_238();
			func_235();
			func_234();
			func_233();
			func_224();
			func_223();
			func_216();
			func_215();
			func_206();
			func_197();
			func_191();
			func_187();
			func_184();
			func_175();
			func_172();
			func_171();
			func_163();
			func_161();
			func_160();
			func_157();
			func_151();
			func_145();
			func_144();
			func_143();
			func_141();
			func_134();
			func_125();
			func_122();
			func_109();
			func_31();
		}
		func_27();
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_26();
			func_25();
			func_14();
			func_13();
			func_11();
			func_10();
			func_6();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (func_5(Global_4718592.f_171044) && !func_4(41671, -1))
	{
		if (Global_1949382.f_24 != 0)
		{
			func_2(41671, 1, -1);
		}
	}
}

void func_2(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_3();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_3()
{
	return Global_1574918;
}

bool func_4(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_3();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

bool func_5(int iParam0)
{
	return iParam0 == 89;
}

void func_6()
{
	var uVar0;
	var uVar1;
	struct<56> Var2;
	int iVar69;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		return;
	}
	if (Global_4718592.f_117591 != func_9(7))
	{
		return;
	}
	if (Global_4718592.f_118170[56 /*218*/].f_27 == 5)
	{
		return;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_198190), &(Global_4980736.f_110349[20 /*1098*/]), 1098);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[20 /*1098*/]), &(Global_4980736.f_110349[5 /*1098*/]), 1098);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[5 /*1098*/]), &(Global_4980736.f_198190), 1098);
	uVar0 = Global_4718592.f_99800[0 /*4*/][func_8(20)];
	uVar1 = Global_4718592.f_99800[0 /*4*/][func_8(5)];
	if (BitTest(uVar0, func_7(20)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99800[0 /*4*/][func_8(5)]), func_7(5));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99800[0 /*4*/][func_8(5)]), func_7(5));
	}
	if (BitTest(uVar1, func_7(5)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99800[0 /*4*/][func_8(20)]), func_7(20));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99800[0 /*4*/][func_8(20)]), func_7(20));
	}
	uVar0 = Global_4718592.f_99783[0 /*4*/][func_8(20)];
	uVar1 = Global_4718592.f_99783[0 /*4*/][func_8(5)];
	if (BitTest(uVar0, func_7(20)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99783[0 /*4*/][func_8(5)]), func_7(5));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99783[0 /*4*/][func_8(5)]), func_7(5));
	}
	if (BitTest(uVar1, func_7(5)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99783[0 /*4*/][func_8(20)]), func_7(20));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99783[0 /*4*/][func_8(20)]), func_7(20));
	}
	uVar0 = Global_4718592.f_99766[0 /*4*/][func_8(20)];
	uVar1 = Global_4718592.f_99766[0 /*4*/][func_8(5)];
	if (BitTest(uVar0, func_7(20)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99766[0 /*4*/][func_8(5)]), func_7(5));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99766[0 /*4*/][func_8(5)]), func_7(5));
	}
	if (BitTest(uVar1, func_7(5)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99766[0 /*4*/][func_8(20)]), func_7(20));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99766[0 /*4*/][func_8(20)]), func_7(20));
	}
	Var2 = 12;
	Var2.f_37 = 12;
	Var2.f_51 = -1;
	Var2.f_52 = -1;
	Var2.f_53 = -1;
	Var2.f_54 = -1;
	Var2.f_55 = -1;
	Var2.f_55.f_2 = 1065353216;
	Var2.f_55.f_6.f_3 = 1132396544;
	Var2.f_55.f_10 = -1;
	Var2.f_55.f_11 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var2, &(Global_4980736.f_110349[20 /*1098*/].f_738), 67);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[20 /*1098*/].f_738), &(Global_4980736.f_110349[5 /*1098*/].f_738), 67);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[5 /*1098*/].f_738), &Var2, 67);
	iVar69 = 0;
	while (iVar69 < 17)
	{
		uVar0 = Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][20];
		uVar1 = Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][5];
		Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][20] = uVar1;
		Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][5] = uVar0;
		uVar0 = Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][20];
		uVar1 = Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][5];
		Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][20] = uVar1;
		Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][5] = uVar0;
		uVar0 = Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][20];
		uVar1 = Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][5];
		Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][20] = uVar1;
		Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][5] = uVar0;
		iVar69++;
	}
	Global_4718592.f_118170[56 /*218*/].f_27 = 5;
}

int func_7(int iParam0)
{
	return (iParam0 - func_8(iParam0) * 31);
}

int func_8(int iParam0)
{
	return (iParam0 / 31);
}

int func_9(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33952[iParam0];
	}
	return -1;
}

void func_10()
{
	if (Global_4718592.f_117591 == 1327987538)
	{
		if (!BitTest(Global_4718592.f_35, 2))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 2);
		}
	}
}

void func_11()
{
	if (func_12(Global_4718592.f_117591) == 10)
	{
		if (Global_262145.f_33950)
		{
			Global_262145.f_33950 = 0;
		}
	}
}

int func_12(int iParam0)
{
	if (iParam0 == Global_262145.f_31922[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_31922[1])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_31922[2])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_31922[3])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_31922[4])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_31922[5])
	{
		return 12;
	}
	return -1;
}

void func_13()
{
	if (Global_4718592.f_117591 != Global_262145.f_33923[2])
	{
		return;
	}
	if (Global_4718592.f_1816[0 /*24279*/].f_17130[4] == 0)
	{
		return;
	}
	if (BitTest(Global_2684820.f_3883, 0) && BitTest(Global_1574942, 4))
	{
		Global_4718592.f_1816[0 /*24279*/].f_17130[4] = 0;
	}
}

void func_14()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((Global_262145.f_33952[10] != Global_4718592.f_117591 || Global_1574964) || !Global_1574965)
	{
		func_24();
		return;
	}
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 7);
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 29);
	Global_4980736.f_110349[42 /*1098*/].f_944[0] = 3;
	Global_4980736.f_110349[58 /*1098*/].f_944[0] = 3;
	if (Global_1058071.f_14[0] > 7 || Global_1058071.f_14[0] < 6)
	{
		func_23(&iLocal_49);
		return;
	}
	iVar0 = func_21(&iLocal_49);
	iVar1 = 600;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			iVar1 = 900;
		}
	}
	func_20(iVar0);
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar2 = CUTSCENE::GET_CUTSCENE_END_TIME();
		iVar3 = CUTSCENE::GET_CUTSCENE_TIME();
		if (iVar3 >= (iVar2 - 300) && !func_19(&Local_53))
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			func_18(&Local_53, 0, 0);
		}
	}
	else if (func_19(&Local_53) && func_17(Local_53, iVar1, 0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		func_16(&Local_53);
		iLocal_48 = 1;
		func_15(iVar0);
	}
}

void func_15(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
	VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(iParam0, false);
	VEHICLE::SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(iParam0, false);
	VEHICLE::SET_VEHICLE_HANDBRAKE(iParam0, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 30f);
}

void func_16(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_17(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_19(var uParam0)
{
	return uParam0->f_1;
}

void func_20(int iParam0)
{
	if (iLocal_48)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	ENTITY::SET_ENTITY_VELOCITY(iParam0, 0f, 0f, 0f);
}

int func_21(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1058071.f_268 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) != joaat("cargoplane2"))
		{
		}
		else if (func_22(iParam0, Global_1058071.f_233[iVar0]))
		{
		}
		else
		{
			return Global_1058071.f_233[iVar0];
		}
		iVar0++;
	}
	return 0;
}

int func_22(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (iParam1 == (*uParam0)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1058071.f_268 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) != joaat("cargoplane2"))
		{
		}
		else if (func_22(iParam0, Global_1058071.f_233[iVar0]))
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1]))
				{
				}
				else
				{
					(*iParam0)[iVar1] = Global_1058071.f_233[iVar0];
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
}

void func_24()
{
	int iVar0;
	
	func_16(&Local_53);
	iLocal_48 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_49[iVar0] = 0;
		iVar0++;
	}
}

void func_25()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) >= 1)
	{
		return;
	}
	if (Global_2635560.f_2978)
	{
	}
	Global_2635560.f_2978 = 0;
}

void func_26()
{
	if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) != 0 && Global_262145.f_33952[8] != Global_4718592.f_117591) && !(Global_1574964 || Global_1574965))
	{
		MISC::SET_BIT(&Global_1574994, 29);
	}
}

void func_27()
{
	struct<3> Var0;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!iLocal_716)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Var0 = { -878.0269f, -359.4522f, 36.2491f };
			iVar3 = joaat("hei_prop_bh1_08_mp_gar2");
			Var4 = { -878.5042f, -358.2391f, 34.6839f };
			Var7 = { -858.5212f, -400.1935f, 53.7559f };
			if ((func_30(PLAYER::PLAYER_ID(), 1, 1) && func_29(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var7, 20f, false, true, 0))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 3f, iVar3, false))
				{
					iLocal_716 = 1;
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_717))
				{
					if (func_28(iVar3))
					{
						iLocal_717 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar3, Var0, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_717, 0f, 0f, 27f, 2, true);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_717, true);
						ENTITY::SET_ENTITY_COLLISION(iLocal_717, true, false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_717, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_717, true);
						iLocal_716 = 1;
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
					}
				}
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_717))
		{
			OBJECT::DELETE_OBJECT(&iLocal_717);
		}
		iLocal_716 = 0;
	}
}

bool func_28(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_29(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_722)
	{
		case 0:
			if (func_107())
			{
				if (func_106())
				{
					if (func_102() == 0)
					{
						iLocal_722 = 2;
					}
					else
					{
						iLocal_722 = 1;
					}
				}
			}
			break;
		
		case 1:
			iVar0 = func_101(PLAYER::PLAYER_ID());
			iVar1 = func_102();
			if (iVar1 > 3)
			{
				iVar1 = 3;
			}
			if (iVar0 > iVar1)
			{
				iLocal_722 = 2;
			}
			else
			{
				iLocal_723 = func_99();
				iLocal_722 = 3;
			}
			break;
		
		case 3:
			if (!func_106())
			{
				if (iLocal_723 == func_99())
				{
					iLocal_722 = 2;
				}
				else if (func_99() == func_96())
				{
					iLocal_722 = 2;
				}
				else
				{
					iLocal_724 = func_101(PLAYER::PLAYER_ID());
					if (iLocal_724 == 0)
					{
						iLocal_722 = 2;
					}
					else
					{
						iLocal_722 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_33(iLocal_724, &iLocal_721);
			if (iLocal_721 == 2)
			{
				iLocal_722 = 0;
				func_32();
			}
			else if (iLocal_721 == 3)
			{
				iLocal_722 = 0;
				func_32();
			}
			break;
		
		case 2:
			if (!func_106())
			{
				iLocal_722 = 0;
				func_32();
			}
			break;
	}
}

void func_32()
{
	iLocal_723 = 0;
	iLocal_724 = 0;
	iLocal_721 = 0;
}

void func_33(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 <= 0)
	{
		if (iParam0 == 0)
		{
		}
		*uParam1 = 3;
		return;
	}
	if (*uParam1 != 0 && *uParam1 != 1)
	{
		*uParam1 = 0;
	}
	iVar0 = func_101(PLAYER::PLAYER_ID());
	if (!func_95())
	{
		if (iVar0 >= iParam0)
		{
			iVar1 = (func_96() + iParam0);
			func_93(iVar1);
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_3 = iVar1;
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
			}
			func_92(18090, 0, -1);
			*uParam1 = 2;
			func_90(142);
			func_84(-1833860512, 10, 0);
		}
		else
		{
			*uParam1 = 3;
		}
	}
	else if (iVar0 >= iParam0)
	{
		if (func_66(iParam0, uParam1))
		{
			if (*uParam1 == 2)
			{
				iVar2 = (func_96() + iParam0);
				func_93(iVar2);
				Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_3 = iVar2;
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
				}
				*uParam1 = 2;
				func_90(142);
				func_84(-1833860512, 10, 0);
			}
			else if (*uParam1 == 3)
			{
				func_34();
				*uParam1 = 3;
			}
			func_92(18090, 0, -1);
		}
	}
	else
	{
		*uParam1 = 3;
	}
}

void func_34()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = func_63(6104, -1);
	iVar1 = func_62();
	iVar2 = 0;
	if (iVar1 > iVar0)
	{
		iVar3 = 0;
		while (iVar3 < 50)
		{
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar3 == func_60(func_61(iVar4), -1))
				{
					if (func_60(func_59(iVar3), -1) != 0)
					{
						func_92(func_59(iVar3), 0, -1);
						func_92(func_61(iVar3), 100, -1);
						Global_1963639[iVar3] = 0;
						iVar2++;
					}
				}
				iVar4++;
			}
			iVar3++;
		}
		iVar1 = (iVar1 - iVar2);
		if (iVar1 > iVar0)
		{
			iVar5 = (iVar1 - iVar0);
			iVar2 = 0;
			iVar3 = 0;
			while (iVar3 < 50)
			{
				if (func_60(func_59(iVar3), -1) != 0)
				{
					func_92(func_59(iVar3), 0, -1);
					func_92(func_61(iVar3), 100, -1);
					Global_1963639[iVar3] = 0;
					iVar2++;
					if (iVar2 == iVar5)
					{
					}
					else
					{
						iVar3++;
					}
					iVar1 = (iVar1 - iVar2);
					Jump @345; //curOff = 254
					if (iVar1 < iVar0)
					{
						iVar6 = func_60(18090, -1);
						iVar7 = (iVar0 - iVar1);
						iVar8 = func_58(iVar6);
						if (iVar6 == -1 || iVar6 == 8)
						{
							iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
						}
						iVar9 = 0;
						while (iVar9 < iVar7)
						{
							func_44(iVar8);
							iVar9++;
						}
						func_35();
					}
				}

void func_35()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (func_38(PLAYER::PLAYER_ID()))
	{
		iVar1 = Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_8;
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_MP_HANGAR", iVar1, 0) == PLAYER::PLAYER_ID())
		{
			Global_1963690 = 1;
			Global_1963638 = 0;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
				bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				if (func_30(bVar3, 1, 1))
				{
					if (func_38(bVar3))
					{
						iVar4 = Global_2657704[bVar3 /*463*/].f_321.f_8;
						if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_MP_HANGAR", iVar4, 0) == bVar3)
						{
							if (Global_1963638 > 0)
							{
								if (!func_19(&Global_1963701))
								{
									func_36(bVar3, &Global_1963639);
									func_18(&Global_1963701, 0, 0);
									Global_1963638 = (Global_1963638 - 1);
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
		bVar0 = false;
	}
}

void func_36(bool bParam0, var uParam1)
{
	struct<3> Var0;
	int iVar53;
	
	Var0.f_2 = 50;
	Var0.f_0 = -1544003568;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar53 = 0;
	while (iVar53 < *uParam1)
	{
		Var0.f_2[iVar53] = (*uParam1)[iVar53];
		iVar53++;
	}
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 53, func_37(bParam0));
}

var func_37(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_38(bool bParam0)
{
	if (func_42())
	{
		if (bParam0 != func_41())
		{
			if (func_39(bParam0))
			{
				return Global_2657704[bParam0 /*463*/].f_321.f_10 == PLAYER::PLAYER_ID();
			}
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (func_30(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_40(Global_2657704[iParam0 /*463*/].f_321.f_7) == 7;
			}
		}
	}
	return 0;
}

int func_40(int iParam0)
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
			break;
		
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
			break;
		
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
			break;
		
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
			break;
		
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
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
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
			break;
		
		case 101:
			return 10;
			break;
		
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
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

int func_41()
{
	return -1;
}

bool func_42()
{
	return func_43() != 0;
}

int func_43()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293;
}

void func_44(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = func_57();
	if (func_56(iVar0))
	{
		uVar1 = func_55(iParam0);
		iVar2 = func_46(uVar1, iVar0);
		func_92(func_59(iVar0), func_45(iVar2), -1);
		Global_1963639[iVar0] = func_45(iVar2);
	}
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 2;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 8;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 9;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 10;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 11;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 12;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 13;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 14;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 15;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 16;
		
		default:
	}
	return 0;
}

int func_46(var uParam0, int iParam1)
{
	struct<2> Var0;
	var uVar2;
	
	if (iParam1 > 0)
	{
		func_54(&Var0, uParam0);
		func_50(&uVar2, iParam1);
		if (func_48(&Var0, &uVar2, iParam1))
		{
			return func_47(Var0);
		}
	}
	else if (iParam1 == 0)
	{
		func_54(&Var0, uParam0);
		return func_47(Var0);
	}
	return 0;
}

int func_47(struct<2> Param0)
{
	switch (Param0.f_0)
	{
		case 5:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_medical");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_medical");
					break;
			}
			break;
		
		case 7:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_tobacco");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_tobacco");
					break;
			}
			break;
		
		case 1:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_antiques");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_antiques");
					break;
			}
			break;
		
		case 6:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_narc");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_narc");
					break;
			}
			break;
		
		case 4:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_jewellery");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_jewellery");
					break;
			}
			break;
		
		case 0:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_bones");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_bones");
					break;
			}
			break;
		
		case 3:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_fake");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_fake");
					break;
			}
			break;
		
		case 2:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_hazard");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_hazard");
					break;
			}
			break;
	}
	return 0;
}

int func_48(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 != *uParam1)
	{
		return 1;
	}
	else if (uParam0->f_1 == uParam1->f_1)
	{
		iVar0 = func_49(uParam0, iParam2);
		if (iVar0 <= 2)
		{
			return 1;
		}
		else
		{
			iVar1 = 0;
			while (uParam0->f_1 == uParam1->f_1 && iVar1 < 10)
			{
				func_54(uParam0, *uParam0);
				iVar1++;
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_49(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar1 = 0;
	iVar0 = iParam1;
	while (iVar0 >= (iParam1 - 2))
	{
		if (iVar0 >= 0)
		{
			func_50(&Var2, iParam1);
			if (*uParam0 == Var2.f_0 && uParam0->f_1 == Var2.f_1)
			{
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return iVar1;
}

void func_50(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_53(Global_1963639[iParam1]);
	*uParam0 = func_52(iVar0);
	uParam0->f_1 = func_51(iVar0);
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 0;
		
		default:
	}
	return 0;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

void func_54(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	*uParam0 = uParam1;
	uParam0->f_1 = iVar0;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 0;
		
		case 6:
			return 1;
		
		case 7:
			return 2;
		
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		default:
	}
	return -1;
}

bool func_56(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_57()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (Global_1963639[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		case 3:
			return 8;
		
		case 4:
			return 9;
		
		case 5:
			return 10;
		
		case 6:
			return 11;
		
		case 7:
			return 12;
		
		default:
	}
	return 0;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

int func_60(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_3();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 18086;
		
		case 1:
			return 18087;
		
		case 2:
			return 18088;
		
		case 3:
			return 18089;
		
		default:
	}
	return 18086;
}

int func_62()
{
	int iVar0;
	int iVar1;
	
	if (!func_42())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_60(func_59(iVar0), -1) != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_64(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_64(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_65(uParam1));
}

int func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_3();
		if (iVar1 > -1)
		{
			Global_2805862 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2805862 = 1;
		}
	}
	return iVar0;
}

bool func_66(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*uParam1 != 0 && *uParam1 != 1)
	{
		*uParam1 = 0;
	}
	switch (*uParam1)
	{
		case 0:
			iVar0 = -1723077437;
			iVar1 = func_83();
			iVar2 = 1673236337;
			if (func_79(78225582, -1799524201, iVar1, 2108234284, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_79(78225582, 69656641, iVar2, 2108234284, iParam0, 0, 0, 4, 0, 3))
				{
					if (func_79(78225582, -739932302, -576067948, 2108234284, 1, 0, iParam0, 4, iVar2, 3))
					{
						*uParam1 = 1;
					}
					else
					{
						*uParam1 = 3;
					}
				}
				else
				{
					*uParam1 = 3;
				}
			}
			else
			{
				*uParam1 = 3;
			}
			if (*uParam1 == 1 && func_75())
			{
			}
			else
			{
				*uParam1 = 3;
				func_69(func_73());
			}
			break;
		
		case 1:
			if (func_68(func_73()))
			{
				if (func_67(func_73()) == 2)
				{
					*uParam1 = 2;
					func_69(func_73());
				}
				else
				{
					*uParam1 = 3;
					func_69(func_73());
				}
			}
			break;
	}
	return *uParam1 != 1;
}

int func_67(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_68(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_69(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_95())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_72(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_70(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_70(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_71(&(uParam0->f_14));
	func_71(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_71(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_72(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_73()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_74(iVar0) != 2147483647)
		{
			if (func_72(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_74(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_75()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_95())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_73();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_3()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_78(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4536678 = 1;
			}
			return 0;
		}
		if (Global_2695872)
		{
			if (Global_4535172[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_74(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4535172[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535172[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4535172[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535172[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535172[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_76(Global_4535172[iVar2 /*85*/], iVar2);
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	return 0;
}

void func_76(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_37(Var0.f_1);
	if ((Global_262145.f_24258 && !Global_262145.f_24259) && !Global_262145.f_24260)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_77();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_77()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
			case 883337077:
			case -1274418755:
			case -1853979468:
			case -239888995:
			case 1163066566:
			case -955087020:
			case 1874391251:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_95())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_3()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_73();
	if (iVar1 == -1)
	{
		if (!func_81(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_80(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4535172[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535172[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535172[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_95())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_3()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535172[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535172[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_82(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_95())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = uParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_76(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_83()
{
	return Global_4536664;
}

void func_84(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_89(iParam1, iParam2))
	{
		iVar0 = func_85();
		Global_2694470[iVar0] = iParam1;
		Global_2694481[iVar0] = iParam0;
	}
}

int func_85()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		func_88();
		func_87("[stat_savemgr_script]SCRIPT: REQUEST_SAVE: checking for a free index ", 0);
		func_86(iVar1, 0);
		if (Global_2694470[iVar1] == 0)
		{
			func_88();
			func_87("[stat_savemgr_script]SCRIPT: REQUEST_SAVE: Found index at ", 0);
			func_86(iVar1, 0);
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

void func_86(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	IntToString(&Var0, iParam0, 16);
	func_87(&Var0, iParam1);
}

void func_87(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			unk_0x52B85E7F7D5BD284(sParam0, 1);
			break;
		
		case 2:
			unk_0x43AAF8DB361D31DF(sParam0, 1);
			break;
	}
}

void func_88()
{
}

int func_89(int iParam0, var uParam1)
{
	if (Global_1575051)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575063) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_90(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9208)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_91() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_91()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_92(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_3();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

void func_93(int iParam0)
{
	func_94(6104, iParam0, -1, 1);
	if (iParam0 == 50)
	{
		func_2(41987, 1, -1);
	}
}

void func_94(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_64(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_95()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_96()
{
	return func_97(PLAYER::PLAYER_ID());
}

int func_97(bool bParam0)
{
	if (bParam0 != func_41() && func_98(bParam0))
	{
		return Global_1853988[bParam0 /*867*/].f_267.f_293.f_3;
	}
	return 0;
}

int func_98(int iParam0)
{
	if (iParam0 != func_41())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_293 != 0;
	}
	return 0;
}

int func_99()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar2 = iVar0;
		iVar1 = (iVar1 + func_100(iVar2));
		iVar0++;
	}
	return iVar1;
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_42())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_97(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_53(func_60(func_59(iVar0), -1));
		if (func_52(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_101(bool bParam0)
{
	if (bParam0 == func_41() || Global_1853988[bParam0 /*867*/].f_267.f_293 == 0)
	{
		return 50;
	}
	return (50 - Global_1853988[bParam0 /*867*/].f_267.f_293.f_3);
}

int func_102()
{
	if (func_105() == func_41())
	{
		return 0;
	}
	return func_103(func_105());
}

int func_103(int iParam0)
{
	if (func_104(iParam0) == func_41())
	{
		return 0;
	}
	return Global_1895156[iParam0 /*609*/].f_10.f_19;
}

int func_104(int iParam0)
{
	if (iParam0 != func_41())
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_41();
}

int func_105()
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_106()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_content_smuggler_resupply")) > 0;
}

bool func_107()
{
	return func_108(PLAYER::PLAYER_ID());
}

int func_108(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_41())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_109()
{
	bool bVar0;
	int iVar1;
	
	if (func_39(PLAYER::PLAYER_ID()))
	{
		bVar0 = func_118();
		if (bVar0 != func_41())
		{
			if (bVar0 != PLAYER::PLAYER_ID())
			{
				if (!func_117() && func_116(bVar0))
				{
					if (!iLocal_718)
					{
						func_115(bVar0, 1);
						iLocal_718 = 1;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1648773, false) && !func_114(PLAYER::PLAYER_ID())) && ((PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), Global_1648773, false) && func_112(bVar0)) || !func_116(bVar0)))
					{
						if (!func_19(&uLocal_719))
						{
							func_18(&uLocal_719, 0, 0);
						}
						else if (func_111(&uLocal_719, 5000, 0))
						{
							if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2657704[bVar0 /*463*/].f_49))
							{
								TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1648773, 16);
							}
						}
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_MODEL(iVar1, func_110(1)) && func_112(PLAYER::PLAYER_ID()))
				{
					if (Global_1950844.f_3715 != func_41())
					{
						if (!func_19(&uLocal_719))
						{
							func_18(&uLocal_719, 0, 0);
						}
						else if (func_111(&uLocal_719, 10000, 0))
						{
							Global_1950844.f_3715 = func_41();
						}
					}
				}
			}
		}
	}
	else if (iLocal_718)
	{
		iLocal_718 = 0;
	}
	else if (func_19(&uLocal_719))
	{
		func_16(&uLocal_719);
	}
}

int func_110(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_111(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_112(bool bParam0)
{
	if (bParam0 != func_41() && func_30(bParam0, 1, 1))
	{
		if (func_113(bParam0) && !func_114(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0)
{
	if (iParam0 != func_41() && func_30(iParam0, 1, 1))
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321, 3);
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 != func_41() && func_30(iParam0, 1, 1))
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321, 4);
	}
	return 0;
}

void func_115(bool bParam0, int iParam1)
{
	struct<6> Var0;
	int iVar9;
	
	Var0.f_0 = -1979765145;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_5 = iParam1;
	Var0.f_3 = 1;
	if (bParam0 == func_41())
	{
		return;
	}
	iVar9 = func_37(bParam0);
	if (iVar9 > 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 9, iVar9);
	}
}

int func_116(bool bParam0)
{
	if (bParam0 != func_41())
	{
		return BitTest(Global_2657704[bParam0 /*463*/].f_321.f_6, 16);
	}
	return 0;
}

bool func_117()
{
	return Global_1950844.f_529;
}

int func_118()
{
	return func_119(PLAYER::PLAYER_ID());
}

int func_119(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_41())
	{
		return iParam0;
	}
	if (func_121(iParam0) != -1)
	{
		iVar0 = func_40(func_121(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_120(iParam0, 0))
			{
				return func_104(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_41();
		}
		return Global_2657704[iParam0 /*463*/].f_321.f_10;
	}
	return func_41();
}

bool func_120(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_41();
}

int func_121(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (func_30(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575063 || Global_2635560.f_2780) && iParam0 == PLAYER::PLAYER_ID()) && func_30(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

void func_122()
{
	int iVar0;
	int iVar1;
	
	if (!func_112(PLAYER::PLAYER_ID()))
	{
		if (iLocal_715)
		{
			iLocal_715 = 0;
		}
		return;
	}
	if (iLocal_715 || !func_124())
	{
		return;
	}
	iVar0 = func_123();
	if (iVar0 == 25 || iVar0 == 12)
	{
		if (iVar0 == 25)
		{
			iVar1 = Global_1835426;
		}
		else if (iVar0 == 12)
		{
			iVar1 = Global_1853832;
		}
		if (iVar1 != func_41() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (iVar0 == 25)
			{
				Global_2657704[bVar1 /*463*/].f_321.f_12 = Global_2657704[bVar1 /*463*/].f_395;
				Global_2657704[bVar1 /*463*/].f_321.f_12.f_1 = Global_2657704[bVar1 /*463*/].f_395.f_1;
			}
			else if (iVar0 == 12)
			{
				Global_2657704[bVar1 /*463*/].f_321.f_12 = Global_2657704[bVar1 /*463*/].f_391;
				Global_2657704[bVar1 /*463*/].f_321.f_12.f_1 = Global_2657704[bVar1 /*463*/].f_391.f_1;
			}
			iLocal_715 = 1;
		}
	}
}

int func_123()
{
	return func_40(Global_1950844.f_514);
}

bool func_124()
{
	return Global_1950844.f_514 != -1;
}

void func_125()
{
	bool bVar0;
	
	bVar0 = false;
	if (func_133(PLAYER::PLAYER_ID()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if ((func_131() && CAM::IS_SCREEN_FADED_IN()) && !func_130())
		{
			if (func_129())
			{
				bVar0 = true;
				iLocal_712 = func_128(0);
			}
		}
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iLocal_712 = -1;
	}
	if (iLocal_712 > -1 && iLocal_712 < 1932)
	{
		if (Global_4543629[iLocal_712 /*26*/].f_1 == 7)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_127())
		{
			func_126(1);
			iLocal_711 = 1;
		}
	}
	else if (iLocal_711)
	{
		func_126(0);
		iLocal_711 = 0;
	}
}

void func_126(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1950844.f_2, 27))
		{
			MISC::SET_BIT(&(Global_1950844.f_2), 27);
		}
	}
	else if (BitTest(Global_1950844.f_2, 27))
	{
		MISC::CLEAR_BIT(&(Global_1950844.f_2), 27);
	}
}

bool func_127()
{
	return BitTest(Global_1950844.f_2, 27);
}

int func_128(int iParam0)
{
	return Global_1573860[iParam0 /*4*/].f_1;
}

bool func_129()
{
	return Global_1573860[0 /*4*/] > 0;
}

bool func_130()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0;
}

int func_131()
{
	if (func_132() == 0)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	return Global_1574632.f_18;
}

int func_133(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (func_30(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575063 && iParam0 == PLAYER::PLAYER_ID()) && func_30(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

void func_134()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (func_140(PLAYER::PLAYER_ID()))
	{
		if ((((PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_131()) && CAM::IS_SCREEN_FADED_IN()) && func_118() == PLAYER::PLAYER_ID()) && Global_1950844.f_4794.f_3)
		{
			bVar0 = true;
			if (Global_1950837 == 31)
			{
				if (func_139() || func_137())
				{
					if (!iLocal_709)
					{
						iVar1 = func_136();
						iLocal_710 = iVar1;
						MISC::CLEAR_BIT(&(Global_1950844.f_15[iLocal_710 /*3*/][1]), 3);
						Global_2694610 = 1;
						func_135(-1, 0, -1, 0, 0);
						iLocal_709 = 1;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		if (iLocal_709)
		{
			if (iLocal_710 != -1)
			{
				MISC::SET_BIT(&(Global_1950844.f_15[iLocal_710 /*3*/][1]), 3);
				iLocal_710 = -1;
			}
			if (!func_140(PLAYER::PLAYER_ID()))
			{
				Global_2694610 = 0;
				iLocal_709 = 0;
			}
		}
	}
}

void func_135(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 < 0 && iParam0 != -1)
	{
		return;
	}
	if (Global_1950837 == 0 && bParam1)
	{
		return;
	}
	if (bParam1)
	{
		Global_1950844.f_4794 = iParam0;
		Global_1950844.f_4794.f_1 = iParam2;
		Global_1950844.f_4794.f_2 = iParam3;
		Global_1950844.f_4794.f_4 = iParam4;
		Global_1950844.f_4794.f_3 = 1;
	}
	else
	{
		Global_1950844.f_4794 = -1;
		Global_1950844.f_4794.f_1 = -1;
		Global_1950844.f_4794.f_6 = -1;
		Global_1950844.f_4794.f_2 = 0;
		Global_1950844.f_4794.f_3 = 0;
		Global_1950844.f_4794.f_4 = 0;
	}
}

var func_136()
{
	return Global_1950844.f_514;
}

int func_137()
{
	if (func_138(2) || func_138(1))
	{
		return 1;
	}
	return 0;
}

bool func_138(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2672524.f_62.f_1, iParam0);
	}
	return BitTest(Global_2672524.f_62.f_2, (iParam0 - 32));
}

var func_139()
{
	return Global_2672524.f_62.f_57;
}

int func_140(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (func_30(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_40(Global_2657704[iParam0 /*463*/].f_321.f_7) == 24;
			}
		}
	}
	return 0;
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller")) == 0) || func_142(Global_4718592.f_117591) != 0)
	{
		iLocal_708 = 0;
		return;
	}
	if (iLocal_708)
	{
		return;
	}
	iVar0 = -1;
	iVar1 = 13;
	iVar2 = 0;
	while (iVar2 <= (Global_1058071.f_266 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_119[iVar2]) || ENTITY::IS_ENTITY_DEAD(Global_1058071.f_119[iVar2], false))
		{
		}
		else
		{
			iVar3 = ENTITY::GET_ENTITY_MODEL(Global_1058071.f_119[iVar2]);
			if (iVar3 != Global_4980736.f_6204[iVar1 /*546*/].f_15)
			{
			}
			else
			{
				iVar0 = iVar2;
			}
			else
			{
				iVar2++;
			}
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return;
			}
			Var4 = { Global_4980736.f_6204[iVar1 /*546*/] };
			Var7 = { ENTITY::GET_ENTITY_COORDS(Global_1058071.f_119[iVar0], true) };
			if (SYSTEM::VDIST2(Var4, Var7) > 3f && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Global_1058071.f_119[iVar0]))
			{
				ENTITY::SET_ENTITY_COORDS(Global_1058071.f_119[iVar0], Var4, true, false, false, true);
				iLocal_708 = 1;
			}
		}

int func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_28622[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143()
{
	if (func_107())
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_content_smuggler_resupply")) > 0)
		{
			if (iLocal_707 == -1)
			{
				if (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22 != -1)
				{
					iLocal_707 = Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22;
				}
			}
			else if (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22 == -1 || Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22 == 8)
			{
				Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22 = iLocal_707;
			}
		}
		else if (iLocal_707 != -1)
		{
			iLocal_707 = -1;
		}
	}
}

void func_144()
{
	if (BitTest(Global_1950844.f_8, 25))
	{
		if (Global_4282954 != -1)
		{
			Global_4282954 = -1;
		}
	}
}

void func_145()
{
	if (func_30(PLAYER::PLAYER_ID(), 1, 1))
	{
		if ((((func_150() && func_149()) && func_148()) && func_147(1)) && iLocal_704 == 0)
		{
			iLocal_704 = 1;
		}
		if (!func_131() && iLocal_704 == 1)
		{
			iLocal_704 = 2;
		}
		if (((PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_131()) && !func_148()) && func_149())
		{
			func_146(0);
			iLocal_704 = 0;
		}
		if ((!func_149() && !func_148()) && iLocal_704 != 0)
		{
			iLocal_704 = 0;
		}
	}
}

void func_146(int iParam0)
{
	Global_1574921 = iParam0;
}

var func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_1574935[iVar0], iVar1);
}

bool func_148()
{
	return Global_2694594;
}

bool func_149()
{
	return Global_1574921;
}

bool func_150()
{
	return (Global_1574935[0] != 0 || Global_1574935[1] != 0);
}

void func_151()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_155(PLAYER::PLAYER_ID()) == 164 && func_152(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_232 != 99 && Global_2672524.f_2514[0 /*80*/].f_1 == 1)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
	}
}

int func_152(int iParam0)
{
	if (func_108(iParam0))
	{
		if (func_153(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_154(iParam0, 9);
	}
	return 0;
}

var func_154(int iParam0, int iParam1)
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_155(int iParam0)
{
	if (func_156(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_33;
	}
	return -1;
}

int func_156(int iParam0, int iParam1)
{
	if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_157()
{
	if (func_159(PLAYER::PLAYER_ID()) && ((((func_158() || BitTest(Global_1574589, 7)) || BitTest(Global_1574589, 8)) || BitTest(Global_1574589, 4)) || BitTest(Global_1574589, 1)))
	{
		if (!func_127())
		{
			func_126(1);
			iLocal_511 = 1;
		}
	}
	else if (iLocal_511)
	{
		func_126(0);
		iLocal_511 = 0;
	}
}

bool func_158()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (func_30(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_41())
			{
				return func_40(Global_2657704[iParam0 /*463*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

void func_160()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == -127723389)
	{
		if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			iVar1 = HUD::GET_WARNING_SCREEN_MESSAGE_HASH();
			if (iVar1 == 15890625 || iVar1 == -398982408)
			{
				iVar0 = 1;
			}
		}
	}
	Global_4536666 = iVar0;
	Global_4536667 = HUD::IS_WARNING_MESSAGE_ACTIVE();
}

void func_161()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		iLocal_510 = 0;
		return;
	}
	if (Global_4718592.f_171045 != 6 && Global_4718592.f_171045 != 7)
	{
		return;
	}
	if (iLocal_510)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_110343 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_110349[iVar0 /*1098*/].f_944[iVar1] >= 91)
			{
				func_162(&(Global_4980736.f_110349[iVar0 /*1098*/].f_944[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_91870 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_91874[iVar0 /*529*/].f_52[iVar1] >= 91)
			{
				func_162(&(Global_4980736.f_91874[iVar0 /*529*/].f_52[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_42750 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_42751[iVar0 /*160*/].f_99[iVar1] >= 91)
			{
				func_162(&(Global_4980736.f_42751[iVar0 /*160*/].f_99[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_74915 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_74917[iVar0 /*225*/].f_115[iVar1] >= 91)
			{
				func_162(&(Global_4980736.f_74917[iVar0 /*225*/].f_115[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_219864 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_219865[iVar0 /*178*/].f_100[iVar1] >= 91)
			{
				func_162(&(Global_4980736.f_219865[iVar0 /*178*/].f_100[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_144662 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4718592.f_118170[iVar0 /*218*/].f_195[iVar1] >= 91)
			{
				func_162(&(Global_4718592.f_118170[iVar0 /*218*/].f_195[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_24223 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_24224[iVar0 /*275*/].f_254[iVar1] >= 91)
			{
				func_162(&(Global_4980736.f_24224[iVar0 /*275*/].f_254[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4718592.f_175537[iVar0 /*115*/].f_109[iVar1] >= 91)
			{
				func_162(&(Global_4718592.f_175537[iVar0 /*115*/].f_109[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_199684 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_199691[iVar0 /*66*/].f_60[iVar1] >= 91)
			{
				func_162(&(Global_4980736.f_199691[iVar0 /*66*/].f_60[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (Global_4718592.f_1750 - 1))
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4980736.f_199685[iVar2] - 1))
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				if (Global_4980736.f_203652[iVar2 /*3961*/][iVar0 /*66*/].f_60[iVar1] >= 91)
				{
					func_162(&(Global_4980736.f_203652[iVar2 /*3961*/][iVar0 /*66*/].f_60[iVar1]));
				}
				iVar1++;
			}
			iVar0++;
		}
		iVar2++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_82343 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_82352[iVar0 /*156*/].f_71[iVar1] >= 91)
			{
				func_162(&(Global_4980736.f_82352[iVar0 /*156*/].f_71[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_6201 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_6204[iVar0 /*546*/].f_343[iVar1] >= 91)
			{
				func_162(&(Global_4980736.f_6204[iVar0 /*546*/].f_343[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iLocal_510 = 1;
}

void func_162(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	iVar0 += 5;
	*uParam0 = iVar0;
}

void func_163()
{
	if (func_169())
	{
		if ((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_130())
		{
			func_168(&uLocal_507, 1, 0);
		}
	}
	if (func_19(&uLocal_507))
	{
		Global_44322 = 1;
		if (func_111(&uLocal_507, 5000, 1))
		{
			func_16(&uLocal_507);
		}
	}
	if ((func_164() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_130())
	{
		if (!iLocal_509)
		{
			NETWORK::NETWORK_SUPPRESS_INVITE(true);
			iLocal_509 = 1;
		}
	}
	else if (iLocal_509)
	{
		NETWORK::NETWORK_SUPPRESS_INVITE(false);
		iLocal_509 = 0;
	}
}

int func_164()
{
	if (func_167(PLAYER::PLAYER_ID()) || func_165())
	{
		return 1;
	}
	return 0;
}

bool func_165()
{
	return func_166() == 1;
}

int func_166()
{
	return Global_1978359;
}

var func_167(int iParam0)
{
	return Global_2657704[iParam0 /*463*/].f_444.f_1;
}

void func_168(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

bool func_169()
{
	return func_170("HI_LEAVE") != -1;
}

int func_170(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_44123[iVar0 /*32*/].f_8)) && MISC::ARE_STRINGS_EQUAL(&(Global_44123[iVar0 /*32*/].f_8), sParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_171()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0 || Global_4718592.f_117591 != Global_262145.f_33923[1])
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			func_16(&(Local_500[iVar0 /*2*/]));
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!ENTITY::IS_ENTITY_ATTACHED(Global_1058071.f_119[iVar0]))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(Global_1058071.f_119[iVar0], true) };
			fVar4 = 0f;
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar4, true, false);
			if ((Var1.f_2 - fVar4) > 1.5f)
			{
				if (!func_19(&(Local_500[iVar0 /*2*/])))
				{
					func_168(&(Local_500[iVar0 /*2*/]), 0, 0);
				}
				else if (func_17(Local_500[iVar0 /*2*/], 3000, 0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1058071.f_119[iVar0]))
					{
						ENTITY::SET_ENTITY_COORDS(Global_1058071.f_119[iVar0], Global_4980736.f_6204[iVar0 /*546*/], true, false, false, true);
						OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Global_1058071.f_119[iVar0]);
						func_16(&(Local_500[iVar0 /*2*/]));
					}
				}
			}
			else
			{
				func_16(&(Local_500[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
}

void func_172()
{
	if ((!Global_1971297 && func_173(PLAYER::PLAYER_ID())) && !Global_1971295)
	{
		Global_1971295 = 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_VEHICLE_SPAWN")) < 1)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_499))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_499);
		}
		iLocal_496 = 0;
		iLocal_497 = 0;
		bLocal_498 = false;
		return;
	}
	if (Global_1971295 && !bLocal_498)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_499))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_499);
		}
		if (iLocal_496)
		{
			iLocal_496 = 0;
			iLocal_497 = 0;
			bLocal_498 = false;
		}
		else
		{
			return;
		}
	}
	if (iLocal_496 && iLocal_497)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD")) >= 0 && SCRIPT::IS_THREAD_ACTIVE(iLocal_499))
		{
			Global_1971295 = 0;
			iLocal_497 = 0;
			bLocal_498 = false;
		}
	}
	if (iLocal_496)
	{
		return;
	}
	if (!Global_1971295 && !bLocal_498)
	{
		bLocal_498 = true;
		iLocal_497 = 0;
		Global_1971295 = 1;
	}
	if (bLocal_498)
	{
		SCRIPT::REQUEST_SCRIPT("AM_MP_VEHICLE_REWARD");
		if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_VEHICLE_REWARD"))
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD")) < 1 && !SCRIPT::IS_THREAD_ACTIVE(iLocal_499))
			{
				if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_VEHICLE_REWARD", -1, true, 0))
				{
					iLocal_499 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD"), 2050);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_VEHICLE_REWARD");
					iLocal_496 = 1;
					iLocal_497 = 1;
				}
				else if (!Global_1971295)
				{
					Global_1971295 = 1;
				}
			}
			else if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_499))
			{
				if (!Global_1971295)
				{
					Global_1971295 = 1;
				}
			}
		}
	}
}

var func_173(int iParam0)
{
	return func_174(&(Global_2657704[iParam0 /*463*/].f_442), 0);
}

var func_174(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_175()
{
	if (func_182(PLAYER::PLAYER_ID()))
	{
		if (SCRIPT::DOES_SCRIPT_EXIST("appMPJobListNEW") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0)
		{
			func_176(0);
		}
	}
}

void func_176(int iParam0)
{
	if (func_181())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_180())
		{
			func_178(1, 1);
		}
		else
		{
			func_178(0, 0);
		}
	}
	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8371, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21845 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 30);
	}
	if (!func_177())
	{
		Global_20500.f_1 = 3;
	}
}

int func_177()
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_178(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_179(0))
		{
			Global_20704 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
			}
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == 1)
	{
		Global_20704 = 0;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
}

int func_179(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_180()
{
	return BitTest(Global_1963795, 5);
}

bool func_181()
{
	return BitTest(Global_1963795, 19);
}

int func_182(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (func_183(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_183(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (func_30(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_40(Global_2657704[iParam0 /*463*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

void func_184()
{
	if (func_133(PLAYER::PLAYER_ID()))
	{
		if (func_186() && !func_185())
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == 863149140)
			{
				func_168(&uLocal_493, 1, 0);
			}
		}
	}
	if (func_19(&uLocal_493))
	{
		if (!Global_4593995)
		{
			Global_4593995 = 1;
		}
		else if (func_111(&uLocal_493, 5000, 1))
		{
			func_16(&uLocal_493);
			Global_4593995 = 0;
		}
	}
	if (Global_1836768.f_78)
	{
		if (!iLocal_495)
		{
			if (!func_127())
			{
				func_126(1);
				iLocal_495 = 1;
			}
		}
	}
	else if (iLocal_495)
	{
		func_126(0);
		iLocal_495 = 0;
	}
}

int func_185()
{
	if (Global_2672524.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_186()
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

void func_187()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((Global_100885.f_394 > 0 || Global_98122) && Global_2883587 == 122)
	{
		iVar0 = 0;
		while (iVar0 < 125)
		{
			if (func_188(Global_4538180[iVar0]))
			{
				Global_4538432[iVar0] = 1;
			}
			iVar0++;
		}
	}
	if (iLocal_492)
	{
		if (func_30(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 10, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 10), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 10));
			if (func_188(iVar1))
			{
				switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
				{
					case joaat("mp_m_freemode_01"):
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 0, 0, 0);
						break;
					
					case joaat("mp_f_freemode_01"):
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 4, 14, 0);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 4, 0, 0);
						break;
					}
			}
			iVar2 = func_91();
			iVar3 = 0;
			while (iVar3 < 21)
			{
				if (Global_2359296[iVar2 /*5568*/].f_681.f_1336[iVar3 /*13*/][10] != 0)
				{
					iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 10, Global_2359296[iVar2 /*5568*/].f_681.f_1336[iVar3 /*13*/][10], Global_2359296[iVar2 /*5568*/].f_681.f_1610[iVar3 /*13*/][10]);
					if (func_188(iVar1))
					{
						Global_2359296[iVar2 /*5568*/].f_681.f_2306[iVar3] = 0;
					}
				}
				iVar3++;
			}
			iLocal_492 = 0;
		}
	}
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case -514913742:
		case -878040611:
		case 482583909:
		case -602911151:
			if (func_4(41907, -1) || (MISC::IS_PC_VERSION() && func_189(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case 1460860356:
		case -1318980275:
		case 1383502026:
		case 853179368:
			if (func_4(41904, -1) || (MISC::IS_PC_VERSION() && func_189(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case -454979229:
		case -2112416072:
		case -2143753138:
		case -1064462516:
			if (func_4(41905, -1) || (MISC::IS_PC_VERSION() && func_189(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case -90719025:
		case -1879788941:
		case -301152196:
		case -1533649058:
			if (func_4(41906, -1) || (MISC::IS_PC_VERSION() && func_189(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case 140662884:
		case 1719951255:
		case -49715659:
		case -1286013725:
			if (func_4(41908, -1) || (MISC::IS_PC_VERSION() && func_189(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case -1107289734:
		case 670922658:
		case -1487561132:
		case 1985271521:
			if (func_4(41972, -1) || (MISC::IS_PC_VERSION() && func_189(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case -936530475:
		case -1243933865:
		case -1253098937:
		case -2078117252:
			if (func_4(41974, -1) || (MISC::IS_PC_VERSION() && func_189(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case -640050226:
		case 45163847:
		case -772630900:
		case 25792662:
			if (func_4(41973, -1) || (MISC::IS_PC_VERSION() && func_189(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case 1147367644:
		case 1847196647:
		case -2076574952:
		case 994214923:
			if (func_4(41975, -1) || (MISC::IS_PC_VERSION() && func_189(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_189(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_78469;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_190(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		iVar3 = func_63(iVar2, iVar0);
		return BitTest(iVar3, uVar1);
	}
	return 0;
}

bool func_190(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 14385;
	if ((bParam4 && Global_4539490) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_0"):
					case joaat("dlc_mp_biker_m_special_2_0"):
					case joaat("dlc_mp_biker_m_special_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_1"):
					case joaat("dlc_mp_biker_m_special_2_1"):
					case joaat("dlc_mp_biker_m_special_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_2"):
					case joaat("dlc_mp_biker_m_special_2_2"):
					case joaat("dlc_mp_biker_m_special_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_3"):
					case joaat("dlc_mp_biker_m_special_2_3"):
					case joaat("dlc_mp_biker_m_special_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_4"):
					case joaat("dlc_mp_biker_m_special_2_4"):
					case joaat("dlc_mp_biker_m_special_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_5"):
					case joaat("dlc_mp_biker_m_special_2_5"):
					case joaat("dlc_mp_biker_m_special_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_7"):
					case joaat("dlc_mp_biker_m_special_2_7"):
					case joaat("dlc_mp_biker_m_special_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_8"):
					case joaat("dlc_mp_biker_m_special_2_8"):
					case joaat("dlc_mp_biker_m_special_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_11"):
					case joaat("dlc_mp_biker_m_special_2_11"):
					case joaat("dlc_mp_biker_m_special_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4539490)
		{
			iVar0 = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
		}
		else
		{
			iVar0 = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
	}
	else
	{
		iVar0 = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10303;
					break;
				
				case 232:
					*uParam2 = 10304;
					break;
				
				case 233:
					*uParam2 = 10305;
					break;
				
				case 234:
					*uParam2 = 10306;
					break;
				
				case 235:
					*uParam2 = 10307;
					break;
				
				case 236:
					*uParam2 = 10308;
					break;
				
				case 237:
					*uParam2 = 10309;
					break;
				
				case 238:
					*uParam2 = 10310;
					break;
				
				case 239:
					*uParam2 = 10311;
					break;
				
				case 240:
					*uParam2 = 10312;
					break;
				
				case 241:
					*uParam2 = 10313;
					break;
				
				case 242:
					*uParam2 = 10314;
					break;
				
				case 243:
					*uParam2 = 10315;
					break;
				
				case 244:
					*uParam2 = 10316;
					break;
				
				case 245:
					*uParam2 = 10317;
					break;
				
				case 246:
					*uParam2 = 10318;
					break;
				
				case 247:
					*uParam2 = 10319;
					break;
				
				case 248:
					*uParam2 = 10320;
					break;
				
				case 249:
					*uParam2 = 10321;
					break;
				
				case 250:
					*uParam2 = 10322;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10419;
					break;
				
				case 252:
					*uParam2 = 10420;
					break;
				
				case 253:
					*uParam2 = 10421;
					break;
				
				case 254:
					*uParam2 = 10422;
					break;
				
				case 255:
					*uParam2 = 10423;
					break;
				
				case 256:
					*uParam2 = 10424;
					break;
				
				case 257:
					*uParam2 = 10425;
					break;
				
				case 258:
					*uParam2 = 10426;
					break;
				
				case 259:
					*uParam2 = 10427;
					break;
				
				case 260:
					*uParam2 = 10428;
					break;
				
				case 261:
					*uParam2 = 11845;
					break;
				
				case 262:
					*uParam2 = 11846;
					break;
				
				case 263:
					*uParam2 = 11847;
					break;
				
				case 264:
					*uParam2 = 11848;
					break;
				
				case 265:
					*uParam2 = 11849;
					break;
				
				case 266:
					*uParam2 = 11850;
					break;
				
				case 267:
					*uParam2 = 11851;
					break;
				
				case 268:
					*uParam2 = 11852;
					break;
				
				case 269:
					*uParam2 = 11853;
					break;
				
				case 270:
					*uParam2 = 11854;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11876;
					break;
				
				case 272:
					*uParam2 = 11877;
					break;
				
				case 273:
					*uParam2 = 11878;
					break;
				
				case 274:
					*uParam2 = 11879;
					break;
				
				case 275:
					*uParam2 = 11880;
					break;
				
				case 276:
					*uParam2 = 11881;
					break;
				
				case 277:
					*uParam2 = 11882;
					break;
				
				case 278:
					*uParam2 = 11883;
					break;
				
				case 279:
					*uParam2 = 11884;
					break;
				
				case 280:
					*uParam2 = 11885;
					break;
				
				case 281:
					*uParam2 = 11886;
					break;
				
				case 282:
					*uParam2 = 11887;
					break;
				
				case 283:
					*uParam2 = 11974;
					break;
				
				case 284:
					*uParam2 = 11975;
					break;
				
				case 285:
					*uParam2 = 11976;
					break;
				
				case 286:
					*uParam2 = 11977;
					break;
				
				case 287:
					*uParam2 = 11978;
					break;
				
				case 288:
					*uParam2 = 11979;
					break;
				
				case 289:
					*uParam2 = 11980;
					break;
				
				case 290:
					*uParam2 = 11981;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11982;
					break;
				
				case 292:
					*uParam2 = 11983;
					break;
				
				case 293:
					*uParam2 = 11984;
					break;
				
				case 294:
					*uParam2 = 11985;
					break;
				
				case 295:
					*uParam2 = 11986;
					break;
				
				case 296:
					*uParam2 = 11987;
					break;
				
				case 297:
					*uParam2 = 11988;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10323;
					break;
				
				case 232:
					*uParam2 = 10324;
					break;
				
				case 233:
					*uParam2 = 10325;
					break;
				
				case 234:
					*uParam2 = 10326;
					break;
				
				case 235:
					*uParam2 = 10327;
					break;
				
				case 236:
					*uParam2 = 10328;
					break;
				
				case 237:
					*uParam2 = 10329;
					break;
				
				case 238:
					*uParam2 = 10330;
					break;
				
				case 239:
					*uParam2 = 10331;
					break;
				
				case 240:
					*uParam2 = 10332;
					break;
				
				case 241:
					*uParam2 = 10333;
					break;
				
				case 242:
					*uParam2 = 10334;
					break;
				
				case 243:
					*uParam2 = 10335;
					break;
				
				case 244:
					*uParam2 = 10336;
					break;
				
				case 245:
					*uParam2 = 10337;
					break;
				
				case 246:
					*uParam2 = 10338;
					break;
				
				case 247:
					*uParam2 = 10339;
					break;
				
				case 248:
					*uParam2 = 10340;
					break;
				
				case 249:
					*uParam2 = 10341;
					break;
				
				case 250:
					*uParam2 = 10342;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10429;
					break;
				
				case 252:
					*uParam2 = 10430;
					break;
				
				case 253:
					*uParam2 = 10431;
					break;
				
				case 254:
					*uParam2 = 10432;
					break;
				
				case 255:
					*uParam2 = 10433;
					break;
				
				case 256:
					*uParam2 = 10434;
					break;
				
				case 257:
					*uParam2 = 10435;
					break;
				
				case 258:
					*uParam2 = 10436;
					break;
				
				case 259:
					*uParam2 = 10437;
					break;
				
				case 260:
					*uParam2 = 10438;
					break;
				
				case 261:
					*uParam2 = 11855;
					break;
				
				case 262:
					*uParam2 = 11856;
					break;
				
				case 263:
					*uParam2 = 11857;
					break;
				
				case 264:
					*uParam2 = 11858;
					break;
				
				case 265:
					*uParam2 = 11859;
					break;
				
				case 266:
					*uParam2 = 11860;
					break;
				
				case 267:
					*uParam2 = 11861;
					break;
				
				case 268:
					*uParam2 = 11862;
					break;
				
				case 269:
					*uParam2 = 11863;
					break;
				
				case 270:
					*uParam2 = 11864;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11888;
					break;
				
				case 272:
					*uParam2 = 11889;
					break;
				
				case 273:
					*uParam2 = 11890;
					break;
				
				case 274:
					*uParam2 = 11891;
					break;
				
				case 275:
					*uParam2 = 11892;
					break;
				
				case 276:
					*uParam2 = 11893;
					break;
				
				case 277:
					*uParam2 = 11894;
					break;
				
				case 278:
					*uParam2 = 11895;
					break;
				
				case 279:
					*uParam2 = 11896;
					break;
				
				case 280:
					*uParam2 = 11897;
					break;
				
				case 281:
					*uParam2 = 11898;
					break;
				
				case 282:
					*uParam2 = 11899;
					break;
				
				case 283:
					*uParam2 = 11989;
					break;
				
				case 284:
					*uParam2 = 11990;
					break;
				
				case 285:
					*uParam2 = 11991;
					break;
				
				case 286:
					*uParam2 = 11992;
					break;
				
				case 287:
					*uParam2 = 11993;
					break;
				
				case 288:
					*uParam2 = 11994;
					break;
				
				case 289:
					*uParam2 = 11995;
					break;
				
				case 290:
					*uParam2 = 11996;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11997;
					break;
				
				case 292:
					*uParam2 = 11998;
					break;
				
				case 293:
					*uParam2 = 11999;
					break;
				
				case 294:
					*uParam2 = 12000;
					break;
				
				case 295:
					*uParam2 = 12001;
					break;
				
				case 296:
					*uParam2 = 12002;
					break;
				
				case 297:
					*uParam2 = 12003;
					break;
			}
			break;
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 14385;
}

void func_191()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_155(PLAYER::PLAYER_ID()) == 276 && func_196(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_195(PLAYER::PLAYER_ID()))
		{
			if (CAM::IS_SCREEN_FADING_OUT() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				bVar3 = true;
				bVar1 = true;
			}
		}
		else
		{
			bVar0 = true;
			if (func_194(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
		}
	}
	if (bVar3)
	{
		func_193(1);
	}
	if (bVar0)
	{
		if (!iLocal_489)
		{
			func_192(1);
			iLocal_489 = 1;
		}
	}
	else if (iLocal_489)
	{
		func_192(0);
		iLocal_489 = 0;
	}
	if (bVar1)
	{
		if (!iLocal_491)
		{
			Global_1950843 = 1;
			iLocal_491 = 1;
		}
	}
	else if (iLocal_491)
	{
		if (Global_1950843)
		{
			Global_1950843 = 0;
		}
		iLocal_491 = 0;
	}
	if (bVar2)
	{
		if (Global_2625764 == 145)
		{
			if (!iLocal_490)
			{
				Global_2625764 = 79;
				iLocal_490 = 1;
			}
		}
	}
	else if (iLocal_490)
	{
		if (Global_2625764 == 79)
		{
			Global_2625764 = 145;
		}
		iLocal_490 = 0;
	}
}

void func_192(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_100885.f_1414[39]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[40]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[41]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[42]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[43]), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_100885.f_1414[39]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[40]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[41]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[42]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[43]), 2);
	}
}

void func_193(int iParam0)
{
	if (func_181())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_179(0))
		{
			func_176(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

bool func_194(int iParam0)
{
	return Global_2657704[iParam0 /*463*/].f_272;
}

int func_195(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (func_30(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_40(Global_2657704[iParam0 /*463*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	if (func_156(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

void func_197()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (func_205(91))
	{
		func_168(&uLocal_69, 1, 0);
		bVar1 = true;
	}
	if (!iLocal_487)
	{
		if (func_19(&uLocal_69))
		{
			if (!func_111(&uLocal_69, 60000, 1))
			{
				bVar1 = true;
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_contact_requests")) > 0)
				{
					iLocal_487 = 1;
					iVar0 = 0;
					while (iVar0 < 415)
					{
						iLocal_71[iVar0] = 0;
						if (STREAMING::IS_MODEL_A_VEHICLE(Global_1586488[iVar0 /*142*/].f_66))
						{
							if (!func_203(Global_1586488[iVar0 /*142*/].f_66))
							{
								iLocal_71[iVar0] = Global_1586488[iVar0 /*142*/].f_66;
								Global_1586488[iVar0 /*142*/].f_66 = 0;
							}
						}
						iVar0++;
					}
				}
			}
			else
			{
				func_16(&uLocal_69);
			}
		}
	}
	else
	{
		bVar1 = true;
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_contact_requests")) <= 0)
		{
			func_16(&uLocal_69);
			iVar0 = 0;
			while (iVar0 < 415)
			{
				if (iLocal_71[iVar0] != 0)
				{
					Global_1586488[iVar0 /*142*/].f_66 = iLocal_71[iVar0];
				}
				iLocal_71[iVar0] = 0;
				iVar0++;
			}
			iLocal_487 = 0;
			func_16(&uLocal_69);
		}
	}
	if (!bVar1)
	{
		iVar2 = func_63(5396, -1);
		if (iVar2 == joaat("hauler2") || iVar2 == joaat("phantom3"))
		{
			if (Global_1586488[158 /*142*/].f_66 == 0)
			{
				Global_1586488[158 /*142*/].f_66 = iVar2;
				func_199(158, 158, -1);
			}
		}
	}
	if (iLocal_488 >= 0 && iLocal_488 < 415)
	{
		if ((!BitTest(Global_1586488[iLocal_488 /*142*/].f_103, 2) && Global_1586488[iLocal_488 /*142*/].f_66 != 0) && func_198(Global_1586488[iLocal_488 /*142*/].f_66))
		{
			MISC::SET_BIT(&(Global_1586488[iLocal_488 /*142*/].f_103), 2);
			if (iVar0 == 0)
			{
				if (!BitTest(Global_1586488[iLocal_488 /*142*/].f_103, 15))
				{
					MISC::SET_BIT(&(Global_1586488[iLocal_488 /*142*/].f_103), 15);
				}
			}
		}
	}
	iLocal_488++;
	if (iLocal_488 >= 415)
	{
		iLocal_488 = 0;
	}
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("coquette"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt2"):
		case joaat("rapidgt"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("vacca"):
		case joaat("ztype"):
		case joaat("akuma"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("elegy2"):
		case joaat("khamelion"):
		case joaat("hotknife"):
		case joaat("carbonrs"):
		case joaat("voltic"):
		case joaat("comet2"):
		case joaat("surano"):
		case joaat("banshee"):
		case joaat("blazer3"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("turismor"):
		case joaat("zentorno"):
		case joaat("huntley"):
		case joaat("alpha"):
		case joaat("paradise"):
		case joaat("bifta"):
		case joaat("kalahari"):
		case joaat("btype"):
		case joaat("thrust"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("coquette2"):
		case joaat("monster"):
		case joaat("sovereign"):
		case joaat("innovation"):
		case joaat("hakuchou"):
		case joaat("furoregt"):
		case joaat("boxville4"):
		case joaat("casco"):
		case joaat("dinghy3"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("mule3"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
		case joaat("blista2"):
		case joaat("dodo"):
		case joaat("dukes"):
		case joaat("marshall"):
		case joaat("stalion"):
		case joaat("submersible2"):
		case joaat("blista3"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("dukes2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
		case joaat("blimp2"):
		case joaat("jester2"):
		case joaat("massacro2"):
		case joaat("ratloader2"):
		case joaat("slamvan"):
		case joaat("barracks3"):
		case joaat("slamvan2"):
		case joaat("brawler"):
		case joaat("chino"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("luxor2"):
		case joaat("osiris"):
		case joaat("swift2"):
		case joaat("t20"):
		case joaat("toro"):
		case joaat("vindicator"):
		case joaat("virgo"):
		case joaat("windsor"):
		case joaat("faction"):
		case joaat("moonbeam"):
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("btype2"):
		case joaat("lurcher"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("virgo3"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
		case joaat("cog55"):
		case joaat("cog552"):
		case joaat("cognoscenti"):
		case joaat("cognoscenti2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter5"):
		case joaat("schafter4"):
		case joaat("schafter6"):
		case joaat("verlierer2"):
		case joaat("tampa"):
		case joaat("banshee2"):
		case joaat("sultanrs"):
		case joaat("btype3"):
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
		case joaat("le7b"):
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("contender"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("tyrus"):
		case joaat("sheava"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("lynx"):
		case joaat("avarus"):
		case joaat("blazer4"):
		case joaat("chimera"):
		case joaat("daemon2"):
		case joaat("defiler"):
		case joaat("esskey"):
		case joaat("faggio3"):
		case joaat("faggio"):
		case joaat("hakuchou2"):
		case joaat("manchez"):
		case joaat("nightblade"):
		case joaat("raptor"):
		case joaat("ratbike"):
		case joaat("sanctus"):
		case joaat("shotaro"):
		case joaat("tornado6"):
		case joaat("vortex"):
		case joaat("wolfsbane"):
		case joaat("youga2"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("comet2"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("elegy2"):
		case joaat("elegy"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("italigtb2"):
		case joaat("nero"):
		case joaat("nero2"):
		case joaat("penetrator"):
		case joaat("specter"):
		case joaat("specter2"):
		case joaat("tempesta"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("ruiner3"):
		case joaat("technical2"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("gp1"):
		case joaat("infernus2"):
		case joaat("ruston"):
		case joaat("turismo2"):
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
		case joaat("gb200"):
		case joaat("fagaloa"):
		case joaat("ellie"):
		case joaat("issi3"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("scramjet"):
		case joaat("freecrawler"):
		case joaat("menacer"):
		case joaat("patriot2"):
		case joaat("stafford"):
		case joaat("swinger"):
		case joaat("terbyte"):
		case joaat("strikeforce"):
		case joaat("pbus2"):
		case joaat("blimp3"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("zr380"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("jugular"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("stryder"):
		case joaat("retinue2"):
		case joaat("formula2"):
		case joaat("yosemite2"):
		case joaat("furia"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("yosemite3"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("coquette4"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("kosatka"):
		case joaat("toreador"):
		case joaat("italirsx"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("astron"):
		case joaat("baller7"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("reever"):
		case joaat("shinobi"):
		case joaat("iwagen"):
		case joaat("brioso3"):
		case joaat("corsita"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("postlude"):
		case joaat("rhinehart"):
		case joaat("sm722"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("torero2"):
		case joaat("vigero2"):
		case joaat("weevil2"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("omnisegt"):
		case joaat("manchez3"):
		case joaat("brickade2"):
		case joaat("eudora"):
		case joaat("powersurge"):
		case joaat("surfer3"):
		case joaat("journey2"):
		case joaat("entity3"):
		case joaat("panthere"):
		case joaat("boor"):
		case joaat("everon2"):
		case joaat("tulip2"):
		case joaat("r300"):
		case joaat("virtue"):
		case joaat("issi8"):
		case joaat("broadway"):
		case joaat("tahoma"):
		case joaat("conada2"):
		case joaat("gauntlet6"):
		case joaat("brigham"):
		case joaat("clique2"):
		case joaat("l35"):
		case joaat("ratel"):
		case joaat("stingertt"):
		case joaat("buffalo5"):
		case joaat("streamer216"):
		case joaat("monstrociti"):
		case joaat("coureur"):
		case joaat("speedo5"):
		case joaat("raiju"):
		case joaat("inductor"):
		case joaat("inductor2"):
			return 1;
			break;
	}
	return 0;
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_200(iParam0, iParam1, iParam2);
	if (iParam0 >= 415)
	{
		return;
	}
	if (iParam2 == func_3() || iParam2 == -1)
	{
		Global_1945123[iParam0] = iParam1;
	}
}

void func_200(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_92(func_202(iParam0), iParam1, iParam2);
		func_92(func_201(iParam0), 0, iParam2);
	}
	else
	{
		func_92(func_202(iParam0), 255, iParam2);
		func_92(func_201(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_201(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31548 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34096 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36594 + iParam0) - 337);
	}
	else if (iParam0 < 415)
	{
		return ((41160 + iParam0) - 363);
	}
	return (24625 + iParam0);
}

int func_202(int iParam0)
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31538 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34076 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36568 + iParam0) - 337);
	}
	else if (iParam0 < 415)
	{
		return ((41108 + iParam0) - 363);
	}
	return (4036 + iParam0);
}

int func_203(int iParam0)
{
	if (func_204(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((((((iParam0 == joaat("blazer5") || iParam0 == joaat("boxville5")) || iParam0 == joaat("dune5")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("ruiner2")) || iParam0 == joaat("technical2")) || iParam0 == joaat("voltic2")) || iParam0 == joaat("wastelander")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("technical3")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("riot2")) || iParam0 == joaat("thruster")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("deluxo")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("oppressor2"))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("ambulance"):
		case joaat("annihilator"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("asea2"):
		case joaat("baletrailer"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("benson"):
		case joaat("besra"):
		case joaat("biff"):
		case joaat("blimp"):
		case joaat("blimp2"):
		case joaat("boattrailer"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("bulldozer"):
		case joaat("burrito"):
		case joaat("burrito3"):
		case joaat("burrito4"):
		case joaat("burrito5"):
		case joaat("bus"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("camper"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob3"):
		case joaat("cargoplane"):
		case joaat("coach"):
		case joaat("crusader"):
		case joaat("cuban800"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dinghy"):
		case joaat("dinghy2"):
		case joaat("dinghy3"):
		case joaat("docktrailer"):
		case joaat("docktug"):
		case joaat("dodo"):
		case joaat("dump"):
		case joaat("dune2"):
		case joaat("duster"):
		case joaat("emperor3"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("firetruk"):
		case joaat("fixter"):
		case joaat("flatbed"):
		case joaat("forklift"):
		case joaat("freight"):
		case joaat("freightcar"):
		case joaat("freightcont1"):
		case joaat("freightcont2"):
		case joaat("freightgrain"):
		case joaat("frogger"):
		case joaat("frogger2"):
		case joaat("gburrito"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("hauler"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("jet"):
		case joaat("jetmax"):
		case joaat("journey"):
		case joaat("lazer"):
		case joaat("limo2"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("mammatus"):
		case joaat("marshall"):
		case joaat("marquis"):
		case joaat("maverick"):
		case joaat("mesa2"):
		case joaat("metrotrain"):
		case joaat("monster"):
		case joaat("miljet"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("phantom"):
		case joaat("police"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("pounder"):
		case joaat("pranger"):
		case joaat("predator"):
		case joaat("proptrailer"):
		case joaat("raketrailer"):
		case joaat("rancherxl2"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("riot"):
		case joaat("ripley"):
		case joaat("rubble"):
		case joaat("rumpo2"):
		case joaat("sadler2"):
		case joaat("savage"):
		case joaat("scrap"):
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("shamal"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("skylift"):
		case joaat("speeder"):
		case joaat("speedo2"):
		case joaat("squalo"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("stretch"):
		case joaat("stunt"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("suntrap"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("taco"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("tankercar"):
		case joaat("taxi"):
		case joaat("technical"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("tiptruck"):
		case joaat("tiptruck2"):
		case joaat("titan"):
		case joaat("toro"):
		case joaat("tourbus"):
		case joaat("tr2"):
		case joaat("tr3"):
		case joaat("tr4"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tractor3"):
		case joaat("trailerlogs"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("trailersmall"):
		case joaat("trash"):
		case joaat("trash2"):
		case joaat("trflat"):
		case joaat("tropic"):
		case joaat("tvtrailer"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("valkyrie"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("cargobob4"):
		case joaat("dinghy4"):
		case joaat("seashark3"):
		case joaat("speeder2"):
		case joaat("toro2"):
		case joaat("tropic2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("valkyrie2"):
		case joaat("dune4"):
		case joaat("ruiner3"):
		case joaat("brickade"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("vetir"):
		case joaat("longfin"):
		case joaat("patrolboat"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("mule5"):
			return 0;
		
		default:
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_204(int iParam0)
{
	switch (iParam0)
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
		case joaat("conada2"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("streamer216"):
		case joaat("raiju"):
			return 1;
		
		default:
	}
	return 0;
}

int func_205(int iParam0)
{
	if ((Global_22959 || Global_22958) || Global_22960)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 172)
	{
		if (Global_20500.f_1 == 10)
		{
			if (Global_7685 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_206()
{
	int iVar0;
	int iVar1;
	
	if (func_213(PLAYER::PLAYER_ID()))
	{
		if (!func_212())
		{
			if (func_211())
			{
				iVar0 = func_170("OFF_SEAT_RGSIT0");
				StringCopy(&(Global_44123[iVar0 /*32*/].f_8), "MPJAC_SIT", 16);
			}
		}
	}
	else if (func_209(PLAYER::PLAYER_ID()))
	{
		if (!func_208())
		{
			if (func_207())
			{
				iVar1 = func_170("CLB_SEAT_RGSIT0");
				StringCopy(&(Global_44123[iVar1 /*32*/].f_8), "MPJAC_SIT", 16);
			}
		}
	}
}

bool func_207()
{
	return func_170("CLB_SEAT_RGSIT0") != -1;
}

bool func_208()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!func_29(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33)
	{
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1114.575f, -3161.203f, -37.87047f };
			Var3 = { 1117.76f, -3161.251f, -35.30797f };
			fVar6 = 2.9375f;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1008.052f, -3171.083f, -39.90714f };
			Var3 = { 1008.271f, -3168.189f, -37.34464f };
			fVar6 = 1.5625f;
			break;
		
		default:
			return 0;
			break;
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 0);
}

int func_209(int iParam0)
{
	if (func_210(Global_1853988[iParam0 /*867*/].f_267.f_33, -1))
	{
		return 1;
	}
	return 0;
}

int func_210(int iParam0, int iParam1)
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
				return 1;
				break;
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
				return 1;
				break;
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
				return 1;
				break;
			}
	}
	return 0;
}

bool func_211()
{
	return func_170("OFF_SEAT_RGSIT0") != -1;
}

bool func_212()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!func_29(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33)
	{
		case 87:
			Var0 = { -1556.616f, -572.9843f, 107.5237f };
			Var3 = { -1554.045f, -576.6298f, 109.3354f };
			fVar6 = 2.1875f;
			break;
		
		case 88:
			Var0 = { -1370.352f, -463.2942f, 71.04904f };
			Var3 = { -1374.76f, -463.8354f, 72.86154f };
			fVar6 = 2.1875f;
			break;
		
		case 89:
			Var0 = { -125.7556f, -639.4572f, 167.8274f };
			Var3 = { -125.2504f, -643.829f, 169.6399f };
			fVar6 = 2.1875f;
			break;
		
		case 90:
			Var0 = { -81.66152f, -803.5988f, 242.3928f };
			Var3 = { -80.11616f, -799.4528f, 244.2053f };
			fVar6 = 2.1875f;
			break;
		
		default:
			return 0;
			break;
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 0);
}

int func_213(int iParam0)
{
	if (func_214(Global_1853988[iParam0 /*867*/].f_267.f_33))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

void func_215()
{
	if (Global_2672524.f_947.f_6 >= 0)
	{
		if (Global_2766622 == 54 || Global_2766622 == 27)
		{
			if (Global_2766716.f_7729 == 0)
			{
				if (HUD::IS_PAUSE_MENU_ACTIVE() || !func_30(PLAYER::PLAYER_ID(), 1, 1))
				{
					Global_2766625 = 1;
					if (Global_1574582.f_1)
					{
						Global_1574582.f_1 = 0;
						Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_9 = 0;
						if (func_30(PLAYER::PLAYER_ID(), 1, 0))
						{
							PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
						}
						PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
						NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
						NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
					}
				}
			}
		}
	}
}

void func_216()
{
	if (func_140(PLAYER::PLAYER_ID()) && Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 == PLAYER::PLAYER_ID())
	{
		if ((!iLocal_66 && !func_222()) && ((((func_130() || func_221()) || func_158()) || func_220()) || func_219()))
		{
			if (Global_2694610)
			{
				func_168(&Local_67, 1, 0);
			}
			else
			{
				Global_2694610 = 1;
				iLocal_66 = 1;
				func_18(&Local_67, 1, 0);
			}
		}
		else if (iLocal_66 && ((func_222() || func_218(Local_67, 1500, 1)) || func_217()))
		{
			Global_2694610 = 0;
			iLocal_66 = 0;
			func_16(&Local_67);
		}
	}
	if ((iLocal_66 && Global_2694610) && !func_133(PLAYER::PLAYER_ID()))
	{
		Global_2694610 = 0;
		iLocal_66 = 0;
		func_16(&Local_67);
	}
}

int func_217()
{
	if (func_117())
	{
		return Global_1950844.f_530 == 0;
	}
	return 0;
}

int func_218(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_19(&iParam0))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

var func_219()
{
	return BitTest(Global_1048576.f_10, 18);
}

var func_220()
{
	return Global_2672524.f_3575;
}

var func_221()
{
	return Global_1836768.f_78;
}

bool func_222()
{
	return Global_1575063;
}

void func_223()
{
	int iVar0;
	
	if (iLocal_65)
	{
		return;
	}
	if (MISC::IS_PC_VERSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		iLocal_65 = 0;
		return;
	}
	if (func_12(Global_4718592.f_117591) != 4)
	{
		iLocal_65 = 0;
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		if ((Global_4980736.f_110349[iVar0 /*1098*/].f_27 == joaat("a_m_y_carclub_01") || Global_4980736.f_110349[iVar0 /*1098*/].f_27 == joaat("a_m_y_studioparty_01")) || Global_4980736.f_110349[iVar0 /*1098*/].f_27 == joaat("a_f_y_clubcust_04"))
		{
			Global_4980736.f_110349[iVar0 /*1098*/].f_27 = 0;
		}
		iVar0++;
	}
	iLocal_65 = 1;
}

void func_224()
{
	bool bVar0;
	int iVar1;
	
	if (!func_231(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (((((func_30(PLAYER::PLAYER_ID(), 1, 1) && func_230(PLAYER::PLAYER_ID())) && func_229(PLAYER::PLAYER_ID())) && !func_228(PLAYER::PLAYER_ID())) && !func_227(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_IN())
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			bVar0 = true;
		}
		else
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("avenger3")))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_226(0);
			func_225(0, -1, 1);
		}
	}
}

void func_225(bool bParam0, int iParam1, bool bParam2)
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2646835.f_1582) || Global_2646835.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam2)
	{
		if (bParam0)
		{
			Global_2646835.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2646835.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2646835.f_1582 = -1;
		}
		Global_2646835.f_1585 = iParam1;
		Global_2646835.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_226(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6, 21))
		{
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6), 21);
		}
	}
	else if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6, 21))
	{
		MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6), 21);
	}
}

int func_227(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (func_30(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_41())
			{
				return func_40(Global_2657704[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_228(int iParam0)
{
	if (iParam0 != func_41())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 30);
	}
	return 0;
}

int func_229(int iParam0)
{
	if (iParam0 != func_41())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_6, 21);
	}
	return 0;
}

int func_230(int iParam0)
{
	if (iParam0 != func_41())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 12);
	}
	return 0;
}

bool func_231(int iParam0)
{
	return func_232(iParam0);
}

int func_232(int iParam0)
{
	if (iParam0 != func_41())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_299, 1);
	}
	return 0;
}

void func_233()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iLocal_63 = 0;
		iLocal_64 = 0;
		return;
	}
	if (Global_4718592.f_117591 != Global_262145.f_33923[0])
	{
		iLocal_63 = 0;
		iLocal_64 = 0;
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		iLocal_63 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		iLocal_64 = 0;
	}
	if (iLocal_63 == 0)
	{
		iLocal_63 = Global_2794162.f_310;
	}
	if (iLocal_64 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]))
			{
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) == joaat("draugur"))
			{
				iLocal_64 = Global_1058071.f_233[iVar0];
			}
			else
			{
				iVar0++;
			}
		}
	}
	if (iLocal_63 != 0 && iLocal_64 != 0)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_64, false) && SYSTEM::VDIST2(-876.92f, -2769.47f, -49.22f, ENTITY::GET_ENTITY_COORDS(iLocal_64, true)) < 25f) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_64) == 0)
		{
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_64, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-880f, -2770f, -49f, "M23_1_dlc_int_01_M23_1"));
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_64, false))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_64) != INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-880f, -2770f, -49f, "M23_1_dlc_int_01_M23_1"))
			{
				return;
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_64))
			{
				NETWORK::NETWORK_EXPLODE_VEHICLE(iLocal_64, true, false, -1);
			}
		}
	}
}

void func_234()
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0) || !Global_2683883.f_24)
	{
		iLocal_62 = 0;
		return;
	}
	if (iLocal_62)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_1750 - 1))
	{
		switch (Global_1978379.f_35)
		{
			case 1:
				Global_4718592.f_180959[iVar0 /*20*/] = 0;
				break;
			
			case 2:
				Global_4718592.f_180959[iVar0 /*20*/] = 1;
				break;
			
			case 3:
				Global_4718592.f_180959[iVar0 /*20*/] = 2;
				break;
			
			case 4:
				Global_4718592.f_180959[iVar0 /*20*/] = 3;
				break;
			
			case 5:
				Global_4718592.f_180959[iVar0 /*20*/] = 4;
				break;
		}
		iVar0++;
	}
	iLocal_62 = 1;
}

void func_235()
{
	if (func_95())
	{
		return;
	}
	if (!func_236())
	{
		return;
	}
	if (!func_131())
	{
		return;
	}
	if (!func_231(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if ((Global_1945123[190] - 1) != 190)
	{
		Global_1945123[190] = 191;
	}
}

int func_236()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_237()) > 0 && Global_1574666 == 2)
	{
		return 1;
	}
	return 0;
}

int func_237()
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_238()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (((!iLocal_61 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 81, false, 0)) && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1103.562f, -3000f, -40f, "gr_grdlc_int_01") == 0)
	{
		if ((!func_240(PLAYER::PLAYER_ID(), 1, 1) && !func_117()) && !func_239(PLAYER::PLAYER_ID()))
		{
			iLocal_61 = 1;
			MISC::SET_BIT(&(Global_1950844.f_4601), 3);
		}
	}
	else if (((iLocal_61 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 81, false, 0)) && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1103.562f, -3000f, -40f, "gr_grdlc_int_01") != 0)
	{
		iLocal_61 = 0;
		MISC::CLEAR_BIT(&(Global_1950844.f_4601), 3);
	}
}

int func_239(int iParam0)
{
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_41())
	{
		return 0;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_241()
{
	if (!func_246())
	{
		func_245();
		return;
	}
	func_242(930, 1);
	iLocal_60 = 1;
}

void func_242(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0 || !func_243(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (bParam1)
		{
			if (Global_1956878.f_5713[iVar0] == iParam0)
			{
				return;
			}
			if (Global_1956878.f_5713[iVar0] == 0)
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
			}
		}
		else if (Global_1956878.f_5713[iVar0] == iParam0)
		{
			Global_1956878.f_5713[iVar0] = 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iVar1 > -1)
		{
			Global_1956878.f_5713[iVar1] = iParam0;
		}
	}
}

bool func_243(int iParam0)
{
	return func_244(iParam0, PLAYER::PLAYER_ID());
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 != func_41() && func_30(iParam1, 0, 1))
	{
		if (Global_1956878.f_5818.f_3 != 0)
		{
			return 1;
		}
		if (iParam0 != 0)
		{
			iVar0 = iParam1;
			if (func_120(iParam1, 1))
			{
				iVar0 = func_104(iParam1);
			}
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2650208.f_199.f_962[iVar1 /*75*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2650208.f_199.f_962[iVar1 /*75*/].f_1[iVar2] == iParam0)
						{
							return 1;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

void func_245()
{
	if (iLocal_60)
	{
		func_242(930, 0);
		iLocal_60 = 0;
	}
}

int func_246()
{
	if (func_247(PLAYER::PLAYER_ID()) != 2)
	{
		return 0;
	}
	if (Global_2794162.f_6788 < 6)
	{
		return 0;
	}
	return 1;
}

int func_247(int iParam0)
{
	if (func_155(iParam0) == 317)
	{
		return func_248(iParam0, 317);
	}
	return -1;
}

int func_248(int iParam0, int iParam1)
{
	if (func_155(iParam0) == iParam1)
	{
		return func_196(iParam0);
	}
	return -1;
}

void func_249()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_247(PLAYER::PLAYER_ID()) != 2)
	{
		return;
	}
	if (!func_29(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!func_29(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (((iVar1 != joaat("cargobob") && iVar1 != joaat("cargobob2")) && iVar1 != joaat("cargobob3")) && iVar1 != joaat("cargobob4"))
	{
		return;
	}
	if (func_250(PLAYER::PLAYER_PED_ID(), 1) != -1)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 103) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 103))
	{
		iVar2 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0);
		if (func_29(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			VEHICLE::SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(iVar0, false);
			VEHICLE::DETACH_ENTITY_FROM_CARGOBOB(iVar0, iVar2);
		}
	}
}

int func_250(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_251()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (func_247(PLAYER::PLAYER_ID()) != 0)
	{
		bVar0 = false;
	}
	if (Global_2794162.f_6788 != 9)
	{
		bVar0 = false;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		bVar0 = false;
	}
	if (!func_29(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = false;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = false;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!func_29(iVar1))
		{
			bVar0 = false;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iVar1) != joaat("toreador"))
		{
			bVar0 = false;
		}
		else if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (func_250(PLAYER::PLAYER_PED_ID(), 1) == -1)
	{
		bVar0 = false;
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1115.654f, -2273.433f, 28.89841f, 1115.247f, -2278.109f, 30.92747f, 3f, false, true, 0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!func_19(&uLocal_58))
		{
			func_18(&uLocal_58, 0, 0);
		}
		else if (func_111(&uLocal_58, 10000, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
		}
	}
	else if (func_19(&uLocal_58))
	{
		func_16(&uLocal_58);
	}
}

void func_252()
{
	if (!iLocal_57)
	{
		if ((func_183(PLAYER::PLAYER_ID()) && BitTest(Global_1950844.f_8, 25)) && func_118() != PLAYER::PLAYER_ID())
		{
			iLocal_57 = 1;
		}
	}
	else
	{
		if (!func_183(PLAYER::PLAYER_ID()))
		{
			iLocal_57 = 0;
			MISC::CLEAR_BIT(&(Global_1950844.f_8), 25);
			return;
		}
		if (((func_253() && Global_1950837 != 3) && !MISC::ARE_STRINGS_EQUAL(&(Global_23390.f_1), "CMOD_MOD_E")) && !Global_1950844.f_3432)
		{
			if (BitTest(Global_1950844.f_8, 25))
			{
				MISC::CLEAR_BIT(&(Global_1950844.f_8), 25);
			}
		}
		else if (!BitTest(Global_1950844.f_8, 25))
		{
			MISC::SET_BIT(&(Global_1950844.f_8), 25);
		}
	}
}

var func_253()
{
	return BitTest(Global_78938, 8);
}

void func_254()
{
	struct<4> Var0;
	struct<4> Var4;
	struct<16> Var8;
	
	if (((Global_2766625 || ((func_30(PLAYER::PLAYER_ID(), 1, 1) && func_131()) && !iLocal_55)) || func_284(17)) || iLocal_56)
	{
		if (!iLocal_55)
		{
		}
		iLocal_55 = 1;
		StringCopy(&Var0, "&#166;", 16);
		StringCopy(&Var4, "&#8249;", 16);
		if (Global_2766625)
		{
		}
		else if (func_284(17))
		{
			iLocal_56 = 1;
		}
		if (func_108(PLAYER::PLAYER_ID()))
		{
			iLocal_56 = 0;
			Var8 = { func_280() };
			if (func_279(&Var8, Var0) || func_279(&Var8, Var4))
			{
				if (func_278(PLAYER::PLAYER_ID()))
				{
					func_265(&Var8, 0, 1);
				}
				else
				{
					func_265(&Var8, 1, 1);
				}
				func_264();
			}
		}
		if (func_263(PLAYER::PLAYER_ID()))
		{
			StringCopy(&Var8, func_258(PLAYER::PLAYER_ID()), 64);
			if (func_279(&Var8, Var0) || func_279(&Var8, Var4))
			{
				func_255(Var8);
			}
		}
	}
}

void func_255(char[64] cParam0)
{
	func_256(55, 56, &cParam0, -1, 1);
	Global_1914706[PLAYER::PLAYER_ID() /*299*/].f_283 = { cParam0 };
}

void func_256(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	iVar0 = func_257(iParam0, iParam3);
	iVar1 = func_257(iParam1, iParam3);
	if (iVar0 != 0 && iVar1 != 0)
	{
		StringCopy(&cVar2, "", 32);
		StringCopy(&cVar10, "", 32);
		iVar18 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
		if (iVar18 > 0)
		{
			iVar19 = 10;
			if (iVar18 < 10)
			{
				iVar19 = iVar18;
			}
			StringCopy(&cVar2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, iVar19, 31), 32);
			if (iVar18 > 10)
			{
				StringCopy(&cVar10, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, iVar18, 31), 32);
			}
		}
		STATS::STAT_SET_STRING(iVar0, &cVar2, bParam4);
		STATS::STAT_SET_STRING(iVar1, &cVar10, bParam4);
	}
}

var func_257(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(3, uParam0, func_65(uParam1));
}

char* func_258(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("DEFAULT_LAB_N");
	if (iParam0 == func_41())
	{
		return sVar0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_262(&(Global_1914706[iParam0 /*299*/].f_283));
		return sVar0;
	}
	if (Global_1895156[iParam0 /*609*/].f_10.f_121 != Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121)
	{
		return sVar0;
	}
	if (func_154(iParam0, 28) || (func_154(PLAYER::PLAYER_ID(), 28) && !func_260(iParam0)))
	{
		return sVar0;
	}
	iVar1 = func_104(iParam0);
	if (iVar1 != func_41())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_259() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return sVar0;
			}
		}
	}
	if (iVar1 != func_41())
	{
		sVar0 = func_262(&(Global_1914706[iVar1 /*299*/].f_283));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return sVar0;
		}
		else
		{
			return sVar0;
		}
	}
	return sVar0;
}

bool func_259()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_260(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_261(iParam0) };
	if (func_259())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_261(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_262(var uParam0)
{
	return uParam0;
}

int func_263(int iParam0)
{
	if (iParam0 == func_41())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_479, 14);
}

void func_264()
{
	int iVar0;
	struct<2> Var1;
	
	Var1.f_0 = 2103624094;
	Var1.f_1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0] != func_41())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]))
			{
				SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var1, 2, func_37(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_265(char* sParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_274(1) || iParam1 == 0)
		{
			func_256(47, 48, sParam0, -1, 1);
			if (func_273() && iParam1 == 0)
			{
				func_272(sParam0, bParam2);
			}
		}
		else
		{
			func_256(119, 121, sParam0, -1, 1);
			if (func_107() && iParam1 == 1)
			{
				func_270(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_105), sParam0, 64);
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
	if ((!func_259() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_268())
	{
		func_267(28);
	}
	else
	{
		func_266(28);
	}
}

void func_266(bool bParam0)
{
	MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

void func_267(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

int func_268()
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (func_269())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_259())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_269()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_270(char* sParam0, bool bParam1)
{
	struct<16> Var0;
	
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_256(45, 46, sParam0, -1, 1);
			Var0 = { func_271(119, 121, -1) };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_256(119, 121, sParam0, -1, 1);
			}
		}
	}
	if ((!func_259() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_268())
	{
		func_267(28);
	}
	else
	{
		func_266(28);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_339), sParam0, 64);
	}
}

struct<16> func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	char cVar18[32];
	
	iVar0 = func_257(iParam0, iParam2);
	iVar1 = func_257(iParam1, iParam2);
	StringCopy(&Var2, STATS::STAT_GET_STRING(iVar0, -1), 64);
	StringCopy(&cVar18, STATS::STAT_GET_STRING(iVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

void func_272(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_256(49, 50, sParam0, -1, 1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_355), sParam0, 64);
	}
	if ((!func_259() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_268())
	{
		func_267(28);
	}
	else
	{
		func_266(28);
	}
}

bool func_273()
{
	return func_278(PLAYER::PLAYER_ID());
}

bool func_274(bool bParam0)
{
	return func_275(PLAYER::PLAYER_ID(), bParam0);
}

bool func_275(int iParam0, bool bParam1)
{
	return func_276(iParam0, bParam1, 1);
}

int func_276(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_41())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_277(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_41() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_277(int iParam0, int iParam1)
{
	if (iParam0 != func_41())
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_41())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_278(int iParam0)
{
	return func_277(iParam0, 1);
}

int func_279(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<16> Var7;
	
	iVar0 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		iVar3 = MISC::GET_HASH_KEY(&cParam1);
		iVar4 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
		iVar5 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam1);
		iVar6 = 0;
		while (iVar6 <= (iVar4 - 1))
		{
			if ((iVar6 + iVar5) > iVar4)
			{
				return 0;
			}
			else if (MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar6, (iVar6 + iVar5))) == iVar3)
			{
				iVar1 = iVar6;
				iVar2 = (iVar6 + iVar5);
				iVar0 = 1;
			}
			else
			{
				iVar6++;
			}
		}
		if (iVar6 != 0)
		{
			StringConCat(&Var7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, iVar1), 64);
		}
		if (iVar6 != (iVar4 - iVar5))
		{
			StringConCat(&Var7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar2, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0)), 64);
		}
		*sParam0 = { Var7 };
	}
	return iVar0;
}

struct<16> func_280()
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = func_104(PLAYER::PLAYER_ID());
	if (iVar0 != func_41())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_154(iVar0, 28) || func_154(PLAYER::PLAYER_ID(), 28)) || func_283(iVar0)) && !func_260(iVar0))
			{
				StringCopy(&Var1, func_281(iVar0, 0), 64);
				return Var1;
			}
			if (!func_259() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				StringCopy(&Var1, func_281(iVar0, 0), 64);
				return Var1;
			}
		}
		return Global_1895156[iVar0 /*609*/].f_10.f_105;
	}
	StringCopy(&Var1, "", 64);
	return Var1;
}

char* func_281(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_275(iParam0, 1))
		{
			return func_282();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}

char* func_282()
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}

int func_283(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_41())
	{
		Var0 = { func_261(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_259() || MISC::IS_PROSPERO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool func_284(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2794162.f_5231.f_7[iVar0], iVar1);
}

void func_285()
{
	if (((func_288() == 3 && func_287()) && func_130()) && func_286(Global_4718592.f_117591))
	{
		NETWORK::NETWORK_BAIL(51, 0, 0);
	}
}

int func_286(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31258[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_287()
{
	return BitTest(Global_2684820.f_1.f_2809, 5);
}

int func_288()
{
	return Global_1057409;
}

void func_289()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar49;
	float fVar50;
	struct<3> Var51;
	
	if (func_19(&uLocal_14))
	{
		MISC::SET_BIT(&Global_8371, 2);
		if (func_111(&uLocal_14, 60000, 0))
		{
			func_168(&uLocal_14, 0, 0);
			func_16(&uLocal_14);
		}
	}
	if (func_19(&uLocal_12) && func_111(&uLocal_12, 1000, 0))
	{
		if (iLocal_21 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_21 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_111(&uLocal_12, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
			{
				AUDIO::STOP_SOUND(iLocal_21);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_21);
			iLocal_21 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_168(&uLocal_12, 0, 0);
			func_16(&uLocal_12);
		}
	}
	if (!iLocal_6 && !func_296())
	{
		return;
	}
	iLocal_6 = 1;
	MISC::SET_BIT(&Global_8371, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_5, 8000);
			iVar1 = func_63(7869, -1);
			func_94(7869, iVar1 + 1, -1, 1);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&Var2);
			Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_295();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_20 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_20 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_20, "07", iLocal_5, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_7)
			{
				if (func_111(&uLocal_8, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, false);
					func_168(&uLocal_8, 0, 0);
					func_16(&uLocal_8);
					func_18(&uLocal_10, 0, 0);
					iLocal_7 = 1;
				}
			}
			else
			{
				fVar49 = (SYSTEM::TO_FLOAT(func_294(&uLocal_10, 0, 0)) / SYSTEM::TO_FLOAT(func_293()));
				fVar50 = (SYSTEM::TO_FLOAT(func_294(&uLocal_8, 0, 0)) / SYSTEM::TO_FLOAT(func_292()));
				fVar50 = (fVar50 * fVar49);
				Var51 = { func_290(Local_16, func_291(), fVar50) };
				ENTITY::SET_ENTITY_COORDS(iLocal_5, Var51, true, false, false, true);
				if (fVar50 >= 1f)
				{
					iLocal_19++;
					Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
					func_168(&uLocal_8, 0, 0);
					func_16(&uLocal_8);
					if (func_292() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_5);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
						{
							AUDIO::STOP_SOUND(iLocal_20);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_20);
						iLocal_20 = -1;
						func_18(&uLocal_12, 0, 0);
						func_18(&uLocal_14, 0, 0);
						func_168(&uLocal_10, 0, 0);
						func_16(&uLocal_10);
						Local_16 = { 0f, 0f, 0f };
						iLocal_19 = 0;
						iLocal_6 = 0;
						iLocal_7 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_290(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_291()
{
	switch (iLocal_19)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_292()
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

int func_293()
{
	return 3150;
}

int func_294(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_295()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_5, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_5, Var0, 2, true);
}

int func_296()
{
	if (((((((func_4(22107, -1) && Global_2639889 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_299(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2684820.f_3076.f_178 >= 1) && Global_2684820.f_3076.f_178 < 4) && func_298()) && func_297())
	{
		return 1;
	}
	return 0;
}

int func_297()
{
	if (func_4(15476, -1) && func_63(5453, func_3()) > 577)
	{
		return 1;
	}
	return 0;
}

int func_298()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_299(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

void func_300()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_303();
	}
	else
	{
		func_301();
	}
}

void func_301()
{
	bool bVar0;
	
	if (iLocal_46 == 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 26)
	{
		if (BitTest(iLocal_46, bVar0))
		{
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_302(bVar0), false);
			MISC::CLEAR_BIT(&iLocal_46, bVar0);
		}
		bVar0++;
	}
	iLocal_47 = 0;
	Global_2766715 = 0;
}

char* func_302(bool bParam0)
{
	switch (bParam0)
	{
		case 9:
			return "RADIO_01_CLASS_ROCK";
		
		case 10:
			return "RADIO_02_POP";
		
		case 12:
			return "RADIO_03_HIPHOP_NEW";
		
		case 18:
			return "RADIO_04_PUNK";
		
		case 17:
			return "RADIO_06_COUNTRY";
		
		case 15:
			return "RADIO_07_DANCE_01";
		
		case 16:
			return "RADIO_08_MEXICAN";
		
		case 11:
			return "RADIO_09_HIPHOP_OLD";
		
		case 23:
			return "RADIO_11_TALK_02";
		
		case 22:
			return "RADIO_12_REGGAE";
		
		case 5:
			return "RADIO_13_JAZZ";
		
		case 6:
			return "RADIO_14_DANCE_02";
		
		case 21:
			return "RADIO_15_MOTOWN";
		
		case 13:
			return "RADIO_20_THELAB";
		
		case 14:
			return "RADIO_16_SILVERLAKE";
		
		case 20:
			return "RADIO_17_FUNK";
		
		case 19:
			return "RADIO_18_90S_ROCK";
		
		case 8:
			return "RADIO_21_DLC_XM17";
		
		case 24:
			return "RADIO_05_TALK_01";
		
		case 2:
			return "RADIO_27_DLC_PRHEI4";
		
		case 4:
			return "RADIO_23_DLC_XM19_RADIO";
		
		case 7:
			return "RADIO_22_DLC_BATTLE_MIX1_RADIO";
		
		case 0:
			return "RADIO_36_AUDIOPLAYER";
		
		case 1:
			return "RADIO_35_DLC_HEI4_MLR";
		
		case 3:
			return "RADIO_34_DLC_HEI4_KULT";
		
		case 25:
			return "RADIO_37_MOTOMAMI";
		
		default:
	}
	return "OFF";
}

void func_303()
{
	int iVar0;
	bool bVar1;
	
	if (!func_304(Global_4718592.f_117591))
	{
		return;
	}
	iVar0 = func_63(9877, -1);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < 26)
	{
		if (!BitTest(iLocal_47, bVar1))
		{
			if (BitTest(iVar0, bVar1))
			{
			}
			MISC::SET_BIT(&iLocal_47, bVar1);
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_302(bVar1), true);
		}
		if (BitTest(iVar0, bVar1) && !BitTest(iLocal_46, bVar1))
		{
			MISC::SET_BIT(&iLocal_46, bVar1);
			Global_2766715 = 1;
		}
		bVar1++;
	}
}

int func_304(int iParam0)
{
	if ((iParam0 == Global_262145.f_31929[0] || iParam0 == Global_262145.f_31929[1]) || iParam0 == Global_262145.f_31929[2])
	{
		return 1;
	}
	return 0;
}

void func_305()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0)
	{
		if (!iLocal_45)
		{
			iLocal_45 = 1;
		}
	}
	else if (iLocal_45)
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
		iLocal_45 = 0;
	}
}

void func_306()
{
	int iVar0;
	
	if (func_130() && func_313(Global_4718592.f_171044))
	{
		if (func_312() == 26)
		{
			iVar0 = func_307();
			if (iVar0 != -1)
			{
				if (func_19(&(Global_1890739[iVar0 /*138*/].f_31)))
				{
					if (func_111(&(Global_1890739[iVar0 /*138*/].f_31), 37500, 0))
					{
						iLocal_44 = 1;
						Global_2684820.f_6341 = -1;
					}
				}
			}
		}
		else if (func_312() == 41)
		{
			if (iLocal_44)
			{
				iLocal_44 = 0;
				Global_2684820.f_6341 = -1;
			}
		}
	}
}

int func_307()
{
	return func_308();
}

int func_308()
{
	struct<13> Var0;
	
	Var0 = { func_310() };
	if (func_309(Var0))
	{
		return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	return func_41();
}

bool func_309(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_310()
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_311(iVar0))
		{
			return Global_2684820.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_311(int iParam0)
{
	return BitTest(Global_2684820.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_312()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192;
}

bool func_313(int iParam0)
{
	return iParam0 == 88;
}

void func_314()
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_262145.f_33923[0] == Global_4718592.f_117591) && (Global_1058071.f_14[0] >= 4 || Global_1058071.f_14[0] <= 6))
	{
		Var0 = { func_317(101) };
		bVar3 = OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 2961.077f, 2743.28f, 40.7426f, 2957.497f, 2756.674f, 45.11757f, 15f, false, true);
		if (!func_316())
		{
			if (bVar3 || Global_1058071.f_14[0] == 5)
			{
				iVar5 = func_315(&iVar4);
				if (((iVar4 >= 0 && iVar4 < 4) && iVar5 >= 0) || iVar5 < 17)
				{
					MISC::SET_BIT(&(Global_4718592.f_1816[iVar4 /*24279*/].f_8212[iVar5]), 12);
				}
			}
		}
		else if ((!bVar3 && Global_1058071.f_14[0] < 5) || Global_1058071.f_14[0] > 5)
		{
			iVar7 = func_315(&iVar6);
			if (((iVar6 >= 0 && iVar6 < 4) && iVar7 >= 0) || iVar7 < 17)
			{
				MISC::CLEAR_BIT(&(Global_4718592.f_1816[iVar6 /*24279*/].f_8212[iVar7]), 12);
			}
		}
	}
}

var func_315(var uParam0)
{
	*uParam0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (*uParam0 < 4 && *uParam0 > -1)
	{
	}
	else
	{
		*uParam0 = 0;
	}
	return Global_1058071.f_14[*uParam0];
}

int func_316()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	iVar1 = func_315(&iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return 0;
	}
	if (iVar1 < 0 || iVar1 >= 17)
	{
		return 0;
	}
	return BitTest(Global_4718592.f_1816[iVar0 /*24279*/].f_8212[iVar1], 12);
}

Vector3 func_317(int iParam0)
{
	switch (iParam0)
	{
		case 101:
			return func_318();
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_318()
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	
	Var0 = { 0f, 0f, 0f };
	iVar3 = func_319();
	if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar3, 0f, -8f, -0.6f) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar4, false, false) && !ENTITY::IS_ENTITY_IN_AIR(iVar3))
		{
			Var0 = { Var0.f_0, Var0.f_1, uVar4 };
		}
		else
		{
			Var0 = { Var0.f_0, Var0.f_1, (Var0.f_2 - 1.5f) };
		}
	}
	return Var0;
}

var func_319()
{
	int iVar0;
	var uVar1[25];
	int iVar27;
	int iVar28;
	var uVar29[25];
	int iVar55;
	
	if (func_120(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != func_105())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
			{
				iVar27 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
				iVar0 = 0;
				while (iVar0 < iVar27)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar1[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar1[iVar0], false))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], func_110(1)))
								{
									if (func_320(uVar1[iVar0]) == func_105())
									{
										Global_2794162.f_310 = uVar1[iVar0];
										return uVar1[iVar0];
									}
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				return Global_2794162.f_310;
			}
		}
	}
	else if (PLAYER::PLAYER_ID() == func_105() && !ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
	{
		iVar55 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar29);
		iVar28 = 0;
		while (iVar28 < iVar55)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar29[iVar28]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar29[iVar28]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar29[iVar28], false))
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar29[iVar28], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar29[iVar28], func_110(1)))
						{
							if (func_320(uVar29[iVar28]) == PLAYER::PLAYER_ID())
							{
								Global_2794162.f_310 = uVar29[iVar28];
								return uVar29[iVar28];
							}
						}
					}
				}
			}
			iVar28++;
		}
	}
	return Global_2794162.f_310;
}

int func_320(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, func_110(1)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Creator_Trailer");
					return func_321(iVar0, 0, 1, 0);
				}
			}
		}
	}
	return func_41();
}

int func_321(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_30(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_30(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_41();
}

void func_322()
{
	int iVar0;
	
	iLocal_43++;
	if (iLocal_43 == 30)
	{
		iLocal_43 = 0;
	}
	else
	{
		return;
	}
	if (((((((((!func_29(PLAYER::PLAYER_PED_ID()) || !func_30(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_131()) || func_113(PLAYER::PLAYER_ID())) || func_239(PLAYER::PLAYER_ID())) || func_133(PLAYER::PLAYER_ID())) || Global_2672524.f_3542) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_29(iVar0))
		{
			if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
			{
				if (ENTITY::GET_ENTITY_CAN_BE_DAMAGED(iVar0))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, 0f);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					ENTITY::SET_ENTITY_PROOFS(iVar0, false, false, false, false, false, false, true, false);
				}
			}
		}
	}
}

void func_323()
{
	var uVar0;
	
	if (iLocal_29)
	{
		if ((((((func_330() == -1 && func_329() == 999) && func_131()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			iLocal_29 = 0;
			func_328(0);
			STATS::STAT_SET_BLOCK_SAVES(false);
			func_325();
		}
	}
	if (!iLocal_28)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&Local_30, 13);
		if (func_309(Local_30))
		{
			iLocal_28 = 1;
		}
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&uVar0, 13);
		if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&uVar0, &Local_30))
		{
			NETWORK::NETWORK_BAIL(0, 0, 0);
			STATS::STAT_SET_BLOCK_SAVES(true);
			if (!func_324())
			{
				func_328(1);
				iLocal_29 = 1;
			}
			iLocal_28 = 0;
		}
	}
}

bool func_324()
{
	return Global_32561;
}

void func_325()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_326(0, iVar0);
		STATS::STAT_CLEAR_SLOT_FOR_RELOAD(iVar0);
		iVar0++;
	}
	STATS::FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE();
}

void func_326(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		func_327();
	}
	Global_1574538[iParam1] = iParam0;
}

void func_327()
{
	Global_2694561 = 0;
}

void func_328(int iParam0)
{
	Global_32561 = iParam0;
}

int func_329()
{
	return Global_32284;
}

int func_330()
{
	return Global_32283;
}

void func_331()
{
	if (Global_2672524.f_62.f_57)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_299) && !ENTITY::IS_ENTITY_DEAD(Global_2794162.f_299, false))
		{
			if (!Global_2672524.f_62.f_21)
			{
				if (iLocal_27 == -1)
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(Global_2794162.f_299, "PV_Slot"))
						{
							iLocal_27 = DECORATOR::DECOR_GET_INT(Global_2794162.f_299, "PV_Slot");
						}
					}
				}
				else if (Global_2359296[func_91() /*5568*/].f_681.f_2 != iLocal_27)
				{
					if (!func_19(&uLocal_25))
					{
						func_18(&uLocal_25, 1, 0);
					}
					else if (func_111(&uLocal_25, 10000, 1))
					{
						func_332(1, 0, 1, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_16(&uLocal_25);
				iLocal_27 = -1;
			}
		}
		else
		{
			func_16(&uLocal_25);
			iLocal_27 = -1;
		}
	}
	else
	{
		func_16(&uLocal_25);
		iLocal_27 = -1;
	}
}

void func_332(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_336() < 0 && Global_1963618)
	{
		return;
	}
	if (func_138(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2672524.f_62.f_60, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2672524.f_62.f_64, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (BitTest(Global_2672524.f_62.f_68, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (bParam0)
	{
		func_335(2);
	}
	else
	{
		func_335(1);
	}
	if (bParam1)
	{
		func_335(11);
	}
	if (bParam2)
	{
		func_335(32);
		if (bParam3)
		{
			if (func_336() >= 0 && BitTest(Global_1586488[func_336() /*142*/].f_103, 0))
			{
				func_335(33);
			}
		}
		else
		{
			func_334(33);
		}
		if (func_336() >= 0)
		{
			if (func_333(Global_1586488[func_336() /*142*/].f_66))
			{
				func_335(40);
			}
		}
	}
	else if (bParam5)
	{
		func_335(37);
	}
	if (bParam4)
	{
		func_335(36);
	}
	if (func_138(36))
	{
		if (func_138(2))
		{
			func_334(36);
		}
	}
	if (bParam6)
	{
		func_335(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2794162.f_440 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_333(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_334(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2672524.f_62.f_1, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2672524.f_62.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2672524.f_62.f_2, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2672524.f_62.f_2), (bParam0 - 32));
	}
}

void func_335(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2672524.f_62.f_1, bParam0))
		{
			MISC::SET_BIT(&(Global_2672524.f_62.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2672524.f_62.f_2, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2672524.f_62.f_2), (bParam0 - 32));
	}
}

int func_336()
{
	if (Global_2359296[func_91() /*5568*/].f_681.f_2 >= 415)
	{
		Global_2359296[func_91() /*5568*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_91() /*5568*/].f_681.f_2;
}

void func_337()
{
	if (func_338(PLAYER::PLAYER_ID()) && func_118() == PLAYER::PLAYER_ID())
	{
		if ((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE()) || func_158())
		{
			func_168(&uLocal_22, 1, 0);
			Global_1950697 = 1;
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				iLocal_24 = 30000;
			}
		}
	}
	if (func_19(&uLocal_22))
	{
		if (func_111(&uLocal_22, iLocal_24, 1))
		{
			func_16(&uLocal_22);
			Global_1950697 = 0;
			iLocal_24 = 10000;
		}
	}
}

int func_338(int iParam0)
{
	if (iParam0 != func_41())
	{
		if (func_30(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_40(Global_2657704[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

void func_339()
{
	if (!func_341() && !func_340())
	{
		if (!STATS::STAT_IS_STATS_TRACKING_ENABLED())
		{
			if (((func_131() && func_30(PLAYER::PLAYER_ID(), 0, 1)) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				STATS::STAT_ENABLE_STATS_TRACKING();
			}
		}
	}
}

bool func_340()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) > 0;
}

bool func_341()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0;
}

void func_342()
{
	if ((Global_112755 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0) && func_131())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_343()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1836398)
		{
			iVar0 = func_344(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10765 = 1;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1836398)
	{
		iLocal_4 = 0;
	}
}

int func_344(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_345()
{
	if (!iLocal_3)
	{
		if (Global_1836398)
		{
			if (func_347() || func_346())
			{
				Global_262145.f_20349 = 1;
			}
			else
			{
				Global_262145.f_20349 = 0;
			}
			iLocal_3 = 1;
		}
	}
	else if (!Global_1836398)
	{
		iLocal_3 = 0;
	}
}

int func_346()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_344(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10874)
	{
		return 0;
	}
	uVar1[0] = func_344(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_344(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_344(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_344(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10870 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10874)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_347()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_344(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10873)
	{
		return 0;
	}
	uVar1[0] = func_344(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_344(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_344(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_344(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10869 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10873)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_348()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			MISC::SET_BIT(&(Global_1853988[iVar0 /*867*/].f_801), true);
			iVar0++;
		}
	}
}

void func_349()
{
	if (Global_262145.f_10849 != 120)
	{
		Global_262145.f_10849 = 120;
	}
}

void func_350()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!func_354())
	{
		return;
	}
	if (iLocal_713 && iLocal_714)
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32968) / SYSTEM::TO_FLOAT(Global_262145.f_32960)));
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32964) / SYSTEM::TO_FLOAT(Global_262145.f_32960)));
	iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32969) / SYSTEM::TO_FLOAT(Global_262145.f_32961)));
	iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32965) / SYSTEM::TO_FLOAT(Global_262145.f_32961)));
	iVar4 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32970) / SYSTEM::TO_FLOAT(Global_262145.f_32962)));
	iVar5 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32966) / SYSTEM::TO_FLOAT(Global_262145.f_32962)));
	iVar6 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32971) / SYSTEM::TO_FLOAT(Global_262145.f_32963)));
	iVar7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32967) / SYSTEM::TO_FLOAT(Global_262145.f_32963)));
	if (!iLocal_713)
	{
		iVar8 = SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar1 + iVar0)) / 2f));
		iVar9 = SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar3 + iVar2)) / 2f));
		iVar10 = SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar5 + iVar4)) / 2f));
		iVar11 = SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar7 + iVar6)) / 2f));
		func_94(11831, iVar8, -1, 1);
		func_94(11832, iVar9, -1, 1);
		func_94(11833, iVar10, -1, 1);
		func_94(11834, iVar11, -1, 1);
		func_94(11835, iVar8, -1, 1);
		func_94(11836, iVar9, -1, 1);
		func_94(11837, iVar10, -1, 1);
		func_94(11838, iVar11, -1, 1);
		func_94(11839, iVar8, -1, 1);
		func_94(11840, iVar9, -1, 1);
		func_94(11841, iVar10, -1, 1);
		func_94(11842, iVar11, -1, 1);
		iLocal_713 = 1;
	}
	if (((((iLocal_713 && !iLocal_714) && Global_2794162.f_6751[0 /*10*/] != -1) && Global_2794162.f_6751[1 /*10*/] != -1) && Global_2794162.f_6751[2 /*10*/] != -1) && Global_2794162.f_6818.f_3 != -1)
	{
		NETWORK::NETWORK_SEED_RANDOM_NUMBER_GENERATOR(Global_2794162.f_6818.f_3);
		func_351(0);
		func_351(1);
		func_351(2);
		NETWORK::NETWORK_SEED_RANDOM_NUMBER_GENERATOR(NETWORK::GET_CLOUD_TIME_AS_INT());
		iLocal_714 = 1;
	}
}

void func_351(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Global_2794162.f_6751[iParam0 /*10*/].f_2 = func_352(2, Global_2794162.f_6751[iParam0 /*10*/].f_1);
	Global_2794162.f_6751[iParam0 /*10*/].f_3 = func_352(3, Global_2794162.f_6751[iParam0 /*10*/].f_1);
	Global_2794162.f_6751[iParam0 /*10*/].f_4 = func_352(4, Global_2794162.f_6751[iParam0 /*10*/].f_1);
	Global_2794162.f_6751[iParam0 /*10*/].f_5 = func_352(7, Global_2794162.f_6751[iParam0 /*10*/].f_1);
	iVar0 = Global_2794162.f_6751[iParam0 /*10*/].f_2;
	iVar1 = Global_2794162.f_6751[iParam0 /*10*/].f_3;
	iVar2 = Global_2794162.f_6751[iParam0 /*10*/].f_4;
	iVar3 = Global_2794162.f_6751[iParam0 /*10*/].f_5;
	if (iParam0 == 0)
	{
		func_94(11831, iVar0, -1, 1);
		func_94(11832, iVar1, -1, 1);
		func_94(11833, iVar2, -1, 1);
		func_94(11834, iVar3, -1, 1);
	}
	else if (iParam0 == 1)
	{
		func_94(11835, iVar0, -1, 1);
		func_94(11836, iVar1, -1, 1);
		func_94(11837, iVar2, -1, 1);
		func_94(11838, iVar3, -1, 1);
	}
	else if (iParam0 == 2)
	{
		func_94(11839, iVar0, -1, 1);
		func_94(11840, iVar1, -1, 1);
		func_94(11841, iVar2, -1, 1);
		func_94(11842, iVar3, -1, 1);
	}
}

int func_352(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 2:
			iVar2 = (Global_262145.f_32968 - Global_262145.f_32964);
			iVar3 = func_353(iVar2);
			iVar1 = (Global_262145.f_32964 + iVar3);
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(Global_262145.f_32960)));
			break;
		
		case 3:
			iVar2 = (Global_262145.f_32969 - Global_262145.f_32965);
			iVar3 = func_353(iVar2);
			iVar1 = (Global_262145.f_32965 + iVar3);
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(Global_262145.f_32961)));
			break;
		
		case 4:
			iVar2 = (Global_262145.f_32970 - Global_262145.f_32966);
			iVar3 = func_353(iVar2);
			iVar1 = (Global_262145.f_32966 + iVar3);
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(Global_262145.f_32962)));
			break;
		
		case 7:
			iVar2 = (Global_262145.f_32971 - Global_262145.f_32967);
			iVar3 = func_353(iVar2);
			iVar1 = (Global_262145.f_32967 + iVar3);
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(Global_262145.f_32963)));
			break;
	}
	if (iParam0 == iParam1)
	{
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_32976));
	}
	return iVar0;
}

int func_353(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, iParam0 + 1);
	iVar1 = (iVar0 % 100);
	if (iVar1 < 50)
	{
		iVar0 = (iVar0 - iVar1);
	}
	else
	{
		iVar0 = (iVar0 + (100 - iVar1));
	}
	if (iVar0 > iParam0)
	{
		return iParam0;
	}
	return iVar0;
}

int func_354()
{
	if (func_356() && func_355(0))
	{
		return 1;
	}
	return 0;
}

var func_355(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_356()
{
	return func_355(func_3() + 1);
}

void func_357()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_358(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
					{
						iLocal_1 = 1;
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
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_1 = 0;
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

void func_358(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_359()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_360()
{
	Global_112837 = 1;
}

