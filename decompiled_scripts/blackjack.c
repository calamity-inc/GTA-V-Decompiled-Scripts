#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = -1;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<1652> Local_116 = { 0, 4, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	struct<8> Local_1776[32];
	struct<1583> Local_2033 = { 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, -1, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	struct<26> Local_3620 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_3646 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_3667 = 0;
	int iLocal_3668 = 0;
	int iLocal_3669[4] = { 0, 0, 0, 0 };
	int iLocal_3674 = 0;
	bool bLocal_3675 = 0;
	int iLocal_3676 = 0;
	int iLocal_3677 = 0;
	int iLocal_3678 = 0;
	int iLocal_3679 = 0;
	int iLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	bool bLocal_3683 = 0;
	bool bLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	int iLocal_3687 = 0;
	int iLocal_3688 = 0;
	int iLocal_3689 = 0;
	int iLocal_3690 = 0;
	int iLocal_3691 = 0;
	int iLocal_3692 = 0;
	bool bLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	int iLocal_3696 = 0;
	int iLocal_3697 = 0;
	int iLocal_3698 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	iLocal_3674 = 1;
	func_450();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_442())
		{
			func_438();
		}
		if (Global_1964414)
		{
			Global_1964414 = 0;
			func_438();
		}
		if (Global_2635563.f_2981 && Global_2640096 != 0)
		{
			if (Global_2640096 != 6)
			{
				func_438();
			}
		}
		if (func_437() && CAM::IS_SCREEN_FADED_OUT())
		{
			func_438();
		}
		if ((!func_436(PLAYER::PLAYER_ID()) && !func_435(PLAYER::PLAYER_ID())) && !func_434(PLAYER::PLAYER_ID()))
		{
			func_438();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !BitTest(Global_4718592.f_34, 7))
		{
			func_438();
		}
		if (func_435(PLAYER::PLAYER_ID()) && func_430() != func_429())
		{
			if (BitTest(Global_2657971[func_430() /*465*/].f_322.f_4, 1) && CAM::IS_SCREEN_FADED_OUT())
			{
				func_438();
			}
		}
		if (func_435(PLAYER::PLAYER_ID()) && func_430() != func_429())
		{
			if (Global_2657971[func_430() /*465*/].f_457 != Global_1964424 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_438();
			}
		}
		if (func_435(PLAYER::PLAYER_ID()) && func_427() != 0)
		{
			func_438();
		}
		if (func_435(PLAYER::PLAYER_ID()) && func_425(PLAYER::PLAYER_ID()))
		{
			func_438();
		}
		iVar0 = 0;
		while (iVar0 < Local_2033.f_257)
		{
			if (!func_424())
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_1595[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iVar0]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_116.f_1595[iVar0], true);
				}
			}
			iVar0++;
		}
		func_87();
		if (func_424())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_86();
	func_83();
	func_76();
	iVar0 = 0;
	while (iVar0 < Local_2033.f_257)
	{
		switch (Local_116.f_1520[iVar0])
		{
			case 0:
				if (Global_2708678 != iVar0 && (Global_2708678 != -1 || func_435(PLAYER::PLAYER_ID())))
				{
					Local_116.f_1560[iVar0] = 1;
					func_75(&(Local_116.f_1[iVar0 /*211*/]));
					func_74(1, iVar0);
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar0])))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iVar0]))
					{
						Local_116.f_1590[iVar0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_116.f_1580[iVar0]);
						if (Local_116.f_1590[iVar0] != -1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar0]), func_73(), func_72(iVar0), 3))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar0]), 2116425869))
								{
									Local_116.f_1580[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iVar0), 0f, 0f, func_70(iVar0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iVar0]), Local_116.f_1580[iVar0], func_73(), func_69(iVar0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iVar0]);
								}
							}
							else if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar0]), 2116425869))
							{
								Local_116.f_1580[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iVar0), 0f, 0f, func_70(iVar0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iVar0]), Local_116.f_1580[iVar0], func_73(), func_72(iVar0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iVar0]);
							}
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_116.f_1600[(iVar0 * 4 + iVar1)] != func_429() && Global_2708678 != iVar0) && (Global_2708678 != -1 || func_435(PLAYER::PLAYER_ID())))
					{
						func_74(2, iVar0);
						Local_116.f_1585[iVar0] = iVar1;
						func_68(&(Local_116.f_1651[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar0])))
				{
					if (func_67(&(Local_116.f_1651[iVar0 /*2*/])) && func_66(&(Local_116.f_1651[iVar0 /*2*/]), 2000, 0))
					{
						Local_116.f_1580[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iVar0), 0f, 0f, func_70(iVar0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iVar0]), Local_116.f_1580[iVar0], func_73(), func_65(iVar0, Local_116.f_1585[iVar0]), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iVar0]);
						func_64(&(Local_116.f_1651[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	struct<9> Var23;
	
	bVar5 = false;
	if (Local_116.f_1515[iParam0] > 4 && Local_116.f_1515[iParam0] < 9)
	{
		bVar5 = true;
	}
	if ((!func_63(iParam0, bVar5) || Global_2708678 == iParam0) || Local_116.f_1530[iParam0])
	{
		Local_116.f_1530[iParam0] = 1;
		func_62(iParam0);
		return;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_1595[iParam0]))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
		{
			Local_116.f_1540[iParam0] = 0;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]);
		}
		else if (!Local_116.f_1540[iParam0])
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_116.f_1595[iParam0], false);
			Local_116.f_1540[iParam0] = 1;
		}
	}
	Local_116.f_1590[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_116.f_1580[iParam0]);
	switch (Local_116.f_1515[iParam0])
	{
		case 0:
			func_61(1, iParam0);
			break;
		
		case 1:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (Local_1776[iVar2 /*8*/] != 0 || Local_1776[iVar2 /*8*/].f_5 != 0)
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				func_60(&(Local_116.f_1[iParam0 /*211*/]));
				func_61(2, iParam0);
			}
			break;
		
		case 2:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (!BitTest(Local_1776[iVar2 /*8*/].f_5, 0))
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
				{
					Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_58(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
					func_48(4, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1);
				}
				func_61(3, iParam0);
			}
			break;
		
		case 3:
			bVar1 = true;
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
			{
				if ((Local_116.f_1590[iParam0] != -1 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_58(iParam0), 3)) && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869)))
				{
					Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
				{
					if (Local_116.f_1590[iParam0] != -1)
					{
						if (Local_116.f_1570[iParam0] == 1)
						{
							if (((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_72(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_47(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
							}
						}
						else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 3), 3))
						{
							Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_46(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_72(iParam0), 3))
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_69(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
							}
						}
						else if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
						{
							Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
						}
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]);
				}
			}
			if (!func_67(&(Local_116.f_1642[iParam0 /*2*/])))
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (BitTest(Local_1776[iVar2 /*8*/], 15))
						{
							func_68(&(Local_116.f_1642[iParam0 /*2*/]), 0, 0);
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (!BitTest(Local_1776[iVar2 /*8*/], 15) && !BitTest(Local_1776[iVar2 /*8*/], 16))
						{
							bVar1 = false;
						}
						else
						{
							iVar6++;
						}
					}
					iVar3++;
				}
				if (iVar6 > 0)
				{
					if (bVar1)
					{
						func_64(&(Local_116.f_1642[iParam0 /*2*/]));
						func_48(16, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1);
						func_61(4, iParam0);
					}
					else if (func_66(&(Local_116.f_1642[iParam0 /*2*/]), 15000, 0))
					{
						if (!func_45(iParam0, 22))
						{
							if (func_48(14, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
							{
								func_44(iParam0, 22);
							}
						}
					}
				}
				else
				{
					func_64(&(Local_116.f_1642[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_37(iParam0);
			break;
		
		case 5:
			if (func_36(Local_116.f_846[iParam0 /*13*/][1]) == 10 || func_36(Local_116.f_846[iParam0 /*13*/][1]) == 11)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
				{
					if (func_35(&(Local_116.f_846[iParam0 /*13*/]), 0) == 21)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_34(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
							}
							else if (((Local_116.f_1590[iParam0] == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
							{
								MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
								func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
								func_30(iParam0);
								func_61(9, iParam0);
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
							{
								Local_116.f_1525[iParam0] = 1;
							}
						}
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
					{
						if (!BitTest(Local_116.f_1555[iParam0], 12))
						{
							Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_29(iParam0), 4f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
							MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
						}
						else if (((Local_116.f_1590[iParam0] == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
						{
							MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
							func_64(&(Local_116.f_1633[iParam0 /*2*/]));
							Local_116.f_1535[iParam0] = 0;
							func_61(6, iParam0);
						}
					}
				}
				else
				{
					func_64(&(Local_116.f_1633[iParam0 /*2*/]));
					Local_116.f_1535[iParam0] = 0;
					func_61(6, iParam0);
				}
			}
			else
			{
				func_64(&(Local_116.f_1633[iParam0 /*2*/]));
				Local_116.f_1535[iParam0] = 0;
				func_61(6, iParam0);
			}
			break;
		
		case 6:
			iVar3 = (iParam0 * 4 + Local_116.f_1575[iParam0]);
			bVar4 = Local_116.f_1600[iVar3];
			if (Local_116.f_1575[iParam0] < 4)
			{
				if ((bVar4 != func_429() && BitTest(Local_1776[bVar4 /*8*/], 15)) && !((!BitTest(Local_1776[bVar4 /*8*/], 14) && func_28(&(Local_116.f_899[bVar4 /*9*/])) == 21) && Local_116.f_899[bVar4 /*9*/].f_8 == 2))
				{
					if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
					{
						if (!BitTest(Local_116.f_1555[iParam0], (0 + Local_116.f_1575[iParam0] * 3)))
						{
							if (((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_72(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_27(iParam0, Local_116.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_116.f_1555[iParam0]), (0 + Local_116.f_1575[iParam0] * 3));
							}
						}
						else if (!BitTest(Local_116.f_1555[iParam0], (1 + Local_116.f_1575[iParam0] * 3)))
						{
							if ((Local_116.f_1590[iParam0] != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_27(iParam0, Local_116.f_1575[iParam0], bVar4), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_116.f_1555[iParam0]), (1 + Local_116.f_1575[iParam0] * 3));
							}
						}
						if (BitTest(Local_1776[bVar4 /*8*/], 14) && (BitTest(Local_1776[bVar4 /*8*/], 13) || BitTest(Local_1776[bVar4 /*8*/], 11)))
						{
							if (((((((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 0, 1), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 1, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 2, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 3, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 0, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 1, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 2, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 3, 0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								func_24(iParam0);
								MISC::SET_BIT(&(Local_116.f_1555[iParam0]), (1 + Local_116.f_1575[iParam0] * 3));
							}
						}
						if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_26(iParam0, 0, bVar4, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_26(iParam0, 1, bVar4, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_26(iParam0, 2, bVar4, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_26(iParam0, 3, bVar4, 0), 3))
						{
							if (!func_67(&(Local_116.f_1633[iParam0 /*2*/])))
							{
								func_68(&(Local_116.f_1633[iParam0 /*2*/]), 0, 0);
							}
							else if (func_66(&(Local_116.f_1633[iParam0 /*2*/]), 20000, 0))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
							}
						}
						else
						{
							func_64(&(Local_116.f_1633[iParam0 /*2*/]));
						}
					}
					if (BitTest(Local_116.f_1555[iParam0], (1 + Local_116.f_1575[iParam0] * 3)))
					{
						if ((BitTest(Local_1776[bVar4 /*8*/], 14) && !BitTest(Local_1776[bVar4 /*8*/], 13)) && !(BitTest(Local_1776[bVar4 /*8*/], 11) && Local_116.f_1188[bVar4 /*9*/].f_8 > 2))
						{
							if (!BitTest(Local_116.f_1565[iParam0], bVar4))
							{
								if (!BitTest(Local_116.f_1555[iParam0], 12))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
										{
											Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_23(iParam0, Local_116.f_1575[iParam0]), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
											Local_116.f_1535[iParam0] = 0;
											func_15(func_22(iParam0, 0, Local_116.f_1575[iParam0], 1), Local_116.f_899[bVar4 /*9*/][1], 0, 0);
											MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
								{
									fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
									{
										if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
										{
											if (Local_116.f_899[bVar4 /*9*/].f_8 == 1)
											{
												Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
												Local_116.f_1535[iParam0] = 1;
												func_15(func_22(iParam0, Local_116.f_899[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else if (Local_116.f_1188[bVar4 /*9*/].f_8 == 1)
											{
												Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 4f, -4f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
												func_15(func_22(iParam0, Local_116.f_1188[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else
											{
												Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
												MISC::SET_BIT(&(Local_116.f_1565[iParam0]), bVar4);
												MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
												MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
												if (Local_116.f_899[bVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_899[bVar4 /*9*/][1] = uVar0;
													Local_116.f_899[bVar4 /*9*/].f_8++;
													func_24(iParam0);
													func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
												}
												if (Local_116.f_1188[bVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_1188[bVar4 /*9*/][1] = uVar0;
													Local_116.f_1188[bVar4 /*9*/].f_8++;
													func_24(iParam0);
													func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
												}
											}
										}
									}
									else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
										{
											Local_116.f_1535[iParam0] = 1;
											if (Local_116.f_1188[bVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_1188[bVar4 /*9*/][1] = uVar0;
												Local_116.f_1188[bVar4 /*9*/].f_8++;
												func_24(iParam0);
												func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
										{
											if (Local_116.f_899[bVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_899[bVar4 /*9*/][1] = uVar0;
												Local_116.f_899[bVar4 /*9*/].f_8++;
												func_24(iParam0);
												func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_23(iParam0, Local_116.f_1575[iParam0]), 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), -1345695206))
										{
											if (Local_116.f_899[bVar4 /*9*/].f_8 == 2)
											{
												Local_116.f_0 = Local_116.f_899[bVar4 /*9*/][1];
												Local_116.f_899[bVar4 /*9*/][1] = 0;
												Local_116.f_899[bVar4 /*9*/].f_8 = 1;
											}
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
										{
											if (Local_116.f_1188[bVar4 /*9*/].f_8 == 0)
											{
												Local_116.f_1188[bVar4 /*9*/][0] = Local_116.f_0;
												Local_116.f_1188[bVar4 /*9*/].f_8 = 1;
												Local_116.f_899[bVar4 /*9*/][1] = 0;
												Local_116.f_899[bVar4 /*9*/].f_8 = 1;
												MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
											}
											Local_116.f_1535[iParam0] = 1;
										}
									}
								}
							}
							else if (!BitTest(Local_1776[bVar4 /*8*/], 11))
							{
								if ((((func_28(&(Local_116.f_1188[bVar4 /*9*/])) < 21 && !BitTest(Local_1776[bVar4 /*8*/], 13)) && Local_116.f_1188[bVar4 /*9*/].f_8 <= 6) && Local_116.f_1188[bVar4 /*9*/].f_8 > 0) || BitTest(Local_116.f_1555[iParam0], 12))
								{
									if ((((((BitTest(Local_1776[bVar4 /*8*/], 5) && Local_116.f_1188[bVar4 /*9*/].f_8 == 2) || (BitTest(Local_1776[bVar4 /*8*/], 6) && Local_116.f_1188[bVar4 /*9*/].f_8 == 3)) || (BitTest(Local_1776[bVar4 /*8*/], 7) && Local_116.f_1188[bVar4 /*9*/].f_8 == 4)) || (BitTest(Local_1776[bVar4 /*8*/], 8) && Local_116.f_1188[bVar4 /*9*/].f_8 == 5)) || (BitTest(Local_1776[bVar4 /*8*/], 9) && Local_116.f_1188[bVar4 /*9*/].f_8 == 6)) || BitTest(Local_116.f_1555[iParam0], 12))
									{
										if (!BitTest(Local_116.f_1555[iParam0], 12))
										{
											if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
											{
												if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
												{
													Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
													NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1000f, 0);
													NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
													func_15(func_22(iParam0, Local_116.f_1188[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
													MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
												}
											}
										}
										else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
										{
											fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]);
											if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
											{
												if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
												{
													Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
													NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
													NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
													MISC::SET_BIT(&(Local_116.f_1565[iParam0]), bVar4);
													if (!BitTest(Local_116.f_1555[iParam0], 19))
													{
														func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
														Local_116.f_1188[bVar4 /*9*/][Local_116.f_1188[bVar4 /*9*/].f_8] = uVar0;
														Local_116.f_1188[bVar4 /*9*/].f_8++;
														func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
														MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
													}
													MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
													MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
												}
											}
											else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
											{
												if (!BitTest(Local_116.f_1555[iParam0], 19))
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_1188[bVar4 /*9*/][Local_116.f_1188[bVar4 /*9*/].f_8] = uVar0;
													Local_116.f_1188[bVar4 /*9*/].f_8++;
													func_24(iParam0);
													func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
													MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
												}
											}
										}
									}
									else if (!func_45(iParam0, 20))
									{
										if (func_48(2, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_44(iParam0, 20);
										}
									}
									else if (func_66(&(Local_116.f_1642[Local_1776[bVar4 /*8*/].f_4 /*2*/]), 15000, 0))
									{
										if (!func_45(iParam0, 21))
										{
											if (func_48(15, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
											{
												func_44(iParam0, 21);
											}
										}
									}
								}
							}
							else if (Local_116.f_1188[bVar4 /*9*/].f_8 == 2 || BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (!BitTest(Local_116.f_1555[iParam0], 12))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
										{
											Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
											func_15(func_22(iParam0, Local_116.f_1188[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 1);
											MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
								{
									fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
									{
										if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
										{
											Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
											MISC::SET_BIT(&(Local_116.f_1565[iParam0]), bVar4);
											if (!BitTest(Local_116.f_1555[iParam0], 19))
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_1188[bVar4 /*9*/][Local_116.f_1188[bVar4 /*9*/].f_8] = uVar0;
												Local_116.f_1188[bVar4 /*9*/].f_8++;
												MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
												func_24(iParam0);
												func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
											}
											MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
											MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
										}
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
									{
										if (!BitTest(Local_116.f_1555[iParam0], 19))
										{
											func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
											Local_116.f_1188[bVar4 /*9*/][Local_116.f_1188[bVar4 /*9*/].f_8] = uVar0;
											Local_116.f_1188[bVar4 /*9*/].f_8++;
											MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
											func_24(iParam0);
											func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
										}
									}
								}
							}
						}
						else if (!BitTest(Local_1776[bVar4 /*8*/], 10))
						{
							if ((((func_28(&(Local_116.f_899[bVar4 /*9*/])) < 21 && !BitTest(Local_1776[bVar4 /*8*/], 12)) && Local_116.f_899[bVar4 /*9*/].f_8 <= 6) && Local_116.f_899[bVar4 /*9*/].f_8 > 0) || BitTest(Local_116.f_1555[iParam0], 12))
							{
								if ((((((BitTest(Local_1776[bVar4 /*8*/], 0) && Local_116.f_899[bVar4 /*9*/].f_8 == 2) || (BitTest(Local_1776[bVar4 /*8*/], 1) && Local_116.f_899[bVar4 /*9*/].f_8 == 3)) || (BitTest(Local_1776[bVar4 /*8*/], 2) && Local_116.f_899[bVar4 /*9*/].f_8 == 4)) || (BitTest(Local_1776[bVar4 /*8*/], 3) && Local_116.f_899[bVar4 /*9*/].f_8 == 5)) || (BitTest(Local_1776[bVar4 /*8*/], 4) && Local_116.f_899[bVar4 /*9*/].f_8 == 6)) || BitTest(Local_116.f_1555[iParam0], 12))
								{
									if (!BitTest(Local_116.f_1555[iParam0], 12))
									{
										if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
										{
											if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
											{
												Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
												func_15(func_22(iParam0, Local_116.f_899[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
												MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
											}
										}
									}
									else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
									{
										fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]);
										if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
										{
											if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
											{
												if (((!BitTest(Local_1776[bVar4 /*8*/], 10) && func_28(&(Local_116.f_899[bVar4 /*9*/])) < 21) && !BitTest(Local_1776[bVar4 /*8*/], 12)) && Local_116.f_899[bVar4 /*9*/].f_8 <= 6)
												{
													Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
													NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
													NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
												}
												MISC::SET_BIT(&(Local_116.f_1565[iParam0]), bVar4);
												if (!BitTest(Local_116.f_1555[iParam0], 19))
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_899[bVar4 /*9*/][Local_116.f_899[bVar4 /*9*/].f_8] = uVar0;
													Local_116.f_899[bVar4 /*9*/].f_8++;
													func_24(iParam0);
													func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
													MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
												}
												MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
												MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
											}
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
										{
											if (!BitTest(Local_116.f_1555[iParam0], 19))
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_899[bVar4 /*9*/][Local_116.f_899[bVar4 /*9*/].f_8] = uVar0;
												Local_116.f_899[bVar4 /*9*/].f_8++;
												func_24(iParam0);
												func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
												MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
											}
										}
									}
								}
								else if (!func_45(iParam0, 20))
								{
									if (func_48(2, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
									{
										func_44(iParam0, 20);
									}
								}
								else if (func_66(&(Local_116.f_1642[Local_1776[bVar4 /*8*/].f_4 /*2*/]), 15000, 0))
								{
									if (!func_45(iParam0, 21))
									{
										if (func_48(15, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_44(iParam0, 21);
										}
									}
								}
							}
							else if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_12(iParam0, Local_116.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
									func_24(iParam0);
									Local_116.f_1575[iParam0]++;
									Local_116.f_1535[iParam0] = 0;
									func_64(&(Local_116.f_1633[iParam0 /*2*/]));
									MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
									MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
							{
								fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_12(iParam0, Local_116.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
									func_24(iParam0);
									Local_116.f_1575[iParam0]++;
									Local_116.f_1535[iParam0] = 0;
									func_64(&(Local_116.f_1633[iParam0 /*2*/]));
									MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
									MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
								}
							}
						}
						else if (Local_116.f_899[bVar4 /*9*/].f_8 == 2 || BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
									{
										Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
										func_15(func_22(iParam0, Local_116.f_899[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 1);
										MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
									}
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
							{
								fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
									{
										Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_12(iParam0, Local_116.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
										if (!BitTest(Local_116.f_1555[iParam0], 19))
										{
											func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
											Local_116.f_899[bVar4 /*9*/][Local_116.f_899[bVar4 /*9*/].f_8] = uVar0;
											Local_116.f_899[bVar4 /*9*/].f_8++;
											func_24(iParam0);
											func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
											MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
										}
										MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
										MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
										func_24(iParam0);
										Local_116.f_1575[iParam0]++;
										Local_116.f_1535[iParam0] = 0;
										func_64(&(Local_116.f_1633[iParam0 /*2*/]));
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
								{
									if (!BitTest(Local_116.f_1555[iParam0], 19))
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[bVar4 /*9*/][Local_116.f_899[bVar4 /*9*/].f_8] = uVar0;
										Local_116.f_899[bVar4 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
										MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
									}
								}
							}
						}
					}
				}
				else
				{
					MISC::SET_BIT(&(Local_116.f_1555[iParam0]), (0 + Local_116.f_1575[iParam0] * 3));
					MISC::SET_BIT(&(Local_116.f_1555[iParam0]), (1 + Local_116.f_1575[iParam0] * 3));
					MISC::SET_BIT(&(Local_116.f_1555[iParam0]), (2 + Local_116.f_1575[iParam0] * 3));
					func_24(iParam0);
					Local_116.f_1575[iParam0]++;
					Local_116.f_1535[iParam0] = 0;
					func_64(&(Local_116.f_1633[iParam0 /*2*/]));
					MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
					MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
				}
			}
			if (Local_116.f_1575[iParam0] >= 4)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_72(iParam0), 3))
					{
						if (Local_116.f_1590[iParam0] != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869)))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
							{
								MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
								func_61(7, iParam0);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
						func_61(7, iParam0);
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
					func_61(7, iParam0);
				}
			}
			break;
		
		case 7:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
			{
				if (!BitTest(Local_116.f_1555[iParam0], 12))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
					{
						Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_11(iParam0), 4f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
						MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
					}
				}
				else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
					{
						MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
						MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
						func_24(iParam0);
						func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
						func_61(8, iParam0);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
					{
						Local_116.f_1525[iParam0] = 1;
					}
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
				MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
				func_24(iParam0);
				func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
				func_61(8, iParam0);
			}
			break;
		
		case 8:
			Local_116.f_1525[iParam0] = 1;
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar3 = (iParam0 * 4 + iVar9);
				bVar4 = Local_116.f_1600[iVar3];
				if (bVar4 != func_429())
				{
					if (((((func_28(&(Local_116.f_899[bVar4 /*9*/])) == 21 && Local_116.f_899[bVar4 /*9*/].f_8 > 2) && Local_116.f_899[bVar4 /*9*/].f_8 < 7) || ((func_28(&(Local_116.f_1188[bVar4 /*9*/])) == 21 && Local_116.f_1188[bVar4 /*9*/].f_8 > 2) && Local_116.f_1188[bVar4 /*9*/].f_8 < 7)) || ((func_28(&(Local_116.f_899[bVar4 /*9*/])) < 21 && Local_116.f_899[bVar4 /*9*/].f_8 >= 2) && Local_116.f_899[bVar4 /*9*/].f_8 < 7)) || ((func_28(&(Local_116.f_1188[bVar4 /*9*/])) < 21 && Local_116.f_1188[bVar4 /*9*/].f_8 >= 2) && Local_116.f_1188[bVar4 /*9*/].f_8 < 7))
					{
						iVar8 = 1;
					}
				}
				iVar9++;
			}
			if (func_35(&(Local_116.f_846[iParam0 /*13*/]), 0) >= 17)
			{
				iVar8 = 0;
			}
			if (iVar8 || BitTest(Local_116.f_1555[iParam0], 12))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
				{
					if (!BitTest(Local_116.f_1555[iParam0], 12))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_10(iParam0, Local_116.f_846[iParam0 /*13*/].f_12), 4f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
							func_15(func_9(iParam0, Local_116.f_846[iParam0 /*13*/].f_12), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 1, 0);
							MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
						}
					}
					else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
					{
						fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]);
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 19))
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][Local_116.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
								func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
								MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
							}
							MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
							MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 19);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 19))
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][Local_116.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
								func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
								MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 19);
							}
						}
					}
				}
			}
			else
			{
				func_30(iParam0);
				func_61(9, iParam0);
			}
			break;
		
		case 9:
			Var10 = 11;
			Var23 = 7;
			func_30(iParam0);
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
			{
				if (!BitTest(Local_116.f_1555[iParam0], 13))
				{
					if (!BitTest(Local_116.f_1555[iParam0], 12))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_8(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
							MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
						}
					}
					else if ((Local_116.f_1590[iParam0] != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
					{
						MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
						MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 13);
					}
				}
				else if (!BitTest(Local_116.f_1555[iParam0], 14))
				{
					iVar3 = iParam0 * 4;
					bVar4 = Local_116.f_1600[iVar3];
					if (bVar4 != func_429() && bVar4 > -1)
					{
						if (Local_116.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_7(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 14);
									Local_116.f_899[bVar4 /*9*/] = { Var23 };
									Local_116.f_1188[bVar4 /*9*/] = { Var23 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[bVar4 /*9*/] = { Var23 };
									Local_116.f_1188[bVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 14);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 14);
					}
				}
				else if (!BitTest(Local_116.f_1555[iParam0], 15))
				{
					iVar3 = iParam0 * 4 + 1;
					bVar4 = Local_116.f_1600[iVar3];
					if (bVar4 != func_429() && bVar4 > -1)
					{
						if (Local_116.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_6(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 15);
									Local_116.f_899[bVar4 /*9*/] = { Var23 };
									Local_116.f_1188[bVar4 /*9*/] = { Var23 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[bVar4 /*9*/] = { Var23 };
									Local_116.f_1188[bVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 15);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 15);
					}
				}
				else if (!BitTest(Local_116.f_1555[iParam0], 16))
				{
					iVar3 = iParam0 * 4 + 2;
					bVar4 = Local_116.f_1600[iVar3];
					if (bVar4 != func_429() && bVar4 > -1)
					{
						if (Local_116.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_5(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 16);
									Local_116.f_899[bVar4 /*9*/] = { Var23 };
									Local_116.f_1188[bVar4 /*9*/] = { Var23 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[bVar4 /*9*/] = { Var23 };
									Local_116.f_1188[bVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 16);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 16);
					}
				}
				else if (!BitTest(Local_116.f_1555[iParam0], 17))
				{
					iVar3 = iParam0 * 4 + 3;
					bVar4 = Local_116.f_1600[iVar3];
					if (bVar4 != func_429() && bVar4 > -1)
					{
						if (Local_116.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_4(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 17);
									Local_116.f_899[bVar4 /*9*/] = { Var23 };
									Local_116.f_1188[bVar4 /*9*/] = { Var23 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[bVar4 /*9*/] = { Var23 };
									Local_116.f_1188[bVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 17);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 17);
					}
				}
				else if (!BitTest(Local_116.f_1555[iParam0], 18))
				{
					if (Local_116.f_846[iParam0 /*13*/].f_12 > 0 || BitTest(Local_116.f_1555[iParam0], 12))
					{
						if (!BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_3(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 12);
							}
						}
						else if (Local_116.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
							{
								if (Local_116.f_1570[iParam0] == 1)
								{
									Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_47(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								}
								else
								{
									Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								}
								MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 12);
								MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 18);
								Local_116.f_846[iParam0 /*13*/] = { Var10 };
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), -1345695206))
							{
								Local_116.f_846[iParam0 /*13*/] = { Var10 };
							}
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_116.f_1555[iParam0]), 18);
					}
				}
				else if (!func_67(&(Local_116.f_1642[iParam0 /*2*/])))
				{
					func_68(&(Local_116.f_1642[iParam0 /*2*/]), 0, 0);
				}
				else if (func_66(&(Local_116.f_1642[iParam0 /*2*/]), 1000, 0))
				{
					Local_116.f_1525[iParam0] = 0;
					Local_116.f_1575[iParam0] = 0;
					Local_116.f_1555[iParam0] = 0;
					Local_116.f_1565[iParam0] = 0;
					func_64(&(Local_116.f_1633[iParam0 /*2*/]));
					func_64(&(Local_116.f_1642[iParam0 /*2*/]));
					Local_116.f_1560[iParam0]++;
					func_61(1, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_own_cards_and_remove";
	}
	return "retrieve_own_cards_and_remove";
}

char* func_4(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_04";
	}
	return "retrieve_cards_player_04";
}

char* func_5(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_03";
	}
	return "retrieve_cards_player_03";
}

char* func_6(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_02";
	}
	return "retrieve_cards_player_02";
}

char* func_7(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_01";
	}
	return "retrieve_cards_player_01";
}

char* func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = func_28(&(Local_116.f_846[iParam0 /*13*/]));
	if (Local_116.f_1550[iParam0] >= 7)
	{
		if (iVar0 > 21)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else if (iVar0 == 21)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				}
			
			default:
		}
	}
	else if (iVar0 > 21)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else if (iVar0 == 21)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(int iParam0, int iParam1)
{
	return (iParam0 * 11 + iParam1);
}

char* func_10(int iParam0, int iParam1)
{
	if (iParam1 > 8)
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_10";
		}
		return "deal_card_self_card_10";
	}
	else if (iParam1 > 4)
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_06";
		}
		return "deal_card_self_card_06";
	}
	else
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_second_card";
		}
		return "deal_card_self_second_card";
	}
	return "deal_card_self_second_card";
}

char* func_11(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_turn_card";
	}
	return "turn_card";
}

char* func_12(int iParam0, int iParam1, bool bParam2)
{
	if (((bParam2 != func_429() && BitTest(Local_1776[bParam2 /*8*/], 14)) && !BitTest(Local_1776[bParam2 /*8*/], 13)) && !(BitTest(Local_1776[bParam2 /*8*/], 11) && Local_116.f_1188[bParam2 /*9*/].f_8 > 2))
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_outro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_outro_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_outro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_outro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_outro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_outro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_outro";
			
			case 1:
				return "dealer_focus_player_02_idle_outro";
			
			case 2:
				return "dealer_focus_player_03_idle_outro";
			
			case 3:
				return "dealer_focus_player_04_idle_outro";
			}
		
		default:
	}
	return "";
}

int func_13(var uParam0, var uParam1)
{
	if (uParam0->f_209 >= uParam0->f_210)
	{
		return 0;
	}
	*uParam1 = (*uParam0)[uParam0->f_209];
	uParam0->f_209++;
	return 1;
}

char* func_14(int iParam0, int iParam1, bool bParam2)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_second_card_player_01";
				
				case 1:
					return "female_hit_second_card_player_02";
				
				case 2:
					return "female_hit_second_card_player_03";
				
				case 3:
					return "female_hit_second_card_player_04";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_card_player_01";
				
				case 1:
					return "female_hit_card_player_02";
				
				case 2:
					return "female_hit_card_player_03";
				
				case 3:
					return "female_hit_card_player_04";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "hit_second_card_player_01";
			
			case 1:
				return "hit_second_card_player_02";
			
			case 2:
				return "hit_second_card_player_03";
			
			case 3:
				return "hit_second_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "hit_card_player_01";
			
			case 1:
				return "hit_card_player_02";
			
			case 2:
				return "hit_card_player_03";
			
			case 3:
				return "hit_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<7> Var0;
	
	Var0.f_0 = -725328141;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam2;
	Var0.f_6 = iParam3;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 7, func_16(1, 1), Var0.f_0);
}

var func_16(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_21(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_17(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1574926;
}

int func_20(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_21(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		return (((Local_2033.f_257 * 7 * 4 + iParam0 * 7 * 4) + iParam2 * 7) + iParam1);
	}
	return ((iParam0 * 7 * 4 + iParam2 * 7) + iParam1);
}

char* func_23(int iParam0, int iParam1)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_split_card_player_01";
			
			case 1:
				return "female_split_card_player_02";
			
			case 2:
				return "female_split_card_player_03";
			
			case 3:
				return "female_split_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "split_card_player_01";
			
			case 1:
				return "split_card_player_02";
			
			case 2:
				return "split_card_player_03";
			
			case 3:
				return "split_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_24(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 20);
	MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 21);
	MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 22);
	MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 23);
	MISC::CLEAR_BIT(&(Local_116.f_1555[iParam0]), 24);
}

char* func_25(int iParam0, int iParam1, bool bParam2)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient_split";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient_split";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient_split";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient_split";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_split";
			
			case 1:
				return "dealer_focus_player_02_idle_split";
			
			case 2:
				return "dealer_focus_player_03_idle_split";
			
			case 3:
				return "dealer_focus_player_04_idle_split";
			}
		
		default:
	}
	return "";
}

char* func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (((bParam2 != func_429() && BitTest(Local_1776[bParam2 /*8*/], 14)) && !BitTest(Local_1776[bParam2 /*8*/], 13)) && !(BitTest(Local_1776[bParam2 /*8*/], 11) && Local_116.f_1188[bParam2 /*9*/].f_8 > 2))
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_impatient_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_impatient_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_impatient_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_impatient_split";
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_split";
					}
				
				default:
			}
		}
		else if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_split";
				
				case 1:
					return "dealer_focus_player_02_idle_split";
				
				case 2:
					return "dealer_focus_player_03_idle_split";
				
				case 3:
					return "dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_1550[iParam0] >= 7)
	{
		if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle";
				
				case 1:
					return "female_dealer_focus_player_02_idle";
				
				case 2:
					return "female_dealer_focus_player_03_idle";
				
				case 3:
					return "female_dealer_focus_player_04_idle";
				}
			
			default:
		}
	}
	else if (bParam3)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle";
			
			case 1:
				return "dealer_focus_player_02_idle";
			
			case 2:
				return "dealer_focus_player_03_idle";
			
			case 3:
				return "dealer_focus_player_04_idle";
			}
		
		default:
	}
	return "";
}

char* func_27(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_429() && BitTest(Local_1776[iParam2 /*8*/], 14)) && !BitTest(Local_1776[iParam2 /*8*/], 13)) && !(BitTest(Local_1776[iParam2 /*8*/], 11) && Local_116.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_intro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_intro_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_intro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_intro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_intro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_intro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_intro";
			
			case 1:
				return "dealer_focus_player_02_idle_intro";
			
			case 2:
				return "dealer_focus_player_03_idle_intro";
			
			case 3:
				return "dealer_focus_player_04_idle_intro";
			}
		
		default:
	}
	return "";
}

int func_28(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar3 = func_36((*uParam0)[iVar2]);
		iVar0 = (iVar0 + iVar3);
		if (iVar3 == 11)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

char* func_29(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_check_card";
	}
	return "check_card";
}

void func_30(int iParam0)
{
	if (func_45(iParam0, 23))
	{
		return;
	}
	if (func_45(iParam0, 24))
	{
		if (func_48(13, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
		{
			func_44(iParam0, 23);
		}
		return;
	}
	if (func_31(iParam0))
	{
		func_44(iParam0, 24);
	}
	else
	{
		func_44(iParam0, 23);
	}
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (iParam0 * 4 + iVar0);
		iVar2 = Local_116.f_1600[iVar1];
		if (iVar2 == func_429())
		{
		}
		else if (!func_32(&iVar2, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = *iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 1;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 1;
	}
	iVar1 = func_35(&(Local_116.f_846[iParam1 /*13*/]), 0);
	iVar2 = Local_116.f_846[iParam1 /*13*/].f_12;
	iVar3 = func_28(&(Local_116.f_899[iVar0 /*9*/]));
	iVar4 = Local_116.f_899[iVar0 /*9*/].f_8;
	iVar5 = func_28(&(Local_116.f_1188[iVar0 /*9*/]));
	iVar6 = Local_116.f_1188[iVar0 /*9*/].f_8;
	if (func_33(iVar1, iVar2, iVar3, iVar4) && func_33(iVar1, iVar2, iVar5, iVar6))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam3 <= 0)
	{
		return 1;
	}
	bVar0 = (iParam1 == 2 && iParam0 == 21);
	bVar1 = (iParam3 == 2 && iParam2 == 21);
	if (bVar1)
	{
		return 0;
	}
	if (bVar0)
	{
		return 1;
	}
	if (iParam0 > 21)
	{
		return 0;
	}
	if (iParam2 > 21)
	{
		return 1;
	}
	if (iParam3 >= 7)
	{
		return 0;
	}
	if (iParam0 > iParam2)
	{
		return 1;
	}
	return 0;
}

char* func_34(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_check_and_turn_card";
	}
	return "check_and_turn_card";
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
	{
		if (iParam1 && iVar2 == 0)
		{
		}
		else
		{
			iVar3 = func_36((*uParam0)[iVar2]);
			iVar0 = (iVar0 + iVar3);
			if (iVar3 == 11)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
		case 11:
		case 24:
		case 37:
		case 50:
		case 12:
		case 25:
		case 38:
		case 51:
		case 13:
		case 26:
		case 39:
		case 52:
			return 10;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 11;
		
		default:
	}
	return 0;
}

void func_37(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	switch (Local_116.f_1510[iParam0])
	{
		case 0:
			iVar2 = Local_116.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_1776[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1776[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_43(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_43(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 0, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(1, iParam0);
			}
			break;
		
		case 1:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_1776[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1776[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_41(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_41(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 1, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(2, iParam0);
			}
			break;
		
		case 2:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_1776[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1776[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_40(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_40(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 2, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(3, iParam0);
			}
			break;
		
		case 3:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_1776[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1776[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_39(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_39(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 3, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(4, iParam0);
			}
			break;
		
		case 4:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_38(iParam0), 3))
					{
						Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_38(iParam0), 4f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
						func_15(func_9(iParam0, 0), 0, 1, 0);
					}
					else if (Local_116.f_1590[iParam0] != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
						{
							bVar1 = true;
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][0] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
							}
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
						{
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][0] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
							}
						}
					}
					else
					{
						bVar1 = true;
						if (Local_116.f_846[iParam0 /*13*/].f_12 == 0)
						{
							func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
							Local_116.f_846[iParam0 /*13*/][0] = uVar0;
							Local_116.f_846[iParam0 /*13*/].f_12++;
							func_24(iParam0);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(5, iParam0);
			}
			break;
		
		case 5:
			iVar2 = Local_116.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_1776[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1776[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_43(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_43(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 0, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(6, iParam0);
			}
			break;
		
		case 6:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_1776[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1776[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_41(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_41(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 1, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(7, iParam0);
			}
			break;
		
		case 7:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_1776[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1776[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_40(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_40(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 2, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(8, iParam0);
			}
			break;
		
		case 8:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_1776[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1776[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_39(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_39(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 3, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(9, iParam0);
			}
			break;
		
		case 9:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_59(), func_10(iParam0, 0), 3))
					{
						Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_10(iParam0, 0), 4f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
						func_15(func_9(iParam0, 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 1, 0);
					}
					else if (Local_116.f_1590[iParam0] != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869))
						{
							Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][1] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
								func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 1), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
							bVar1 = true;
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 585557868))
						{
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][1] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
								func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 1), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
						}
					}
					else
					{
						Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
						bVar1 = true;
						if (Local_116.f_846[iParam0 /*13*/].f_12 == 1)
						{
							func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
							Local_116.f_846[iParam0 /*13*/][1] = uVar0;
							Local_116.f_846[iParam0 /*13*/].f_12++;
							func_24(iParam0);
							func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 1), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_42(0, iParam0);
				func_61(5, iParam0);
			}
			break;
	}
}

char* func_38(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_self";
	}
	return "deal_card_self";
}

char* func_39(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_04";
	}
	return "deal_card_player_04";
}

char* func_40(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_03";
	}
	return "deal_card_player_03";
}

char* func_41(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_02";
	}
	return "deal_card_player_02";
}

void func_42(int iParam0, int iParam1)
{
	Local_116.f_1510[iParam1] = iParam0;
}

char* func_43(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_01";
	}
	return "deal_card_player_01";
}

void func_44(int iParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	MISC::SET_BIT(&(Local_116.f_1555[iParam0]), bParam1);
}

int func_45(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return BitTest(Local_116.f_1555[iParam0], iParam1);
}

char* func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_116.f_1600[(iParam0 * 4 + iVar2)] != func_429())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_47(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_116.f_1600[(iParam0 * 4 + iVar1)] != func_429())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

int func_48(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	char cVar0[64];
	int iVar16;
	char* sVar17;
	
	if (iParam0 == 3)
	{
		if (iParam2 > 21)
		{
			if (bParam4)
			{
				iParam0 = 12;
			}
			else
			{
				iParam0 = 0;
			}
		}
		else if (iParam2 == 21)
		{
			if (iParam3 == 2)
			{
				iParam0 = 1;
			}
		}
	}
	StringCopy(&cVar0, func_50(iParam0, iParam2, iParam5), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar16 = NETWORK::NET_TO_PED(*uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar16, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar16))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar16))
	{
		return 0;
	}
	sVar17 = func_49(7);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iVar16, &cVar0, sVar17, 1);
	return 1;
}

int func_49(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

char* func_50(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_BJACK_DEALER_PLAYER_BUST";
		
		case 1:
			return "MINIGAME_BJACK_DEALER_BLACKJACK";
		
		case 2:
			return "MINIGAME_BJACK_DEALER_ANOTHER_CARD";
		
		case 3:
			return func_57(iParam1);
		
		case 4:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 5:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 7:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 6:
			return func_51(iParam2);
		
		case 8:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 9:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 10:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 11:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 12:
			return "MINIGAME_DEALER_BUSTS";
		
		case 13:
			return "MINIGAME_DEALER_WINS";
		
		case 15:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 16:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		default:
	}
	return "";
}

char* func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!func_21(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (func_55(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_53(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_52(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_52(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_1776[*iParam0 /*8*/].f_4;
	return func_54(iVar0, Local_2033.f_257);
}

int func_54(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_56(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_45036[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

char* func_57(int iParam0)
{
	if (iParam0 <= 1 || iParam0 > 21)
	{
		return "";
	}
	switch (iParam0)
	{
		case 2:
			return "MINIGAME_BJACK_DEALER_2";
		
		case 3:
			return "MINIGAME_BJACK_DEALER_3";
		
		case 4:
			return "MINIGAME_BJACK_DEALER_4";
		
		case 5:
			return "MINIGAME_BJACK_DEALER_5";
		
		case 6:
			return "MINIGAME_BJACK_DEALER_6";
		
		case 7:
			return "MINIGAME_BJACK_DEALER_7";
		
		case 8:
			return "MINIGAME_BJACK_DEALER_8";
		
		case 9:
			return "MINIGAME_BJACK_DEALER_9";
		
		case 10:
			return "MINIGAME_BJACK_DEALER_10";
		
		case 11:
			return "MINIGAME_BJACK_DEALER_11";
		
		case 12:
			return "MINIGAME_BJACK_DEALER_12";
		
		case 13:
			return "MINIGAME_BJACK_DEALER_13";
		
		case 14:
			return "MINIGAME_BJACK_DEALER_14";
		
		case 15:
			return "MINIGAME_BJACK_DEALER_15";
		
		case 16:
			return "MINIGAME_BJACK_DEALER_16";
		
		case 17:
			return "MINIGAME_BJACK_DEALER_17";
		
		case 18:
			return "MINIGAME_BJACK_DEALER_18";
		
		case 19:
			return "MINIGAME_BJACK_DEALER_19";
		
		case 20:
			return "MINIGAME_BJACK_DEALER_20";
		
		case 21:
			return "MINIGAME_BJACK_DEALER_21";
		
		default:
	}
	return "";
}

char* func_58(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_place_bet_request";
	}
	return "place_bet_request";
}

char* func_59()
{
	return "anim_casino_b@amb@casino@games@blackjack@dealer";
}

void func_60(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_209 = 0;
	uParam0->f_210 = 208;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_210)
		{
			iVar1 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, uParam0->f_210);
			uVar0 = (*uParam0)[iVar2];
			(*uParam0)[iVar2] = (*uParam0)[iVar1];
			(*uParam0)[iVar1] = uVar0;
			iVar2++;
		}
		iVar3++;
	}
}

void func_61(int iParam0, int iParam1)
{
	Local_116.f_1515[iParam1] = iParam0;
}

void func_62(int iParam0)
{
	struct<13> Var0;
	
	Local_116.f_1530[iParam0] = 1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0])))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), func_73(), func_72(iParam0), 3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]))
			{
				Local_116.f_1590[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_116.f_1580[iParam0]);
				if (Local_116.f_1590[iParam0] == -1 || ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), 2116425869)))
				{
					Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iParam0]);
			}
			return;
		}
	}
	Local_116.f_1555[iParam0] = 0;
	Local_116.f_1565[iParam0] = 0;
	func_64(&(Local_116.f_1633[iParam0 /*2*/]));
	Var0 = 11;
	Local_116.f_846[iParam0 /*13*/] = { Var0 };
	Local_116.f_1525[iParam0] = 0;
	Local_116.f_1575[iParam0] = 0;
	func_64(&(Local_116.f_1642[iParam0 /*2*/]));
	func_74(1, iParam0);
	func_61(0, iParam0);
	func_42(0, iParam0);
	Local_116.f_1560[iParam0]++;
	Local_116.f_1530[iParam0] = 0;
}

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_116.f_1600[(iParam0 * 4 + iVar1)] != func_429() && Local_116.f_899[Local_116.f_1600[(iParam0 * 4 + iVar1)] /*9*/].f_8 > 0)
			{
				iVar0++;
			}
		}
		else if (Local_116.f_1600[(iParam0 * 4 + iVar1)] != func_429())
		{
			iVar0++;
		}
		iVar1++;
	}
	if (Local_116.f_1570[iParam0] != iVar0)
	{
		Local_116.f_1570[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_64(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_65(int iParam0, int iParam1)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_66(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_68(uParam0, bParam2, 0);
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

bool func_67(var uParam0)
{
	return uParam0->f_1;
}

void func_68(var uParam0, bool bParam1, bool bParam2)
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

char* func_69(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_70(int iParam0)
{
	if (Local_2033.f_257 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -134.69f;
			
			case 1:
				return 45.31f;
			
			case 2:
				return 135.31f;
			
			case 3:
				return 135.31f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_71(int iParam0)
{
	if (Local_2033.f_257 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.837f, 269.747f, -52.8409f;
			
			case 1:
				return 1151.84f, 266.747f, -52.8409f;
			
			case 2:
				return 1129.406f, 262.3578f, -52.041f;
			
			case 3:
				return 1144.429f, 247.3352f, -52.041f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_72(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_73()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_74(int iParam0, int iParam1)
{
	Local_116.f_1520[iParam1] = iParam0;
}

void func_75(var uParam0)
{
	var uVar0[7];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	
	iVar9 = 208;
	iVar10 = 0;
	while (iVar10 < 208)
	{
		iVar8 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar9);
		iVar11 = 0;
		while (iVar11 < 208)
		{
			iVar13 = (iVar11 / 32);
			bVar14 = (iVar11 % 32);
			if (iVar12 == iVar8 && !BitTest(uVar0[iVar13], bVar14))
			{
				MISC::SET_BIT(&(uVar0[iVar13]), bVar14);
				while (iVar11 + 1 > 52)
				{
					iVar11 = (iVar11 - 52);
				}
				(*uParam0)[iVar10] = iVar11 + 1;
			}
			else
			{
				if (!BitTest(uVar0[iVar13], bVar14))
				{
					iVar12++;
				}
				iVar11++;
			}
		}
		iVar12 = 0;
		iVar9 = (iVar9 - 1);
		iVar10++;
	}
	uParam0->f_210 = 208;
}

void func_76()
{
	int iVar0;
	
	if (!func_81(PLAYER::PLAYER_ID()))
	{
		iVar0 = iLocal_3698;
		if (Global_2708678 != iVar0 && (Global_2708678 != -1 || func_435(PLAYER::PLAYER_ID())))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar0]))
			{
				func_78(iVar0);
			}
		}
		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iVar0]))
			{
				func_77(&(Local_116.f_1595[iVar0]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_1595[iVar0]);
			}
		}
	}
	iLocal_3698++;
	if (iLocal_3698 >= Local_2033.f_257)
	{
		iLocal_3698 = 0;
	}
}

void func_77(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("s_m_y_casino_01");
	if (Local_116.f_1550[iParam0] >= 7)
	{
		iVar0 = joaat("s_f_y_casino_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(func_73());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_73()))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iParam0]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			iVar1 = PED::CREATE_PED(26, iVar0, func_71(iParam0), func_70(iParam0), true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
			PED::SET_PED_AS_ENEMY(iVar1, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			PED::SET_PED_RESET_FLAG(iVar1, 249, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 185, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 108, true);
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar1, true);
			PED::SET_PED_CAN_EVASIVE_DIVE(iVar1, false);
			PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iVar1, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar1, false);
			PED::SET_PED_CONFIG_FLAG(iVar1, 208, true);
			PED::SET_PED_CAN_RAGDOLL(iVar1, false);
			func_80(Local_116.f_1550[iParam0], &iVar1);
			func_79(Local_116.f_1550[iParam0], &iVar1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_71(iParam0), false, false, true);
			ENTITY::SET_ENTITY_HEADING(iVar1, func_70(iParam0));
			Local_116.f_1595[iParam0] = NETWORK::PED_TO_NET(iVar1);
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_116.f_1595[iParam0], false);
			Local_116.f_1540[iParam0] = 1;
			Local_116.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, false, true, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 1000f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_1580[iParam0]);
			STREAMING::REMOVE_ANIM_DICT(func_59());
		}
	}
}

void func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false, 1);
			break;
		
		case 12:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false, 1);
			break;
	}
}

int func_81(int iParam0)
{
	if (iParam0 != func_429() && func_21(iParam0, 1, 1))
	{
		if (func_82(iParam0) && !func_434(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 != func_429() && func_21(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

void func_83()
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	
	Var0 = 7;
	bVar9 = false;
	iVar10 = iLocal_3697;
	if (Local_1776[iVar10 /*8*/].f_4 == -1)
	{
		Local_116.f_899[iVar10 /*9*/] = { Var0 };
		Local_116.f_1188[iVar10 /*9*/] = { Var0 };
	}
	if (Local_1776[iVar10 /*8*/].f_6 == 0)
	{
		if (Local_116.f_1477[iVar10] != 0)
		{
			Local_116.f_1477[iVar10] = 0;
		}
	}
	if (!bVar9)
	{
		if (func_84(iVar10))
		{
			bVar9 = true;
		}
	}
	iLocal_3697++;
	if (iLocal_3697 >= 32)
	{
		iLocal_3697 = 0;
	}
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_424())
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!func_21(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_1776[iParam0 /*8*/].f_6.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_1776[iParam0 /*8*/].f_6 == 1)
	{
		if (func_48(6, &(Local_116.f_1595[iVar2]), -1, 0, 0, iParam0))
		{
			func_85(iParam0, 1);
		}
		return 1;
	}
	if (Local_1776[iParam0 /*8*/].f_6 == 2)
	{
		if (func_48(7, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_85(iParam0, 2);
		}
		return 1;
	}
	if (Local_1776[iParam0 /*8*/].f_6 == 4)
	{
		if (func_48(8, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_85(iParam0, 4);
		}
		return 1;
	}
	if (Local_1776[iParam0 /*8*/].f_6 == 5)
	{
		if (func_48(9, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_85(iParam0, 5);
		}
		return 1;
	}
	if (Local_1776[iParam0 /*8*/].f_6 == 6)
	{
		if (func_48(10, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_85(iParam0, 6);
		}
		return 1;
	}
	if (Local_1776[iParam0 /*8*/].f_6 == 7)
	{
		if (func_48(11, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_85(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	MISC::SET_BIT(&(Local_116.f_1477[iParam0]), iVar0);
}

void func_86()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_3696;
	if (Local_116.f_1600[iVar0] != func_429())
	{
		iVar1 = Local_116.f_1600[iVar0];
		if (((!func_21(Local_116.f_1600[iVar0], 1, 1) || Local_1776[iVar1 /*8*/].f_3 == -1) || Local_1776[iVar1 /*8*/].f_3 != iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_116.f_1600[iVar0]))
		{
			Local_116.f_1600[iVar0] = func_429();
			if (Local_116.f_1477[iVar0] != 0)
			{
				Local_116.f_1477[iVar0] = 0;
			}
		}
	}
	if (func_21(iVar0, 1, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		if (Local_1776[iVar0 /*8*/].f_3 > -1 && Local_1776[iVar0 /*8*/].f_3 < 32)
		{
			if (Local_116.f_1600[Local_1776[iVar0 /*8*/].f_3] == func_429())
			{
				if (func_21(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
				{
					Local_116.f_1600[Local_1776[bVar0 /*8*/].f_3] = PLAYER::INT_TO_PLAYERINDEX(bVar0);
				}
			}
		}
	}
	iLocal_3696++;
	if (iLocal_3696 >= 32)
	{
		iLocal_3696 = 0;
	}
}

void func_87()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<21> Var6;
	struct<3> Var27;
	
	func_421();
	if (!Local_2033.f_236)
	{
		if (func_435(PLAYER::PLAYER_ID()) && func_430() != func_429())
		{
			if (BitTest(Global_2657971[func_430() /*465*/].f_322.f_4, 4))
			{
				Local_2033.f_236 = 1;
				func_420();
				func_419();
				iLocal_3691 = 1;
			}
		}
	}
	else if (iLocal_3691)
	{
		if (func_418())
		{
			iLocal_3691 = 0;
		}
	}
	func_414();
	func_413();
	Local_2033.f_248 = func_409();
	func_390();
	if (Local_2033.f_1 > 2)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 210, true);
		PAD::SET_INPUT_EXCLUSIVE(2, 210);
		PAD::DISABLE_CONTROL_ACTION(2, 26, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 210))
		{
		}
		if (func_389(Local_2033.f_247) >= 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_71(func_389(Local_2033.f_247)), true) > 5f)
		{
			func_383(0);
		}
	}
	if (Local_2033.f_1 > 5)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		func_381(1);
		func_380(1, 0);
	}
	if (Local_2033.f_1 > 6)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 0, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 0))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 0)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
			}
		}
		CAM::BLOCK_FIRST_PERSON_ORIENTATION_RESET_THIS_UPDATE();
	}
	if (Local_2033.f_1 > 7)
	{
		func_376(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]));
	}
	if (func_375())
	{
		bLocal_3693 = true;
	}
	else if (bLocal_3693)
	{
		func_374(&uLocal_3694, 0, 0);
		bLocal_3693 = false;
	}
	else if (func_67(&uLocal_3694) && func_66(&uLocal_3694, 500, 0))
	{
		func_64(&uLocal_3694);
	}
	switch (Local_2033.f_1)
	{
		case 0:
			if (func_369())
			{
				Local_2033.f_1582 = "idle_cardgames";
				Local_2033.f_252 = 0;
				Local_1776[PLAYER::PLAYER_ID() /*8*/] = 0;
				Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 = -1;
				Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 = -1;
				Local_1776[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
				func_368(PLAYER::PLAYER_ID());
				func_367(1);
			}
			break;
		
		case 1:
			switch (func_389(Local_2033.f_247))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_2033.f_245 = 5000;
					Local_2033.f_246 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_2033.f_245 = 50000;
					Local_2033.f_246 = 1000;
					break;
			}
			if (Local_2033.f_257 == 1)
			{
				bVar0 = true;
				Local_2033.f_245 = 50000;
				Local_2033.f_246 = 1000;
			}
			Local_2033.f_244 = Local_2033.f_246;
			if ((((((((((((((((((((((((!Global_262145.f_26506 && !(Global_262145.f_26508 && !bVar0)) && !(Global_262145.f_26507 && bVar0)) && ((func_366(joaat("rm_GamingFloor_02")) || func_366(joaat("rm_GamingFloor_03"))) || func_435(PLAYER::PLAYER_ID()))) && func_364(PLAYER::PLAYER_PED_ID(), func_365(Local_2033.f_247), 1.5f, 1)) && func_359(PLAYER::PLAYER_PED_ID(), func_363(Local_2033.f_247), 40f)) && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && !BitTest(Global_1943520.f_4, 2)) && !Global_2635563.f_2981) && Global_2708678 != func_389(Local_2033.f_247)) && (Global_2708678 != -1 || func_435(PLAYER::PLAYER_ID()))) && func_358()) && !func_354()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_351(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2635563.f_2981) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_350()) && !func_349()) && !func_347()) && !Global_2696212.f_12) && Global_1943513 != 33) && !func_346())
			{
				func_367(2);
			}
			else
			{
				Local_2033.f_247++;
				if (Local_2033.f_247 >= Local_2033.f_257 * 4)
				{
					Local_2033.f_247 = 0;
				}
			}
			break;
		
		case 2:
			func_345();
			func_368(PLAYER::PLAYER_ID());
			if (((((((((((((((((((((func_366(joaat("rm_GamingFloor_02")) || func_366(joaat("rm_GamingFloor_03"))) || func_435(PLAYER::PLAYER_ID())) && func_364(PLAYER::PLAYER_PED_ID(), func_365(Local_2033.f_247), 1.5f, 1)) && func_359(PLAYER::PLAYER_PED_ID(), func_363(Local_2033.f_247), 40f)) && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && Global_2708678 != func_389(Local_2033.f_247)) && (Global_2708678 != -1 || func_435(PLAYER::PLAYER_ID()))) && func_358()) && !func_354()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_351(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2635563.f_2981) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_350()) && !func_349()) && !func_347()) && !Global_2696212.f_12) && Global_1943513 != 33) && !func_346())
			{
				if ((((((func_21(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_344()) && !func_343()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !bLocal_3693) && !func_67(&uLocal_3694))
				{
					if (func_342(1, &uVar1))
					{
						if (!func_341("BJACK_NA"))
						{
							func_340("BJACK_NA");
						}
					}
					else if (Local_116.f_1600[Local_2033.f_247] != func_429())
					{
						if (!func_341("BJACK_USED"))
						{
							func_340("BJACK_USED");
						}
					}
					else if (func_339())
					{
						if (func_335() == 2)
						{
							if (!func_341("CAS_MG_CTIME"))
							{
								func_340("CAS_MG_CTIME");
							}
						}
						else if (!func_341("CAS_MG_CBAN"))
						{
							func_340("CAS_MG_CBAN");
						}
					}
					else if ((!func_334(PLAYER::PLAYER_ID()) && (func_389(Local_2033.f_247) == 2 || func_389(Local_2033.f_247) == 3)) && !(func_333(1) && func_334(func_332())))
					{
						if (!func_341("CAS_MG_SUITE2"))
						{
							func_340("CAS_MG_SUITE2");
						}
					}
					else if (!func_331() && !(func_333(1) && func_330(func_332())))
					{
						if (!func_328("CAS_MG_MEMB2", func_329(1)))
						{
							func_327("CAS_MG_MEMB2", func_329(1));
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2, 52))
						{
							HUD::CLEAR_HELP(true);
							func_326();
							func_367(3);
						}
					}
					else if (Local_2033.f_248 <= 0)
					{
						if (func_435(PLAYER::PLAYER_ID()))
						{
							if (!func_341("CAS_MG_NOCHIPS6"))
							{
								func_340("CAS_MG_NOCHIPS6");
							}
						}
						else if (!func_341("CAS_MG_NOCHIPS2"))
						{
							func_340("CAS_MG_NOCHIPS2");
						}
					}
					else if (Local_2033.f_248 < Local_2033.f_246)
					{
						if (func_435(PLAYER::PLAYER_ID()))
						{
							if (!func_341("CAS_MG_LOWCHIPS6"))
							{
								func_340("CAS_MG_LOWCHIPS6");
							}
						}
						else if (!func_341("CAS_MG_LOWCHIPS2"))
						{
							func_340("CAS_MG_LOWCHIPS2");
						}
					}
					else if (Local_2033.f_259 == -1)
					{
						if (func_325())
						{
							HUD::CLEAR_HELP(true);
						}
						if (((!func_334(PLAYER::PLAYER_ID()) && (func_389(Local_2033.f_247) == 2 || func_389(Local_2033.f_247) == 3)) && !(func_333(1) && func_334(func_332()))) || (!func_331() && (func_333(1) && func_330(func_332()))))
						{
							if (func_322(func_332()) == 1)
							{
								Local_2033.f_256 = 1;
								func_321(&(Local_2033.f_259), 4, "BJACK_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_320(func_332()))
							{
								Local_2033.f_256 = 2;
								func_321(&(Local_2033.f_259), 4, "BJACK_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_2033.f_256 = 3;
								func_321(&(Local_2033.f_259), 4, "BJACK_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_2033.f_256 = 0;
							func_321(&(Local_2033.f_259), 4, "BJACK_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_319(Local_2033.f_259, 1))
					{
						func_317(&(Local_2033.f_259));
						Local_2033.f_259 = -1;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
						func_316();
						func_305(PLAYER::PLAYER_ID(), 0, 1048832, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						func_367(4);
					}
				}
				else
				{
					if (func_325())
					{
						HUD::CLEAR_HELP(true);
					}
					if (Local_2033.f_259 != -1)
					{
						func_317(&(Local_2033.f_259));
						Local_2033.f_259 = -1;
					}
					Local_2033.f_247 = 0;
					func_367(1);
				}
			}
			else
			{
				if (func_325())
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_2033.f_259 != -1)
				{
					func_317(&(Local_2033.f_259));
					Local_2033.f_259 = -1;
				}
				Local_2033.f_247 = 0;
				func_367(1);
			}
			break;
		
		case 3:
			if (!func_304())
			{
				func_367(2);
			}
			break;
		
		case 4:
			func_381(1);
			sVar2 = "CasinoUI_Cards_Blackjack";
			if ((func_389(Local_2033.f_247) == 2 || func_389(Local_2033.f_247) == 3) || func_435(PLAYER::PLAYER_ID()))
			{
				sVar2 = "CasinoUI_Cards_Blackjack_High";
			}
			if (BitTest(Global_1943520.f_5, 21))
			{
				func_374(&(Local_2033.f_1578), 0, 0);
				func_303(Local_2033.f_247);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					func_305(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				else
				{
					func_305(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				func_367(5);
			}
			else
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar2, false);
				if (func_301(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar2))
				{
					if (!iLocal_3692)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
						func_300(0, 0);
						func_298(1, sVar2, sVar2);
						func_297("BJACK_TITLE");
						func_296(-1, 1, 1);
						func_295("BJACK_DIS", 0, 0);
						func_294("BJACK_DIS1");
						func_294("BJACK_DIS2");
						func_294("BJACK_DIS3");
						func_293(202, "BJACK_EXIT", -1);
						func_293(201, "BJACK_CONT", -1);
						iLocal_3692 = 1;
					}
					func_254(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_251(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_3692 = 0;
					func_242();
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_251(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_3692 = 0;
					MISC::SET_BIT(&(Global_1943520.f_5), 21);
					func_374(&(Local_2033.f_1578), 0, 0);
					func_303(Local_2033.f_247);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						func_305(PLAYER::PLAYER_ID(), 0, 0, 0);
					}
					else
					{
						func_305(PLAYER::PLAYER_ID(), 0, 256, 0);
					}
					func_367(5);
				}
			}
			break;
		
		case 5:
			if ((((func_241(Local_2033.f_247) && !func_343()) && !func_375()) && func_358()) && !func_354())
			{
				func_64(&(Local_2033.f_1578));
				MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4), 2);
				func_232(1);
				func_367(6);
			}
			else
			{
				if (func_343())
				{
					func_242();
				}
				if (func_375())
				{
					func_242();
				}
				if (func_231(Local_2033.f_247))
				{
					func_242();
				}
				if (func_230())
				{
					func_242();
				}
				if (!func_358())
				{
					func_242();
				}
				if (func_354())
				{
					func_242();
				}
			}
			break;
		
		case 6:
			if (!func_343() && !func_375())
			{
				if (func_229())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 1 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 2)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
					}
					fVar3 = func_227(PLAYER::PLAYER_PED_ID(), func_228(Local_2033.f_247, 0), 1);
					fVar4 = func_227(PLAYER::PLAYER_PED_ID(), func_228(Local_2033.f_247, 1), 1);
					fVar5 = func_227(PLAYER::PLAYER_PED_ID(), func_228(Local_2033.f_247, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_2033.f_251 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_2033.f_251 = 2;
					}
					else
					{
						Local_2033.f_251 = 0;
					}
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_228(Local_2033.f_247, Local_2033.f_251), 1f, 5000, func_226(Local_2033.f_247, Local_2033.f_251), 0.01f);
					func_367(7);
				}
			}
			else
			{
				func_242();
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")) != 0)
			{
				Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_2033.f_247), func_224(Local_2033.f_247), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_223(), func_222(Local_2033.f_251), 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
				Local_1776[PLAYER::PLAYER_ID() /*8*/].f_6.f_1 = Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4;
				func_367(8);
			}
			break;
		
		case 8:
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(-2124244681);
			Local_2033.f_258 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_2033.f_255);
			if (func_221())
			{
				func_220(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 2);
			}
			else
			{
				func_220(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 1);
			}
			if (Local_2033.f_258 != -1)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2033.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("ShowUi"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))
				{
					Local_2033.f_1582 = "idle_cardgames";
					Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_2033.f_247), func_224(Local_2033.f_247), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_223(), Local_2033.f_1582, 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
					func_305(PLAYER::PLAYER_ID(), 0, 256, 0);
					Local_3646 = { Var6 };
					if (func_435(PLAYER::PLAYER_ID()))
					{
						Local_3646.f_0 = 1695074466;
					}
					else if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 == 2 || Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 == 3)
					{
						Local_3646.f_0 = 1952785842;
					}
					else
					{
						Local_3646.f_0 = joaat("standard");
					}
					Local_3646.f_1 = Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4;
					Local_3646.f_6 = 1;
					if (func_334(PLAYER::PLAYER_ID()))
					{
						Local_3646.f_15 = 1983458449;
					}
					else if (func_331())
					{
						Local_3646.f_15 = 1334658487;
					}
					else if (func_333(1) && (func_334(func_332()) || func_218(PLAYER::PLAYER_ID())))
					{
						Local_3646.f_15 = 980726932;
					}
					else
					{
						Local_3646.f_15 = 939907746;
					}
					func_374(&uLocal_3618, 0, 0);
					func_217();
					Local_2033.f_249 = func_409();
					func_367(9);
				}
			}
			break;
		
		case 9:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(-2124244681);
			func_91();
			break;
		
		case 10:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_synchronized_scene")) == 1)
			{
				func_220(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), func_90());
				Var27 = { PAD::GET_CONTROL_NORMAL(2, 218), PAD::GET_CONTROL_NORMAL(2, 219), 0f };
				Local_2033.f_258 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_2033.f_255);
				if (Local_2033.f_258 != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2033.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) || (SYSTEM::VMAG(Var27) >= 0.24f && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_305(PLAYER::PLAYER_ID(), 1, 0, 0);
					STREAMING::REMOVE_ANIM_DICT(func_59());
					STREAMING::REMOVE_ANIM_DICT(func_73());
					STREAMING::REMOVE_ANIM_DICT(func_89());
					STREAMING::REMOVE_ANIM_DICT(func_223());
					MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4), 2);
					func_345();
					func_88();
					func_367(2);
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_305(PLAYER::PLAYER_ID(), 1, 0, 0);
				STREAMING::REMOVE_ANIM_DICT(func_59());
				STREAMING::REMOVE_ANIM_DICT(func_73());
				STREAMING::REMOVE_ANIM_DICT(func_89());
				STREAMING::REMOVE_ANIM_DICT(func_223());
				MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4), 2);
				func_345();
				func_88();
				func_367(2);
			}
			break;
	}
}

void func_88()
{
	MISC::CLEAR_BIT(&(Local_2033.f_252), 21);
	MISC::CLEAR_BIT(&(Local_2033.f_252), 22);
}

char* func_89()
{
	return "anim_casino_b@amb@casino@games@blackjack@player";
}

int func_90()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_409();
	iVar1 = (iVar0 - Local_2033.f_249);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_91()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	struct<9> Var12;
	struct<26> Var21;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	char* sVar62;
	char* sVar63;
	char* sVar64;
	char* sVar65;
	bool bVar66;
	char* sVar67;
	
	if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
	{
		iVar1 = (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 * 4 + Local_116.f_1575[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]);
		iVar0 = Local_116.f_1600[iVar1];
	}
	if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
	{
		if (func_216(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4))
		{
			func_215("BJACK_ERROR", -1);
			return;
		}
	}
	bVar2 = false;
	if (func_54(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, Local_2033.f_257))
	{
		bVar2 = true;
	}
	func_201();
	if (func_424())
	{
		Local_3646.f_10 = 1;
	}
	Local_3646.f_11 = func_199();
	if (Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] != 6 || Local_116.f_1575[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] != (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)))
	{
		if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 202) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_343()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_2033.f_250, 0)) && !Local_2033.f_234) && !func_198())
		{
			if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
			{
				Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
			}
			Local_3620.f_18 = func_424();
			Local_3620.f_19 = func_199();
			Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
			Local_3620.f_7 = func_409();
			Local_3646.f_2 = joaat("quit");
			Local_3620.f_4 = joaat("quit");
			Local_3620.f_25 = joaat("quit");
			if (Local_2033.f_0 > 1 || Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 != 0)
			{
				if (Global_262145.f_26383)
				{
					STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
				}
			}
			if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 > 0 && !Local_2033.f_232)
			{
				func_196(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1);
			}
			if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 > 0 && !Local_2033.f_233)
			{
				func_196(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2);
			}
			SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1));
			SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2));
			func_383(1);
			HUD::CLEAR_HELP(true);
			return;
		}
	}
	if (((Global_2708678 == Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 || Global_2696212.f_12) || Global_1943513 == 33) || !func_194())
	{
		if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
		{
			Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
		}
		Local_3620.f_18 = func_424();
		Local_3620.f_19 = func_199();
		Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
		Local_3620.f_7 = func_409();
		if (Global_262145.f_26383)
		{
			STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
		}
		func_383(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (Local_2033.f_255 > -1)
	{
		Local_2033.f_258 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_2033.f_255);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !Local_2033.f_234)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_223(), "idle_cardgames", 3))
			{
				if (Local_2033.f_258 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2033.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
				{
					Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_223(), "idle_cardgames", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
					Local_2033.f_1582 = "idle_cardgames";
					MISC::CLEAR_BIT(&(Local_2033.f_252), 0);
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_223(), "idle_cardgames", 3))
			{
				if (Local_2033.f_258 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2033.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
				{
					Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_223(), func_193(0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
					MISC::CLEAR_BIT(&(Local_2033.f_252), 0);
				}
			}
		}
	}
	if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
	{
		func_191(&(Local_2033.f_874));
		if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]))) && !BitTest(Local_2033.f_250, 0))
		{
			if (Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] != 6 || Local_116.f_1575[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] != (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)))
			{
				func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 202, true), "BJACK_EXIT", &(Local_2033.f_874), 0);
			}
			else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]), func_59(), func_26(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]), func_59(), func_26(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 1), 3)) && !BitTest(Local_116.f_1555[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4], 12)) && !BitTest(Local_2033.f_252, 0))
			{
				if (!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 14))
				{
					if (((!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 12) && !(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21)) && func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21) && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 <= 7)
					{
						func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 201, true), "BJACK_HIT", &(Local_2033.f_874), 0);
						func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 203, true), "BJACK_STAND", &(Local_2033.f_874), 0);
					}
				}
				else if ((((!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 12) && !(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21)) && func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21) && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 <= 7) || (((!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 13) && !(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])) == 21)) && func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])) <= 21) && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 <= 7))
				{
					func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 201, true), "BJACK_HIT", &(Local_2033.f_874), 0);
					func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 203, true), "BJACK_STAND", &(Local_2033.f_874), 0);
				}
				if (Local_2033.f_248 >= Local_2033.f_244)
				{
					if (!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 14))
					{
						if ((func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 10))
						{
							func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 204, true), "BJACK_DOUBLE", &(Local_2033.f_874), 0);
						}
					}
					else if (!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 13) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 11))
					{
						if (Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
						{
							if (func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])) < 21)
							{
								func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 204, true), "BJACK_DOUBLE", &(Local_2033.f_874), 0);
							}
						}
					}
					else if ((func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 10))
					{
						func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 204, true), "BJACK_DOUBLE", &(Local_2033.f_874), 0);
					}
				}
				if (Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 14))
				{
					if (Local_2033.f_248 >= Local_2033.f_244)
					{
						if (func_36(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/][0]) == func_36(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/][1]))
						{
							func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 206, true), "BJACK_SPLIT", &(Local_2033.f_874), 0);
						}
					}
				}
			}
		}
		if ((Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] == 3 && !BitTest(Local_2033.f_250, 0)) && (Local_2033.f_248 >= Local_2033.f_246 || Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 != 0))
		{
			if (!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 15) && !BitTest(Local_2033.f_252, 0))
			{
				func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 201, true), "BJACK_PLACE", &(Local_2033.f_874), 0);
				if (!BitTest(Local_2033.f_252, 20))
				{
					func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 204, true), "BJACK_BET_MAX", &(Local_2033.f_874), 0);
				}
				func_189(2, 7, "BJACK_BET_NUM", &(Local_2033.f_874));
			}
		}
		if (BitTest(Local_2033.f_250, 0))
		{
			func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 202, true), "IB_BACK", &(Local_2033.f_874), 0);
			func_189(2, 8, "IB_TAB", &(Local_2033.f_874));
		}
		if (Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] < 9 || !BitTest(Local_116.f_1555[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4], 13))
		{
			if (Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 >= 2)
			{
				func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 208, true), "BJACK_DLR", &(Local_2033.f_874), 0);
			}
			if (Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
			{
				func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 207, true), "BJACK_CARDS", &(Local_2033.f_874), 0);
			}
		}
		if (bLocal_3684 && Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] > 1)
		{
			func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 195, true), "BJACK_LR", &(Local_2033.f_874), 0);
		}
		if (!BitTest(Local_2033.f_250, 0))
		{
			func_190(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 210, true), "BJACK_RULESb", &(Local_2033.f_874), 0);
		}
		Var3 = { func_188() };
		func_187(&(Local_2033.f_874), 1f);
		func_179(&(Local_2033.f_873), &Var3, &(Local_2033.f_874), func_186(&(Local_2033.f_874)));
		func_178(1);
	}
	func_173();
	switch (Local_2033.f_0)
	{
		case 0:
			if (Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] == 3)
			{
				if ((Local_2033.f_244 > Local_2033.f_248 || Local_2033.f_244 < Local_2033.f_246) || Local_2033.f_244 > Local_2033.f_245)
				{
					Local_2033.f_244 = Local_2033.f_246;
				}
				Var12 = 7;
				Local_2033.f_213 = { Var12 };
				Local_2033.f_222 = { Var12 };
				Local_3620 = { Var21 };
				Local_3620.f_10 = 1;
				Local_3620.f_0 = joaat("blackjack");
				Local_3620.f_11 = func_334(PLAYER::PLAYER_ID());
				if (func_334(PLAYER::PLAYER_ID()))
				{
					Local_3620.f_20 = 1983458449;
				}
				else if (func_331())
				{
					Local_3620.f_20 = 1334658487;
				}
				else if (func_333(1) && (func_334(func_332()) || func_218(PLAYER::PLAYER_ID())))
				{
					Local_3620.f_20 = 980726932;
				}
				else
				{
					Local_3620.f_20 = 939907746;
				}
				if (func_435(PLAYER::PLAYER_ID()))
				{
					Local_3620.f_1 = 1695074466;
				}
				else if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 == 2 || Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 == 3)
				{
					Local_3620.f_1 = 1952785842;
				}
				else
				{
					Local_3620.f_1 = joaat("standard");
				}
				func_374(&uLocal_3616, 0, 0);
				Local_3620.f_3 = Local_116.f_1560[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
				Local_3620.f_2 = Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4;
				func_172(1);
			}
			break;
		
		case 1:
			if ((!func_331() && !(func_333(1) && func_330(func_332()))) || ((!func_334(PLAYER::PLAYER_ID()) && (func_389(Local_2033.f_247) == 2 || func_389(Local_2033.f_247) == 3)) && !(func_333(1) && func_334(func_332()))))
			{
				if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_3620.f_18 = func_424();
				Local_3620.f_19 = func_199();
				Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
				Local_3620.f_7 = func_409();
				Local_3646.f_2 = 939907746;
				Local_3620.f_4 = 939907746;
				if (Global_262145.f_26383)
				{
					STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
				}
				func_383(1);
				HUD::CLEAR_HELP(true);
				if (Local_2033.f_256 == 1)
				{
					func_215("IT_MEMBOc", -1);
				}
				else if (Local_2033.f_256 == 2)
				{
					func_215("IT_MEMBOa", -1);
				}
				else if (Local_2033.f_256 == 3)
				{
					func_215("IT_MEMBOb", -1);
				}
				return;
			}
			if ((Local_2033.f_248 < Local_2033.f_246 && Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 == 0) && !Local_2033.f_234)
			{
				if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_3620.f_18 = func_424();
				Local_3620.f_19 = func_199();
				Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
				Local_3620.f_7 = func_409();
				Local_3646.f_2 = -1275559872;
				Local_3620.f_4 = -1275559872;
				if (Global_262145.f_26383)
				{
					STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
				}
				func_383(1);
				HUD::CLEAR_HELP(true);
				if (func_435(PLAYER::PLAYER_ID()))
				{
					if (Local_2033.f_248 <= 0)
					{
						func_215("CAS_MG_NOCHIPS6", -1);
					}
					else
					{
						func_215("CAS_MG_LOWCHIPS6", -1);
					}
				}
				else if (Local_2033.f_248 <= 0)
				{
					func_215("CAS_MG_NOCHIPS2", -1);
				}
				else
				{
					func_215("CAS_MG_LOWCHIPS2", -1);
				}
				return;
			}
			if (func_339())
			{
				switch (func_335())
				{
					case 0:
						Local_3646.f_2 = 1982714739;
						break;
					
					case 1:
						Local_3646.f_2 = -633175758;
						break;
					
					case 2:
						Local_3646.f_2 = -1625999354;
						break;
				}
				switch (func_335())
				{
					case 0:
						Local_3620.f_4 = 1982714739;
						break;
					
					case 1:
						Local_3620.f_4 = -633175758;
						break;
					
					case 2:
						Local_3620.f_4 = -1625999354;
						break;
				}
				if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_3620.f_18 = func_424();
				Local_3620.f_19 = func_199();
				Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
				Local_3620.f_7 = func_409();
				if (Global_262145.f_26383)
				{
					STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
				}
				func_383(1);
				HUD::CLEAR_HELP(true);
				if (func_335() == 2)
				{
					func_215("CAS_MG_CTIME", -1);
				}
				else
				{
					func_215("CAS_MG_CBAN", -1);
				}
				return;
			}
			if ((!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 15) && !BitTest(Local_2033.f_252, 0)) && (!func_358() || func_354()))
			{
				if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_3620.f_18 = func_424();
				Local_3620.f_19 = func_199();
				Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
				Local_3620.f_7 = func_409();
				if (Global_262145.f_26383)
				{
					STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
				}
				func_383(1);
				HUD::CLEAR_HELP(true);
				return;
			}
			if (!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 15) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 16))
			{
				if (!BitTest(Local_2033.f_252, 0))
				{
					if (((((!BitTest(Local_2033.f_253, 1) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !PAD::IS_CONTROL_JUST_PRESSED(2, 204)) && !func_343()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_2033.f_250, 0))
					{
						bVar48 = PAD::IS_CONTROL_PRESSED(2, 188);
						bVar49 = PAD::IS_CONTROL_PRESSED(2, 187);
						if (bVar49 || (((((bVar48 && !PAD::IS_CONTROL_JUST_PRESSED(2, 204)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_343()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_2033.f_250, 0)))
						{
							func_68(&(Local_2033.f_1574), 0, 0);
							MISC::SET_BIT(&(Local_2033.f_253), true);
						}
					}
					else if (func_66(&(Local_2033.f_1574), 100, 0))
					{
						func_64(&(Local_2033.f_1574));
						MISC::CLEAR_BIT(&(Local_2033.f_253), 1);
					}
					if (((((((PAD::IS_CONTROL_JUST_PRESSED(2, 204) && !bVar49) && !bVar48) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_343()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_2033.f_250, 0)) && !BitTest(Local_2033.f_252, 20))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar47 = true;
					}
					if (bVar47)
					{
						while (bVar47)
						{
							if (Local_2033.f_244 >= 10000)
							{
								iVar50 = 5000;
							}
							else if (Local_2033.f_244 >= 5000)
							{
								iVar50 = 1000;
							}
							else if (Local_2033.f_244 >= 500)
							{
								iVar50 = 500;
							}
							else if (Local_2033.f_244 >= 100)
							{
								iVar50 = 50;
							}
							else
							{
								iVar50 = 10;
							}
							if (Local_2033.f_244 > Local_2033.f_248)
							{
								Local_2033.f_244 = (Local_2033.f_244 - iVar50);
							}
							if (Local_2033.f_244 < Local_2033.f_246)
							{
								Local_2033.f_244 = Local_2033.f_246;
							}
							Local_2033.f_244 = (Local_2033.f_244 + iVar50);
							if (Local_2033.f_244 > Local_2033.f_245)
							{
								bVar47 = false;
								Local_2033.f_244 = Local_2033.f_245;
							}
							if (Local_2033.f_244 > Local_2033.f_248)
							{
								bVar47 = false;
								Local_2033.f_244 = (Local_2033.f_244 - iVar50);
							}
						}
					}
					else
					{
						if (Local_2033.f_244 >= 10000)
						{
							iVar50 = 5000;
						}
						else if (Local_2033.f_244 >= 5000)
						{
							iVar50 = 1000;
						}
						else if (Local_2033.f_244 >= 500)
						{
							iVar50 = 500;
						}
						else if (Local_2033.f_244 >= 100)
						{
							iVar50 = 50;
						}
						else
						{
							iVar50 = 10;
						}
						if (Local_2033.f_244 > Local_2033.f_248)
						{
							Local_2033.f_244 = (Local_2033.f_244 - iVar50);
						}
						if (Local_2033.f_244 < Local_2033.f_246)
						{
							Local_2033.f_244 = Local_2033.f_246;
						}
						iVar51 = Local_2033.f_244;
						if (bVar48)
						{
							Local_2033.f_244 = (Local_2033.f_244 + iVar50);
							if (Local_2033.f_244 > Local_2033.f_245)
							{
								Local_2033.f_244 = Local_2033.f_245;
							}
							if (Local_2033.f_244 > Local_2033.f_248)
							{
								Local_2033.f_244 = (Local_2033.f_244 - iVar50);
							}
							if (Local_2033.f_244 == iVar51)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || !BitTest(Local_2033.f_252, 23))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_2033.f_252), 23);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_2033.f_252), 23);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar49)
						{
							if (Local_2033.f_244 <= 100)
							{
								iVar50 = 10;
							}
							else if (Local_2033.f_244 <= 500)
							{
								iVar50 = 50;
							}
							else if (Local_2033.f_244 <= 5000)
							{
								iVar50 = 500;
							}
							else if (Local_2033.f_244 <= 10000)
							{
								iVar50 = 1000;
							}
							else
							{
								iVar50 = 5000;
							}
							Local_2033.f_244 = (Local_2033.f_244 - iVar50);
							if (Local_2033.f_244 < Local_2033.f_246)
							{
								Local_2033.f_244 = Local_2033.f_246;
							}
							if (Local_2033.f_244 == iVar51)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || !BitTest(Local_2033.f_252, 23))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_2033.f_252), 23);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_2033.f_252), 23);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_2033.f_244 == Local_2033.f_245 || (Local_2033.f_244 + iVar50) > Local_2033.f_245) || (Local_2033.f_244 + iVar50) > Local_2033.f_248)
					{
						MISC::SET_BIT(&(Local_2033.f_252), 20);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_2033.f_252), 20);
					}
					MISC::SET_BIT(&(Local_2033.f_253), false);
					iVar52 = (30 - (func_197(&(Local_116.f_1642[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0) / 1000));
					if (iVar52 > 0 || !func_67(&(Local_116.f_1642[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/])))
					{
						if (((((((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 202)) && !PAD::IS_CONTROL_PRESSED(2, 203)) && Local_2033.f_244 >= Local_2033.f_246) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_343()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_2033.f_250, 0))
						{
							MISC::SET_BIT(&(Local_2033.f_252), false);
							Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_89(), func_171(Local_2033.f_244, bVar2, 0, 0), 4f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
							HUD::CLEAR_HELP(true);
						}
						if (!func_341("BJACK_BET") && !BitTest(Local_2033.f_252, 0))
						{
							if ((!bLocal_3683 && !bLocal_3684) && !bLocal_3675)
							{
								func_170("BJACK_BET");
							}
						}
					}
					else if (func_67(&(Local_116.f_1642[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/])) && func_66(&(Local_116.f_1642[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 30000, 0))
					{
						if (!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 15))
						{
							MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 16);
						}
					}
				}
				else
				{
					if ((Local_2033.f_258 != -1 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844)) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 15))
					{
						Local_2033.f_234 = 1;
					}
					if (Local_2033.f_234 && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 15))
					{
						if (func_161(Local_2033.f_244, &(Local_2033.f_243), 1, Local_2033.f_231))
						{
							if (Local_2033.f_243 == 3)
							{
								Local_2033.f_234 = 0;
								Local_2033.f_243 = 0;
							}
							else
							{
								Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = Local_2033.f_244;
								SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1));
								Local_3646.f_3 = (Local_3646.f_3 - Local_2033.f_244);
								Local_3620.f_6 = (Local_3620.f_6 - Local_2033.f_244);
								if (BitTest(Local_2033.f_252, 20))
								{
									Local_3620.f_5 = 1;
								}
								Local_3646.f_12++;
								Local_3646.f_7 = (Local_3646.f_7 + Local_2033.f_244);
								Local_3620.f_12 = (Local_3620.f_12 + Local_2033.f_244);
								MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 15);
								Local_2033.f_234 = 0;
							}
						}
					}
				}
			}
			if ((func_67(&(Local_116.f_1642[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/])) && Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] > 1) && (30000 - func_197(&(Local_116.f_1642[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0)) > 0)
			{
				if (func_197(&(Local_116.f_1642[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0) <= 24000)
				{
					func_160((30000 - func_197(&(Local_116.f_1642[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_160((30000 - func_197(&(Local_116.f_1642[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
			if (Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] > 3)
			{
				if (BitTest(Local_2033.f_253, 0) && !Local_2033.f_234)
				{
					HUD::CLEAR_HELP(true);
					MISC::CLEAR_BIT(&(Local_2033.f_252), 0);
					if (!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 15))
					{
						MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 16);
					}
					func_172(2);
				}
			}
			func_156(Local_2033.f_244, "BJACK_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
			break;
		
		case 2:
			if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
			{
				if (Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 >= 2)
				{
					func_64(&(Local_2033.f_1576));
					iLocal_3687 = 0;
					func_172(3);
				}
			}
			break;
		
		case 3:
			iVar53 = func_35(&(Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/]), 0);
			iVar54 = func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/]));
			iVar55 = func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/]));
			iVar56 = Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12;
			iVar57 = Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8;
			iVar58 = Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8;
			bVar59 = (iVar56 == 2 && iVar53 == 21);
			bVar60 = (iVar57 == 2 && iVar54 == 21);
			bVar61 = (iVar58 == 2 && iVar55 == 21);
			if (((bVar61 || iVar55 >= 21) || iVar58 == 7) && !BitTest(Local_116.f_1555[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4], 12))
			{
				MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 13);
			}
			if (((bVar60 || iVar54 >= 21) || iVar57 == 7) && !BitTest(Local_116.f_1555[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4], 12))
			{
				if (iVar54 > 21)
				{
					if (!BitTest(Local_2033.f_252, 19))
					{
						Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_223(), func_155(), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
						MISC::SET_BIT(&(Local_2033.f_252), 19);
					}
				}
				MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 12);
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4])))
			{
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]), func_59(), func_26(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]), func_59(), func_26(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 1), 3)) && !BitTest(Local_116.f_1555[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4], 12))
				{
					if (func_67(&(Local_2033.f_1576)))
					{
						if ((30000 - func_197(&(Local_2033.f_1576), 0, 0)) >= 0)
						{
							if (func_197(&(Local_2033.f_1576), 0, 0) <= 24000)
							{
								func_160((30000 - func_197(&(Local_2033.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_160((30000 - func_197(&(Local_2033.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (func_66(&(Local_2033.f_1576), 30000, 0))
						{
							MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 12);
							MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 13);
							func_64(&(Local_2033.f_1576));
							return;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_223(), func_193(1), 3))
						{
							func_374(&(Local_2033.f_1576), 0, 0);
						}
					}
					if (bVar59)
					{
						MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 12);
						MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 13);
					}
					else if (((BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 14) && BitTest(Local_116.f_1565[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4], PLAYER::PLAYER_ID())) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 13)) && !(BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 11) && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 > 2))
					{
						if (!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 11) || BitTest(Local_2033.f_252, 0))
						{
							if (!BitTest(Local_2033.f_252, 0))
							{
								if (((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !func_343()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_2033.f_250, 0))
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
									{
										Local_3620.f_22 = 1;
										if (Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
										{
											MISC::SET_BIT(&(Local_2033.f_252), 6);
										}
										else if (Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 3)
										{
											MISC::SET_BIT(&(Local_2033.f_252), 7);
										}
										else if (Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 4)
										{
											MISC::SET_BIT(&(Local_2033.f_252), 8);
										}
										else if (Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 5)
										{
											MISC::SET_BIT(&(Local_2033.f_252), 9);
										}
										else if (Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 6)
										{
											MISC::SET_BIT(&(Local_2033.f_252), 10);
										}
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												sVar62 = "request_card";
												break;
											
											case 1:
												sVar62 = "request_card_alt1";
												break;
											
											case 2:
												sVar62 = "request_card_alt2";
												break;
										}
										Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_89(), sVar62, 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
										MISC::SET_BIT(&(Local_2033.f_252), false);
										func_64(&(Local_2033.f_1576));
									}
									else if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
									{
										Local_3620.f_21 = 1;
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												sVar63 = "decline_card_001";
												break;
											
											case 1:
												sVar63 = "decline_card_alt1";
												break;
											
											case 2:
												sVar63 = "decline_card_alt2";
												break;
										}
										Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_89(), sVar63, 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
										MISC::SET_BIT(&(Local_2033.f_252), 14);
										MISC::SET_BIT(&(Local_2033.f_252), false);
										func_64(&(Local_2033.f_1576));
									}
									else if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
									{
										if (Local_2033.f_248 >= Local_2033.f_244 && iVar58 == 2)
										{
											Local_3620.f_23 = 1;
											Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_89(), func_171(Local_2033.f_244, bVar2, 1, 1), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
											MISC::SET_BIT(&(Local_2033.f_252), 12);
											MISC::SET_BIT(&(Local_2033.f_252), false);
											func_64(&(Local_2033.f_1576));
										}
									}
								}
							}
							else if (Local_2033.f_258 != -1)
							{
								if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "request_card", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "request_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "request_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2033.f_258) >= 0.3f)
								{
									if (BitTest(Local_2033.f_252, 6))
									{
										MISC::CLEAR_BIT(&(Local_2033.f_252), 6);
										MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 5);
									}
									else if (BitTest(Local_2033.f_252, 7))
									{
										MISC::CLEAR_BIT(&(Local_2033.f_252), 7);
										MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 6);
									}
									else if (BitTest(Local_2033.f_252, 8))
									{
										MISC::CLEAR_BIT(&(Local_2033.f_252), 8);
										MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 7);
									}
									else if (BitTest(Local_2033.f_252, 9))
									{
										MISC::CLEAR_BIT(&(Local_2033.f_252), 9);
										MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 8);
									}
									else if (BitTest(Local_2033.f_252, 10))
									{
										MISC::CLEAR_BIT(&(Local_2033.f_252), 10);
										MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 9);
									}
								}
								if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "decline_card_001", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "decline_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "decline_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2033.f_258) >= 0.3f)
								{
									if (BitTest(Local_2033.f_252, 14))
									{
										MISC::CLEAR_BIT(&(Local_2033.f_252), 14);
										MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 13);
									}
								}
								if (BitTest(Local_2033.f_252, 12))
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844))
									{
										Local_2033.f_234 = 1;
									}
									if (!BitTest(Local_2033.f_252, 17) && Local_2033.f_234)
									{
										if (func_161(Local_2033.f_244, &(Local_2033.f_243), 1, Local_2033.f_231))
										{
											if (Local_2033.f_243 == 3)
											{
												MISC::CLEAR_BIT(&(Local_2033.f_252), 12);
												Local_2033.f_234 = 0;
												Local_2033.f_243 = 0;
											}
											else
											{
												Local_3646.f_3 = (Local_3646.f_3 - Local_2033.f_244);
												Local_3620.f_6 = (Local_3620.f_6 - Local_2033.f_244);
												Local_3646.f_8 = (Local_3646.f_8 + Local_2033.f_244);
												Local_3620.f_13 = (Local_3620.f_13 + Local_2033.f_244);
												Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 + Local_2033.f_244);
												SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2));
												MISC::SET_BIT(&(Local_2033.f_252), 17);
												MISC::CLEAR_BIT(&(Local_2033.f_252), 12);
												MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 11);
												Local_2033.f_234 = 0;
											}
										}
									}
								}
							}
						}
					}
					else if ((!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 10) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 12)) || BitTest(Local_2033.f_252, 0))
					{
						if (!BitTest(Local_2033.f_252, 0))
						{
							if (((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !func_343()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_2033.f_250, 0))
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
								{
									Local_3620.f_22 = 1;
									if (Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
									{
										MISC::SET_BIT(&(Local_2033.f_252), true);
									}
									else if (Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 3)
									{
										MISC::SET_BIT(&(Local_2033.f_252), 2);
									}
									else if (Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 4)
									{
										MISC::SET_BIT(&(Local_2033.f_252), 3);
									}
									else if (Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 5)
									{
										MISC::SET_BIT(&(Local_2033.f_252), 4);
									}
									else if (Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 6)
									{
										MISC::SET_BIT(&(Local_2033.f_252), 5);
									}
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											sVar64 = "request_card";
											break;
										
										case 1:
											sVar64 = "request_card_alt1";
											break;
										
										case 2:
											sVar64 = "request_card_alt2";
											break;
									}
									Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_89(), sVar64, 4f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
									MISC::SET_BIT(&(Local_2033.f_252), false);
									func_64(&(Local_2033.f_1576));
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
								{
									Local_3620.f_21 = 1;
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											sVar65 = "decline_card_001";
											break;
										
										case 1:
											sVar65 = "decline_card_alt1";
											break;
										
										case 2:
											sVar65 = "decline_card_alt2";
											break;
									}
									Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_89(), sVar65, 4f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
									MISC::SET_BIT(&(Local_2033.f_252), 13);
									MISC::SET_BIT(&(Local_2033.f_252), false);
									func_64(&(Local_2033.f_1576));
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
								{
									if (Local_2033.f_248 >= Local_2033.f_244 && iVar57 == 2)
									{
										Local_3620.f_23 = 1;
										Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_89(), func_171(Local_2033.f_244, bVar2, 1, 0), 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
										MISC::SET_BIT(&(Local_2033.f_252), 11);
										MISC::SET_BIT(&(Local_2033.f_252), false);
										func_64(&(Local_2033.f_1576));
									}
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2, 206))
								{
									if (!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 14))
									{
										if ((func_36(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/][0]) == func_36(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/][1]) && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && Local_2033.f_248 >= Local_2033.f_244)
										{
											Local_3620.f_24 = 1;
											Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_89(), func_171(Local_2033.f_244, bVar2, 0, 1), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
											MISC::SET_BIT(&(Local_2033.f_252), 15);
											MISC::SET_BIT(&(Local_2033.f_252), false);
											func_64(&(Local_2033.f_1576));
										}
									}
								}
							}
						}
						else if (Local_2033.f_258 != -1)
						{
							if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "request_card", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "request_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "request_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2033.f_258) >= 0.3f)
							{
								if (BitTest(Local_2033.f_252, 1))
								{
									MISC::CLEAR_BIT(&(Local_2033.f_252), 1);
									MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), false);
								}
								else if (BitTest(Local_2033.f_252, 2))
								{
									MISC::CLEAR_BIT(&(Local_2033.f_252), 2);
									MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), true);
								}
								else if (BitTest(Local_2033.f_252, 3))
								{
									MISC::CLEAR_BIT(&(Local_2033.f_252), 3);
									MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 2);
								}
								else if (BitTest(Local_2033.f_252, 4))
								{
									MISC::CLEAR_BIT(&(Local_2033.f_252), 4);
									MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 3);
								}
								else if (BitTest(Local_2033.f_252, 5))
								{
									MISC::CLEAR_BIT(&(Local_2033.f_252), 5);
									MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 4);
								}
							}
							if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "decline_card_001", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "decline_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_89(), "decline_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2033.f_258) >= 0.3f)
							{
								if (BitTest(Local_2033.f_252, 13))
								{
									MISC::CLEAR_BIT(&(Local_2033.f_252), 13);
									MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 12);
								}
							}
							if (BitTest(Local_2033.f_252, 11))
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844))
								{
									Local_2033.f_234 = 1;
								}
								if (!BitTest(Local_2033.f_252, 16) && Local_2033.f_234)
								{
									if (func_161(Local_2033.f_244, &(Local_2033.f_243), 1, Local_2033.f_231))
									{
										if (Local_2033.f_243 == 3)
										{
											MISC::CLEAR_BIT(&(Local_2033.f_252), 11);
											Local_2033.f_234 = 0;
											Local_2033.f_243 = 0;
										}
										else
										{
											Local_3646.f_3 = (Local_3646.f_3 - Local_2033.f_244);
											Local_3620.f_6 = (Local_3620.f_6 - Local_2033.f_244);
											Local_3646.f_7 = (Local_3646.f_7 + Local_2033.f_244);
											Local_3620.f_12 = (Local_3620.f_12 + Local_2033.f_244);
											Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 + Local_2033.f_244);
											SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1));
											MISC::SET_BIT(&(Local_2033.f_252), 16);
											MISC::CLEAR_BIT(&(Local_2033.f_252), 11);
											MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 10);
											Local_2033.f_234 = 0;
										}
									}
								}
							}
							if (BitTest(Local_2033.f_252, 15))
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844))
								{
									Local_2033.f_234 = 1;
								}
								if (!BitTest(Local_2033.f_252, 18) && Local_2033.f_234)
								{
									if (func_161(Local_2033.f_244, &(Local_2033.f_243), 1, Local_2033.f_231))
									{
										if (Local_2033.f_243 == 3)
										{
											MISC::CLEAR_BIT(&(Local_2033.f_252), 15);
											Local_2033.f_234 = 0;
											Local_2033.f_243 = 0;
										}
										else
										{
											Local_3646.f_3 = (Local_3646.f_3 - Local_2033.f_244);
											Local_3620.f_6 = (Local_3620.f_6 - Local_2033.f_244);
											Local_3646.f_8 = (Local_3646.f_8 + Local_2033.f_244);
											Local_3620.f_13 = (Local_3620.f_13 + Local_2033.f_244);
											Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 + Local_2033.f_244);
											SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2));
											MISC::SET_BIT(&(Local_2033.f_252), 18);
											MISC::CLEAR_BIT(&(Local_2033.f_252), 15);
											MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/]), 14);
											Local_2033.f_234 = 0;
										}
									}
								}
							}
						}
					}
				}
				else if (iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_429())
				{
					if (!func_341("BJACK_WAIT"))
					{
						if ((!bLocal_3683 && !bLocal_3684) && !bLocal_3675)
						{
							func_170("BJACK_WAIT");
						}
					}
				}
				else if (func_341("BJACK_WAIT"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
			{
				if (Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] == 6)
				{
					if ((Local_116.f_1575[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] == (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)) && !(!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 14) && BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 12))) && !((BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 14) && BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 12)) && BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 13)))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]), func_59(), func_26(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]), func_59(), func_26(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 1), 3))
						{
							if (((Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 14)) && Local_2033.f_248 >= Local_2033.f_244) && func_36(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/][0]) == func_36(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/][1]))
							{
								if ((!bLocal_3683 && !bLocal_3684) && !bLocal_3675)
								{
									if (!func_341("BJACK_TURN_S"))
									{
										func_170("BJACK_TURN_S");
									}
								}
							}
							else if (Local_2033.f_248 >= Local_2033.f_244 && (((((!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 14) && func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21) && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 10)) || (((!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 13) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 11)) && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])) < 21)) || ((func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 10))))
							{
								if ((!bLocal_3683 && !bLocal_3684) && !bLocal_3675)
								{
									if (!func_341("BJACK_TURN_D"))
									{
										func_170("BJACK_TURN_D");
									}
								}
							}
							else if ((!bLocal_3683 && !bLocal_3684) && !bLocal_3675)
							{
								if (!func_341("BJACK_TURN"))
								{
									func_170("BJACK_TURN");
								}
							}
						}
						else if ((func_341("BJACK_TURN") || func_341("BJACK_TURN_D")) || func_341("BJACK_TURN_S"))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					else if ((func_341("BJACK_TURN") || func_341("BJACK_TURN_D")) || func_341("BJACK_TURN_S"))
					{
						HUD::CLEAR_HELP(true);
					}
				}
				if (Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] == 1)
				{
					if (BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 16))
					{
						bVar66 = true;
					}
					if (Local_2033.f_259 != -1)
					{
						func_317(&(Local_2033.f_259));
						Local_2033.f_259 = -1;
					}
					Local_1776[PLAYER::PLAYER_ID() /*8*/] = 0;
					Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
					Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
					Local_1776[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
					Local_2033.f_232 = 0;
					Local_2033.f_233 = 0;
					Local_2033.f_235 = 0;
					Local_2033.f_252 = 0;
					HUD::CLEAR_HELP(true);
					func_172(0);
					Local_3620.f_18 = func_424();
					Local_3620.f_19 = func_199();
					Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
					Local_3620.f_7 = func_409();
					if (!func_358() || func_354())
					{
						func_383(1);
						HUD::CLEAR_HELP(true);
						if (Global_262145.f_26383 && !bVar66)
						{
							STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
						}
						return;
					}
					if (func_339())
					{
						switch (func_335())
						{
							case 0:
								Local_3646.f_2 = 1982714739;
								break;
							
							case 1:
								Local_3646.f_2 = -633175758;
								break;
							
							case 2:
								Local_3646.f_2 = -1625999354;
								break;
						}
						switch (func_335())
						{
							case 0:
								Local_3620.f_4 = 1982714739;
								break;
							
							case 1:
								Local_3620.f_4 = -633175758;
								break;
							
							case 2:
								Local_3620.f_4 = -1625999354;
								break;
						}
						if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
						{
							Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
						}
						Local_3620.f_18 = func_424();
						Local_3620.f_19 = func_199();
						Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
						Local_3620.f_7 = func_409();
						if (Global_262145.f_26383 && !bVar66)
						{
							STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
						}
						func_383(1);
						HUD::CLEAR_HELP(true);
						if (func_335() == 2)
						{
							func_215("CAS_MG_CTIME", -1);
						}
						else
						{
							func_215("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26383 && !bVar66)
					{
						STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
					}
				}
				if (Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] > 6)
				{
					if ((func_341("BJACK_TURN") || func_341("BJACK_TURN_D")) || func_341("BJACK_TURN_S"))
					{
						HUD::CLEAR_HELP(true);
					}
				}
				if (Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] == 9 && iVar54 > 0)
				{
					if (Local_2033.f_232 && Local_2033.f_233)
					{
						if (!BitTest(Local_2033.f_252, 19))
						{
							if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
							{
								Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
							}
							Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), func_224(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3), 2, false, true, 1f, 0f, 1f);
							sVar67 = func_154(Local_3620.f_6);
							if (func_54(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, Local_2033.f_257))
							{
								if (Local_2033.f_244 >= 35000)
								{
									if (((iVar54 <= 21 && iVar57 == 7) || (iVar55 <= 21 && iVar58 == 7)) || ((iVar54 == 21 && iVar55 == 21) && iVar53 != 21))
									{
										sVar67 = func_153();
									}
									else if (Local_2033.f_244 >= 45000)
									{
										if ((((iVar57 >= 2 && iVar54 < 21) && iVar53 == iVar54 + 1) && iVar56 > 2) || (((iVar58 >= 2 && iVar55 < 21) && iVar53 == iVar55 + 1) && iVar56 > 2))
										{
											sVar67 = func_151();
										}
									}
								}
							}
							else if (Local_2033.f_244 >= 4500)
							{
								if (((iVar54 <= 21 && iVar57 == 7) || (iVar55 <= 21 && iVar58 == 7)) || ((iVar54 == 21 && iVar55 == 21) && iVar53 != 21))
								{
									sVar67 = func_153();
								}
							}
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_223(), sVar67, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
							MISC::SET_BIT(&(Local_2033.f_252), 19);
						}
					}
					if ((Local_2033.f_232 && Local_2033.f_233) && !Local_2033.f_235)
					{
						if (Local_3620.f_14 > 0)
						{
							if (func_107(Local_3620.f_14, &(Local_2033.f_243), 1))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", true);
								Local_2033.f_235 = 1;
							}
						}
					}
					if ((((Local_2033.f_232 && Local_2033.f_233) && !bLocal_3683) && !bLocal_3684) && !bLocal_3675)
					{
						if (Local_3620.f_14 > 0)
						{
							if (Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 <= 0)
							{
								if (bVar60 && !bVar59)
								{
									if (!func_106("BJACK_WIN_2", "BJACK_BJ", Local_3620.f_14))
									{
										func_105("BJACK_WIN_2", "BJACK_BJ", Local_3620.f_14);
									}
								}
								else if (iVar54 <= 21 && iVar57 == 7)
								{
									if (!func_106("BJACK_WIN_2", "BJACK_7CC", Local_3620.f_14))
									{
										func_105("BJACK_WIN_2", "BJACK_7CC", Local_3620.f_14);
									}
								}
								else if (iVar54 == iVar53)
								{
									if (!func_341("BJACK_PUSH"))
									{
										func_170("BJACK_PUSH");
									}
								}
								else if (!func_104("BJACK_WIN_1", iVar54, Local_3620.f_14))
								{
									func_103("BJACK_WIN_1", iVar54, Local_3620.f_14);
								}
							}
							else if ((bVar60 || bVar61) && !bVar59)
							{
								if (bVar60 && bVar61)
								{
									if (!func_102("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_3620.f_14))
									{
										func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_3620.f_14);
									}
								}
								else if (bVar60)
								{
									if (iVar55 <= 21 && iVar58 == 7)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_3620.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_3620.f_14);
										}
									}
									else if (iVar55 > 21)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_3620.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_3620.f_14);
										}
									}
									else if (!func_100("BJACK_WIN_4", "BJACK_BJ", iVar55, Local_3620.f_14))
									{
										func_99("BJACK_WIN_4", "BJACK_BJ", iVar55, Local_3620.f_14);
									}
								}
								else if (bVar61)
								{
									if (iVar54 <= 21 && iVar57 == 7)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_3620.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_3620.f_14);
										}
									}
									else if (iVar54 > 21)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_3620.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_3620.f_14);
										}
									}
									else if (!func_100("BJACK_WIN_5", "BJACK_BJ", iVar54, Local_3620.f_14))
									{
										func_99("BJACK_WIN_5", "BJACK_BJ", iVar54, Local_3620.f_14);
									}
								}
							}
							else if ((iVar54 <= 21 && iVar57 == 7) || (iVar55 <= 21 && iVar58 == 7))
							{
								if ((iVar54 <= 21 && iVar57 == 7) && (iVar55 <= 21 && iVar58 == 7))
								{
									if (!func_102("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_3620.f_14))
									{
										func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_3620.f_14);
									}
								}
								else if (iVar54 <= 21 && iVar57 == 7)
								{
									if (iVar55 > 21)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_3620.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_3620.f_14);
										}
									}
									else if (!func_100("BJACK_WIN_4", "BJACK_7CC", iVar55, Local_3620.f_14))
									{
										func_99("BJACK_WIN_4", "BJACK_7CC", iVar55, Local_3620.f_14);
									}
								}
								else if (iVar55 <= 21 && iVar58 == 7)
								{
									if (iVar54 > 21)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_3620.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_3620.f_14);
										}
									}
									else if (!func_100("BJACK_WIN_5", "BJACK_7CC", iVar54, Local_3620.f_14))
									{
										func_99("BJACK_WIN_5", "BJACK_7CC", iVar54, Local_3620.f_14);
									}
								}
							}
							else if (iVar54 == iVar53 && iVar55 == iVar53)
							{
								if (!func_341("BJACK_PUSH"))
								{
									func_170("BJACK_PUSH");
								}
							}
							else if (iVar54 <= 21 && iVar55 <= 21)
							{
								if (!func_98("BJACK_WIN_3", iVar54, iVar55, Local_3620.f_14))
								{
									func_97("BJACK_WIN_3", iVar54, iVar55, Local_3620.f_14);
								}
							}
							else if (iVar54 <= 21)
							{
								if (!func_100("BJACK_WIN_5", "BJACK_BUSTED", iVar54, Local_3620.f_14))
								{
									func_99("BJACK_WIN_5", "BJACK_BUSTED", iVar54, Local_3620.f_14);
								}
							}
							else if (iVar55 <= 21)
							{
								if (!func_100("BJACK_WIN_4", "BJACK_BUSTED", iVar55, Local_3620.f_14))
								{
									func_99("BJACK_WIN_4", "BJACK_BUSTED", iVar55, Local_3620.f_14);
								}
							}
						}
						else if (bVar59)
						{
							if (!func_96("BJACK_LOSE_2", "BJACK_BJ"))
							{
								func_95("BJACK_LOSE_2", "BJACK_BJ");
							}
						}
						else if (Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 <= 0)
						{
							if (iVar54 > 21)
							{
								if (!func_96("BJACK_LOSE_3", "BJACK_BUSTED"))
								{
									func_95("BJACK_LOSE_3", "BJACK_BUSTED");
								}
							}
							else if (!func_328("BJACK_LOSE_1", iVar53))
							{
								func_94("BJACK_LOSE_1", iVar53);
							}
						}
						else if (iVar54 > 21 && iVar55 > 21)
						{
							if (!func_93("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED"))
							{
								func_92("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED");
							}
						}
						else if (!func_328("BJACK_LOSE_1", iVar53))
						{
							func_94("BJACK_LOSE_1", iVar53);
						}
					}
					if (!BitTest(iLocal_3687, 0))
					{
						if (bVar60)
						{
							Local_3646.f_17++;
						}
						MISC::SET_BIT(&iLocal_3687, false);
					}
					if (!BitTest(iLocal_3687, 1))
					{
						if (bVar61)
						{
							Local_3646.f_17++;
						}
						MISC::SET_BIT(&iLocal_3687, true);
					}
					if (!BitTest(iLocal_3687, 2))
					{
						if (iVar57 == 7 && iVar54 <= 21)
						{
							Local_3646.f_20++;
						}
						MISC::SET_BIT(&iLocal_3687, 2);
					}
					if (!BitTest(iLocal_3687, 3))
					{
						if (iVar58 == 7 && iVar55 <= 21)
						{
							Local_3646.f_20++;
						}
						MISC::SET_BIT(&iLocal_3687, 3);
					}
					if (!BitTest(iLocal_3687, 4))
					{
						if (iVar54 > 21)
						{
							Local_3646.f_19++;
						}
						MISC::SET_BIT(&iLocal_3687, 4);
					}
					if (!BitTest(iLocal_3687, 5))
					{
						if (iVar55 > 21)
						{
							Local_3646.f_19++;
						}
						MISC::SET_BIT(&iLocal_3687, 5);
					}
					if (!BitTest(iLocal_3687, 6))
					{
						if (bVar59)
						{
							Local_3646.f_16++;
						}
						MISC::SET_BIT(&iLocal_3687, 6);
					}
					if (bVar59 && !bVar60)
					{
						if (!Local_2033.f_232)
						{
							func_196(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_3620.f_4 = 1183160994;
							Local_3620.f_25 = 1183160994;
							Local_3646.f_14++;
							Local_2033.f_232 = 1;
							Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
						}
					}
					else if (iVar54 <= 21)
					{
						SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
						if (bVar60 && !bVar59)
						{
							if (!Local_2033.f_232)
							{
								Local_3646.f_3 = (Local_3646.f_3 + SYSTEM::FLOOR((IntToFloat(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1) * 2.5f)));
								Local_3620.f_6 = (Local_3620.f_6 + SYSTEM::FLOOR((IntToFloat(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1) * 2.5f)));
								Local_3620.f_14 = (Local_3620.f_14 + SYSTEM::FLOOR((IntToFloat(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1) * 2.5f)));
								Local_3620.f_15 = 1;
								Local_3646.f_13++;
								Local_3620.f_4 = -67503841;
								Local_3620.f_25 = -67503841;
								Local_2033.f_232 = 1;
								Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (iVar57 == 7 && !bVar59)
						{
							if (!Local_2033.f_232)
							{
								Local_3646.f_3 = (Local_3646.f_3 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3620.f_6 = (Local_3620.f_6 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3620.f_14 = (Local_3620.f_14 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3620.f_15 = 1;
								Local_3646.f_13++;
								Local_3620.f_4 = 579613221;
								Local_3620.f_25 = 579613221;
								Local_2033.f_232 = 1;
								Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (iVar54 > iVar53 || iVar53 > 21)
						{
							if (!Local_2033.f_232)
							{
								Local_3620.f_25 = joaat("win");
								Local_3646.f_3 = (Local_3646.f_3 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3620.f_6 = (Local_3620.f_6 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3620.f_14 = (Local_3620.f_14 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3620.f_15 = 1;
								Local_3646.f_13++;
								Local_3620.f_4 = joaat("win");
								Local_3620.f_25 = joaat("win");
								Local_2033.f_232 = 1;
								Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (iVar54 < iVar53 || (bVar59 && !bVar60))
						{
							if (!Local_2033.f_232)
							{
								func_196(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1);
								Local_3620.f_4 = joaat("lose");
								Local_3620.f_25 = joaat("lose");
								Local_3646.f_14++;
								Local_2033.f_232 = 1;
								Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (!Local_2033.f_232)
						{
							Local_3620.f_25 = joaat("push");
							Local_3620.f_4 = joaat("push");
							Local_3646.f_3 = (Local_3646.f_3 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_3620.f_6 = (Local_3620.f_6 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_3620.f_14 = (Local_3620.f_14 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_3620.f_15 = 0;
							Local_2033.f_232 = 1;
							func_196(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
						}
					}
					else if (!Local_2033.f_232)
					{
						func_196(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1);
						Local_3620.f_4 = joaat("Bust");
						Local_3620.f_25 = joaat("Bust");
						Local_3646.f_14++;
						Local_2033.f_232 = 1;
						Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
					}
					SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1));
					if (BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 14))
					{
						if (bVar59 && !bVar61)
						{
							if (!Local_2033.f_233)
							{
								func_196(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2);
								if (Local_3620.f_25 == joaat("Bust"))
								{
									Local_3620.f_4 = 1702151977;
									Local_3620.f_25 = 1702151977;
								}
								else if (Local_3620.f_25 == 579613221)
								{
									Local_3620.f_4 = -2136370424;
									Local_3620.f_25 = -2136370424;
								}
								else if (Local_3620.f_25 == joaat("lose"))
								{
									Local_3620.f_4 = -1858785397;
									Local_3620.f_25 = -1858785397;
								}
								else if (Local_3620.f_25 == joaat("win"))
								{
									Local_3620.f_4 = 1946656957;
									Local_3620.f_25 = 1946656957;
								}
								else if (Local_3620.f_25 == -67503841)
								{
									Local_3620.f_4 = -2105313098;
									Local_3620.f_25 = -2105313098;
								}
								else if (Local_3620.f_25 == joaat("push"))
								{
									Local_3620.f_4 = -185627827;
									Local_3620.f_25 = -185627827;
								}
								else if (Local_3620.f_25 == 1183160994)
								{
									Local_3620.f_4 = -1498042471;
									Local_3620.f_25 = -1498042471;
								}
								Local_3646.f_14++;
								Local_2033.f_233 = 1;
								Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
							}
						}
						else if (iVar55 <= 21)
						{
							SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
							if (bVar61 && !bVar59)
							{
								if (!Local_2033.f_233)
								{
									Local_3646.f_3 = (Local_3646.f_3 + SYSTEM::FLOOR((IntToFloat(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2) * 2.5f)));
									Local_3620.f_6 = (Local_3620.f_6 + SYSTEM::FLOOR((IntToFloat(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2) * 2.5f)));
									Local_3620.f_14 = (Local_3620.f_14 + SYSTEM::FLOOR((IntToFloat(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2) * 2.5f)));
									Local_3620.f_15 = 1;
									Local_3646.f_13++;
									if (Local_3620.f_25 == joaat("Bust"))
									{
										Local_3620.f_4 = 124952027;
										Local_3620.f_25 = 124952027;
									}
									else if (Local_3620.f_25 == 579613221)
									{
										Local_3620.f_4 = 670083824;
										Local_3620.f_25 = 670083824;
									}
									else if (Local_3620.f_25 == joaat("lose"))
									{
										Local_3620.f_4 = 446908156;
										Local_3620.f_25 = 446908156;
									}
									else if (Local_3620.f_25 == joaat("win"))
									{
										Local_3620.f_4 = -1508284701;
										Local_3620.f_25 = -1508284701;
									}
									else if (Local_3620.f_25 == -67503841)
									{
										Local_3620.f_4 = 179647057;
										Local_3620.f_25 = 179647057;
									}
									else if (Local_3620.f_25 == joaat("push"))
									{
										Local_3620.f_4 = -890276844;
										Local_3620.f_25 = -890276844;
									}
									else if (Local_3620.f_25 == 1183160994)
									{
										Local_3620.f_4 = 1647364704;
										Local_3620.f_25 = 1647364704;
									}
									Local_2033.f_233 = 1;
									Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (iVar58 == 7 && !bVar59)
							{
								if (!Local_2033.f_233)
								{
									Local_3646.f_3 = (Local_3646.f_3 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3620.f_6 = (Local_3620.f_6 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3620.f_14 = (Local_3620.f_14 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3620.f_15 = 1;
									Local_3646.f_13++;
									if (Local_3620.f_25 == joaat("Bust"))
									{
										Local_3620.f_4 = -1196919212;
										Local_3620.f_25 = -1196919212;
									}
									else if (Local_3620.f_25 == 579613221)
									{
										Local_3620.f_4 = 505925496;
										Local_3620.f_25 = 505925496;
									}
									else if (Local_3620.f_25 == joaat("lose"))
									{
										Local_3620.f_4 = 2012692421;
										Local_3620.f_25 = 2012692421;
									}
									else if (Local_3620.f_25 == joaat("win"))
									{
										Local_3620.f_4 = 326925312;
										Local_3620.f_25 = 326925312;
									}
									else if (Local_3620.f_25 == -67503841)
									{
										Local_3620.f_4 = 487743337;
										Local_3620.f_25 = 487743337;
									}
									else if (Local_3620.f_25 == joaat("push"))
									{
										Local_3620.f_4 = 526318358;
										Local_3620.f_25 = 526318358;
									}
									else if (Local_3620.f_25 == 1183160994)
									{
										Local_3620.f_4 = -1506449922;
										Local_3620.f_25 = -1506449922;
									}
									Local_2033.f_233 = 1;
									Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (iVar55 > iVar53 || iVar53 > 21)
							{
								if (!Local_2033.f_233)
								{
									Local_3646.f_3 = (Local_3646.f_3 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3620.f_6 = (Local_3620.f_6 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3620.f_14 = (Local_3620.f_14 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3620.f_15 = 1;
									Local_3646.f_13++;
									if (Local_3620.f_25 == joaat("Bust"))
									{
										Local_3620.f_4 = -1738969561;
										Local_3620.f_25 = -1738969561;
									}
									else if (Local_3620.f_25 == 579613221)
									{
										Local_3620.f_4 = -67385374;
										Local_3620.f_25 = -67385374;
									}
									else if (Local_3620.f_25 == joaat("lose"))
									{
										Local_3620.f_4 = 299063546;
										Local_3620.f_25 = 299063546;
									}
									else if (Local_3620.f_25 == joaat("win"))
									{
										Local_3620.f_4 = 639742496;
										Local_3620.f_25 = 639742496;
									}
									else if (Local_3620.f_25 == -67503841)
									{
										Local_3620.f_4 = -833750355;
										Local_3620.f_25 = -833750355;
									}
									else if (Local_3620.f_25 == joaat("push"))
									{
										Local_3620.f_4 = 656184401;
										Local_3620.f_25 = 656184401;
									}
									else if (Local_3620.f_25 == 1183160994)
									{
										Local_3620.f_4 = 1380168920;
										Local_3620.f_25 = 1380168920;
									}
									Local_2033.f_233 = 1;
									Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (iVar55 < iVar53 || (bVar59 && !bVar61))
							{
								if (!Local_2033.f_233)
								{
									func_196(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2);
									if (Local_3620.f_25 == joaat("Bust"))
									{
										Local_3620.f_4 = 1702151977;
										Local_3620.f_25 = 1702151977;
									}
									else if (Local_3620.f_25 == 579613221)
									{
										Local_3620.f_4 = -2136370424;
										Local_3620.f_25 = -2136370424;
									}
									else if (Local_3620.f_25 == joaat("lose"))
									{
										Local_3620.f_4 = -1858785397;
										Local_3620.f_25 = -1858785397;
									}
									else if (Local_3620.f_25 == joaat("win"))
									{
										Local_3620.f_4 = 1946656957;
										Local_3620.f_25 = 1946656957;
									}
									else if (Local_3620.f_25 == -67503841)
									{
										Local_3620.f_4 = -2105313098;
										Local_3620.f_25 = -2105313098;
									}
									else if (Local_3620.f_25 == joaat("push"))
									{
										Local_3620.f_4 = -185627827;
										Local_3620.f_25 = -185627827;
									}
									else if (Local_3620.f_25 == 1183160994)
									{
										Local_3620.f_4 = -1498042471;
										Local_3620.f_25 = -1498042471;
									}
									Local_3646.f_14++;
									Local_2033.f_233 = 1;
									Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (!Local_2033.f_233)
							{
								Local_3646.f_3 = (Local_3646.f_3 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2);
								Local_3620.f_6 = (Local_3620.f_6 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2);
								Local_3620.f_14 = (Local_3620.f_14 + Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2);
								Local_3620.f_15 = 1;
								func_196(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2);
								if (Local_3620.f_25 == joaat("Bust"))
								{
									Local_3620.f_4 = -546469405;
									Local_3620.f_25 = -546469405;
								}
								else if (Local_3620.f_25 == 579613221)
								{
									Local_3620.f_4 = -1749032290;
									Local_3620.f_25 = -1749032290;
								}
								else if (Local_3620.f_25 == joaat("lose"))
								{
									Local_3620.f_4 = 1067415172;
									Local_3620.f_25 = 1067415172;
								}
								else if (Local_3620.f_25 == joaat("win"))
								{
									Local_3620.f_4 = 297125168;
									Local_3620.f_25 = 297125168;
								}
								else if (Local_3620.f_25 == -67503841)
								{
									Local_3620.f_4 = 2030981611;
									Local_3620.f_25 = 2030981611;
								}
								else if (Local_3620.f_25 == joaat("push"))
								{
									Local_3620.f_4 = -684984318;
									Local_3620.f_25 = -684984318;
								}
								else if (Local_3620.f_25 == 1183160994)
								{
									Local_3620.f_4 = 497946612;
									Local_3620.f_25 = 497946612;
								}
								Local_2033.f_233 = 1;
								Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
							}
						}
						else if (!Local_2033.f_233)
						{
							func_196(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2);
							if (Local_3620.f_25 == joaat("Bust"))
							{
								Local_3620.f_4 = 1449908402;
								Local_3620.f_25 = 1449908402;
							}
							else if (Local_3620.f_25 == 579613221)
							{
								Local_3620.f_4 = 1210238154;
								Local_3620.f_25 = 1210238154;
							}
							else if (Local_3620.f_25 == joaat("lose"))
							{
								Local_3620.f_4 = 1540383360;
								Local_3620.f_25 = 1540383360;
							}
							else if (Local_3620.f_25 == joaat("win"))
							{
								Local_3620.f_4 = -457084933;
								Local_3620.f_25 = -457084933;
							}
							else if (Local_3620.f_25 == -67503841)
							{
								Local_3620.f_4 = -740134090;
								Local_3620.f_25 = -740134090;
							}
							else if (Local_3620.f_25 == joaat("push"))
							{
								Local_3620.f_4 = -1825077928;
								Local_3620.f_25 = -1825077928;
							}
							else if (Local_3620.f_25 == 1183160994)
							{
								Local_3620.f_4 = 1676117351;
								Local_3620.f_25 = 1676117351;
							}
							Local_3646.f_14++;
							Local_2033.f_233 = 1;
							Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
						}
						SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2));
					}
					else
					{
						Local_2033.f_233 = 1;
					}
				}
			}
			break;
	}
}

void func_92(char* sParam0, char* sParam1, char* sParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_93(char* sParam0, char* sParam1, char* sParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_94(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

void func_95(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_96(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_97(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_98(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_99(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_100(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_101(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_102(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_103(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_104(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_105(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_106(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_107(int iParam0, var uParam1, int iParam2)
{
	return func_108(iParam0, 3, uParam1, iParam2, -1);
}

int func_108(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_150(iParam1))
	{
	}
	else
	{
		iVar0 = func_409();
		iVar1 = (Global_262145.f_26736 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_148();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_129(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_409() - Global_1964421);
			func_128(iVar4, 1);
			func_126();
			func_125();
			Global_1964421 = (Global_1964421 + iVar4);
			if (iParam1 == 0)
			{
				func_119(iVar4);
				Global_2696123 = 1;
			}
			else if (iParam1 == 3)
			{
				func_112(iVar4);
				if (iVar4 >= Global_262145.f_26744)
				{
					Global_2696122 = 1;
				}
				else if (iVar4 >= Global_262145.f_26743)
				{
					Global_2696123 = 1;
				}
			}
			Var5.f_0 = func_111(iParam1);
			Var5.f_1 = func_110(iParam1, iParam3, iParam4);
			if (func_109(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1964421;
			STATS::PLAYSTATS_CASINO_CHIP(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
			case 12:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("ccur_buy");
			break;
		
		case 1:
			iVar0 = joaat("ccur_sell");
			break;
		
		case 2:
			iVar0 = joaat("ccur_bet");
			break;
		
		case 3:
			iVar0 = joaat("ccur_payout");
			break;
		
		case 4:
			iVar0 = joaat("ccur_collectible_reward");
			break;
		
		case 5:
			iVar0 = joaat("ccur_membership_purchase");
			break;
		
		case 6:
			iVar0 = joaat("ccur_mission_reward");
			break;
		
		case 11:
			iVar0 = joaat("ccur_mission_reward");
			break;
		
		case 7:
			iVar0 = joaat("ccur_daily_bonus");
			break;
		
		case 8:
			iVar0 = joaat("ccur_payout");
			break;
		
		case 9:
			iVar0 = joaat("ccur_veh_purchase_reward");
			break;
		
		case 10:
			iVar0 = joaat("ccu_purchase_shop_item");
			break;
		
		case 12:
			iVar0 = joaat("ccur_mission_reward");
			break;
	}
	return iVar0;
}

void func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_118();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_116();
	if (iVar0 == 0)
	{
		func_115();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26738)
	{
		func_114();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26740)
	{
		func_113(joaat("mpply_casino_chips_won_gd"), Global_262145.f_26740);
		func_114();
		Global_2696123 = 1;
	}
	else
	{
		func_113(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_113(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

void func_114()
{
	func_115();
}

void func_115()
{
	func_113(joaat("mpply_casino_chips_wontim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_116()
{
	return func_117(joaat("mpply_casino_chips_won_gd"));
}

int func_117(int iParam0)
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

int func_118()
{
	return func_117(joaat("mpply_casino_chips_wontim"));
}

void func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_124();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_123();
	if (iVar0 == 0)
	{
		func_122();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26737)
	{
		func_121();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_120()
	{
		func_113(joaat("mpply_casino_chips_pur_gd"), func_120());
		func_121();
	}
	else
	{
		func_113(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_120()
{
	if (func_334(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_26535;
	}
	return Global_262145.f_26534;
}

void func_121()
{
	func_122();
}

void func_122()
{
	func_113(joaat("mpply_casino_chips_purtim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_123()
{
	return func_117(joaat("mpply_casino_chips_pur_gd"));
}

int func_124()
{
	return func_117(joaat("mpply_casino_chips_purtim"));
}

void func_125()
{
	if (BitTest(Global_1964494, 6))
	{
		MISC::SET_BIT(&Global_1964494, 9);
		func_374(&Global_1964497, 0, 0);
	}
}

void func_126()
{
	if (func_127())
	{
		MISC::SET_BIT(&Global_1964494, true);
	}
}

bool func_127()
{
	return (BitTest(Global_1964494, 6) || BitTest(Global_1964494, 5));
}

void func_128(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	MISC::SET_BIT(&Global_1964494, 6);
	Global_1964495 = iParam0;
	Global_1964496 = iParam1;
}

bool func_129(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_109(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_147())
	{
		if (*uParam0 == 0)
		{
			if (func_146() != -1)
			{
				return 0;
			}
			iVar3 = joaat("casino_chips_v0");
			iVar4 = func_111(iParam1);
			iVar5 = -22148635;
			if (func_150(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_142(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_142(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_137())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_136(func_146()))
			{
				if (func_135(func_146()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_134(func_146()));
					if (func_150(iParam1))
					{
						MONEY::NETWORK_CASINO_BUY_CHIPS(iVar0, iParam2);
					}
					else
					{
						MONEY::NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_130(func_146());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		if (func_150(iParam1))
		{
			MONEY::NETWORK_CASINO_BUY_CHIPS(iVar0, iParam2);
		}
		else
		{
			MONEY::NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_130(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_147())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_133(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_131(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_131(var uParam0)
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
	func_132(&(uParam0->f_14));
	func_132(&(uParam0->f_14.f_13));
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

void func_132(var uParam0)
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

int func_133(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_135(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_137()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_147())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_146();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_141(Global_4535950[iVar2 /*85*/].f_66.f_6, Global_4535950[iVar2 /*85*/].f_66.f_4, Global_4535950[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4537456 = 1;
			}
			return 0;
		}
		if (Global_2697635)
		{
			if (Global_4535950[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4535950[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_134(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4535950[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535950[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4535950[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535950[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535950[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_138(Global_4535950[iVar2 /*85*/], iVar2);
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	return 0;
}

void func_138(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_140(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_139();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_139()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_140(bool bParam0)
{
	var uVar0;
	
	if (func_20(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case joaat("service_spend_match_entry_fee"):
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("service_earn_pickup"):
			case joaat("service_earn_ambient_mugging"):
			case joaat("service_earn_ambient_pickup"):
			case joaat("service_earn_deathmatch_bounty"):
			case joaat("service_earn_cashing_out"):
			case joaat("service_earn_refund_arena_spec_box_entry"):
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case joaat("service_earn_debug"):
				return 0;
				break;
			
			case joaat("service_earn_initial_cash"):
			case joaat("service_earn_jobs"):
			case joaat("service_earn_betting"):
			case joaat("service_earn_lottery"):
			case joaat("service_earn_challenge_win"):
			case joaat("service_earn_property_sales"):
			case joaat("service_earn_vehicle_sales"):
			case joaat("service_earn_lester_target_kill"):
			case joaat("service_earn_bounty_collected"):
			case joaat("service_earn_crate_drop"):
			case joaat("service_earn_holdups"):
			case joaat("service_earn_import_export"):
			case joaat("service_earn_armored_trucks"):
			case joaat("service_earn_jobshare_cash"):
			case joaat("service_earn_not_badsport"):
			case joaat("service_earn_bank_interest"):
			case joaat("service_earn_cncw"):
			case joaat("service_earn_cncb"):
			case joaat("service_earn_job_bonus"):
			case joaat("service_earn_bend_job"):
			case joaat("service_earn_personal_vehicle"):
			case joaat("service_earn_daily_objectives"):
			case joaat("service_earn_ambient_job_plane_takedown"):
			case joaat("service_earn_ambient_job_distract_cops"):
			case joaat("service_earn_ambient_job_destroy_veh"):
			case joaat("service_earn_refund_backup_vagos"):
			case joaat("service_earn_refund_backup_lost"):
			case joaat("service_earn_refund_backup_families"):
			case joaat("service_earn_refund_hire_mugger"):
			case joaat("service_earn_refund_hire_mercenary"):
			case joaat("service_earn_refund_buy_cardropoff"):
			case joaat("service_earn_refund_heli_pickup"):
			case joaat("service_earn_refund_boat_pickup"):
			case joaat("service_earn_refund_clear_wanted"):
			case joaat("service_earn_refund_head_2_head"):
			case joaat("service_earn_refund_challenge"):
			case joaat("service_earn_refund_share_last_job"):
			case joaat("service_earn_refund_lottery"):
			case -1426920838:
			case joaat("service_earn_gangattack_pickup"):
			case joaat("service_earn_ambient_job_hot_target_deliver"):
			case joaat("service_earn_ambient_job_hot_target_kill"):
			case joaat("service_earn_ambient_job_urban_warfare"):
			case joaat("service_earn_ambient_job_checkpoint_collection"):
			case joaat("service_earn_ambient_job_time_trial"):
			case joaat("service_earn_ambient_job_challenges"):
			case joaat("service_earn_ambient_job_heli_hot_target"):
			case joaat("service_earn_ambient_job_dead_drop"):
			case joaat("service_earn_ambient_job_penned_in"):
			case joaat("service_earn_ambient_job_pass_parcel"):
			case joaat("service_earn_ambient_job_blast"):
			case joaat("service_earn_ambient_job_hot_property"):
			case joaat("service_earn_ambient_job_king"):
			case joaat("service_earn_ambient_job_beast"):
			case joaat("service_earn_boss"):
			case joaat("service_earn_goon"):
			case joaat("service_earn_boss_agency"):
			case joaat("service_earn_from_destroying_contraband"):
			case joaat("service_earn_premium_job"):
			case joaat("service_earn_from_vehicle_export"):
			case joaat("service_earn_smuggler_agency"):
			case joaat("service_earn_wage_payment_bonus"):
			case joaat("service_earn_refundammodrop"):
			case joaat("service_earn_salvage_checkpoint_collection"):
			case joaat("service_earn_job_bonus_criminal_mastermind"):
			case joaat("service_earn_job_bonus_heist_award"):
			case joaat("service_earn_job_bonus_first_time_bonus"):
			case joaat("service_earn_refund_orbital_manual"):
			case joaat("service_earn_refund_orbital_auto"):
			case joaat("service_earn_gangops_wages"):
			case joaat("service_earn_gangops_wages_bonus"):
			case joaat("service_earn_gangops_prep_participation"):
			case joaat("service_earn_gangops_setup"):
			case joaat("service_earn_gangops_setup_fail"):
			case joaat("service_earn_gangops_finale"):
			case joaat("service_earn_gangops_award_mastermind_2"):
			case joaat("service_earn_gangops_award_mastermind_3"):
			case joaat("service_earn_gangops_award_mastermind_4"):
			case joaat("service_earn_gangops_award_loyalty_award_2"):
			case joaat("service_earn_gangops_award_loyalty_award_3"):
			case joaat("service_earn_gangops_award_loyalty_award_4"):
			case joaat("service_earn_gangops_award_first_time_xm_base"):
			case joaat("service_earn_gangops_award_first_time_xm_submarine"):
			case joaat("service_earn_gangops_award_first_time_xm_silo"):
			case joaat("service_earn_gangops_award_supporting"):
			case joaat("service_earn_gangops_award_order"):
			case joaat("service_earn_gangops_elite_xm_base"):
			case joaat("service_earn_gangops_elite_xm_submarine"):
			case joaat("service_earn_gangops_elite_xm_silo"):
			case joaat("service_earn_gangops_rival_delivery"):
			case joaat("service_earn_doomsday_finale_bonus"):
			case joaat("service_earn_bounty_hunter_reward"):
			case joaat("service_earn_from_business_battle"):
			case joaat("service_earn_from_club_management_participation"):
			case joaat("service_earn_from_fmbb_phonecall_mission"):
			case joaat("service_earn_from_business_hub_sell"):
			case joaat("service_earn_from_fmbb_boss_work"):
			case joaat("service_earn_fmbb_wage_bonus"):
			case joaat("service_earn_nightclub_dancing_award"):
			case joaat("service_earn_bb_event_bonus"):
			case joaat("service_earn_arena_skill_lvl_award"):
			case joaat("service_earn_arena_career_tier_progression_1"):
			case joaat("service_earn_arena_career_tier_progression_2"):
			case joaat("service_earn_arena_career_tier_progression_3"):
			case joaat("service_earn_arena_career_tier_progression_4"):
			case joaat("service_earn_spin_the_wheel_cash"):
			case joaat("service_earn_assassinate_target_killed"):
			case joaat("service_earn_arena_war"):
			case joaat("service_earn_ambient_job_rc_time_trial"):
			case joaat("service_earn_daily_objective_event"):
			case joaat("service_earn_collectables_action_figures"):
			case joaat("service_earn_casino_mission_reward"):
			case joaat("service_earn_casino_story_mission_reward"):
			case joaat("service_earn_casino_award_mission_one_first_time"):
			case joaat("service_earn_casino_award_mission_two_first_time"):
			case joaat("service_earn_casino_award_mission_three_first_time"):
			case joaat("service_earn_casino_award_mission_four_first_time"):
			case joaat("service_earn_casino_award_mission_five_first_time"):
			case joaat("service_earn_casino_award_mission_six_first_time"):
			case joaat("service_earn_casino_award_straight_flush"):
			case joaat("service_earn_casino_award_top_pair"):
			case joaat("service_earn_casino_award_full_house"):
			case joaat("service_earn_casino_award_lucky_lucky"):
			case joaat("service_earn_casino_award_high_roller_bronze"):
			case joaat("service_earn_casino_award_high_roller_silver"):
			case joaat("service_earn_casino_award_high_roller_gold"):
			case joaat("service_earn_casino_award_high_roller_platinum"):
			case joaat("service_earn_casino_heist_setup_mission"):
			case joaat("service_earn_casino_heist_prep_mission"):
				return 1;
				break;
			
			case joaat("service_spend_airstrike"):
			case joaat("service_spend_ammo_drop"):
			case joaat("service_spend_backup_gang"):
			case joaat("service_spend_backup_heli"):
			case joaat("service_spend_boat_pickup"):
			case joaat("service_spend_bounty"):
			case joaat("service_spend_bull_shark"):
			case joaat("service_spend_car_impound"):
			case joaat("service_spend_cash_shared"):
			case joaat("service_spend_challenge_wager"):
			case joaat("service_spend_cops_turn_eye"):
			case joaat("service_spend_heli_pickup"):
			case joaat("service_spend_hire_mercenary"):
			case joaat("service_spend_hire_mugger"):
			case joaat("service_spend_locate_vehicle"):
			case joaat("service_spend_lose_wanted_level"):
			case joaat("service_spend_off_the_radar"):
			case joaat("service_spend_pegasus_delivery"):
			case joaat("service_spend_reveal_players"):
			case joaat("service_spend_vehicle_insurance"):
			case joaat("service_spend_vehicle_insurance_premium"):
				return 2;
				break;
		}
		switch (iParam1)
		{
			case joaat("service_earn_casino_heist_award_smash_n_grab"):
			case joaat("service_earn_casino_heist_award_in_plain_sight"):
			case joaat("service_earn_casino_heist_award_undetected"):
			case joaat("service_earn_casino_heist_award_all_rounder"):
			case joaat("service_earn_casino_heist_award_elite_thief"):
			case joaat("service_earn_casino_heist_award_professional"):
			case joaat("service_earn_casino_heist_finale"):
			case joaat("service_earn_casino_heist_elite_stealth"):
			case joaat("service_earn_casino_heist_elite_subterfuge"):
			case joaat("service_earn_casino_heist_elite_direct"):
			case joaat("service_earn_collectable_completed_collection"):
			case joaat("service_earn_collectables_signal_jammers_complete"):
			case joaat("service_earn_island_heist_finale"):
			case joaat("service_earn_island_heist_elite_challenge"):
			case joaat("service_earn_island_heist_award_professional"):
			case joaat("service_earn_island_heist_award_elite_thief"):
			case joaat("service_earn_island_heist_award_the_island_heist"):
			case joaat("service_earn_island_heist_award_going_alone"):
			case joaat("service_earn_island_heist_award_team_work"):
			case joaat("service_earn_island_heist_award_cat_burglar"):
			case joaat("service_earn_island_heist_award_pro_thief"):
			case joaat("service_earn_island_heist_award_mixing_it_up"):
			case joaat("service_earn_island_heist_prep"):
			case joaat("service_earn_island_heist_dj_mission"):
			case joaat("service_earn_tuner_robbery_prep"):
			case joaat("service_earn_tuner_robbery_finale"):
			case joaat("service_earn_tuner_car_club_membership"):
			case joaat("service_earn_tuner_daily_vehicle"):
			case joaat("service_earn_tuner_daily_vehicle_bonus"):
			case joaat("service_earn_tuner_award_union_depository"):
			case joaat("service_earn_tuner_award_military_convoy"):
			case joaat("service_earn_tuner_award_fleeca_bank"):
			case joaat("service_earn_tuner_award_freight_train"):
			case joaat("service_earn_tuner_award_bolingbroke_ass"):
			case joaat("service_earn_tuner_award_iaa_raid"):
			case joaat("service_earn_tuner_award_meth_job"):
			case joaat("service_earn_tuner_award_bunker_raid"):
			case joaat("service_earn_auto_shop_delivery_award"):
			case joaat("service_earn_agency_security_contract"):
			case joaat("service_earn_agency_payphone_hit"):
			case joaat("service_earn_agency_story_prep"):
			case joaat("service_earn_agency_story_finale"):
			case joaat("service_earn_fixer_award_sec_con"):
			case joaat("service_earn_fixer_award_phone_hit"):
			case joaat("service_earn_fixer_award_agency_story"):
			case joaat("service_earn_fixer_award_short_trip"):
			case joaat("service_earn_fixer_rival_delivery"):
			case joaat("service_earn_music_studio_short_trip"):
			case joaat("service_earn_from_contraband"):
			case joaat("service_earn_nclub_troublemaker"):
			case joaat("service_earn_sightseeing_reward"):
			case joaat("service_earn_ambient_job_clubhouse_contract"):
			case joaat("service_earn_ambient_job_underwater_cargo"):
			case joaat("service_earn_ambient_job_crime_scene"):
			case joaat("service_earn_ambient_job_metal_detector"):
			case joaat("service_earn_ambient_job_smuggler_plane"):
			case joaat("service_earn_ambient_job_smuggler_trail"):
			case joaat("service_earn_ambient_job_golden_gun"):
			case joaat("service_earn_ambient_job_ammunation_delivery"):
			case joaat("service_earn_ambient_job_source_research"):
			case joaat("service_earn_yohan_source_goods"):
			case joaat("service_earn_taxi_job"):
			case joaat("service_earn_daily_stash_house_participation"):
			case joaat("service_earn_daily_stash_house_completed"):
			case joaat("service_earn_ambient_job_gang_convoy"):
			case joaat("service_earn_ambient_job_shop_robbery"):
			case joaat("service_earn_ambient_job_xmas_mugger"):
			case joaat("service_earn_ambient_job_maze_bank"):
			case joaat("service_earn_acid_lab_setup_participation"):
			case joaat("service_earn_acid_lab_source_participation"):
			case joaat("service_earn_acid_lab_sell_participation"):
			case joaat("service_earn_smuggler_ops"):
			case joaat("service_earn_ambient_job_armored_truck"):
			case joaat("service_earn_ambient_job_bicycle_time_trial"):
			case joaat("service_earn_cayo_attrition_bonus_objective"):
			case joaat("service_earn_avenger_operations"):
			case joaat("service_earn_avenger_ops_bonus"):
			case joaat("service_earn_ambient_job_drug_vehicle"):
			case 649031587:
			case -1539520895:
			case 560526114:
			case -256590568:
			case -470808433:
			case 1245164680:
			case 1648751987:
			case 674719198:
			case -1433838369:
			case 1424147761:
			case 617724895:
			case 2131157548:
			case 1237940902:
			case -1688538833:
			case 918785029:
			case -1343182760:
			case -1725871206:
			case 1435585629:
			case 1851118721:
			case -1961446392:
			case -1726080156:
			case 300207193:
				if (iParam2 == 0)
				{
					return 0;
				}
				return 1;
				break;
			
			case joaat("service_earn_collectable_item"):
			case joaat("service_earn_collectables_signal_jammers"):
				return 2;
				break;
		}
		return 0;
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_147())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697635)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_146();
	if (iVar1 == -1)
	{
		if (!func_144(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_143(iParam1))
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
		Global_4535950[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535950[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535950[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_143(int iParam0)
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

int func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_147())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697635)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535950[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535950[iVar1 /*85*/].f_66.f_5 == 1)
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
		*iParam0 = func_145(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_145(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_147())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = uParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_138(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_146()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_134(iVar0) != 2147483647)
		{
			if (func_133(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_147()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_148()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_120() - func_123());
	iVar1 = (Global_262145.f_26736 - func_409());
	iVar2 = func_149();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_149()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_120();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (MONEY::NETWORK_CASINO_CAN_BUY_CHIPS_PVC())
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = MONEY::NETWORK_GET_EVC_BALANCE();
	}
	return iVar1;
}

int func_150(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_151()
{
	if (func_152())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_152()
{
	return func_52(PLAYER::PLAYER_ID());
}

char* func_153()
{
	if (func_152())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_154(int iParam0)
{
	if (func_152())
	{
		if ((func_435(PLAYER::PLAYER_ID()) || func_389(Local_2033.f_247) == 2) || func_389(Local_2033.f_247) == 3)
		{
			if (iParam0 > 10000 && Local_3620.f_4 != joaat("push"))
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000 || Local_3620.f_4 == joaat("push"))
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000 && Local_3620.f_4 != joaat("push"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000 || Local_3620.f_4 == joaat("push"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_435(PLAYER::PLAYER_ID()) || func_389(Local_2033.f_247) == 2) || func_389(Local_2033.f_247) == 3)
	{
		if (iParam0 > 10000 && Local_3620.f_4 != joaat("push"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000 || Local_3620.f_4 == joaat("push"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000 && Local_3620.f_4 != joaat("push"))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000 || Local_3620.f_4 == joaat("push"))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

char* func_155()
{
	if (func_152())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "female_reaction_bad_var_01";
			
			case 1:
				return "female_reaction_bad_var_02";
			
			case 2:
				return "female_reaction_bad_var_03";
			
			case 3:
				return "female_reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_156(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	if (func_159(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_158(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_157(3, iVar0);
		Global_1670224.f_2872[iVar0] = uParam0;
		StringCopy(&(Global_1670224.f_2872.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_2872.f_183[iVar0] = iParam3;
		Global_1670224.f_2872.f_172[iVar0] = iParam2;
		Global_1670224.f_2872.f_205[iVar0] = iParam4;
		Global_1670224.f_2872.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1670224.f_2872.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1670224.f_2872.f_420[iVar0] = iParam7;
		Global_1670224.f_2872.f_453[iVar0] = iParam8;
		Global_1670224.f_2872.f_431[iVar0] = iParam9;
		Global_1670224.f_2872.f_442[iVar0] = iParam10;
		Global_1670224.f_2872.f_464[iVar0] = iParam11;
		Global_1670224.f_2872.f_475[iVar0] = iParam12;
		Global_1670224.f_2872.f_486[iVar0] = iParam13;
		Global_1670224.f_2872.f_497[iVar0] = iParam14;
		Global_1670224.f_2872.f_508[iVar0] = iParam15;
	}
}

void func_157(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_158(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

int func_159(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_158(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_157(7, iVar0);
		Global_1670224.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[iVar0] = iParam2;
		Global_1670224.f_4714.f_216[iVar0] = iParam3;
		Global_1670224.f_4714.f_183[iVar0] = iParam4;
		Global_1670224.f_4714.f_194[iVar0] = iParam5;
		Global_1670224.f_4714.f_249[iVar0] = iParam6;
		Global_1670224.f_4714.f_260[iVar0] = iParam7;
		Global_1670224.f_4714.f_205[iVar0] = iParam8;
		Global_1670224.f_4714.f_314[iVar0] = iParam9;
		Global_1670224.f_4714.f_325[iVar0] = iParam10;
		Global_1670224.f_4714.f_357[iVar0] = iParam11;
		Global_1670224.f_4714.f_238[iVar0] = iParam12;
		Global_1670224.f_4714.f_271[iVar0] = iParam13;
		Global_1670224.f_4714.f_368[iVar0] = iParam14;
		Global_1670224.f_4714.f_379[iVar0] = iParam15;
		Global_1670224.f_4714.f_390[iVar0] = iParam16;
		Global_1670224.f_4714.f_227[iVar0] = iParam17;
	}
}

int func_161(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_147() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_169(iParam0))
	{
		return func_162(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_162(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_150(iParam1))
	{
	}
	else
	{
		iVar0 = func_409();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_147() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_129(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1964421 - func_409());
			if (iParam1 == 1)
			{
				func_163(iParam0);
				Global_2696122 = 1;
			}
			else if (iVar2 >= Global_262145.f_26745)
			{
				Global_2696123 = 1;
			}
			func_128(iVar2, 0);
			func_126();
			func_125();
			Global_1964421 = (Global_1964421 - iVar2);
			Var3.f_0 = func_111(iParam1);
			Var3.f_1 = func_110(iParam1, iParam3, iParam4);
			if (func_109(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var3.f_6 = Global_1964421;
			Var3.f_7 = iParam5;
			STATS::PLAYSTATS_CASINO_CHIP(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_168();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_167();
	if (iVar0 == 0)
	{
		func_166();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26537)
	{
		func_165();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_164()
	{
		func_113(-1989650268, func_164());
		func_165();
	}
	else
	{
		func_113(-1989650268, (iVar2 + iParam0));
	}
}

int func_164()
{
	return Global_262145.f_26536;
}

void func_165()
{
	func_166();
}

void func_166()
{
	func_113(1447512463, NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_167()
{
	return func_117(-1989650268);
}

int func_168()
{
	return func_117(1447512463);
}

int func_169(int iParam0)
{
	int iVar0;
	
	if (func_339())
	{
		return 0;
	}
	iVar0 = func_409();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_170(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

char* func_171(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (bParam1)
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_split";
				}
			
			default:
		}
		return "place_bet_small_split";
	}
	if (((Local_2033.f_247 == 1 || Local_2033.f_247 == 5) || Local_2033.f_247 == 9) || Local_2033.f_247 == 13)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down_player_02";
					
					default:
				}
			}
			else
			{
				return "place_bet_small_player_02";
			}
		}
		if (!bParam1)
		{
			return "place_bet_small_player_02";
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_player_02";
				
				default:
			}
			return "place_bet_small_player_02";
		}
	}
	else
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down";
					
					default:
				}
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "place_bet_small";
					
					case 1:
						return "place_bet_small_alt1";
					
					case 2:
						return "place_bet_small_alt2";
					
					case 3:
						return "place_bet_small_alt3";
					}
				}
			
			default:
		}
		if (!bParam1)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large";
				
				default:
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				}
			}
		
		default:
	}
	return "";
}

void func_172(int iParam0)
{
	Local_2033.f_0 = iParam0;
}

void func_173()
{
	char* sVar0;
	
	if (BitTest(Local_2033.f_250, 2))
	{
		MISC::CLEAR_BIT(&(Local_2033.f_250), 2);
	}
	PAD::DISABLE_CONTROL_ACTION(2, 210, true);
	PAD::SET_INPUT_EXCLUSIVE(2, 210);
	if (!BitTest(Local_2033.f_250, 0))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 210))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_2033.f_250), false);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_389(Local_2033.f_247) == 2 || func_389(Local_2033.f_247) == 3) || func_435(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (func_301(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!BitTest(Local_2033.f_250, 1))
			{
				func_300(0, 0);
				func_298(1, sVar0, sVar0);
				func_297("BJACK_RULES");
				func_177(1, iLocal_3674, 9);
				func_176(1, 1, 1, 1, 1);
				func_296(-1, 1, 1);
				func_295(func_175(iLocal_3674), 0, 0);
				func_294(func_174(iLocal_3674));
				MISC::SET_BIT(&(Local_2033.f_250), true);
			}
			func_254(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_251(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_3674 = 1;
			Local_2033.f_250 = 0;
			MISC::SET_BIT(&(Local_2033.f_250), 2);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 190))
		{
			iLocal_3674++;
			if (iLocal_3674 > 9)
			{
				iLocal_3674 = 1;
			}
			MISC::CLEAR_BIT(&(Local_2033.f_250), 1);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 189))
		{
			iLocal_3674 = (iLocal_3674 - 1);
			if (iLocal_3674 < 1)
			{
				iLocal_3674 = 9;
			}
			MISC::CLEAR_BIT(&(Local_2033.f_250), 1);
		}
	}
}

char* func_174(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1";
		
		case 2:
			return "BJACK_RULE_2";
		
		case 3:
			return "BJACK_RULE_3";
		
		case 4:
			return "BJACK_RULE_4";
		
		case 5:
			return "BJACK_RULE_5";
		
		case 6:
			return "BJACK_RULE_6";
		
		case 7:
			return "BJACK_RULE_7";
		
		case 8:
			return "BJACK_RULE_8";
		
		case 9:
			if ((func_389(Local_2033.f_247) == 2 || func_389(Local_2033.f_247) == 3) || func_435(PLAYER::PLAYER_ID()))
			{
				return "BJACK_RULE_9b";
			}
			else
			{
				return "BJACK_RULE_9a";
			}
			break;
	}
	return "";
}

char* func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1T";
		
		case 2:
			return "BJACK_RULE_2T";
		
		case 3:
			return "BJACK_RULE_3T";
		
		case 4:
			return "BJACK_RULE_4T";
		
		case 5:
			return "BJACK_RULE_5T";
		
		case 6:
			return "BJACK_RULE_6T";
		
		case 7:
			return "BJACK_RULE_7T";
		
		case 8:
			return "BJACK_RULE_8T";
		
		case 9:
			if ((func_389(Local_2033.f_247) == 2 || func_389(Local_2033.f_247) == 3) || func_435(PLAYER::PLAYER_ID()))
			{
				return "BJACK_RULE_9Tb";
			}
			else
			{
				return "BJACK_RULE_9Ta";
			}
			break;
	}
	return "";
}

void func_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23831.f_5678[0] = iParam0;
	Global_23831.f_5678[1] = iParam1;
	Global_23831.f_5678[2] = iParam2;
	Global_23831.f_5678[3] = iParam3;
	Global_23831.f_5678[4] = iParam4;
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	Global_23831.f_6338 = iParam0;
	Global_23831.f_6339 = iParam1;
	Global_23831.f_6340 = iParam2;
}

void func_178(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_179(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::HAVE_CONTROLS_CHANGED(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_185(uParam2);
	}
	if (Global_1577937 < 2)
	{
		func_184(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 365)
						{
							func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_183(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_182(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_183(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_183(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_182(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_181(*uParam0, uParam1);
	}
	func_180();
}

void func_180()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_181(int iParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_182(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_183(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_184(int iParam0)
{
	Global_1577937 = iParam0;
}

void func_185(var uParam0)
{
	Global_1979636 = 0;
	uParam0->f_692 = 0;
}

int func_186(var uParam0)
{
	return (Global_1979636 || uParam0->f_692);
}

void func_187(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_188()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_189(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	MISC::SET_BIT(&(uParam3->f_690), bVar0);
	uParam3->f_693++;
}

void func_190(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_191(var uParam0)
{
	func_192(uParam0);
	uParam0->f_692 = 1;
}

void func_192(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 365;
		uParam0->f_1[iVar0 /*57*/].f_56 = 365;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
	Global_1979636 = 0;
}

var func_193(bool bParam0)
{
	if (func_152())
	{
		if (!bParam0)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					Local_2033.f_1582 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_2033.f_1582 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_2033.f_1582 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_2033.f_1582 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_2033.f_1582 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_2033.f_1582 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_2033.f_1582 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_2033.f_1582 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
		{
			case 0:
				Local_2033.f_1582 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_2033.f_1582 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_2033.f_1582 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_2033.f_1582 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_2033.f_1582 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_2033.f_1582 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_2033.f_1582 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_2033.f_1582 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_2033.f_1582 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_2033.f_1582 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_2033.f_1582 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_2033.f_1582 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_2033.f_1582 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_2033.f_1582;
}

int func_194()
{
	if (func_195() == 0)
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	return Global_1574633.f_18;
}

void func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_118();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_116();
	if (iVar0 == 0)
	{
		func_115();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26738)
	{
		func_114();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26739)
	{
		func_113(joaat("mpply_casino_chips_won_gd"), Global_262145.f_26739);
		func_114();
		Global_2696123 = 1;
	}
	else
	{
		func_113(joaat("mpply_casino_chips_won_gd"), (iVar2 - iParam0));
	}
}

int func_197(var uParam0, bool bParam1, bool bParam2)
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

int func_198()
{
	if ((Local_2033.f_232 && Local_2033.f_233) && (!Local_2033.f_235 && Local_3620.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_199()
{
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_200())
	{
		return NETWORK::NETWORK_GET_PLAYER_ACCOUNT_ID(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	return 0;
}

int func_200()
{
	return -1;
}

void func_201()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	int iVar24;
	
	if (!PAD::IS_CONTROL_PRESSED(2, 207))
	{
		if (bLocal_3684)
		{
			func_305(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_3684 = false;
	}
	if (!PAD::IS_CONTROL_PRESSED(2, 208))
	{
		if (bLocal_3683)
		{
			func_305(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_3683 = false;
	}
	if ((((Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0 && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_343()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && (Local_116.f_1515[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] < 9 || !BitTest(Local_116.f_1555[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4], 13)))
	{
		if (Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
		{
			if ((((PAD::IS_CONTROL_PRESSED(2, 207) && !PAD::IS_CONTROL_PRESSED(2, 208)) && !bLocal_3683) && !func_67(&uLocal_3685)) && !CAM::DOES_CAM_EXIST(Local_2033.f_242))
			{
				if (!bLocal_3684)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
					}
					func_305(PLAYER::PLAYER_ID(), 0, 0, 0);
					bLocal_3684 = true;
				}
			}
		}
		else
		{
			if (bLocal_3684)
			{
				func_305(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_3684 = false;
		}
		if (Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 >= 2)
		{
			if ((((PAD::IS_CONTROL_PRESSED(2, 208) && !PAD::IS_CONTROL_PRESSED(2, 207)) && !bLocal_3684) && !func_67(&uLocal_3685)) && !CAM::DOES_CAM_EXIST(Local_2033.f_242))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_305(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				bLocal_3683 = true;
			}
		}
		else
		{
			if (bLocal_3683)
			{
				func_305(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_3683 = false;
		}
	}
	else
	{
		if (bLocal_3684 || bLocal_3683)
		{
			func_305(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_3684 = false;
		bLocal_3683 = false;
	}
	if (bLocal_3683 || bLocal_3684)
	{
		CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 166, true);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!CAM::DOES_CAM_EXIST(Local_2033.f_242))
		{
			Local_2033.f_242 = CAM::CREATE_CAMERA(26379945, true);
			CAM::SET_CAM_PARAMS(Local_2033.f_242, func_214(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3, Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_3683), func_213(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3, Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_3683), func_212(bLocal_3683), 0, 1, 1, 2);
			CAM::SHAKE_CAM(Local_2033.f_242, "HAND_SHAKE", 0.03f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else if (bLocal_3683)
		{
			if (Local_116.f_1525[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4])
			{
				if (func_28(&(Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/])) == 21 && Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 == 2)
				{
					if (!func_96("BJACK_D_HAND2", "BJACK_BJ"))
					{
						func_95("BJACK_D_HAND2", "BJACK_BJ");
					}
				}
				else if (func_28(&(Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/])) > 21)
				{
					if (!func_96("BJACK_D_HAND2", "BJACK_BUSTED"))
					{
						func_95("BJACK_D_HAND2", "BJACK_BUSTED");
					}
				}
				else if (!func_328("BJACK_D_HAND1", func_28(&(Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/]))))
				{
					func_94("BJACK_D_HAND1", func_28(&(Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/])));
				}
			}
			else if (!func_328("BJACK_D_HAND1", func_36(Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/][1])))
			{
				func_94("BJACK_D_HAND1", func_36(Local_116.f_846[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/][1]));
			}
			fVar0 = CAM::GET_CAM_FOV(Local_2033.f_242);
			fVar1 = 50f;
			fVar1 = func_211(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3, 1);
			fVar0 = func_209(fVar0, fVar1, 0.2f, 4);
			CAM::SET_CAM_PARAMS(Local_2033.f_242, func_214(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3, Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_3683), func_213(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3, Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_3683), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_3684)
		{
			fVar4 = CAM::GET_CAM_FOV(Local_2033.f_242);
			fVar5 = 50f;
			Var6 = { CAM::GET_CAM_ROT(Local_2033.f_242, 2) };
			Var9 = { 0f, 0f, 0f };
			Var12 = { -38.1166f, -0.0930717f, -102.613f };
			Var15 = { CAM::GET_CAM_COORD(Local_2033.f_242) };
			Var18 = { 0f, 0f, 0f };
			Var21 = { 966.621f, 32.009f, 116.621f };
			if (Var6.f_2 < 0f)
			{
				Var6.f_2 = (Var6.f_2 + 360f);
			}
			if (!func_67(&uLocal_3681))
			{
				iVar24 = PAD::GET_CONTROL_VALUE(2, 30);
				bVar2 = iVar24 < 100;
				bVar3 = iVar24 > 150;
				if (bVar2 || bVar3)
				{
					func_68(&uLocal_3681, 0, 0);
				}
			}
			else if (func_66(&uLocal_3681, 500, 0))
			{
				func_64(&uLocal_3681);
			}
			if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0 && Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] > 1)
			{
				if (bVar2)
				{
					iLocal_3676 = (iLocal_3676 - 1);
					if (iLocal_3676 < func_208(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3))
					{
						iLocal_3676 = func_208(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3);
					}
				}
				if (bVar3)
				{
					iLocal_3676++;
					if (iLocal_3676 > func_207(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3))
					{
						iLocal_3676 = func_207(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3);
					}
				}
			}
			else
			{
				iLocal_3676 = 0;
			}
			Var21 = { func_214(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3, Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, 0) };
			Var12 = { func_206(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3) };
			fVar5 = func_211(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3, 0);
			if (Var12.f_2 < 0f)
			{
				Var12.f_2 = (Var12.f_2 + 360f);
			}
			Var9 = { func_204(Var6, Var12, 0.2f, 4) };
			Var18 = { func_203(Var15, Var21, 0.2f, 4) };
			if (Var9.f_2 > 180f)
			{
				Var9.f_2 = (Var9.f_2 - 360f);
			}
			else if (Var9.f_2 < -180f)
			{
				Var9.f_2 = (Var9.f_2 + 360f);
			}
			if (func_202(Var6, Var12, 10f, 0) && func_202(Var15, Var21, 0.1f, 0))
			{
				fVar4 = func_209(fVar4, fVar5, 0.2f, 4);
			}
			CAM::SET_CAM_PARAMS(Local_2033.f_242, Var18, Var9, fVar4, 0, 1, 1, 2);
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (CAM::DOES_CAM_EXIST(Local_2033.f_242))
		{
			CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
			if (!func_67(&uLocal_3685) && bLocal_3675)
			{
				func_68(&uLocal_3685, 0, 0);
				GRAPHICS::ANIMPOSTFX_PLAY("DefaultBlinkOutro", 0, false);
			}
			else if (func_66(&uLocal_3685, 100, 0) || !bLocal_3675)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(Local_2033.f_242, false);
				HUD::CLEAR_HELP(true);
				func_64(&uLocal_3685);
				bLocal_3675 = false;
				iLocal_3676 = 0;
			}
		}
	}
	if (bLocal_3684 || bLocal_3675)
	{
		if ((Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 >= 2 && ((!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 13) && !BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 11)) || (((BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 11) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4]), func_59(), func_14(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4, Local_116.f_1575[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4], 1), 3)))) || (BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/], 11) && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 < 3))
		{
			if (func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
			{
				if (!func_96("BJACK_P_HAND2", "BJACK_BJ"))
				{
					func_95("BJACK_P_HAND2", "BJACK_BJ");
				}
			}
			else if (func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
			{
				if (!func_96("BJACK_P_HAND2", "BJACK_7CC"))
				{
					func_95("BJACK_P_HAND2", "BJACK_7CC");
				}
			}
			else if (func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])) > 21)
			{
				if (!func_96("BJACK_P_HAND2", "BJACK_BUSTED"))
				{
					func_95("BJACK_P_HAND2", "BJACK_BUSTED");
				}
			}
			else if (!func_328("BJACK_P_HAND1", func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
			{
				func_94("BJACK_P_HAND1", func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])));
			}
		}
		else if (Local_116.f_1575[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4] != (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)) && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 >= 2)
		{
			if (func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
			{
				if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ");
					}
				}
				else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ"))
					{
						func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ");
					}
				}
				else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ");
					}
				}
				else if (!func_106("BJACK_SHOW_3", "BJACK_BJ", func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_105("BJACK_SHOW_3", "BJACK_BJ", func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
			{
				if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC");
					}
				}
				else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC"))
					{
						func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC");
					}
				}
				else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC");
					}
				}
				else if (!func_106("BJACK_SHOW_3", "BJACK_7CC", func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_105("BJACK_SHOW_3", "BJACK_7CC", func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])) > 21)
			{
				if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED");
					}
				}
				else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED"))
					{
						func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED");
					}
				}
				else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED");
					}
				}
				else if (!func_106("BJACK_SHOW_3", "BJACK_BUSTED", func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_105("BJACK_SHOW_3", "BJACK_BUSTED", func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
			{
				if (!func_106("BJACK_SHOW_2", "BJACK_BJ", func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_105("BJACK_SHOW_2", "BJACK_BJ", func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
			{
				if (!func_106("BJACK_SHOW_2", "BJACK_7CC", func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_105("BJACK_SHOW_2", "BJACK_7CC", func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
			{
				if (!func_106("BJACK_SHOW_2", "BJACK_BUSTED", func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_105("BJACK_SHOW_2", "BJACK_BUSTED", func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (!func_104("BJACK_SHOW_1", func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])), func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
			{
				func_103("BJACK_SHOW_1", func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])), func_28(&(Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/])));
			}
		}
		else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
		{
			if (!func_96("BJACK_P_HAND2", "BJACK_BJ"))
			{
				func_95("BJACK_P_HAND2", "BJACK_BJ");
			}
		}
		else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
		{
			if (!func_96("BJACK_P_HAND2", "BJACK_7CC"))
			{
				func_95("BJACK_P_HAND2", "BJACK_7CC");
			}
		}
		else if (func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
		{
			if (!func_96("BJACK_P_HAND2", "BJACK_BUSTED"))
			{
				func_95("BJACK_P_HAND2", "BJACK_BUSTED");
			}
		}
		else if (!func_328("BJACK_P_HAND1", func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/]))))
		{
			func_94("BJACK_P_HAND1", func_28(&(Local_116.f_899[PLAYER::PLAYER_ID() /*9*/])));
		}
	}
}

int func_202(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_203(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<3> Var0;
	
	Var0.f_0 = func_209(Param0.f_0, Param3.f_0, fParam6, iParam7);
	Var0.f_1 = func_209(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_209(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

Vector3 func_204(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<3> Var0;
	
	Var0.f_0 = func_205(Param0.f_0, Param3.f_0, fParam6, iParam7);
	Var0.f_1 = func_205(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_205(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

float func_205(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = MISC::ABSF((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_209(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_206(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_224(iParam0) };
	Var3 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_3676)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case -1:
					Var3 = { -33.84f, 0f, -51.84f };
					break;
				
				case -2:
					Var3 = { -22.68f, 0f, -58.68f };
					break;
				
				case -3:
					Var3 = { -18f, 0f, -72f };
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_3676)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var3 = { -33.48f, 0f, -123.48f };
					break;
				
				case -1:
					Var3 = { -36f, 0f, -45f };
					break;
				
				case -2:
					Var3 = { -22.68f, 0f, -51.48f };
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_3676)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var3 = { -33.84f, 0f, -130.32f };
					break;
				
				case 2:
					Var3 = { -22.32f, 0f, -124.92f };
					break;
				
				case -1:
					Var3 = { -35.64f, 0f, -50.4f };
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_3676)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var3 = { -34.56f, 0f, -126f };
					break;
				
				case 2:
					Var3 = { -22.32f, 0f, -119.52f };
					break;
				
				case 3:
					Var3 = { -18.36f, 0f, -104.4f };
					break;
			}
			break;
	}
	return Vector(Var0.f_2, 0f, 0f) + Var3;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 0;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 1;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 2;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return -3;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return -2;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return -1;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 0;
		
		default:
	}
	return 0;
}

float func_209(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(func_210((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_209(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_209(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_210(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_211(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = 50f;
	if (bParam1)
	{
		return 37.8425f;
	}
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_3676)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
				
				case -2:
					fVar0 = 26.8741f;
					break;
				
				case -3:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_3676)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
				
				case -2:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_3676)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case 2:
					fVar0 = 26.8741f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_3676)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case 2:
					fVar0 = 26.8741f;
					break;
				
				case 3:
					fVar0 = 26.8741f;
					break;
			}
			break;
	}
	return fVar0;
}

float func_212(bool bParam0)
{
	float fVar0;
	
	fVar0 = 35.3669f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	return fVar0;
}

Vector3 func_213(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		return Vector(func_70(iParam1), 0f, 0f) + Vector(0f, 0.061f, -59.1316f);
	}
	else
	{
		Var0 = { func_224(iParam0) };
		return Vector(Var0.f_2, 0f, 0f) + Vector(-87.48f, 0f, -60.84f);
	}
	return 0f, 0f, 0f;
}

Vector3 func_214(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iParam1), func_70(iParam1), -0.0094f, -0.0611f, 1.5098f);
	}
	else
	{
		Var0 = { func_224(iParam0) };
		return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_365(iParam0), Var0.f_2, 0.245f, 0f, 1.415f);
	}
	return 0f, 0f, 0f;
}

void func_215(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_216(int iParam0)
{
	if (Local_116.f_1515[iParam0] == 2)
	{
		if (!BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_5, 0))
		{
			Local_2033.f_2 = { Local_116.f_1[iParam0 /*211*/] };
			MISC::SET_BIT(&(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_5), false);
		}
	}
	else if (Local_116.f_1515[iParam0] > 2 && BitTest(Local_1776[PLAYER::PLAYER_ID() /*8*/].f_5, 0))
	{
		if (Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
		{
			if (Local_2033.f_213.f_8 != Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 || (Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 > 0 && Local_2033.f_222.f_8 != Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8))
			{
				Local_2033.f_213 = { Local_116.f_899[PLAYER::PLAYER_ID() /*9*/] };
			}
			else
			{
				if (Local_2033.f_213[iLocal_3679] != Local_116.f_899[PLAYER::PLAYER_ID() /*9*/][iLocal_3679])
				{
					iLocal_3678 = 0;
					iLocal_3679 = 0;
					iLocal_3680 = 0;
					if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
					{
						Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
					}
					Local_3620.f_18 = func_424();
					Local_3620.f_19 = func_199();
					Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
					Local_3620.f_7 = func_409();
					if (Global_262145.f_26383)
					{
						STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
					}
					func_383(1);
					HUD::CLEAR_HELP(true);
					return 1;
				}
				iLocal_3679++;
				if (iLocal_3679 >= Local_2033.f_213.f_8)
				{
					iLocal_3679 = 0;
				}
			}
		}
		if (Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
		{
			if (Local_2033.f_222.f_8 != Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 || (Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0 && Local_2033.f_213.f_8 != Local_116.f_899[PLAYER::PLAYER_ID() /*9*/].f_8))
			{
				Local_2033.f_222 = { Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/] };
			}
			else
			{
				if (Local_2033.f_222[iLocal_3680] != Local_116.f_1188[PLAYER::PLAYER_ID() /*9*/][iLocal_3680])
				{
					iLocal_3678 = 0;
					iLocal_3679 = 0;
					iLocal_3680 = 0;
					if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
					{
						Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
					}
					Local_3620.f_18 = func_424();
					Local_3620.f_19 = func_199();
					Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
					Local_3620.f_7 = func_409();
					if (Global_262145.f_26383)
					{
						STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
					}
					func_383(1);
					HUD::CLEAR_HELP(true);
					return 1;
				}
				iLocal_3680++;
				if (iLocal_3680 >= Local_2033.f_222.f_8)
				{
					iLocal_3680 = 0;
				}
			}
		}
		if (Local_116.f_1[iParam0 /*211*/][iLocal_3678] != Local_2033.f_2[iLocal_3678])
		{
			iLocal_3678 = 0;
			iLocal_3679 = 0;
			iLocal_3680 = 0;
			if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
			{
				Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
			}
			Local_3620.f_18 = func_424();
			Local_3620.f_19 = func_199();
			Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
			Local_3620.f_7 = func_409();
			if (Global_262145.f_26383)
			{
				STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
			}
			func_383(1);
			HUD::CLEAR_HELP(true);
			return 1;
		}
		iLocal_3678++;
		if (iLocal_3678 >= 208)
		{
			iLocal_3678 = 0;
		}
	}
	return 0;
}

void func_217()
{
	int iVar0;
	
	iVar0 = func_389(Local_2033.f_247);
	if (iVar0 < 32)
	{
		MISC::SET_BIT(&(Local_2033.f_254), iVar0);
	}
}

int func_218(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_429())
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	if (iVar0 != func_429())
	{
		return func_330(iVar0);
	}
	return 0;
}

int func_219(int iParam0)
{
	if (func_20(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_429();
}

void func_220(var uParam0, int iParam1)
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_6 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_339())
		{
			func_220(uParam0, 7);
			return;
		}
	}
	uParam0->f_6 = iParam1;
	func_64(&(Local_2033.f_1580));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_68(&(Local_2033.f_1580), 0, 0);
	}
}

int func_221()
{
	int iVar0;
	
	iVar0 = func_389(Local_2033.f_247);
	if (iVar0 < 32)
	{
		return BitTest(Local_2033.f_254, iVar0);
	}
	return 0;
}

char* func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_223()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_224(int iParam0)
{
	int iVar0;
	
	if (Local_2033.f_257 == 1)
	{
		if (func_430() != func_429())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_71(func_389(iParam0)), 1f, func_225(Global_2657971[func_430() /*465*/].f_457), false, false, false);
		}
	}
	else if (func_389(iParam0) == 0 || func_389(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_71(func_389(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_71(func_389(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("h4_prop_casino_blckjack_01a");
			break;
		
		case 2:
			return joaat("h4_prop_casino_blckjack_01b");
			break;
		
		case 3:
			return joaat("h4_prop_casino_blckjack_01c");
			break;
		
		case 4:
			return joaat("h4_prop_casino_blckjack_01d");
			break;
		
		case 5:
			return joaat("h4_prop_casino_blckjack_01e");
			break;
	}
	return joaat("vw_prop_casino_blckjack_01b");
}

var func_226(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_223(), func_222(iParam1), func_365(iParam0), func_224(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

float func_227(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

Vector3 func_228(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_223(), func_222(iParam1), func_365(iParam0), func_224(iParam0), 0.01f, 2) };
	return Var0;
}

int func_229()
{
	STREAMING::REQUEST_ANIM_DICT(func_59());
	STREAMING::REQUEST_ANIM_DICT(func_73());
	STREAMING::REQUEST_ANIM_DICT(func_89());
	STREAMING::REQUEST_ANIM_DICT(func_223());
	if (((STREAMING::HAS_ANIM_DICT_LOADED(func_59()) && STREAMING::HAS_ANIM_DICT_LOADED(func_73())) && STREAMING::HAS_ANIM_DICT_LOADED(func_89())) && STREAMING::HAS_ANIM_DICT_LOADED(func_223()))
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	if (func_66(&(Local_2033.f_1578), 3500, 0))
	{
		func_64(&(Local_2033.f_1578));
		return 1;
	}
	return 0;
}

bool func_231(int iParam0)
{
	if (Local_116.f_1600[iParam0] == func_429())
	{
		return 0;
	}
	return Local_116.f_1600[iParam0] != PLAYER::PLAYER_ID();
}

void func_232(int iParam0)
{
	Global_1964433 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1964451 = iParam0;
	if (!func_240())
	{
		func_237();
	}
	if (!func_236())
	{
		func_233();
	}
}

void func_233()
{
	func_113(joaat("mpply_cas_gmblng_l24_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_235();
	func_234();
	Global_1964447 = 1;
	Global_1964442 = 0;
}

void func_234()
{
	func_113(joaat("mpply_cas_24h_gmblng_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

void func_235()
{
	func_113(joaat("mpply_cas_gmblng_l24"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_1"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_2"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_3"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_4"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_5"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_6"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_7"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_8"), 0);
	func_113(joaat("mpply_cas_cur_gmblng_hr"), 0);
	func_113(joaat("mpply_cas_24h_gmblng_px"), 0);
}

bool func_236()
{
	return Global_1964447;
}

void func_237()
{
	func_113(joaat("mpply_casino_gmblng_gd"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_239();
	func_238((NETWORK::GET_CLOUD_TIME_AS_INT() + 86400));
	Global_1964446 = 1;
}

void func_238(int iParam0)
{
	Global_1964441 = iParam0;
}

void func_239()
{
	func_113(joaat("mpply_cas_cur_gmblng_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

bool func_240()
{
	return func_117(joaat("mpply_casino_gmblng_gd")) != 0;
}

bool func_241(int iParam0)
{
	return Local_116.f_1600[iParam0] == PLAYER::PLAYER_ID();
}

void func_242()
{
	func_367(2);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
	func_345();
	func_305(PLAYER::PLAYER_ID(), 1, 0, 0);
	func_250();
	MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4), 2);
	func_243();
}

void func_243()
{
	int iVar0;
	int iVar1;
	
	if (Global_1964451 != -1)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1964433);
		iVar1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1964434);
		if (Global_1964434 == -1)
		{
			func_244(iVar0);
		}
		else
		{
			func_244(iVar1);
		}
		func_239();
		func_234();
		Global_1964433 = -1;
		Global_1964434 = -1;
		Global_1964451 = -1;
	}
}

void func_244(int iParam0)
{
	int iVar0;
	
	iVar0 = func_249();
	Global_1964442 = (Global_1964442 + iParam0);
	func_245(iVar0, iParam0);
	func_234();
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_248((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_117(iVar14);
		iVar0++;
	}
	iVar15 = func_247(&uVar1, iParam0, 12);
	iVar15 = (iVar15 + iParam1);
	func_246(&uVar1, iParam0, 12, iVar15);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		uVar16 = func_248((iVar13 + iVar0));
		func_113(uVar16, uVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	bVar6 = false;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - bVar6))
		{
			iVar8 = (iParam2 - bVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (BitTest(iParam3, bVar6))
			{
				MISC::SET_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				MISC::CLEAR_BIT(uParam0[(iVar4 + iVar0)], bVar1);
			}
			bVar6++;
			bVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_247(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		bVar1 = iVar8;
		while (bVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (BitTest((*uParam0)[(iVar5 + iVar0)], bVar1))
			{
				MISC::SET_BIT(&uVar2, iVar7);
			}
			bVar7++;
			bVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_248(int iParam0)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_249()
{
	return func_117(joaat("mpply_cas_cur_gmblng_hr"));
}

void func_250()
{
	if (Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 0;
	}
}

void func_251(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_253(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23831.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23831.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_252(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_252(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_253(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23831.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23831.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23831.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_254(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	float fVar96;
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_253(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_290(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23831)
	{
		if (func_288(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23831 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23830;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_23829;
	}
	else
	{
		fVar59 = (((Global_23829 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_286(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23831.f_5821 <= 1)
		{
			func_282(Global_23831.f_5821 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23831.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23831.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_23829;
			}
			else
			{
				if (Global_23831)
				{
					StringCopy(&cVar63, func_281(29), 64);
					StringCopy(&cVar79, func_278(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
					{
						func_277(Global_23828, Global_23829, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23828 + (fParam5 * 0.5f)), (Global_23829 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23828 + (fParam5 * 0.5f)), (Global_23829 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23831.f_9086)
				{
					iVar1 = Global_23831.f_9082;
					iVar2 = Global_23831.f_9083;
					iVar3 = Global_23831.f_9084;
					iVar4 = Global_23831.f_9085;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_277(Global_23828, (Global_23829 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23829 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) != 0)
				{
					func_276();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23831.f_74)
					{
						if (Global_23831.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23831.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_14[iVar16], Global_23831.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23831.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23828 + 0.00390625f), ((Global_23829 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23831.f_6338)
				{
					func_276();
					func_274((((Global_23828 + fParam5) - 0.00390625f) - func_275("CM_ITEM_COUNT", Global_23831.f_6339, Global_23831.f_6340)), ((Global_23829 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23831.f_6339, Global_23831.f_6340);
				}
				else if (Global_23831.f_6334 > Global_23831.f_5828)
				{
					if (Global_23831.f_6337 != 0)
					{
						func_276();
						func_274((((Global_23828 + fParam5) - 0.00390625f) - func_275("CM_ITEM_COUNT", Global_23831.f_6337, Global_23831.f_6336)), ((Global_23829 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23831.f_6337, Global_23831.f_6336);
					}
				}
			}
			iVar6 = Global_23831.f_6341;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23831.f_9096)
			{
				iVar1 = Global_23831.f_9092;
				iVar2 = Global_23831.f_9093;
				iVar3 = Global_23831.f_9094;
				iVar4 = Global_23831.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23831.f_5828 && iVar6 <= Global_23831.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_23831.f_6088[iVar6])
					{
						if (Global_23831.f_5959[iVar6] && iVar6 != Global_23831.f_6341)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar56 = Global_23831.f_6348[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23831.f_6334 > Global_23831.f_5828)
			{
				if (Global_23831.f_9101)
				{
					iVar1 = Global_23831.f_9097;
					iVar2 = Global_23831.f_9098;
					iVar3 = Global_23831.f_9099;
					iVar4 = Global_23831.f_9100;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_277(Global_23828, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23831.f_9114)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23831.f_5241)) != 0 && Global_23831.f_5323 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				if (Global_23831.f_5325 != 0)
				{
					func_288(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23828 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_273(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_273(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23831.f_5325 != 0)
				{
					func_288(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_272(Global_23831.f_5325, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_281(Global_23831.f_5325), func_278(Global_23831.f_5325, 1), ((Global_23828 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_5247)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_273(fVar42);
					fVar96 = 0.35f;
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23831.f_5247))) > 600)
					{
						fVar96 = (0.35f * 0.625f);
					}
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5247));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_277(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23831.f_9106)
					{
						iVar1 = Global_23831.f_9102;
						iVar2 = Global_23831.f_9103;
						iVar3 = Global_23831.f_9104;
						iVar4 = Global_23831.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
					func_273(fVar42);
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5247));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23831.f_5323 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23831.f_5324) > Global_23831.f_5323)
					{
						StringCopy(&(Global_23831.f_5241), "", 24);
						Global_23831.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_5247)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				fVar97 = 0.35f;
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23831.f_5247))) > 600)
				{
					fVar97 = (0.35f * 0.625f);
				}
				func_273(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
				func_273(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5247));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_21)) != 0 && Global_4541740.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				if (Global_4541740.f_67 != 0)
				{
					func_288(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23828 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_273(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_273(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4541740.f_67 != 0)
				{
					func_288(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_272(Global_4541740.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_281(Global_4541740.f_67), func_278(Global_4541740.f_67, 1), ((Global_23828 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4541740.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4541740.f_66) > Global_4541740.f_65)
					{
						StringCopy(&(Global_4541740.f_21), "", 16);
						Global_4541740.f_65 = -1;
					}
				}
			}
			func_269(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23831.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_23831.f_5821;
			if (Global_23831.f_6332)
			{
				iVar98 = (Global_23831.f_6335 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_23831.f_6348[iVar6] != 0f)
				{
					fVar56 = Global_23831.f_6348[iVar6];
				}
				if (Global_23831.f_6332)
				{
					iVar6 = Global_23831.f_8737[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23831.f_6341 && iVar9 < Global_23831.f_5828)
				{
					bVar33 = true;
					if (Global_23831.f_6342 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_23831.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23831.f_6482[iVar6] = fVar35;
				fVar34 = (Global_23828 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23831.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_23831.f_9108)
					{
						HUD::GET_HUD_COLOUR(Global_23831.f_9107, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23828 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, false, 0);
					Global_23831.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23831.f_5829)
				{
					if (BitTest(Global_23831.f_5692[iVar6], iVar8) || Global_23831.f_5659[iVar8] == 5)
					{
						if (Global_23831.f_6332)
						{
							iVar19 = Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar20 = Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar21 = Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar22 = Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar23 = Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)];
						}
						else
						{
							Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar19;
							Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar20;
							Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar21;
							Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar22;
							Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_23831.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_23831.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_23831.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_23828 + 0.0046875f) + Global_23831.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_23831.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_23831.f_5665[iVar8 + 1])
						{
							fVar46 = (Global_23831.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23828 + Global_23830) - 0.0046875f) - fVar34);
						}
						if ((Global_23831.f_5678[iVar8] && Global_23831.f_6477) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23831.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23831.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23831.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696724[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696724[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696724[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696724[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_288(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23831.f_4984[(iVar22 + iVar14)] == 2 || Global_23831.f_4984[(iVar22 + iVar14)] == 54) || Global_23831.f_4984[(iVar22 + iVar14)] == 64)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
										Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar44;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_23831.f_5686[iVar101] == 2)
												{
													Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar101)] = (Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar101)] - Global_23831.f_5671[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar44 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_288(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_288(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_281(26), func_278(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_288(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_288(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_281(27), func_278(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23831.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_266(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696724[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696724[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696724[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696724[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar28)] == 2 || Global_23831.f_4984[(iVar22 + iVar28)] == 54) || Global_23831.f_4984[(iVar22 + iVar28)] == 64)
											{
												if (func_288(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_288(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_272(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23831.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_281(Global_23831.f_4984[(iVar22 + iVar28)]), func_278(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_281(Global_23831.f_4984[(iVar22 + iVar28)]), func_278(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23831.f_5686[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_265() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23831.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_267(0, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23831.f_6341 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar14)] != 2 && Global_23831.f_4984[(iVar22 + iVar14)] != 54) && Global_23831.f_4984[(iVar22 + iVar14)] != 64)
											{
												if (func_288(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_288(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_272(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23831.f_4984[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_281(Global_23831.f_4984[(iVar22 + iVar14)]), func_278(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (Global_23828 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23831.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_281(Global_23831.f_4984[(iVar22 + iVar14)]), func_278(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_281(Global_23831.f_4984[(iVar22 + iVar14)]), func_278(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_266(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[iVar20]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_288(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_288(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_281(26), func_278(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_288(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_288(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_281(27), func_278(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										func_264((fVar34 + fVar42), fVar35, "NUMBER", Global_23831.f_4469[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_266(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_288(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_288(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_281(26), func_278(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_288(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_288(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_281(27), func_278(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
									func_263((fVar34 + fVar42), fVar35, "NUMBER", Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_288(Global_23831.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23831.f_6332)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23831.f_5686[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
											Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
											fVar44 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
										}
										if (bVar54)
										{
											if (func_288(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23831.f_5686[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_288(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_272(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_281(26), func_278(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_288(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_288(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_272(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_281(27), func_278(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_288(Global_23831.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(Global_23831.f_4984[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_281(Global_23831.f_4984[iVar22]), func_278(Global_23831.f_4984[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_262(Global_23831.f_4984[iVar22])), (fVar37 * func_262(Global_23831.f_4984[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23831.f_5659[iVar8] == 5)
						{
							if (Global_23831.f_5671[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							if (Global_23831.f_5678[iVar8])
							{
								if (func_288(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23831.f_8737[iVar9] = iVar6;
						Global_23831.f_6343 = iVar6;
						iVar9++;
						if (Global_23831.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_23831.f_6348[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_23831.f_6331)
					{
						Global_23831.f_6088[iVar6] = 1;
						if (Global_23831.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_23831.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23831.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23831.f_6331)
			{
				Global_23831.f_6333 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_23831.f_6336 = iVar11;
				Global_23831.f_6334 = iVar10;
				Global_23831.f_6331 = 1;
			}
		}
		if (!Global_23831.f_6332)
		{
			Global_23831.f_6335 = iVar9;
			Global_23831.f_6332 = 1;
		}
		iVar5++;
	}
	Global_23831.f_6479 = fVar51;
	Global_23831.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23831.f_6479);
	if (!Global_23831.f_9081)
	{
		func_255(0);
	}
	Global_23831.f_9081 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_178(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_255(int iParam0)
{
	if (func_261())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_260(0))
		{
			func_256(iParam0);
		}
		MISC::SET_BIT(&Global_8801, 2);
	}
}

void func_256(int iParam0)
{
	if (func_261())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_259())
		{
			func_258(1, 1);
		}
		else
		{
			func_258(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_257())
	{
		Global_20930.f_1 = 3;
	}
}

int func_257()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_258(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_260(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

bool func_259()
{
	return BitTest(Global_1956920, 5);
}

int func_260(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_261()
{
	return BitTest(Global_1956920, 19);
}

float func_262(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_263(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_264(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_265()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_266(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23831.f_9109[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23831.f_9109[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_267(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_268(Global_23831.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_268(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_269(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_253(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_290(bParam4, bParam8))
	{
		return;
	}
	if (func_270())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_17(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_23831.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (Global_23831.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23831.f_5625[iVar1], true), 64);
				}
				else if (Global_23831.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23831.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23831.f_5327 = 0;
		}
		if (!Global_23831.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23831.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23831.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_183(&(Global_23831.f_5328[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23831.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_183(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[bVar1] == -1)
					{
						func_182(&(Global_23831.f_5553[bVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23831.f_5610[bVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23831.f_5553[bVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23831.f_5625[bVar1] != 365 && BitTest(Global_23831.f_5655, bVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5625[bVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5326);
				func_183(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_182(&(Global_4541740.f_16));
				}
				else
				{
					iVar4 = Global_23831.f_5610[bVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23831.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23831.f_5327 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_23831.f_5326)
		{
			if (Global_23831.f_5610[bVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23831.f_5553[bVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			bVar1++;
		}
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23831.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23831.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23831.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23831.f_6263[iVar0 /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23831.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

int func_270()
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_271())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20875 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_271()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_272(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 57:
			*iParam5 = 100;
			break;
		
		case 65:
			*iParam5 = 100;
			break;
		
		case 58:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_273(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23828 + Global_23830) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_274(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_275(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_276();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_276()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23831.f_9091)
	{
		iVar0 = Global_23831.f_9087;
		iVar1 = Global_23831.f_9088;
		iVar2 = Global_23831.f_9089;
		iVar3 = Global_23831.f_9090;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23828 + 0.0046875f), ((Global_23828 + Global_23830) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_277(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_278(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_7680[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23831.f_7680[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_280(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_279(&uVar3);
			}
		}
		else
		{
			return func_279(&(Global_23831.f_7680[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_279(var uParam0)
{
	return uParam0;
}

struct<13> func_280(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_281(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_6623[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23831.f_6623[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_280(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_279(&uVar0);
		}
		else
		{
			return func_279(&(Global_23831.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_282(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23831.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23831.f_5821 >= 128)
	{
		return;
	}
	if (Global_23831.f_5823 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 < Global_23831.f_6344)
	{
		return;
	}
	if (Global_23831.f_5821 != iParam0)
	{
		Global_23831.f_5821 = iParam0;
		Global_23831.f_5822 = 0;
	}
	iVar0 = Global_23831.f_5659[Global_23831.f_5822];
	if (iVar0 != 1)
	{
		while (Global_23831.f_5822 < 4 && iVar0 != 1)
		{
			Global_23831.f_5822++;
			iVar0 = Global_23831.f_5659[Global_23831.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23831.f_1616[Global_23831.f_5823] = bParam3;
	Global_23831.f_1873[Global_23831.f_5823] = iParam4;
	Global_23831.f_2130[Global_23831.f_5823] = iParam6;
	Global_23831.f_5823++;
	if (!bParam3)
	{
		func_285(Global_23831.f_5821, 1);
	}
	else
	{
		func_285(Global_23831.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_284(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
		if (Global_23831.f_5678[Global_23831.f_5822])
		{
			func_288(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23831.f_5671[Global_23831.f_5822])
		{
			Global_23831.f_5671[Global_23831.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_283(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
			if (fVar4 > Global_23831.f_6348[iParam0])
			{
				Global_23831.f_6348[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23831.f_5692[iParam0]), Global_23831.f_5822);
	Global_23831.f_5822++;
	Global_23831.f_6347 = 1;
	Global_23831.f_6345 = (Global_23831.f_5823 - 1);
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = iParam2;
}

float func_283(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_284(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_267(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_285(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_286(bool bParam0, int* iParam1, int* iParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_287(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_287(int iParam0, int iParam1)
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_288(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_281(iParam0), 64);
	StringCopy(&cVar16, func_278(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_286(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_289(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23830)
			{
				*fParam4 = (*fParam4 * (Global_23830 / *fParam3));
				*fParam3 = Global_23830;
			}
		}
		return 1;
	}
	return 0;
}

float func_289(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0.5f;
			break;
		
		case 64:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_290(bool bParam0, bool bParam1)
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_292(8, -1) && func_291() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79650) || Global_23831.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_291()
{
	return Global_1575011;
}

var func_292(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_293(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, true);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23831.f_5655), Global_23831.f_5326);
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

void func_294(char* sParam0)
{
	if (Global_23831.f_5322 >= 3 || Global_23831.f_5319 >= 4)
	{
		return;
	}
	Global_23831.f_5253[Global_23831.f_5319] = 1;
	Global_23831.f_5319++;
	StringCopy(&(Global_23831.f_5270[Global_23831.f_5322 /*16*/]), sParam0, 64);
	Global_23831.f_5322++;
}

void func_295(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_5241), sParam0, 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = iParam1;
	Global_23831.f_5324 = MISC::GET_GAME_TIMER();
	Global_23831.f_5325 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
}

void func_296(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_6342 = iParam0;
	Global_23831.f_6477 = iParam2;
	if (Global_23831.f_6342 < Global_23831.f_6341)
	{
		Global_23831.f_6341 = Global_23831.f_6342;
	}
	else if ((Global_23831.f_6332 && Global_23831.f_6342 > Global_23831.f_6343) || (!Global_23831.f_6332 && Global_23831.f_6342 >= (Global_23831.f_6341 + Global_23831.f_5828)))
	{
		iVar0 = Global_23831.f_6341;
		while (iVar0 <= Global_23831.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23831.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23831.f_5828 && Global_23831.f_6341 < 128)
		{
			Global_23831.f_6341++;
			iVar1 = 0;
			iVar0 = Global_23831.f_6341;
			while (iVar0 <= Global_23831.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23831.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23831.f_5241), "", 24);
		StringCopy(&(Global_4541740.f_21), "", 16);
	}
}

void func_297(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_1), sParam0, 16);
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_298(int iParam0, char* sParam1, char* sParam2)
{
	Global_23831 = iParam0;
	func_299(29, sParam1, sParam2);
}

void func_299(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23831.f_6623[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23831.f_7680[iParam0 /*16*/]), sParam2, 64);
}

void func_300(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23831.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23831.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696724[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_5692[iVar0] = 0;
		Global_23831.f_5830[iVar0] = 0;
		Global_23831.f_5959[iVar0] = 0;
		Global_23831.f_6482[iVar0] = 0f;
		Global_23831.f_6088[iVar0] = 0;
		Global_23831.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23831.f_5659[iVar0] = 0;
		Global_23831.f_5671[iVar0] = 0f;
		Global_23831.f_5665[iVar0] = -1f;
		Global_23831.f_5678[iVar0] = 0;
		Global_23831.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23831.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23831.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23831.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	Global_23831 = 0;
	Global_23831.f_5821 = 0;
	Global_23831.f_5822 = 0;
	Global_23831.f_5823 = 0;
	Global_23831.f_5825 = 0;
	Global_23831.f_5826 = 0;
	Global_23831.f_5827 = 0;
	Global_23831.f_5824 = 0;
	Global_23831.f_6477 = 0;
	Global_23831.f_6617 = 0;
	Global_23831.f_6342 = 0;
	Global_23831.f_6341 = 0;
	Global_23831.f_6343 = 0;
	StringCopy(&(Global_23831.f_5241), "", 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = 0;
	Global_23831.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_5325 = 0;
	StringCopy(&(Global_4541740.f_21), "", 16);
	Global_4541740.f_61 = 0;
	Global_4541740.f_62 = 0;
	Global_4541740.f_63 = 0;
	Global_4541740.f_64 = 0;
	Global_4541740.f_65 = 0;
	Global_4541740.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4541740.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4541740.f_67 = 0;
	StringCopy(&(Global_23831.f_1), "", 16);
	Global_23831.f_5677 = 0f;
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_6347 = 0;
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = 0;
	Global_23831.f_6345 = 0;
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	Global_23831.f_5828 = 10;
	Global_23831.f_5829 = 0;
	Global_23831.f_6479 = 0f;
	Global_23831.f_6480 = 0f;
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	Global_23831.f_6333 = 0f;
	Global_23831.f_6334 = 0;
	Global_23831.f_6336 = 0;
	Global_23831.f_6335 = 0;
	Global_23831.f_6337 = 0;
	Global_23831.f_6338 = 0;
	Global_23831.f_6339 = 0;
	Global_23831.f_6340 = 0;
	Global_23831.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23831.f_6611[iVar0] = -1;
		Global_23831.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23831.f_5684 = 0f;
	Global_23831.f_5655 = 0;
	Global_23831.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23831.f_6618)
	{
		Global_23831.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_9091 = 0;
	Global_23831.f_9086 = 0;
	Global_23831.f_9096 = 0;
	Global_23831.f_9101 = 0;
	Global_23831.f_9106 = 0;
	Global_23831.f_9108 = 0;
	Global_23831.f_9114 = 0;
	Global_23828 = 0.05f;
	Global_23829 = 0.05f;
	Global_23830 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23830 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23830 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23830 = 0.225f;
	}
}

bool func_301(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_253(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23831.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23831.f_6238[iVar0 /*4*/]), 9);
		Global_23831.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23831.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_23831.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23831.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23831.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_302(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_302(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_303(int iParam0)
{
	Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 = iParam0;
	Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 = func_389(iParam0);
}

bool func_304()
{
	return Global_4537448 == 1;
}

void func_305(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_315())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_194())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || ((!func_17(PLAYER::PLAYER_ID(), 0) && !func_314()) && !func_313(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657971[iParam0 /*465*/].f_255 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_310(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_309(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_308();
					func_307();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2657971[iParam0 /*465*/].f_256 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697541)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697541 = 0;
				}
				if (Global_2635563.f_2981)
				{
					Global_2635563.f_2981 = 0;
				}
			}
			else
			{
				if (!func_309(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (func_306(Global_4718592.f_185586))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575055)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_306(int iParam0)
{
	return iParam0 == 17;
}

void func_307()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_308()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_310(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_312();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), true);
			}
		}
		if (func_17(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_311(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_311(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_312()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), false);
		}
	}
}

int func_313(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_314())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_314()
{
	return BitTest(Global_2621446, 3);
}

int func_315()
{
	if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_316()
{
	if (!Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 1;
	}
}

void func_317(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_318(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_318(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_319(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_318(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_260(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/] == 1 && Global_44799[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44799[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44799[iVar0 /*32*/].f_5 = 1;
			Global_44799[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44799[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44799[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_320(int iParam0)
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 26);
}

void func_321(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_317(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/] = 1;
			Global_44799[iVar0 /*32*/].f_1 = Global_45000;
			Global_45000++;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_29 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44799[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44799[iVar0 /*32*/].f_6 = iParam3;
			Global_44799[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44799[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44799[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44799[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[iVar0 /*32*/].f_12 = 0;
				Global_44799[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_322(int iParam0)
{
	if (func_323(iParam0, 1))
	{
		return Global_1887305[func_219(iParam0) /*610*/].f_10.f_430;
	}
	return -1;
}

int func_323(int iParam0, bool bParam1)
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_324(iParam0))
		{
			return 0;
		}
	}
	return func_20(Global_1887305[iParam0 /*610*/].f_10);
}

int func_324(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_20(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_325()
{
	if (((((((((func_341("BJACK_USED") || func_341("CAS_MG_CBAN")) || func_341("CAS_MG_CTIME")) || func_328("CAS_MG_MEMB2", func_329(1))) || func_341("CAS_MG_SUITE2")) || func_341("CAS_MG_NOCHIPS2")) || func_341("CAS_MG_LOWCHIPS2")) || func_341("CAS_MG_NOCHIPS6")) || func_341("CAS_MG_LOWCHIPS6")) || func_341("BJACK_NA"))
	{
		return 1;
	}
	return 0;
}

void func_326()
{
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_329(0), false, true, false, -1, 0))
	{
		func_215("MAITRD_M_D0E", -1);
	}
	else if (func_330(PLAYER::PLAYER_ID()))
	{
	}
	else if (BitTest(Global_1943520.f_5, 31))
	{
	}
	else if (Global_4537448 != 0)
	{
	}
	else
	{
		MISC::SET_BIT(&(Global_1943520.f_5), 30);
	}
}

void func_327(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_328(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_329(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_330(int iParam0)
{
	if (iParam0 == func_429())
	{
		return 0;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 18);
}

bool func_331()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_409.f_1, 18);
}

int func_332()
{
	return Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10;
}

int func_333(bool bParam0)
{
	return func_323(PLAYER::PLAYER_ID(), bParam0);
}

int func_334(int iParam0)
{
	if (iParam0 != func_429())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_409 != 0;
	}
	return 0;
}

int func_335()
{
	if (func_338() <= 0)
	{
		return 0;
	}
	if (func_337() <= 0)
	{
		return 1;
	}
	if (func_336())
	{
		return 2;
	}
	return 3;
}

bool func_336()
{
	return Global_1964440 != 0;
}

int func_337()
{
	return (Global_262145.f_26739 + func_116());
}

int func_338()
{
	return (Global_262145.f_26740 - func_116());
}

bool func_339()
{
	return func_335() != 3;
}

void func_340(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_341(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_342(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!MONEY::NETWORK_CASINO_CAN_BET(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_343()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_344()
{
	if (Global_4521801.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_345()
{
	if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 != -1)
	{
		Local_2033.f_232 = 0;
		Local_2033.f_233 = 0;
		Local_2033.f_235 = 0;
		Local_2033.f_252 = 0;
		Local_1776[PLAYER::PLAYER_ID() /*8*/] = 0;
		Local_1776[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
		Local_1776[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
		Local_1776[PLAYER::PLAYER_ID() /*8*/].f_3 = -1;
		Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 = -1;
		Local_1776[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
	}
}

bool func_346()
{
	return Global_2738935.f_6962;
}

int func_347()
{
	if (((func_348() != -1 && func_348() != 28) && func_348() != 17) && func_348() != 12)
	{
		return 1;
	}
	return 0;
}

int func_348()
{
	return Global_1057440;
}

bool func_349()
{
	return BitTest(Global_2684504.f_2, 11);
}

bool func_350()
{
	return Global_2684504.f_693;
}

int func_351(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_353(iParam0);
	iVar1 = func_352(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_45036[iVar1 /*5*/].f_3;
}

int func_352(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45036[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_353(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
		{
			return Global_45036[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_354()
{
	int iVar0;
	
	if (func_323(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_332();
		if (func_21(iVar0, 1, 1) && BitTest(Global_1845281[iVar0 /*883*/].f_268.f_409.f_3, 6))
		{
			return 1;
		}
		if ((func_357(PLAYER::PLAYER_ID(), 0) && func_355(PLAYER::PLAYER_ID())) || func_425(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_356(iParam0, 9);
	}
	return 0;
}

var func_356(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_357(int iParam0, int iParam1)
{
	if (func_20(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_358()
{
	if (func_435(PLAYER::PLAYER_ID()) && func_430() != func_429())
	{
		if ((BitTest(Global_2657971[func_430() /*465*/].f_322.f_4, 1) || BitTest(Global_1943520.f_6, 10)) || Global_2657971[func_430() /*465*/].f_457 != Global_1964424)
		{
			return 0;
		}
	}
	return 1;
}

bool func_359(int iParam0, struct<3> Param1, float fParam4)
{
	return func_360(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam4);
}

bool func_360(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(0f, 0f, 0f, fParam3, 0f, 1f, 0f) };
	fVar3 = func_361(func_362(Var0), func_362(Param4 - Param0));
	return MISC::ACOS(fVar3) <= fParam7;
}

float func_361(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_362(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_363(int iParam0)
{
	if (Local_2033.f_257 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.367f, 269.0835f, -51.7879f;
			
			case 1:
				return 1148.345f, 269.7643f, -51.7876f;
			
			case 2:
				return 1148.821f, 270.2321f, -51.7708f;
			
			case 3:
				return 1149.495f, 270.2401f, -51.7632f;
			
			case 4:
				return 1152.317f, 267.4195f, -51.8003f;
			
			case 5:
				return 1152.337f, 266.7202f, -51.7913f;
			
			case 6:
				return 1151.849f, 266.2183f, -51.7916f;
			
			case 7:
				return 1151.182f, 266.2501f, -51.7864f;
			
			case 8:
				return 1128.713f, 262.8658f, -51.0035f;
			
			case 9:
				return 1129.446f, 262.8649f, -51.0121f;
			
			case 10:
				return 1129.932f, 262.3822f, -51.0027f;
			
			case 11:
				return 1129.899f, 261.6921f, -51.0422f;
			
			case 12:
				return 1143.738f, 247.8562f, -51.034f;
			
			case 13:
				return 1144.459f, 247.8673f, -51.0229f;
			
			case 14:
				return 1144.951f, 247.3612f, -51.015f;
			
			case 15:
				return 1144.913f, 246.663f, -51.0236f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_364(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

Vector3 func_365(int iParam0)
{
	int iVar0;
	
	if (Local_2033.f_257 == 1)
	{
		if (func_430() != func_429())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_71(func_389(iParam0)), 1f, func_225(Global_2657971[func_430() /*465*/].f_457), false, false, false);
		}
	}
	else if (func_389(iParam0) == 0 || func_389(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_71(func_389(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_71(func_389(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_366(int iParam0)
{
	return Global_101585.f_392 == iParam0;
}

void func_367(int iParam0)
{
	Local_2033.f_1 = iParam0;
}

void func_368(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_220(&(Local_1776[iParam0 /*8*/]), 0);
	Local_1776[iParam0 /*8*/].f_6.f_1 = -1;
}

int func_369()
{
	int iVar0;
	
	if (Local_2033.f_257 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_537))
		{
			if (func_430() != func_429())
			{
				iVar0 = func_225(Global_2657971[func_430() /*465*/].f_457);
				STREAMING::REQUEST_MODEL(iVar0);
				if (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					return 0;
				}
				Local_2033.f_537 = OBJECT::CREATE_OBJECT(iVar0, func_71(0), false, false, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_537, func_71(0), false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_2033.f_537, func_70(0));
				OBJECT::SET_OBJECT_TINT_INDEX(Local_2033.f_537, func_370(func_430()));
				ENTITY::FREEZE_ENTITY_POSITION(Local_2033.f_537, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
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
	return 0;
}

int func_370(int iParam0)
{
	if (func_373(iParam0))
	{
		return 1;
	}
	else if (func_372(iParam0))
	{
		return 2;
	}
	else if (func_371(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_371(int iParam0)
{
	if (iParam0 != func_429())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 21);
	}
	return 0;
}

int func_372(int iParam0)
{
	if (iParam0 != func_429())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 20);
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 != func_429())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 19);
	}
	return 0;
}

void func_374(var uParam0, bool bParam1, bool bParam2)
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

int func_375()
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_376(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0:
			break;
		
		case 1:
			if ((func_379(PLAYER::PLAYER_ID(), 1) || func_379(PLAYER::PLAYER_ID(), 2)) || func_378())
			{
				func_220(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_379(PLAYER::PLAYER_ID(), 1) || func_379(PLAYER::PLAYER_ID(), 2)) || func_378())
			{
				func_220(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_377())
			{
				func_220(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_377()
{
	if ((((func_379(PLAYER::PLAYER_ID(), 4) || func_379(PLAYER::PLAYER_ID(), 5)) || func_379(PLAYER::PLAYER_ID(), 6)) || func_379(PLAYER::PLAYER_ID(), 7)) || func_378())
	{
		return 1;
	}
	return 0;
}

int func_378()
{
	if (func_66(&(Local_2033.f_1580), 3500, 0))
	{
		func_64(&(Local_2033.f_1580));
		return 1;
	}
	return 0;
}

int func_379(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return BitTest(Local_116.f_1477[iParam0], iVar0);
}

void func_380(int iParam0, int iParam1)
{
	Global_23692.f_9 = iParam0;
	Global_23692.f_10 = iParam1;
}

void func_381(bool bParam0)
{
	if (bParam0)
	{
		func_382(1);
		func_256(1);
	}
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::ENABLE_ALL_CONTROL_ACTIONS(1);
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
		PAD::DISABLE_CONTROL_ACTION(2, 199, true);
		PAD::SET_INPUT_EXCLUSIVE(0, 200);
		PAD::SET_INPUT_EXCLUSIVE(2, 200);
		PAD::SET_INPUT_EXCLUSIVE(0, 199);
		PAD::SET_INPUT_EXCLUSIVE(2, 199);
		PAD::SET_INPUT_EXCLUSIVE(0, 201);
		PAD::SET_INPUT_EXCLUSIVE(0, 202);
		PAD::SET_INPUT_EXCLUSIVE(0, 187);
	}
}

void func_382(bool bParam0)
{
	if (bParam0)
	{
		if (func_349())
		{
			Global_2684504.f_41 = 1;
		}
	}
	else
	{
		Global_2684504.f_41 = 0;
	}
}

void func_383(bool bParam0)
{
	char* sVar0;
	
	if (Local_2033.f_1 > 2 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
	{
		if (((((!func_388() && !func_387()) && !func_386()) && !func_385()) && !func_82(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_305(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_250();
	}
	if (Local_2033.f_1 > 2)
	{
		func_250();
	}
	if (BitTest(Local_2033.f_250, 0))
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_389(Local_2033.f_247) == 2 || func_389(Local_2033.f_247) == 3) || func_435(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		func_251(1, -1);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
		iLocal_3674 = 1;
		Local_2033.f_250 = 0;
	}
	if (CAM::DOES_CAM_EXIST(Local_2033.f_242))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(Local_2033.f_242, false);
		bLocal_3675 = false;
		iLocal_3676 = 0;
	}
	if (Local_2033.f_259 != -1)
	{
		func_317(&(Local_2033.f_259));
		Local_2033.f_259 = -1;
	}
	Local_2033.f_244 = 0;
	Local_2033.f_253 = 0;
	Local_2033.f_252 = 0;
	Local_2033.f_232 = 0;
	Local_2033.f_233 = 0;
	Local_2033.f_234 = 0;
	Local_2033.f_235 = 0;
	Local_2033.f_243 = 0;
	Local_1776[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
	if (!bParam0)
	{
		func_345();
	}
	Local_3646.f_4 = func_409();
	Local_3646.f_5 = func_197(&uLocal_3618, 0, 0);
	if (Local_2033.f_1 > 2)
	{
		if (Global_262145.f_26389)
		{
			STATS::PLAYSTATS_CASINO_BLACKJACK_LIGHT(&Local_3646);
		}
	}
	if (bParam0)
	{
		Local_2033.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_365(Local_2033.f_247), func_224(Local_2033.f_247), 2, false, false, 1f, 0f, 1f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2033.f_255, func_223(), func_384(Local_2033.f_247), 2f, -2f, 13, 16, 1000f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2033.f_255);
	}
	if (!bParam0)
	{
		MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4), 2);
	}
	if (bParam0 || Local_2033.f_1 > 2)
	{
		func_243();
	}
	func_367(10);
	func_172(0);
}

char* func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_385()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_386()
{
	return Global_1575083;
}

int func_387()
{
	if (func_195() == 3 || func_195() == 2)
	{
		return 1;
	}
	return 0;
}

int func_388()
{
	if (func_195() == 1 || func_195() == 4)
	{
		return 1;
	}
	return 0;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_390()
{
	struct<7> Var0;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	bool bVar12;
	int iVar13;
	int iVar14;
	char* sVar15;
	struct<3> Var16;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	if (((func_366(joaat("rm_GamingFloor_02")) || func_366(joaat("rm_GamingFloor_03"))) || func_435(PLAYER::PLAYER_ID())) && !func_408())
	{
		iLocal_3668 = 1;
		if (!bLocal_3667)
		{
			bLocal_3667 = (func_418() && func_407());
		}
	}
	else
	{
		if (iLocal_3668)
		{
			func_420();
			func_405();
			iLocal_3668 = 0;
		}
		return;
	}
	if (!Global_1683951.f_824)
	{
		iVar7 = 0;
		while (iVar7 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar7) == 174)
			{
				if (SCRIPT::GET_EVENT_DATA(1, iVar7, &Var0, 7))
				{
					if (Var0.f_0 == -725328141)
					{
						if (((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var0.f_1) && Var0.f_3 >= 0) && Var0.f_3 < 224) && func_404(Var0.f_4, Local_2033.f_236) != 0)
						{
							if (Var0.f_5)
							{
								if (Var0.f_3 >= 0 && Var0.f_3 < 44)
								{
									Local_2033.f_260[Var0.f_3] = Var0.f_4;
								}
							}
							else
							{
								Local_2033.f_305[Var0.f_3] = Var0.f_4;
								if (Var0.f_6)
								{
									func_403(Var0.f_3);
								}
								else
								{
									func_402(Var0.f_3);
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
	iVar8 = 0;
	while (iVar8 < Local_2033.f_257)
	{
		if (iVar8 != iLocal_3677 && iVar8 != Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4)
		{
		}
		else
		{
			Var9 = { func_71(iVar8) };
			Var9.f_2 = (Var9.f_2 + 0.914f);
			bVar12 = false;
			if (func_54(iVar8, Local_2033.f_257))
			{
				bVar12 = true;
			}
			Var16 = { 0f, 0f, func_70(iVar8) };
			iVar19 = 0;
			while (iVar19 < 4)
			{
				iVar20 = Local_116.f_1600[(iVar8 * 4 + iVar19)];
				if (iVar20 < 0 || ((!func_366(joaat("rm_GamingFloor_02")) && !func_366(joaat("rm_GamingFloor_03"))) && !func_435(PLAYER::PLAYER_ID())))
				{
					iVar13 = 0;
					while (iVar13 < 7)
					{
						iVar14 = func_22(iVar8, iVar13, iVar19, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
						{
							if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_648[iVar14]) > 0)
							{
								ENTITY::SET_ENTITY_ALPHA(Local_2033.f_648[iVar14], SYSTEM::FLOOR(func_209(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2033.f_648[iVar14])), 0f, 0.1f, 0)), true);
							}
							else
							{
								OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
							}
						}
						if (Local_2033.f_305[iVar14] != -1)
						{
							Local_2033.f_305[iVar14] = -1;
						}
						if (func_401(iVar14))
						{
							func_402(iVar14);
						}
						iVar14 = func_22(iVar8, iVar13, iVar19, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
						{
							if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_648[iVar14]) > 0)
							{
								ENTITY::SET_ENTITY_ALPHA(Local_2033.f_648[iVar14], SYSTEM::FLOOR(func_209(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2033.f_648[iVar14])), 0f, 0.1f, 0)), true);
							}
							else
							{
								OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
							}
						}
						if (Local_2033.f_305[iVar14] != -1)
						{
							Local_2033.f_305[iVar14] = -1;
						}
						if (func_401(iVar14))
						{
							func_402(iVar14);
						}
						iVar13++;
					}
					iVar13 = 0;
					while (iVar13 < 4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_538[func_400(iVar8, iVar19, iVar13)]))
						{
							if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, iVar13)]) > 0)
							{
								ENTITY::SET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, iVar13)], SYSTEM::FLOOR(func_209(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, iVar13)])), 0f, 0.1f, 0)), true);
							}
							else
							{
								OBJECT::DELETE_OBJECT(&(Local_2033.f_538[func_400(iVar8, iVar19, iVar13)]));
							}
						}
						iVar13++;
					}
				}
				else
				{
					iVar13 = 0;
					iVar13 = 0;
					while (iVar13 < 7)
					{
						iVar14 = func_22(iVar8, iVar13, iVar19, 0);
						sVar15 = func_399(Local_116.f_899[iVar20 /*9*/][iVar13], 1);
						if (iVar14 >= 0 && iVar14 < (56 * Local_2033.f_257))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8])))
							{
								if ((((iVar19 == 0 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_7(iVar8), 3)) || (iVar19 == 1 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_6(iVar8), 3))) || (iVar19 == 2 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_5(iVar8), 3))) || (iVar19 == 3 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_4(iVar8), 3)))
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
									{
										iVar22 = 0;
										while (iVar22 < 7)
										{
											iVar23 = func_22(iVar8, iVar22, iVar19, 0);
											if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar23]))
											{
												iVar21 = iVar22;
											}
											iVar22++;
										}
										if (iVar13 == iVar21)
										{
											if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]) && !ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_648[iVar14]))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_648[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
										{
											OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
											Local_2033.f_305[iVar14] = -1;
										}
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 585557868))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
										{
											OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
											Local_2033.f_305[iVar14] = -1;
										}
									}
								}
								else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar15))
								{
									Local_2033.f_305[iVar14] = -1;
									if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
									{
										if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_23(iVar8, iVar19), 3)) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206)) && iVar13 == 1)
										{
										}
										else
										{
											if (func_404(Local_116.f_899[iVar20 /*9*/][iVar13], Local_2033.f_236) != 0)
											{
												Local_2033.f_648[iVar14] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(Local_116.f_899[iVar20 /*9*/][iVar13], Local_2033.f_236), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_398(iVar13, iVar19, 0)), false, false, true, 0);
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_648[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_398(iVar13, iVar19, 0)), false, false, true);
												ENTITY::SET_ENTITY_ROTATION(Local_2033.f_648[iVar14], Var16 + func_397(iVar13, iVar19, 0, func_401(iVar14)), 2, true);
											}
											Jump @2170; //curOff = 1875
											if (ENTITY::GET_ENTITY_MODEL(Local_2033.f_648[iVar14]) != func_404(Local_116.f_899[iVar20 /*9*/][iVar13], Local_2033.f_236))
											{
												OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
											}
											else if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_23(iVar8, iVar19), 3)) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206)) && iVar13 == 1)
											{
												OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
											}
											else if (ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_648[iVar14]))
											{
												ENTITY::DETACH_ENTITY(Local_2033.f_648[iVar14], false, true);
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_648[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_398(iVar13, iVar19, 0)), false, false, true);
												ENTITY::SET_ENTITY_ROTATION(Local_2033.f_648[iVar14], Var16 + func_397(iVar13, iVar19, 0, func_401(iVar14)), 2, true);
											}
											Jump @2915; //curOff = 2170
											if (Local_2033.f_305[iVar14] != -1)
											{
												if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
												{
													Local_2033.f_648[iVar14] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(Local_2033.f_305[iVar14], Local_2033.f_236), Var9, false, false, true, 0);
													if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2033.f_648[iVar14])) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
													{
														if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_23(iVar8, iVar19), 3))
														{
															ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_648[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
														}
														else
														{
															ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_648[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
														}
													}
												}
												else if (ENTITY::GET_ENTITY_MODEL(Local_2033.f_648[iVar14]) != func_404(Local_2033.f_305[iVar14], Local_2033.f_236))
												{
													OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
													Local_2033.f_305[iVar14] = -1;
													func_402(iVar14);
												}
												else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8])))
												{
													if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2033.f_648[iVar14]) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
													{
														ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_648[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
													}
													if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 585557868))
													{
														if (ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_648[iVar14]))
														{
															ENTITY::DETACH_ENTITY(Local_2033.f_648[iVar14], false, true);
															ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_648[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_398(iVar13, iVar19, 0)), false, false, true);
															ENTITY::SET_ENTITY_ROTATION(Local_2033.f_648[iVar14], Var16 + func_397(iVar13, iVar19, 0, func_401(iVar14)), 2, true);
														}
													}
												}
											}
											else if (iVar14 >= 0 && iVar14 < (56 * Local_2033.f_257))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
												{
													OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
													Local_2033.f_305[iVar14] = -1;
													func_402(iVar14);
												}
											}
										}
										iVar13++;
										if (Local_1776[iVar20 /*8*/].f_1 > 0)
										{
											iVar24 = Local_1776[iVar20 /*8*/].f_1;
											if (BitTest(Local_1776[iVar20 /*8*/], 10))
											{
												iVar24 = (Local_1776[iVar20 /*8*/].f_1 / 2);
											}
											if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_538[func_400(iVar8, iVar19, 0)]))
											{
												if (func_396(iVar24, bVar12) != 0)
												{
													Local_2033.f_538[func_400(iVar8, iVar19, 0)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(iVar24, bVar12), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_395(iVar24, 0, iVar19, bVar12)), false, false, true, 0);
													ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_538[func_400(iVar8, iVar19, 0)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_395(iVar24, 0, iVar19, bVar12)), false, false, true);
													ENTITY::SET_ENTITY_ROTATION(Local_2033.f_538[func_400(iVar8, iVar19, 0)], Var16 + func_394(iVar24, 0, iVar19, bVar12), 2, true);
													if (!MISC::IS_STRING_NULL_OR_EMPTY(func_393(iVar24)))
													{
														AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_393(iVar24), Local_2033.f_538[func_400(iVar8, iVar19, 0)], "dlc_vw_table_games_sounds", false, 0);
													}
												}
											}
											else if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 0)]) != 255)
											{
												OBJECT::DELETE_OBJECT(&(Local_2033.f_538[func_400(iVar8, iVar19, 0)]));
											}
											if (BitTest(Local_1776[iVar20 /*8*/], 10))
											{
												if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_538[func_400(iVar8, iVar19, 1)]))
												{
													if (func_396(iVar24, bVar12) != 0)
													{
														Local_2033.f_538[func_400(iVar8, iVar19, 1)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(iVar24, bVar12), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_395(iVar24, 1, iVar19, bVar12)), false, false, true, 0);
														ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_538[func_400(iVar8, iVar19, 1)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_395(iVar24, 1, iVar19, bVar12)), false, false, true);
														ENTITY::SET_ENTITY_ROTATION(Local_2033.f_538[func_400(iVar8, iVar19, 1)], Var16 + func_394(iVar24, 1, iVar19, bVar12), 2, true);
														if (!MISC::IS_STRING_NULL_OR_EMPTY(func_393(iVar24)))
														{
															AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_393(iVar24), Local_2033.f_538[func_400(iVar8, iVar19, 1)], "dlc_vw_table_games_sounds", false, 0);
														}
													}
												}
												else if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 1)]) != 255)
												{
													OBJECT::DELETE_OBJECT(&(Local_2033.f_538[func_400(iVar8, iVar19, 1)]));
												}
											}
										}
										else
										{
											if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_538[func_400(iVar8, iVar19, 0)]))
											{
												if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 0)]) > 0)
												{
													ENTITY::SET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 0)], SYSTEM::FLOOR(func_209(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 0)])), 0f, 0.1f, 0)), true);
												}
												else
												{
													OBJECT::DELETE_OBJECT(&(Local_2033.f_538[func_400(iVar8, iVar19, 0)]));
												}
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_538[func_400(iVar8, iVar19, 1)]))
											{
												if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 1)]) > 0)
												{
													ENTITY::SET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 1)], SYSTEM::FLOOR(func_209(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 1)])), 0f, 0.1f, 0)), true);
												}
												else
												{
													OBJECT::DELETE_OBJECT(&(Local_2033.f_538[func_400(iVar8, iVar19, 1)]));
												}
											}
										}
										iVar13 = 0;
										iVar13 = 0;
										while (iVar13 < 7)
										{
											iVar14 = func_22(iVar8, iVar13, iVar19, 1);
											sVar15 = func_399(Local_116.f_1188[iVar20 /*9*/][iVar13], 1);
											if (iVar14 >= 0 && iVar14 < (56 * Local_2033.f_257))
											{
												if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8])))
												{
													if ((((iVar19 == 0 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_7(iVar8), 3)) || (iVar19 == 1 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_6(iVar8), 3))) || (iVar19 == 2 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_5(iVar8), 3))) || (iVar19 == 3 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_4(iVar8), 3)))
													{
														if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 585557868))
														{
															if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
															{
																OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
																Local_2033.f_305[iVar14] = -1;
															}
														}
													}
													else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar15))
													{
														Local_2033.f_305[iVar14] = -1;
														if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
														{
															if (func_404(Local_116.f_1188[iVar20 /*9*/][iVar13], Local_2033.f_236) != 0)
															{
																Local_2033.f_648[iVar14] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(Local_116.f_1188[iVar20 /*9*/][iVar13], Local_2033.f_236), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_398(iVar13, iVar19, 1)), false, false, true, 0);
																ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_648[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_398(iVar13, iVar19, 1)), false, false, true);
																ENTITY::SET_ENTITY_ROTATION(Local_2033.f_648[iVar14], Var16 + func_397(iVar13, iVar19, 1, func_401(iVar14)), 2, true);
															}
														}
														else if (ENTITY::GET_ENTITY_MODEL(Local_2033.f_648[iVar14]) != func_404(Local_116.f_1188[iVar20 /*9*/][iVar13], Local_2033.f_236))
														{
															OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
														}
														else if (ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_648[iVar14]))
														{
															ENTITY::DETACH_ENTITY(Local_2033.f_648[iVar14], false, true);
															ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_648[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_398(iVar13, iVar19, 1)), false, false, true);
															ENTITY::SET_ENTITY_ROTATION(Local_2033.f_648[iVar14], Var16 + func_397(iVar13, iVar19, 1, func_401(iVar14)), 2, true);
														}
													}
													else if (Local_2033.f_305[iVar14] != -1)
													{
														if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
														{
															Local_2033.f_648[iVar14] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(Local_2033.f_305[iVar14], Local_2033.f_236), Var9, false, false, true, 0);
															if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2033.f_648[iVar14])) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_648[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
															}
														}
														else if (ENTITY::GET_ENTITY_MODEL(Local_2033.f_648[iVar14]) != func_404(Local_2033.f_305[iVar14], Local_2033.f_236))
														{
															OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
															Local_2033.f_305[iVar14] = -1;
															func_402(iVar14);
														}
														else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8])))
														{
															if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2033.f_648[iVar14]) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_648[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
															}
															if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 585557868))
															{
																if (ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_648[iVar14]))
																{
																	ENTITY::DETACH_ENTITY(Local_2033.f_648[iVar14], false, true);
																	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_648[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_398(iVar13, iVar19, 1)), false, false, true);
																	ENTITY::SET_ENTITY_ROTATION(Local_2033.f_648[iVar14], Var16 + func_397(iVar13, iVar19, 1, func_401(iVar14)), 2, true);
																}
															}
														}
													}
													else if (iVar14 >= 0 && iVar14 < (56 * Local_2033.f_257))
													{
														if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar14]))
														{
															OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar14]));
															Local_2033.f_305[iVar14] = -1;
															func_402(iVar14);
														}
													}
													iVar13++;
													if (Local_1776[iVar20 /*8*/].f_2 > 0)
													{
														iVar24 = Local_1776[iVar20 /*8*/].f_2;
														if (BitTest(Local_1776[iVar20 /*8*/], 11))
														{
															iVar24 = (Local_1776[iVar20 /*8*/].f_2 / 2);
														}
														if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_538[func_400(iVar8, iVar19, 2)]))
														{
															if (func_396(iVar24, bVar12) != 0)
															{
																Local_2033.f_538[func_400(iVar8, iVar19, 2)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(iVar24, bVar12), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_395(iVar24, 2, iVar19, bVar12)), false, false, true, 0);
																ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_538[func_400(iVar8, iVar19, 2)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_395(iVar24, 2, iVar19, bVar12)), false, false, true);
																ENTITY::SET_ENTITY_ROTATION(Local_2033.f_538[func_400(iVar8, iVar19, 2)], Var16 + func_394(iVar24, 2, iVar19, bVar12), 2, true);
																if (!MISC::IS_STRING_NULL_OR_EMPTY(func_393(iVar24)))
																{
																	AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_393(iVar24), Local_2033.f_538[func_400(iVar8, iVar19, 2)], "dlc_vw_table_games_sounds", false, 0);
																}
															}
														}
														else if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 2)]) != 255)
														{
															OBJECT::DELETE_OBJECT(&(Local_2033.f_538[func_400(iVar8, iVar19, 2)]));
														}
														if (BitTest(Local_1776[iVar20 /*8*/], 11))
														{
															if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_538[func_400(iVar8, iVar19, 3)]))
															{
																if (func_396(iVar24, bVar12) != 0)
																{
																	Local_2033.f_538[func_400(iVar8, iVar19, 3)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(iVar24, bVar12), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_395(iVar24, 3, iVar19, bVar12)), false, false, true, 0);
																	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_538[func_400(iVar8, iVar19, 3)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_395(iVar24, 3, iVar19, bVar12)), false, false, true);
																	ENTITY::SET_ENTITY_ROTATION(Local_2033.f_538[func_400(iVar8, iVar19, 3)], Var16 + func_394(iVar24, 3, iVar19, bVar12), 2, true);
																	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_393(iVar24)))
																	{
																		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_393(iVar24), Local_2033.f_538[func_400(iVar8, iVar19, 3)], "dlc_vw_table_games_sounds", false, 0);
																	}
																}
															}
															else if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 3)]) != 255)
															{
																OBJECT::DELETE_OBJECT(&(Local_2033.f_538[func_400(iVar8, iVar19, 3)]));
															}
														}
													}
													else
													{
														if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_538[func_400(iVar8, iVar19, 2)]))
														{
															if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 2)]) > 0)
															{
																ENTITY::SET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 2)], SYSTEM::FLOOR(func_209(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 2)])), 0f, 0.1f, 0)), true);
															}
															else
															{
																OBJECT::DELETE_OBJECT(&(Local_2033.f_538[func_400(iVar8, iVar19, 2)]));
															}
														}
														if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_538[func_400(iVar8, iVar19, 3)]))
														{
															if (ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 3)]) > 0)
															{
																ENTITY::SET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 3)], SYSTEM::FLOOR(func_209(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2033.f_538[func_400(iVar8, iVar19, 3)])), 0f, 0.1f, 0)), true);
															}
															else
															{
																OBJECT::DELETE_OBJECT(&(Local_2033.f_538[func_400(iVar8, iVar19, 3)]));
															}
														}
													}
													iVar19++;
													iVar13 = 0;
													iVar13 = 0;
													while (iVar13 < 11)
													{
														bVar26 = true;
														if (!Local_116.f_1525[iVar8] && iVar13 == 0)
														{
															bVar26 = false;
														}
														sVar15 = func_399(Local_116.f_846[iVar8 /*13*/][iVar13], bVar26);
														iVar14 = func_9(iVar8, iVar13);
														if (iVar14 >= 0 && iVar14 < (11 * Local_2033.f_257))
														{
															if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8])))
															{
																if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_3(iVar8), 3))
																{
																	if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
																	{
																		iVar28 = 0;
																		while (iVar28 < 11)
																		{
																			iVar29 = func_9(iVar8, iVar28);
																			if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_603[iVar29]))
																			{
																				iVar27 = iVar28;
																			}
																			iVar28++;
																		}
																		if (iVar13 == iVar27)
																		{
																			if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_603[iVar14]) && !ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_603[iVar14]))
																			{
																				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_603[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																			}
																		}
																		else if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_603[iVar14]))
																		{
																			OBJECT::DELETE_OBJECT(&(Local_2033.f_603[iVar14]));
																			Local_2033.f_260[iVar14] = -1;
																		}
																	}
																	else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 585557868))
																	{
																		if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_603[iVar14]))
																		{
																			OBJECT::DELETE_OBJECT(&(Local_2033.f_603[iVar14]));
																			Local_2033.f_260[iVar14] = -1;
																		}
																	}
																}
																else if (Local_116.f_1520[iVar8] == 2 && ((!MISC::IS_STRING_NULL_OR_EMPTY(sVar15) && Local_116.f_846[iVar8 /*13*/][iVar13] != 0) || Local_2033.f_260[iVar14] != -1))
																{
																	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_399(Local_116.f_846[iVar8 /*13*/][iVar13], 1)) && func_404(Local_116.f_846[iVar8 /*13*/][iVar13], Local_2033.f_236) != 0)
																	{
																		Local_2033.f_260[iVar14] = -1;
																		if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_603[iVar14]))
																		{
																			iVar25 = Local_116.f_846[iVar8 /*13*/][iVar13];
																			if (!bVar26)
																			{
																				iVar25 = 0;
																			}
																			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_399(Local_116.f_846[iVar8 /*13*/][iVar13], 1)) && func_404(iVar25, Local_2033.f_236) != 0)
																			{
																				Local_2033.f_603[iVar14] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(iVar25, Local_2033.f_236), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true, 0);
																				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_603[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true);
																				ENTITY::SET_ENTITY_ROTATION(Local_2033.f_603[iVar14], Var16 + func_391(iVar13, bVar26), 2, true);
																				Local_2033.f_260[iVar14] = -1;
																			}
																		}
																		else if (iVar13 == 0)
																		{
																			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8])))
																			{
																				if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_34(iVar8), 3))
																				{
																					if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
																					{
																						if (!ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_603[iVar14]))
																						{
																							OBJECT::DELETE_OBJECT(&(Local_2033.f_603[iVar14]));
																							Local_2033.f_260[iVar14] = -1;
																							Local_2033.f_603[iVar14] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(Local_116.f_846[iVar8 /*13*/][iVar13], Local_2033.f_236), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true, 0);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_603[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_2033.f_603[iVar14], Var16 + func_391(iVar13, 0), 2, true);
																							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_603[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																						}
																					}
																					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 585557868))
																					{
																						if (ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_603[iVar14]))
																						{
																							ENTITY::DETACH_ENTITY(Local_2033.f_603[iVar14], false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_603[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_2033.f_603[iVar14], Var16 + func_391(iVar13, 1), 2, true);
																						}
																					}
																				}
																				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_29(iVar8), 3))
																				{
																					if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
																					{
																						if (!ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_603[iVar14]))
																						{
																							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_603[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																						}
																					}
																					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 585557868))
																					{
																						if (ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_603[iVar14]))
																						{
																							ENTITY::DETACH_ENTITY(Local_2033.f_603[iVar14], false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_603[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_2033.f_603[iVar14], Var16 + func_391(iVar13, 0), 2, true);
																						}
																					}
																				}
																				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), func_59(), func_11(iVar8), 3))
																				{
																					if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
																					{
																						if (!ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_603[iVar14]))
																						{
																							OBJECT::DELETE_OBJECT(&(Local_2033.f_603[iVar14]));
																							Local_2033.f_260[iVar14] = -1;
																							Local_2033.f_603[iVar14] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(Local_116.f_846[iVar8 /*13*/][iVar13], Local_2033.f_236), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true, 0);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_603[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_2033.f_603[iVar14], Var16 + func_391(iVar13, 0), 2, true);
																							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_603[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																						}
																					}
																					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 585557868))
																					{
																						if (ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_603[iVar14]))
																						{
																							ENTITY::DETACH_ENTITY(Local_2033.f_603[iVar14], false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_603[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_2033.f_603[iVar14], Var16 + func_391(iVar13, 1), 2, true);
																						}
																					}
																				}
																				else if (ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_603[iVar14]))
																				{
																					ENTITY::DETACH_ENTITY(Local_2033.f_603[iVar14], false, true);
																					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_603[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true);
																					ENTITY::SET_ENTITY_ROTATION(Local_2033.f_603[iVar14], Var16 + func_391(iVar13, bVar26), 2, true);
																				}
																			}
																		}
																		else if (ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_603[iVar14]))
																		{
																			ENTITY::DETACH_ENTITY(Local_2033.f_603[iVar14], false, true);
																			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_603[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true);
																			ENTITY::SET_ENTITY_ROTATION(Local_2033.f_603[iVar14], Var16 + func_391(iVar13, bVar26), 2, true);
																		}
																	}
																	else if (Local_2033.f_260[iVar14] != -1)
																	{
																		if (!ENTITY::DOES_ENTITY_EXIST(Local_2033.f_603[iVar14]))
																		{
																			iVar25 = Local_2033.f_260[iVar14];
																			if (!bVar26)
																			{
																				iVar25 = 0;
																			}
																			Local_2033.f_603[iVar14] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(iVar25, Local_2033.f_236), Var9, false, false, true, 0);
																			if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2033.f_603[iVar14])) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
																			{
																				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_603[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																			}
																		}
																		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar8]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8])))
																		{
																			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2033.f_603[iVar14]) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), -1345695206))
																			{
																				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2033.f_603[iVar14], NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																			}
																			if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_1595[iVar8]), 585557868))
																			{
																				if (ENTITY::IS_ENTITY_ATTACHED(Local_2033.f_603[iVar14]))
																				{
																					ENTITY::DETACH_ENTITY(Local_2033.f_603[iVar14], false, true);
																					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2033.f_603[iVar14], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iVar8), Var16.f_2, func_392(iVar13)), false, false, true);
																					ENTITY::SET_ENTITY_ROTATION(Local_2033.f_603[iVar14], Var16 + func_391(iVar13, bVar26), 2, true);
																				}
																			}
																		}
																	}
																}
																else if (iVar14 >= 0 && iVar14 < (11 * Local_2033.f_257))
																{
																	if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_603[iVar14]))
																	{
																		OBJECT::DELETE_OBJECT(&(Local_2033.f_603[iVar14]));
																		Local_2033.f_260[iVar14] = -1;
																	}
																}
																iVar13++;
																iVar8++;
																iLocal_3677++;
																if (iLocal_3677 >= Local_2033.f_257)
																{
																	iLocal_3677 = 0;
																}
															}

Vector3 func_391(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 178.92f };
			break;
		
		case 1:
			Var0 = { 0f, 0f, -180f };
			break;
		
		case 2:
			Var0 = { 0f, 0f, -178.92f };
			break;
		
		case 3:
			Var0 = { 0f, 0f, -177.12f };
			break;
		
		case 4:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 5:
			Var0 = { 0f, 0f, 178.56f };
			break;
		
		case 6:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 7:
			Var0 = { 0f, 0f, 178.2f };
			break;
		
		case 8:
			Var0 = { 0f, 0f, -177.12f };
			break;
		
		case 9:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 10:
			Var0 = { 0f, 0f, 178.56f };
			break;
	}
	if (!bParam1)
	{
		Var0.f_0 = 180f;
	}
	return Var0;
}

Vector3 func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.0356f, 0.2105f, 0.94885f;
		
		case 1:
			return -0.0436f, 0.21205f, 0.948875f;
		
		case 2:
			return -0.0636f, 0.213825f, 0.9496f;
		
		case 3:
			return -0.0806f, 0.2137f, 0.950225f;
		
		case 4:
			return -0.1006f, 0.21125f, 0.950875f;
		
		case 5:
			return -0.1256f, 0.21505f, 0.951875f;
		
		case 6:
			return -0.1416f, 0.21305f, 0.953f;
		
		case 7:
			return -0.1656f, 0.21205f, 0.954025f;
		
		case 8:
			return -0.1836f, 0.21255f, 0.95495f;
		
		case 9:
			return -0.2076f, 0.21105f, 0.956025f;
		
		case 10:
			return -0.2246f, 0.21305f, 0.957f;
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_393(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_394(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 72f;
					
					case 1:
						return 0f, 0f, 64.8f;
					
					case 2:
						return 0f, 0f, 74.52f;
					
					case 3:
						return 0f, 0f, 72f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 12.96f;
					
					case 1:
						return 0f, 0f, 29.16f;
					
					case 2:
						return 0f, 0f, 32.04f;
					
					case 3:
						return 0f, 0f, 32.04f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -18.36f;
					
					case 1:
						return 0f, 0f, -18.72f;
					
					case 2:
						return 0f, 0f, -15.48f;
					
					case 3:
						return 0f, 0f, -18f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -79.2f;
					
					case 1:
						return 0f, 0f, -68.76f;
					
					case 2:
						return 0f, 0f, -57.6f;
					
					case 3:
						return 0f, 0f, -64.8f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -16.56f;
							
							case 1:
								return 0f, 0f, -22.32f;
							
							case 2:
								return 0f, 0f, -10.8f;
							
							case 3:
								return 0f, 0f, -9.72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -69.12f;
							
							case 1:
								return 0f, 0f, -64.8f;
							
							case 2:
								return 0f, 0f, -58.68f;
							
							case 3:
								return 0f, 0f, -51.12f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -112.32f;
							
							case 1:
								return 0f, 0f, -108.36f;
							
							case 2:
								return 0f, 0f, -99.72f;
							
							case 3:
								return 0f, 0f, -102.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -155.88f;
							
							case 1:
								return 0f, 0f, -151.92f;
							
							case 2:
								return 0f, 0f, -147.24f;
							
							case 3:
								return 0f, 0f, -146.52f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 72f;
							
							case 1:
								return 0f, 0f, 64.8f;
							
							case 2:
								return 0f, 0f, 74.52f;
							
							case 3:
								return 0f, 0f, 72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 12.96f;
							
							case 1:
								return 0f, 0f, 29.16f;
							
							case 2:
								return 0f, 0f, 32.04f;
							
							case 3:
								return 0f, 0f, 32.04f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -18.36f;
							
							case 1:
								return 0f, 0f, -18.72f;
							
							case 2:
								return 0f, 0f, -15.48f;
							
							case 3:
								return 0f, 0f, -18f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -79.2f;
							
							case 1:
								return 0f, 0f, -68.76f;
							
							case 2:
								return 0f, 0f, -57.6f;
							
							case 3:
								return 0f, 0f, -64.8f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_395(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	struct<3> Var1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.95f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.712625f, 0.170625f, 0f };
						break;
					
					case 1:
						Var1 = { 0.6658f, 0.218375f, 0f };
						break;
					
					case 2:
						Var1 = { 0.756775f, 0.292775f, 0f };
						break;
					
					case 3:
						Var1 = { 0.701875f, 0.3439f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.278125f, -0.2571f, 0f };
						break;
					
					case 1:
						Var1 = { 0.280375f, -0.190375f, 0f };
						break;
					
					case 2:
						Var1 = { 0.397775f, -0.208525f, 0f };
						break;
					
					case 3:
						Var1 = { 0.39715f, -0.1354f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.30305f, -0.2464f, 0f };
						break;
					
					case 1:
						Var1 = { -0.257975f, -0.19715f, 0f };
						break;
					
					case 2:
						Var1 = { -0.186575f, -0.2861f, 0f };
						break;
					
					case 3:
						Var1 = { -0.141675f, -0.237925f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.72855f, 0.17345f, 0f };
						break;
					
					case 1:
						Var1 = { -0.652825f, 0.177525f, 0f };
						break;
					
					case 2:
						Var1 = { -0.6783f, 0.0744f, 0f };
						break;
					
					case 3:
						Var1 = { -0.604425f, 0.082575f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.953f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.6931f, 0.1952f, 0f };
								break;
							
							case 1:
								Var1 = { 0.724925f, 0.26955f, 0f };
								break;
							
							case 2:
								Var1 = { 0.7374f, 0.349625f, 0f };
								break;
							
							case 3:
								Var1 = { 0.76415f, 0.419225f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.2827f, -0.227825f, 0f };
								break;
							
							case 1:
								Var1 = { 0.3605f, -0.1898f, 0f };
								break;
							
							case 2:
								Var1 = { 0.4309f, -0.16365f, 0f };
								break;
							
							case 3:
								Var1 = { 0.49275f, -0.111575f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.279425f, -0.2238f, 0f };
								break;
							
							case 1:
								Var1 = { -0.200775f, -0.25855f, 0f };
								break;
							
							case 2:
								Var1 = { -0.125775f, -0.26815f, 0f };
								break;
							
							case 3:
								Var1 = { -0.05615f, -0.29435f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.685925f, 0.173275f, 0f };
								break;
							
							case 1:
								Var1 = { -0.6568f, 0.092525f, 0f };
								break;
							
							case 2:
								Var1 = { -0.612875f, 0.033025f, 0f };
								break;
							
							case 3:
								Var1 = { -0.58465f, -0.0374f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.712625f, 0.170625f, 0f };
								break;
							
							case 1:
								Var1 = { 0.6658f, 0.218375f, 0f };
								break;
							
							case 2:
								Var1 = { 0.756775f, 0.292775f, 0f };
								break;
							
							case 3:
								Var1 = { 0.701875f, 0.3439f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.278125f, -0.2571f, 0f };
								break;
							
							case 1:
								Var1 = { 0.280375f, -0.190375f, 0f };
								break;
							
							case 2:
								Var1 = { 0.397775f, -0.208525f, 0f };
								break;
							
							case 3:
								Var1 = { 0.39715f, -0.1354f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.30305f, -0.2464f, 0f };
								break;
							
							case 1:
								Var1 = { -0.257975f, -0.19715f, 0f };
								break;
							
							case 2:
								Var1 = { -0.186575f, -0.2861f, 0f };
								break;
							
							case 3:
								Var1 = { -0.141675f, -0.237925f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.72855f, 0.17345f, 0f };
								break;
							
							case 1:
								Var1 = { -0.652825f, 0.177525f, 0f };
								break;
							
							case 2:
								Var1 = { -0.6783f, 0.0744f, 0f };
								break;
							
							case 3:
								Var1 = { -0.604425f, 0.082575f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	Var1.f_2 = fVar0;
	return Var1;
}

int func_396(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		
		default:
	}
	return 0;
}

Vector3 func_397(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 69.12f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 67.8f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 66.6f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 70.44f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 70.84f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 67.88f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 69.56f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22.11f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 22.32f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 20.8f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 19.8f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 19.44f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 26.28f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 22.68f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -21.43f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -20.16f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -16.92f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -23.4f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -21.24f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -23.76f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -19.44f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67.03f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -69.12f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -64.44f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -67.68f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -63.72f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -68.4f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -64.44f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 68.57f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 67.52f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 67.76f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 67.04f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 68.84f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 65.96f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 67.76f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22.11f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 22f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 24.44f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 21.08f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 25.96f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 26.16f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 28.76f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -14.04f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -15.48f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -16.56f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -15.84f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -16.92f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -14.4f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -14.28f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67.03f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -67.6f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -69.4f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -69.04f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -68.68f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -66.16f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -63.28f };
						break;
				}
				break;
			}
	}
	if (bParam3)
	{
		Var0.f_2 = (Var0.f_2 + 90f);
	}
	return Var0;
}

Vector3 func_398(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.5737f, 0.2376f, 0.948025f;
					
					case 1:
						return 0.562975f, 0.2523f, 0.94875f;
					
					case 2:
						return 0.553875f, 0.266325f, 0.94955f;
					
					case 3:
						return 0.5459f, 0.282075f, 0.9501f;
					
					case 4:
						return 0.536125f, 0.29645f, 0.95085f;
					
					case 5:
						return 0.524975f, 0.30975f, 0.9516f;
					
					case 6:
						return 0.515775f, 0.325325f, 0.95235f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.2325f, -0.1082f, 0.94805f;
					
					case 1:
						return 0.23645f, -0.0918f, 0.949f;
					
					case 2:
						return 0.2401f, -0.074475f, 0.950225f;
					
					case 3:
						return 0.244625f, -0.057675f, 0.951125f;
					
					case 4:
						return 0.249675f, -0.041475f, 0.95205f;
					
					case 5:
						return 0.257575f, -0.0256f, 0.9532f;
					
					case 6:
						return 0.2601f, -0.008175f, 0.954375f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.2359f, -0.1091f, 0.9483f;
					
					case 1:
						return -0.221025f, -0.100675f, 0.949f;
					
					case 2:
						return -0.20625f, -0.092875f, 0.949725f;
					
					case 3:
						return -0.193225f, -0.07985f, 0.950325f;
					
					case 4:
						return -0.1776f, -0.072f, 0.951025f;
					
					case 5:
						return -0.165f, -0.060025f, 0.951825f;
					
					case 6:
						return -0.14895f, -0.05155f, 0.95255f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5765f, 0.2229f, 0.9482f;
					
					case 1:
						return -0.558925f, 0.2197f, 0.949175f;
					
					case 2:
						return -0.5425f, 0.213025f, 0.9499f;
					
					case 3:
						return -0.525925f, 0.21105f, 0.95095f;
					
					case 4:
						return -0.509475f, 0.20535f, 0.9519f;
					
					case 5:
						return -0.491775f, 0.204075f, 0.952825f;
					
					case 6:
						return -0.4752f, 0.197525f, 0.9543f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.6083f, 0.3523f, 0.94795f;
					
					case 1:
						return 0.598475f, 0.366475f, 0.948925f;
					
					case 2:
						return 0.589525f, 0.3807f, 0.94975f;
					
					case 3:
						return 0.58045f, 0.39435f, 0.950375f;
					
					case 4:
						return 0.571975f, 0.4092f, 0.951075f;
					
					case 5:
						return 0.5614f, 0.4237f, 0.951775f;
					
					case 6:
						return 0.554325f, 0.4402f, 0.952525f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.3431f, -0.0527f, 0.94855f;
					
					case 1:
						return 0.348575f, -0.0348f, 0.949425f;
					
					case 2:
						return 0.35465f, -0.018825f, 0.9502f;
					
					case 3:
						return 0.3581f, -0.001625f, 0.95115f;
					
					case 4:
						return 0.36515f, 0.015275f, 0.952075f;
					
					case 5:
						return 0.368525f, 0.032475f, 0.95335f;
					
					case 6:
						return 0.373275f, 0.0506f, 0.9543f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.116f, -0.1501f, 0.947875f;
					
					case 1:
						return -0.102725f, -0.13795f, 0.948525f;
					
					case 2:
						return -0.08975f, -0.12665f, 0.949175f;
					
					case 3:
						return -0.075025f, -0.1159f, 0.949875f;
					
					case 4:
						return -0.0614f, -0.104775f, 0.9507f;
					
					case 5:
						return -0.046275f, -0.095025f, 0.9516f;
					
					case 6:
						return -0.031425f, -0.0846f, 0.952675f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5205f, 0.1122f, 0.9478f;
					
					case 1:
						return -0.503175f, 0.108525f, 0.94865f;
					
					case 2:
						return -0.485125f, 0.10475f, 0.949175f;
					
					case 3:
						return -0.468275f, 0.099175f, 0.94995f;
					
					case 4:
						return -0.45155f, 0.09435f, 0.95085f;
					
					case 5:
						return -0.434475f, 0.089725f, 0.95145f;
					
					case 6:
						return -0.415875f, 0.0846f, 0.9523f;
					
					default:
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

char* func_399(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return " ---- ";
	}
	switch (iParam0)
	{
		case 1:
			return " A  C ";
		
		case 2:
			return " 2  C ";
		
		case 3:
			return " 3  C ";
		
		case 4:
			return " 4  C ";
		
		case 5:
			return " 5  C ";
		
		case 6:
			return " 6  C ";
		
		case 7:
			return " 7  C ";
		
		case 8:
			return " 8  C ";
		
		case 9:
			return " 9  C ";
		
		case 10:
			return " 10 C ";
		
		case 11:
			return " J  C ";
		
		case 12:
			return " Q  C ";
		
		case 13:
			return " K  C ";
		
		case 14:
			return " A  D ";
		
		case 15:
			return " 2  D ";
		
		case 16:
			return " 3  D ";
		
		case 17:
			return " 4  D ";
		
		case 18:
			return " 5  D ";
		
		case 19:
			return " 6  D ";
		
		case 20:
			return " 7  D ";
		
		case 21:
			return " 8  D ";
		
		case 22:
			return " 9  D ";
		
		case 23:
			return " 10 D ";
		
		case 24:
			return " J  D ";
		
		case 25:
			return " Q  D ";
		
		case 26:
			return " K  D ";
		
		case 27:
			return " A  H ";
		
		case 28:
			return " 2  H ";
		
		case 29:
			return " 3  H ";
		
		case 30:
			return " 4  H ";
		
		case 31:
			return " 5  H ";
		
		case 32:
			return " 6  H ";
		
		case 33:
			return " 7  H ";
		
		case 34:
			return " 8  H ";
		
		case 35:
			return " 9  H ";
		
		case 36:
			return " 10 H ";
		
		case 37:
			return " J  H ";
		
		case 38:
			return " Q  H ";
		
		case 39:
			return " K  H ";
		
		case 40:
			return " A  S ";
		
		case 41:
			return " 2  S ";
		
		case 42:
			return " 3  S ";
		
		case 43:
			return " 4  S ";
		
		case 44:
			return " 5  S ";
		
		case 45:
			return " 6  S ";
		
		case 46:
			return " 7  S ";
		
		case 47:
			return " 8  S ";
		
		case 48:
			return " 9  S ";
		
		case 49:
			return " 10 S ";
		
		case 50:
			return " J  S ";
		
		case 51:
			return " Q  S ";
		
		case 52:
			return " K  S ";
		
		default:
	}
	return "";
}

int func_400(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 4 * 4 + iParam1 * 4) + iParam2);
}

int func_401(int iParam0)
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			return BitTest(Local_2033.f_530, (iParam0 % 32));
		
		case 1:
			return BitTest(Local_2033.f_531, (iParam0 % 32));
		
		case 2:
			return BitTest(Local_2033.f_532, (iParam0 % 32));
		
		case 3:
			return BitTest(Local_2033.f_533, (iParam0 % 32));
		
		case 4:
			return BitTest(Local_2033.f_534, (iParam0 % 32));
		
		case 5:
			return BitTest(Local_2033.f_535, (iParam0 % 32));
		
		case 6:
			return BitTest(Local_2033.f_536, (iParam0 % 32));
		
		default:
	}
	return 0;
}

void func_402(int iParam0)
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			MISC::CLEAR_BIT(&(Local_2033.f_530), (iParam0 % 32));
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(Local_2033.f_531), (iParam0 % 32));
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(Local_2033.f_532), (iParam0 % 32));
			break;
		
		case 3:
			MISC::CLEAR_BIT(&(Local_2033.f_533), (iParam0 % 32));
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Local_2033.f_534), (iParam0 % 32));
			break;
		
		case 5:
			MISC::CLEAR_BIT(&(Local_2033.f_535), (iParam0 % 32));
			break;
		
		case 6:
			MISC::CLEAR_BIT(&(Local_2033.f_536), (iParam0 % 32));
			break;
	}
}

void func_403(int iParam0)
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			MISC::SET_BIT(&(Local_2033.f_530), (iParam0 % 32));
			break;
		
		case 1:
			MISC::SET_BIT(&(Local_2033.f_531), (iParam0 % 32));
			break;
		
		case 2:
			MISC::SET_BIT(&(Local_2033.f_532), (iParam0 % 32));
			break;
		
		case 3:
			MISC::SET_BIT(&(Local_2033.f_533), (iParam0 % 32));
			break;
		
		case 4:
			MISC::SET_BIT(&(Local_2033.f_534), (iParam0 % 32));
			break;
		
		case 5:
			MISC::SET_BIT(&(Local_2033.f_535), (iParam0 % 32));
			break;
		
		case 6:
			MISC::SET_BIT(&(Local_2033.f_536), (iParam0 % 32));
			break;
	}
}

int func_404(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_a_a");
			
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_02a");
			
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_03a");
			
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_04a");
			
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_05a");
			
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_06a");
			
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_07a");
			
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_08a");
			
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_09a");
			
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_10a");
			
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_j_a");
			
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_q_a");
			
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_k_a");
			
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_02a");
			
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_03a");
			
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_04a");
			
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_05a");
			
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_06a");
			
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_07a");
			
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_08a");
			
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_09a");
			
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_10a");
			
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_02a");
			
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_03a");
			
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_04a");
			
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_05a");
			
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_06a");
			
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_07a");
			
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_08a");
			
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_09a");
			
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_10a");
			
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_ace");
			
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_02");
			
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_03");
			
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_04");
			
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_05");
			
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_06");
			
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_07");
			
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_08");
			
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_09");
			
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_10");
			
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_jack");
			
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_queen");
			
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_king");
			
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_ace");
			
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_02");
			
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_03");
			
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_04");
			
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_05");
			
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_06");
			
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_07");
			
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_08");
			
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_09");
			
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_10");
			
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_jack");
			
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_queen");
			
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_king");
			
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_02");
			
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_03");
			
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_04");
			
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_05");
			
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_06");
			
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_07");
			
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_08");
			
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_09");
			
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_10");
			
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_king");
			
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_ace");
			
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_02");
			
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_03");
			
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_04");
			
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_05");
			
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_06");
			
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_07");
			
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_08");
			
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_09");
			
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_10");
			
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_jack");
			
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_queen");
			
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	if (bParam1)
	{
		return MISC::GET_HASH_KEY("vw_prop_vw_jo_char_01a");
	}
	return MISC::GET_HASH_KEY("vw_prop_casino_cards_single");
}

void func_405()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_406(iVar0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		iVar0++;
	}
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		
		default:
	}
	return 0;
}

int func_407()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_406(iVar0);
		STREAMING::REQUEST_MODEL(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_408()
{
	return BitTest(Global_1943520.f_6, 12);
}

int func_409()
{
	return func_410(8251, -1);
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_411(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_411(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_412(uParam1));
}

int func_412(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2750950 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750950 = 1;
		}
	}
	return iVar0;
}

void func_413()
{
	if (Local_2033.f_257 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3688))
		{
			if (func_430() != func_429())
			{
				iLocal_3688 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_71(0), 1f, func_225(Global_2657971[func_430() /*465*/].f_457), false, false, false);
			}
		}
		else if (func_430() != func_429() && CAM::IS_SCREEN_FADED_OUT())
		{
			if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_3688) != func_370(func_430()))
			{
				OBJECT::SET_OBJECT_TINT_INDEX(iLocal_3688, func_370(func_430()));
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
		{
			iLocal_3689 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1129.406f, 262.3578f, -52.041f, 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
		}
		else if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_3689) != 3)
		{
			OBJECT::SET_OBJECT_TINT_INDEX(iLocal_3689, 3);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3690))
		{
			iLocal_3690 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1144.429f, 247.3352f, -52.041f, 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3690) && OBJECT::GET_OBJECT_TINT_INDEX(iLocal_3690) != 3)
		{
			OBJECT::SET_OBJECT_TINT_INDEX(iLocal_3690, 3);
		}
	}
}

void func_414()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2033.f_257)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3669[iVar0]))
		{
			func_415(iVar0);
		}
		iVar0++;
	}
}

void func_415(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Local_2033.f_236)
	{
		iVar0 = joaat("vw_prop_vw_jo_char_01a");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_single");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3669[iParam0]))
	{
		iVar1 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, func_417(iParam0), false, false, true, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_417(iParam0), false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iVar1, func_416(iParam0), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		iLocal_3669[iParam0] = iVar1;
	}
}

Vector3 func_416(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 164.52f, 11.5f };
	return Vector(func_70(iParam0), 0f, 0f) + Var0;
}

Vector3 func_417(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0.526f, 0.571f, 0.963f };
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_71(iParam0), func_70(iParam0), Var0);
}

int func_418()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_404(iVar1, Local_2033.f_236);
		STREAMING::REQUEST_MODEL(iVar2);
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_419()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2033.f_257)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3669[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_3669[iVar0]));
		}
		iVar0++;
	}
}

void func_420()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_404(iVar1, Local_2033.f_236);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		iVar0++;
	}
}

void func_421()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_2033.f_257)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_1595[iVar0]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(Local_116.f_1595[iVar0]);
			if (func_423(iVar1))
			{
				if (func_422(iVar0))
				{
					AUDIO::BLOCK_ALL_SPEECH_FROM_PED(iVar1, false, true);
				}
				else
				{
					AUDIO::BLOCK_ALL_SPEECH_FROM_PED(iVar1, true, false);
				}
			}
		}
		iVar0++;
	}
}

int func_422(int iParam0)
{
	if (BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4, 5) || BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4, 3))
	{
		return 0;
	}
	if (BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4, 2))
	{
		if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_423(int iParam0)
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

int func_424()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	return 0;
}

int func_425(int iParam0)
{
	if (func_426(iParam0) != func_429())
	{
		return func_426(iParam0) == func_219(iParam0);
	}
	return 0;
}

int func_426(int iParam0)
{
	return Global_1887305[iParam0 /*610*/].f_10.f_35;
}

int func_427()
{
	return func_428(PLAYER::PLAYER_ID());
}

int func_428(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

int func_429()
{
	return -1;
}

int func_430()
{
	return func_431(PLAYER::PLAYER_ID());
}

int func_431(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_429())
	{
		return iParam0;
	}
	if (func_433(iParam0) != -1)
	{
		iVar0 = func_432(func_433(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_323(iParam0, 0))
			{
				return func_219(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_429();
		}
		return Global_2657971[iParam0 /*465*/].f_322.f_11;
	}
	return func_429();
}

int func_432(int iParam0)
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
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

int func_433(int iParam0)
{
	if (iParam0 != func_429())
	{
		if (func_21(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && iParam0 == PLAYER::PLAYER_ID()) && func_21(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

int func_434(int iParam0)
{
	if (iParam0 != func_429() && func_21(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 4);
	}
	return 0;
}

int func_435(int iParam0)
{
	if (iParam0 != func_429())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_432(Global_2657971[iParam0 /*465*/].f_322.f_8) == 15;
			}
		}
	}
	return 0;
}

int func_436(int iParam0)
{
	if (iParam0 != func_429())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_432(Global_2657971[iParam0 /*465*/].f_322.f_8) == 14;
			}
		}
	}
	return 0;
}

var func_437()
{
	return BitTest(Global_1943520.f_3, 2);
}

void func_438()
{
	if (Local_2033.f_1 > 2)
	{
		if (Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
		{
			Local_3620.f_9 = Local_116.f_1570[Local_1776[PLAYER::PLAYER_ID() /*8*/].f_4];
		}
		Local_3620.f_18 = func_424();
		Local_3620.f_19 = func_199();
		Local_3620.f_17 = func_197(&uLocal_3616, 0, 0);
		Local_3620.f_7 = func_409();
		if (Global_262145.f_26383)
		{
			STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_3620);
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_383(0);
	func_420();
	func_405();
	func_441();
	func_440();
	func_419();
	if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_537))
	{
		OBJECT::DELETE_OBJECT(&(Local_2033.f_537));
	}
	if (Local_2033.f_1 > 0)
	{
		STREAMING::REMOVE_ANIM_DICT(func_59());
		STREAMING::REMOVE_ANIM_DICT(func_73());
		STREAMING::REMOVE_ANIM_DICT(func_89());
		STREAMING::REMOVE_ANIM_DICT(func_223());
	}
	Global_1964422 = 0;
	func_439();
}

void func_439()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_440()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (16 * Local_2033.f_257);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_538[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(Local_2033.f_538[iVar1]));
		}
		iVar1++;
	}
}

void func_441()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (11 * Local_2033.f_257);
	iVar1 = (56 * Local_2033.f_257);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_648[iVar2]))
		{
			OBJECT::DELETE_OBJECT(&(Local_2033.f_648[iVar2]));
			Local_2033.f_305[iVar2] = -1;
			func_402(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2033.f_603[iVar2]))
		{
			OBJECT::DELETE_OBJECT(&(Local_2033.f_603[iVar2]));
			Local_2033.f_260[iVar2] = -1;
		}
		iVar2++;
	}
}

int func_442()
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_449())
	{
		return 1;
	}
	if (Global_2698758)
	{
		return 1;
	}
	if (func_448())
	{
		return 1;
	}
	if (func_447(159))
	{
		if (!func_446())
		{
			return 1;
		}
	}
	if (func_447(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_443() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_443()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_443()
{
	switch (func_445())
	{
		case 0:
			return func_444();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_444()
{
	switch (Global_2698865)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_445()
{
	return Global_32948;
}

bool func_446()
{
	return Global_2684504.f_700;
}

int func_447(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_448()
{
	return Global_2696172;
}

bool func_449()
{
	return Global_2684504.f_695;
}

void func_450()
{
	int iVar0;
	int iVar1;
	
	if (Global_1964414)
	{
		Global_1964414 = 0;
	}
	if (func_435(PLAYER::PLAYER_ID()) && func_430() != func_429())
	{
		if (BitTest(Global_2657971[func_430() /*465*/].f_322.f_4, 4))
		{
			Local_2033.f_236 = 1;
		}
		Global_1964424 = Global_2657971[func_430() /*465*/].f_457;
	}
	while (!(Global_2708678 != -1 || func_435(PLAYER::PLAYER_ID())))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_438();
		}
		if (func_442())
		{
			func_438();
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	if (func_435(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_454();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, iVar0);
	func_452(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_116, 1660, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1776, 257, 0);
	if (func_435(PLAYER::PLAYER_ID()))
	{
		Local_2033.f_257 = 1;
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(1);
	}
	else
	{
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(3);
	}
	if (!func_451())
	{
		func_438();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else
	{
		func_438();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_435(PLAYER::PLAYER_ID()))
		{
			Local_116.f_1550[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
		}
		else
		{
			Local_116.f_1550[0] = Global_2708692[0];
			Local_116.f_1550[1] = Global_2708692[1];
			Local_116.f_1550[2] = Global_2708692[2];
			Local_116.f_1550[3] = Global_2708692[3];
		}
	}
	Global_1964422 = 1;
	iVar1 = 0;
	while (iVar1 < 44)
	{
		Local_2033.f_260[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 224)
	{
		Local_2033.f_305[iVar1] = -1;
		func_402(iVar1);
		iVar1++;
	}
}

int func_451()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_449())
		{
			return 0;
		}
		if (func_447(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_452(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_439();
			}
			else
			{
				return 0;
			}
		}
		if (!func_453(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0;
					}
				}
				if (func_449())
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0;
					}
				}
				if (func_447(157))
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_439();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_439();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_439();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_453(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

int func_454()
{
	var uVar0;
	
	uVar0 = Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_9;
	return uVar0;
}

