//
//	hsp3cnv(3.31b2) generated source
//	[ios.ax]
//
#include "hsp3r.h"

#define _HSP3CNV_DATE "2013/02/14"
#define _HSP3CNV_TIME "21:43:02"
#define _HSP3CNV_MAXVAR 17
#define _HSP3CNV_MAXHPI 0
#define _HSP3CNV_VERSION 0x301
#define _HSP3CNV_BOOTOPT 4096

/*-----------------------------------------------------------*/

static PVal *Var_0;
static PVal *Var_1;
static PVal *Var_2;
static PVal *Var_3;
static PVal *Var_4;
static PVal *Var_5;
static PVal *Var_6;
static PVal *Var_7;
static PVal *Var_8;
static PVal *Var_9;
static PVal *Var_10;
static PVal *Var_11;
static PVal *Var_12;
static PVal *Var_13;
static PVal *Var_14;
static PVal *Var_15;
static PVal *Var_16;

/*-----------------------------------------------------------*/

void __HspEntry( void ) {
	// Var initalize
	Var_0 = &mem_var[0];
	Var_1 = &mem_var[1];
	Var_2 = &mem_var[2];
	Var_3 = &mem_var[3];
	Var_4 = &mem_var[4];
	Var_5 = &mem_var[5];
	Var_6 = &mem_var[6];
	Var_7 = &mem_var[7];
	Var_8 = &mem_var[8];
	Var_9 = &mem_var[9];
	Var_10 = &mem_var[10];
	Var_11 = &mem_var[11];
	Var_12 = &mem_var[12];
	Var_13 = &mem_var[13];
	Var_14 = &mem_var[14];
	Var_15 = &mem_var[15];
	Var_16 = &mem_var[16];

	// screen 0, 640, 960
	PushInt(960); 
	PushInt(640); 
	PushInt(0); 
	Extcmd(42,3);
	// title "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	Extcmd(16,1);
	// celload "nyamuimg.png", 1, 
	PushDefault();
	PushInt(1); 
	PushStr("nyamuimg.png"); 
	Extcmd(60,3);
	// celdiv 1, 410, 563, 0, 0
	PushInt(0); 
	PushInt(0); 
	PushInt(563); 
	PushInt(410); 
	PushInt(1); 
	Extcmd(61,5);
	// celload "popup_sampo.png", 2, 
	PushDefault();
	PushInt(2); 
	PushStr("popup_sampo.png"); 
	Extcmd(60,3);
	// celdiv 2, 180, 65, 0, 0
	PushInt(0); 
	PushInt(0); 
	PushInt(65); 
	PushInt(180); 
	PushInt(2); 
	Extcmd(61,5);
	// gmode 2
	PushInt(2); 
	Extcmd(32,1);
	// sdim _HspVar0
	PushVAP(Var_0,0); 
	Prgcmd(10,1);
	// exist "save.sav"
	PushStr("save.sav"); 
	Intcmd(17,1);
	// if strsize=-1
	PushSysvar(6,0); PushInt(-1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(13); return; }
	// _HspVar0 ="にゃむ"
	PushStr("にゃむ"); 
	VarSet(Var_0,0);
	// _HspVar1 =800
	PushInt(800); 
	VarSet(Var_1,0);
	// _HspVar2 =1000
	PushInt(1000); 
	VarSet(Var_2,0);
	// _HspVar3 =50
	PushInt(50); 
	VarSet(Var_3,0);
	// _HspVar4 =0
	PushInt(0); 
	VarSet(Var_4,0);
	// _HspVar5 =0
	PushInt(0); 
	VarSet(Var_5,0);
	// bsave "save.sav", _HspVar0, 20
	PushInt(20); 
	PushVAP(Var_0,0); 
	PushStr("save.sav"); 
	Intcmd(23,3);
	// bsave "save.sav", _HspVar1, 10, 20
	PushInt(20); 
	PushInt(10); 
	PushVAP(Var_1,0); 
	PushStr("save.sav"); 
	Intcmd(23,4);
	// bsave "save.sav", _HspVar2, 10, 30
	PushInt(30); 
	PushInt(10); 
	PushVAP(Var_2,0); 
	PushStr("save.sav"); 
	Intcmd(23,4);
	// bsave "save.sav", _HspVar3, 10, 40
	PushInt(40); 
	PushInt(10); 
	PushVAP(Var_3,0); 
	PushStr("save.sav"); 
	Intcmd(23,4);
	// bsave "save.sav", _HspVar4, 10, 50
	PushInt(50); 
	PushInt(10); 
	PushVAP(Var_4,0); 
	PushStr("save.sav"); 
	Intcmd(23,4);
	// bsave "save.sav", _HspVar5, 10, 60
	PushInt(60); 
	PushInt(10); 
	PushVAP(Var_5,0); 
	PushStr("save.sav"); 
	Intcmd(23,4);
	TaskSwitch(14);
}

static void L0013( void ) {
	// else
	// bload "save.sav", _HspVar0, 20
	PushInt(20); 
	PushVAP(Var_0,0); 
	PushStr("save.sav"); 
	Intcmd(22,3);
	// bload "save.sav", _HspVar1, 10, 20
	PushInt(20); 
	PushInt(10); 
	PushVAP(Var_1,0); 
	PushStr("save.sav"); 
	Intcmd(22,4);
	// bload "save.sav", _HspVar2, 10, 30
	PushInt(30); 
	PushInt(10); 
	PushVAP(Var_2,0); 
	PushStr("save.sav"); 
	Intcmd(22,4);
	// bload "save.sav", _HspVar3, 10, 40
	PushInt(40); 
	PushInt(10); 
	PushVAP(Var_3,0); 
	PushStr("save.sav"); 
	Intcmd(22,4);
	// bload "save.sav", _HspVar4, 10, 50
	PushInt(50); 
	PushInt(10); 
	PushVAP(Var_4,0); 
	PushStr("save.sav"); 
	Intcmd(22,4);
	// bload "save.sav", _HspVar5, 10, 60
	PushInt(60); 
	PushInt(10); 
	PushVAP(Var_5,0); 
	PushStr("save.sav"); 
	Intcmd(22,4);
	TaskSwitch(14);
}

static void L0014( void ) {
	// wait 50
	PushInt(50); 
	Prgcmd(7,1);
	TaskSwitch(15);
}

static void L0015( void ) {
	// redraw 0
	PushInt(0); 
	Extcmd(27,1);
	// pos 0, 816
	PushInt(816); 
	PushInt(0); 
	Extcmd(17,2);
	// objsize 128, 72
	PushInt(72); 
	PushInt(128); 
	Extcmd(22,2);
	// button 	gosub "なでる", *L0000
	PushLabel(0); 
	PushStr("なでる"); 
	PushInt(1); Extcmd(0,3);
	// button 	gosub "えさ", *L0001
	PushLabel(1); 
	PushStr("えさ"); 
	PushInt(1); Extcmd(0,3);
	// pos 128, 816
	PushInt(816); 
	PushInt(128); 
	Extcmd(17,2);
	// button 	gosub "散歩", *L0002
	PushLabel(2); 
	PushStr("散歩"); 
	PushInt(1); Extcmd(0,3);
	// button 	gosub "爪を研ぐ", *L0003
	PushLabel(3); 
	PushStr("爪を研ぐ"); 
	PushInt(1); Extcmd(0,3);
	// pos 512, 888
	PushInt(888); 
	PushInt(512); 
	Extcmd(17,2);
	// button 	gosub "About", *L0004
	PushLabel(4); 
	PushStr("About"); 
	PushInt(1); Extcmd(0,3);
	// redraw 1
	PushInt(1); 
	Extcmd(27,1);
	// wait 10
	PushInt(10); 
	Prgcmd(7,1);
	TaskSwitch(16);
}

static void L0016( void ) {
	TaskSwitch(5);
}

static void L0005( void ) {
	// bsave "save.sav", _HspVar0, 20
	PushInt(20); 
	PushVAP(Var_0,0); 
	PushStr("save.sav"); 
	Intcmd(23,3);
	// bsave "save.sav", _HspVar1, 10, 20
	PushInt(20); 
	PushInt(10); 
	PushVAP(Var_1,0); 
	PushStr("save.sav"); 
	Intcmd(23,4);
	// bsave "save.sav", _HspVar2, 10, 30
	PushInt(30); 
	PushInt(10); 
	PushVAP(Var_2,0); 
	PushStr("save.sav"); 
	Intcmd(23,4);
	// bsave "save.sav", _HspVar3, 10, 40
	PushInt(40); 
	PushInt(10); 
	PushVAP(Var_3,0); 
	PushStr("save.sav"); 
	Intcmd(23,4);
	// bsave "save.sav", _HspVar4, 10, 50
	PushInt(50); 
	PushInt(10); 
	PushVAP(Var_4,0); 
	PushStr("save.sav"); 
	Intcmd(23,4);
	// bsave "save.sav", _HspVar5, 10, 60
	PushInt(60); 
	PushInt(10); 
	PushVAP(Var_5,0); 
	PushStr("save.sav"); 
	Intcmd(23,4);
	// if _HspVar4=0
	PushVar(Var_4,0); PushInt(0); CalcEqI(); 
	if (HspIf()) { TaskSwitch(17); return; }
	// _HspVar6 ="☆☆☆☆☆"
	PushStr("☆☆☆☆☆"); 
	VarSet(Var_6,0);
	TaskSwitch(17);
}

static void L0017( void ) {
	// if _HspVar4=1
	PushVar(Var_4,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(18); return; }
	// _HspVar6 ="★☆☆☆☆"
	PushStr("★☆☆☆☆"); 
	VarSet(Var_6,0);
	TaskSwitch(18);
}

static void L0018( void ) {
	// if _HspVar4=2
	PushVar(Var_4,0); PushInt(2); CalcEqI(); 
	if (HspIf()) { TaskSwitch(19); return; }
	// _HspVar6 ="★★☆☆☆"
	PushStr("★★☆☆☆"); 
	VarSet(Var_6,0);
	TaskSwitch(19);
}

static void L0019( void ) {
	// if _HspVar4=3
	PushVar(Var_4,0); PushInt(3); CalcEqI(); 
	if (HspIf()) { TaskSwitch(20); return; }
	// _HspVar6 ="★★★☆☆"
	PushStr("★★★☆☆"); 
	VarSet(Var_6,0);
	TaskSwitch(20);
}

static void L0020( void ) {
	// if _HspVar4=4
	PushVar(Var_4,0); PushInt(4); CalcEqI(); 
	if (HspIf()) { TaskSwitch(21); return; }
	// _HspVar6 ="★★★★☆"
	PushStr("★★★★☆"); 
	VarSet(Var_6,0);
	TaskSwitch(21);
}

static void L0021( void ) {
	// if _HspVar4=5
	PushVar(Var_4,0); PushInt(5); CalcEqI(); 
	if (HspIf()) { TaskSwitch(22); return; }
	// _HspVar6 ="★★★★★"
	PushStr("★★★★★"); 
	VarSet(Var_6,0);
	TaskSwitch(22);
}

static void L0022( void ) {
	// if _HspVar4=6
	PushVar(Var_4,0); PushInt(6); CalcEqI(); 
	if (HspIf()) { TaskSwitch(23); return; }
	// _HspVar6 ="★★★★★★"
	PushStr("★★★★★★"); 
	VarSet(Var_6,0);
	TaskSwitch(23);
}

static void L0023( void ) {
	// if _HspVar1>_HspVar2
	PushVar(Var_1,0); PushVar(Var_2,0); CalcGtI(); 
	if (HspIf()) { TaskSwitch(24); return; }
	// _HspVar1 =_HspVar2
	PushVar(Var_2,0); 
	VarSet(Var_1,0);
	TaskSwitch(24);
}

static void L0024( void ) {
	// if _HspVar7=0
	PushVar(Var_7,0); PushInt(0); CalcEqI(); 
	if (HspIf()) { TaskSwitch(25); return; }
	// repeat
	PushInt(-1); 
	PushLabel(6); 
	PushLabel(26); Prgcmd(4,3); return;
	TaskSwitch(26);
}

static void L0026( void ) {
	TaskSwitch(25);
}

static void L0025( void ) {
	// redraw 0
	PushInt(0); 
	Extcmd(27,1);
	// font "", 26
	PushInt(26); 
	PushStr(""); 
	Extcmd(20,2);
	// color 192, 210, 255
	PushInt(255); 
	PushInt(210); 
	PushInt(192); 
	Extcmd(24,3);
	// boxf 
	Extcmd(49,0);
	// if _HspVar7=0
	PushVar(Var_7,0); PushInt(0); CalcEqI(); 
	if (HspIf()) { TaskSwitch(27); return; }
	// if _HspVar8<11
	PushVar(Var_8,0); PushInt(11); CalcLtI(); 
	if (HspIf()) { TaskSwitch(28); return; }
	// pos 115, 200
	PushInt(200); 
	PushInt(115); 
	Extcmd(17,2);
	// celput 1, 0
	PushInt(0); 
	PushInt(1); 
	Extcmd(62,2);
	TaskSwitch(28);
}

static void L0028( void ) {
	// if _HspVar8>10
	PushVar(Var_8,0); PushInt(10); CalcGtI(); 
	if (HspIf()) { TaskSwitch(29); return; }
	// pos 115, 198
	PushInt(198); 
	PushInt(115); 
	Extcmd(17,2);
	// celput 1, 1
	PushInt(1); 
	PushInt(1); 
	Extcmd(62,2);
	// _HspVar8 =_HspVar8+1
	PushVar(Var_8,0); PushInt(1); CalcAddI(); 
	VarSet(Var_8,0);
	TaskSwitch(29);
}

static void L0029( void ) {
	TaskSwitch(27);
}

static void L0027( void ) {
	// if (_HspVar7=1_HspVar9=0)&
	PushVar(Var_7,0); PushInt(1); CalcEqI(); PushVar(Var_9,0); PushInt(0); CalcEqI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(30); return; }
	// pos 115, 200
	PushInt(200); 
	PushInt(115); 
	Extcmd(17,2);
	// celput 1, 0
	PushInt(0); 
	PushInt(1); 
	Extcmd(62,2);
	TaskSwitch(30);
}

static void L0030( void ) {
	// if _HspVar10=1
	PushVar(Var_10,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(31); return; }
	// pos 450, 740
	PushInt(740); 
	PushInt(450); 
	Extcmd(17,2);
	// celput 2, 0
	PushInt(0); 
	PushInt(2); 
	Extcmd(62,2);
	TaskSwitch(31);
}

static void L0031( void ) {
	// if _HspVar3<0
	PushVar(Var_3,0); PushInt(0); CalcLtI(); 
	if (HspIf()) { TaskSwitch(32); return; }
	// _HspVar3 =0
	PushInt(0); 
	VarSet(Var_3,0);
	TaskSwitch(32);
}

static void L0032( void ) {
	// if _HspVar3<40
	PushVar(Var_3,0); PushInt(40); CalcLtI(); 
	if (HspIf()) { TaskSwitch(33); return; }
	// _HspVar11 ="空いてる"
	PushStr("空いてる"); 
	VarSet(Var_11,0);
	TaskSwitch(34);
}

static void L0033( void ) {
	// else
	// if (_HspVar3>39_HspVar3<70)&
	PushVar(Var_3,0); PushInt(39); CalcGtI(); PushVar(Var_3,0); PushInt(70); CalcLtI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(35); return; }
	// _HspVar11 ="普通"
	PushStr("普通"); 
	VarSet(Var_11,0);
	TaskSwitch(36);
}

static void L0035( void ) {
	// else
	// if (_HspVar3>69_HspVar3<100)&
	PushVar(Var_3,0); PushInt(69); CalcGtI(); PushVar(Var_3,0); PushInt(100); CalcLtI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(37); return; }
	// _HspVar11 ="少しいっぱい"
	PushStr("少しいっぱい"); 
	VarSet(Var_11,0);
	TaskSwitch(38);
}

static void L0037( void ) {
	// else
	// _HspVar11 ="満腹"
	PushStr("満腹"); 
	VarSet(Var_11,0);
	TaskSwitch(38);
}

static void L0038( void ) {
	TaskSwitch(36);
}

static void L0036( void ) {
	TaskSwitch(34);
}

static void L0034( void ) {
	// pos 20, 20
	PushInt(20); 
	PushInt(20); 
	Extcmd(17,2);
	// color 0, 0, 0
	PushInt(0); 
	PushInt(0); 
	PushInt(0); 
	Extcmd(24,3);
	// mes "名前:"+_HspVar0
	PushStr("名前:"); PushVar(Var_0,0); CalcAddI(); 
	Extcmd(15,1);
	// mes (("体力:"+_HspVar1)+" / ")+_HspVar2
	PushStr("体力:"); PushVar(Var_1,0); CalcAddI(); PushStr(" / "); CalcAddI(); PushVar(Var_2,0); CalcAddI(); 
	Extcmd(15,1);
	// mes "おなか:"+_HspVar11
	PushStr("おなか:"); PushVar(Var_11,0); CalcAddI(); 
	Extcmd(15,1);
	// mes "好感度:"+_HspVar6
	PushStr("好感度:"); PushVar(Var_6,0); CalcAddI(); 
	Extcmd(15,1);
	// mes "つよさ:"+_HspVar5
	PushStr("つよさ:"); PushVar(Var_5,0); CalcAddI(); 
	Extcmd(15,1);
	// if _HspVar7=1
	PushVar(Var_7,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(39); return; }
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(39);
}

static void L0039( void ) {
	// redraw 1
	PushInt(1); 
	Extcmd(27,1);
	// wait 5
	PushInt(5); 
	Prgcmd(7,1);
	TaskSwitch(40);
}

static void L0040( void ) {
	// if _HspVar8<11
	PushVar(Var_8,0); PushInt(11); CalcLtI(); 
	if (HspIf()) { TaskSwitch(41); return; }
	// _HspVar8 +=1
	PushInt(1); 
	VarCalc(Var_8,0,0);
	TaskSwitch(41);
}

static void L0041( void ) {
	// if _HspVar8=20
	PushVar(Var_8,0); PushInt(20); CalcEqI(); 
	if (HspIf()) { TaskSwitch(42); return; }
	// _HspVar8 =0
	PushInt(0); 
	VarSet(Var_8,0);
	TaskSwitch(42);
}

static void L0042( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(0);
}

static void L0000( void ) {
	TaskSwitch(6);
}

static void L0006( void ) {
	// if _HspVar7=1
	PushVar(Var_7,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(43); return; }
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(43);
}

static void L0043( void ) {
	// _HspVar7 =1
	PushInt(1); 
	VarSet(Var_7,0);
	// randomize 
	Intcmd(39,0);
	// _HspVar12 =rnd(3)
	PushFuncEnd(); 	PushInt(3); 
PushIntfunc(1,1); 
	VarSet(Var_12,0);
	// _HspVar13 =_HspVar12
	PushVar(Var_12,0); 
	VarSet(Var_13,0);
	// if 0
	PushInt(0); 
	if (HspIf()) { TaskSwitch(44); return; }
	// _HspVar14 ++
	VarInc(Var_14,0);
	TaskSwitch(44);
}

static void L0044( void ) {
	// if (_HspVar13=0)|_HspVar14
	PushVar(Var_13,0); PushInt(0); CalcEqI(); PushVar(Var_14,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(45); return; }
	// _HspVar14 =0
	PushInt(0); 
	VarSet(Var_14,0);
	// if _HspVar4|6
	PushVar(Var_4,0); PushInt(6); CalcOrI(); 
	if (HspIf()) { TaskSwitch(46); return; }
	// _HspVar4 =_HspVar4+1
	PushVar(Var_4,0); PushInt(1); CalcAddI(); 
	VarSet(Var_4,0);
	TaskSwitch(46);
}

static void L0046( void ) {
	// gosub
	PushLabel(5); 
	PushLabel(47); Prgcmd(1,2); return;
}

static void L0047( void ) {
	// pos 115, 200
	PushInt(200); 
	PushInt(115); 
	Extcmd(17,2);
	// celput 1, 4
	PushInt(4); 
	PushInt(1); 
	Extcmd(62,2);
	// redraw 1
	PushInt(1); 
	Extcmd(27,1);
	// dialog "なでた！とても満足そう！", 0, "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	PushInt(0); 
	PushStr("なでた！とても満足そう！"); 
	Extcmd(3,3);
	TaskSwitch(48);
}

static void L0048( void ) {
	// goto *L0007
	TaskSwitch(7);
	return;
	// _HspVar14 ++
	VarInc(Var_14,0);
	TaskSwitch(45);
}

static void L0045( void ) {
	// if (_HspVar13=1)|_HspVar14
	PushVar(Var_13,0); PushInt(1); CalcEqI(); PushVar(Var_14,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(49); return; }
	// _HspVar14 =0
	PushInt(0); 
	VarSet(Var_14,0);
	// if _HspVar4|0
	PushVar(Var_4,0); PushInt(0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(50); return; }
	// _HspVar4 =_HspVar4-1
	PushVar(Var_4,0); PushInt(1); CalcSubI(); 
	VarSet(Var_4,0);
	TaskSwitch(50);
}

static void L0050( void ) {
	// gosub
	PushLabel(5); 
	PushLabel(51); Prgcmd(1,2); return;
}

static void L0051( void ) {
	// pos 115, 200
	PushInt(200); 
	PushInt(115); 
	Extcmd(17,2);
	// celput 1, 6
	PushInt(6); 
	PushInt(1); 
	Extcmd(62,2);
	// redraw 1
	PushInt(1); 
	Extcmd(27,1);
	// dialog "なでた！・・・が、機嫌が悪いみたい。", 0, "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	PushInt(0); 
	PushStr("なでた！・・・が、機嫌が悪いみたい。"); 
	Extcmd(3,3);
	TaskSwitch(52);
}

static void L0052( void ) {
	// goto *L0007
	TaskSwitch(7);
	return;
	// _HspVar14 ++
	VarInc(Var_14,0);
	TaskSwitch(49);
}

static void L0049( void ) {
	// if (_HspVar13=2)|_HspVar14
	PushVar(Var_13,0); PushInt(2); CalcEqI(); PushVar(Var_14,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(53); return; }
	// _HspVar14 =0
	PushInt(0); 
	VarSet(Var_14,0);
	// dialog "なでた！・・・興味なさそうだ。", 0, "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	PushInt(0); 
	PushStr("なでた！・・・興味なさそうだ。"); 
	Extcmd(3,3);
	TaskSwitch(54);
}

static void L0054( void ) {
	// goto *L0007
	TaskSwitch(7);
	return;
	TaskSwitch(53);
}

static void L0053( void ) {
	TaskSwitch(7);
}

static void L0007( void ) {
	// _HspVar7 =0
	PushInt(0); 
	VarSet(Var_7,0);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(1);
}

static void L0001( void ) {
	// if _HspVar7=1
	PushVar(Var_7,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(55); return; }
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(55);
}

static void L0055( void ) {
	// _HspVar7 =1
	PushInt(1); 
	VarSet(Var_7,0);
	// randomize 
	Intcmd(39,0);
	// _HspVar15 =rnd(3)
	PushFuncEnd(); 	PushInt(3); 
PushIntfunc(1,1); 
	VarSet(Var_15,0);
	// if _HspVar3>99
	PushVar(Var_3,0); PushInt(99); CalcGtI(); 
	if (HspIf()) { TaskSwitch(56); return; }
	// _HspVar15 =90
	PushInt(90); 
	VarSet(Var_15,0);
	TaskSwitch(56);
}

static void L0056( void ) {
	// _HspVar1 =_HspVar1+50
	PushVar(Var_1,0); PushInt(50); CalcAddI(); 
	VarSet(Var_1,0);
	// _HspVar3 =_HspVar3+20
	PushVar(Var_3,0); PushInt(20); CalcAddI(); 
	VarSet(Var_3,0);
	// if _HspVar3>100
	PushVar(Var_3,0); PushInt(100); CalcGtI(); 
	if (HspIf()) { TaskSwitch(57); return; }
	// _HspVar3 =100
	PushInt(100); 
	VarSet(Var_3,0);
	TaskSwitch(57);
}

static void L0057( void ) {
	// _HspVar13 =_HspVar15
	PushVar(Var_15,0); 
	VarSet(Var_13,0);
	// if 0
	PushInt(0); 
	if (HspIf()) { TaskSwitch(58); return; }
	// _HspVar14 ++
	VarInc(Var_14,0);
	TaskSwitch(58);
}

static void L0058( void ) {
	// if (_HspVar13=0)|_HspVar14
	PushVar(Var_13,0); PushInt(0); CalcEqI(); PushVar(Var_14,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(59); return; }
	// _HspVar14 =0
	PushInt(0); 
	VarSet(Var_14,0);
	// _HspVar1 =_HspVar1+120
	PushVar(Var_1,0); PushInt(120); CalcAddI(); 
	VarSet(Var_1,0);
	// _HspVar3 =_HspVar3+10
	PushVar(Var_3,0); PushInt(10); CalcAddI(); 
	VarSet(Var_3,0);
	// gosub
	PushLabel(5); 
	PushLabel(60); Prgcmd(1,2); return;
}

static void L0060( void ) {
	// pos 115, 200
	PushInt(200); 
	PushInt(115); 
	Extcmd(17,2);
	// celput 1, 4
	PushInt(4); 
	PushInt(1); 
	Extcmd(62,2);
	// redraw 1
	PushInt(1); 
	Extcmd(27,1);
	// dialog "えさを与えた！おいしそうに食べている。", 0, "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	PushInt(0); 
	PushStr("えさを与えた！おいしそうに食べている。"); 
	Extcmd(3,3);
	TaskSwitch(61);
}

static void L0061( void ) {
	// goto *L0008
	TaskSwitch(8);
	return;
	// _HspVar14 ++
	VarInc(Var_14,0);
	TaskSwitch(59);
}

static void L0059( void ) {
	// if (_HspVar13=1)|_HspVar14
	PushVar(Var_13,0); PushInt(1); CalcEqI(); PushVar(Var_14,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(62); return; }
	// _HspVar14 =0
	PushInt(0); 
	VarSet(Var_14,0);
	// _HspVar1 =_HspVar1-50
	PushVar(Var_1,0); PushInt(50); CalcSubI(); 
	VarSet(Var_1,0);
	// gosub
	PushLabel(5); 
	PushLabel(63); Prgcmd(1,2); return;
}

static void L0063( void ) {
	// dialog "えさを与えた！・・・が、あまり食欲がないみたい。", 0, "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	PushInt(0); 
	PushStr("えさを与えた！・・・が、あまり食欲がないみたい。"); 
	Extcmd(3,3);
	TaskSwitch(64);
}

static void L0064( void ) {
	// goto *L0008
	TaskSwitch(8);
	return;
	// _HspVar14 ++
	VarInc(Var_14,0);
	TaskSwitch(62);
}

static void L0062( void ) {
	// if (_HspVar13=2)|_HspVar14
	PushVar(Var_13,0); PushInt(2); CalcEqI(); PushVar(Var_14,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(65); return; }
	// _HspVar14 =0
	PushInt(0); 
	VarSet(Var_14,0);
	// _HspVar1 =_HspVar1+70
	PushVar(Var_1,0); PushInt(70); CalcAddI(); 
	VarSet(Var_1,0);
	// _HspVar3 =_HspVar3+5
	PushVar(Var_3,0); PushInt(5); CalcAddI(); 
	VarSet(Var_3,0);
	// gosub
	PushLabel(5); 
	PushLabel(66); Prgcmd(1,2); return;
}

static void L0066( void ) {
	// dialog "えさを与えた！まずまずの味のようだ。", 0, "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	PushInt(0); 
	PushStr("えさを与えた！まずまずの味のようだ。"); 
	Extcmd(3,3);
	TaskSwitch(67);
}

static void L0067( void ) {
	// goto *L0008
	TaskSwitch(8);
	return;
	// _HspVar14 ++
	VarInc(Var_14,0);
	TaskSwitch(65);
}

static void L0065( void ) {
	// if (_HspVar13=90)|_HspVar14
	PushVar(Var_13,0); PushInt(90); CalcEqI(); PushVar(Var_14,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(68); return; }
	// _HspVar14 =0
	PushInt(0); 
	VarSet(Var_14,0);
	// _HspVar3 =100
	PushInt(100); 
	VarSet(Var_3,0);
	// gosub
	PushLabel(5); 
	PushLabel(69); Prgcmd(1,2); return;
}

static void L0069( void ) {
	// dialog "えさを与えた！・・・もうお腹いっぱいのようだ。", 0, "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	PushInt(0); 
	PushStr("えさを与えた！・・・もうお腹いっぱいのようだ。"); 
	Extcmd(3,3);
	TaskSwitch(70);
}

static void L0070( void ) {
	// goto *L0008
	TaskSwitch(8);
	return;
	TaskSwitch(68);
}

static void L0068( void ) {
	TaskSwitch(8);
}

static void L0008( void ) {
	// _HspVar7 =0
	PushInt(0); 
	VarSet(Var_7,0);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(2);
}

static void L0002( void ) {
	// if _HspVar7=1
	PushVar(Var_7,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(71); return; }
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(71);
}

static void L0071( void ) {
	// dialog "散歩に出かけます。", 2, "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	PushInt(2); 
	PushStr("散歩に出かけます。"); 
	Extcmd(3,3);
	TaskSwitch(72);
}

static void L0072( void ) {
	// if stat=7
	PushSysvar(3,0); PushInt(7); CalcEqI(); 
	if (HspIf()) { TaskSwitch(73); return; }
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(73);
}

static void L0073( void ) {
	// _HspVar7 =1
	PushInt(1); 
	VarSet(Var_7,0);
	// _HspVar10 =1
	PushInt(1); 
	VarSet(Var_10,0);
	// gosub
	PushLabel(5); 
	PushLabel(74); Prgcmd(1,2); return;
}

static void L0074( void ) {
	// redraw 1
	PushInt(1); 
	Extcmd(27,1);
	// repeat
	PushInt(3); 
	PushLabel(9); 
	PushLabel(75); Prgcmd(4,3); return;
	TaskSwitch(75);
}

static void L0075( void ) {
	// _HspVar9 +=1
	PushInt(1); 
	VarCalc(Var_9,0,0);
	// randomize 
	Intcmd(39,0);
	// _HspVar15 =rnd(3)
	PushFuncEnd(); 	PushInt(3); 
PushIntfunc(1,1); 
	VarSet(Var_15,0);
	// _HspVar13 =_HspVar15
	PushVar(Var_15,0); 
	VarSet(Var_13,0);
	// if 0
	PushInt(0); 
	if (HspIf()) { TaskSwitch(76); return; }
	// _HspVar14 ++
	VarInc(Var_14,0);
	TaskSwitch(76);
}

static void L0076( void ) {
	// if (_HspVar13=0)|_HspVar14
	PushVar(Var_13,0); PushInt(0); CalcEqI(); PushVar(Var_14,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(77); return; }
	// _HspVar14 =0
	PushInt(0); 
	VarSet(Var_14,0);
	// dialog "犬に出会った！戦う？", 2, "にゃむにゃむ"+_HspVar9
	PushStr("にゃむにゃむ"); PushVar(Var_9,0); CalcAddI(); 
	PushInt(2); 
	PushStr("犬に出会った！戦う？"); 
	Extcmd(3,3);
	TaskSwitch(78);
}

static void L0078( void ) {
	// if stat=6
	PushSysvar(3,0); PushInt(6); CalcEqI(); 
	if (HspIf()) { TaskSwitch(79); return; }
	// _HspVar3 =_HspVar3-10
	PushVar(Var_3,0); PushInt(10); CalcSubI(); 
	VarSet(Var_3,0);
	// redraw 0
	PushInt(0); 
	Extcmd(27,1);
	// gosub
	PushLabel(5); 
	PushLabel(80); Prgcmd(1,2); return;
}

static void L0080( void ) {
	// _HspVar16 =0
	PushInt(0); 
	VarSet(Var_16,0);
	// repeat
	PushInt(8); 
	PushLabel(10); 
	PushLabel(81); Prgcmd(4,3); return;
	TaskSwitch(81);
}

static void L0081( void ) {
	// gosub
	PushLabel(5); 
	PushLabel(82); Prgcmd(1,2); return;
}

static void L0082( void ) {
	// if _HspVar16=0
	PushVar(Var_16,0); PushInt(0); CalcEqI(); 
	if (HspIf()) { TaskSwitch(83); return; }
	// pos 113, 200
	PushInt(200); 
	PushInt(113); 
	Extcmd(17,2);
	TaskSwitch(83);
}

static void L0083( void ) {
	// if _HspVar16=1
	PushVar(Var_16,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(84); return; }
	// pos 118, 200
	PushInt(200); 
	PushInt(118); 
	Extcmd(17,2);
	// _HspVar16 =_HspVar16+1
	PushVar(Var_16,0); PushInt(1); CalcAddI(); 
	VarSet(Var_16,0);
	TaskSwitch(84);
}

static void L0084( void ) {
	// celput 1, 2
	PushInt(2); 
	PushInt(1); 
	Extcmd(62,2);
	// redraw 1
	PushInt(1); 
	Extcmd(27,1);
	// if _HspVar16=0
	PushVar(Var_16,0); PushInt(0); CalcEqI(); 
	if (HspIf()) { TaskSwitch(85); return; }
	// _HspVar16 +=1
	PushInt(1); 
	VarCalc(Var_16,0,0);
	TaskSwitch(85);
}

static void L0085( void ) {
	// if _HspVar16=2
	PushVar(Var_16,0); PushInt(2); CalcEqI(); 
	if (HspIf()) { TaskSwitch(86); return; }
	// _HspVar16 =0
	PushInt(0); 
	VarSet(Var_16,0);
	TaskSwitch(86);
}

static void L0086( void ) {
	// wait 5
	PushInt(5); 
	Prgcmd(7,1);
	TaskSwitch(87);
}

static void L0087( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(10);
}

static void L0010( void ) {
	// dialog "にゃむにゃむはおびえているようだ・・・", 0, "にゃむにゃむ"+_HspVar9
	PushStr("にゃむにゃむ"); PushVar(Var_9,0); CalcAddI(); 
	PushInt(0); 
	PushStr("にゃむにゃむはおびえているようだ・・・"); 
	Extcmd(3,3);
	TaskSwitch(88);
}

static void L0088( void ) {
	TaskSwitch(89);
}

static void L0079( void ) {
	// else
	// _HspVar1 =_HspVar1-50
	PushVar(Var_1,0); PushInt(50); CalcSubI(); 
	VarSet(Var_1,0);
	// _HspVar3 =_HspVar3-15
	PushVar(Var_3,0); PushInt(15); CalcSubI(); 
	VarSet(Var_3,0);
	// dialog "にゃむにゃむは逃げた！", 0, "にゃむにゃむ"+_HspVar9
	PushStr("にゃむにゃむ"); PushVar(Var_9,0); CalcAddI(); 
	PushInt(0); 
	PushStr("にゃむにゃむは逃げた！"); 
	Extcmd(3,3);
	TaskSwitch(90);
}

static void L0090( void ) {
	TaskSwitch(89);
}

static void L0089( void ) {
	// goto *L000b
	TaskSwitch(11);
	return;
	// _HspVar14 ++
	VarInc(Var_14,0);
	TaskSwitch(77);
}

static void L0077( void ) {
	// if (_HspVar13=1)|_HspVar14
	PushVar(Var_13,0); PushInt(1); CalcEqI(); PushVar(Var_14,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(91); return; }
	// _HspVar14 =0
	PushInt(0); 
	VarSet(Var_14,0);
	// _HspVar1 =_HspVar1+50
	PushVar(Var_1,0); PushInt(50); CalcAddI(); 
	VarSet(Var_1,0);
	// _HspVar3 =_HspVar3+10
	PushVar(Var_3,0); PushInt(10); CalcAddI(); 
	VarSet(Var_3,0);
	// dialog "割ときれいなえさを拾った！", 0, "にゃむにゃむ"+_HspVar9
	PushStr("にゃむにゃむ"); PushVar(Var_9,0); CalcAddI(); 
	PushInt(0); 
	PushStr("割ときれいなえさを拾った！"); 
	Extcmd(3,3);
	TaskSwitch(92);
}

static void L0092( void ) {
	// goto *L000b
	TaskSwitch(11);
	return;
	// _HspVar14 ++
	VarInc(Var_14,0);
	TaskSwitch(91);
}

static void L0091( void ) {
	// if (_HspVar13=2)|_HspVar14
	PushVar(Var_13,0); PushInt(2); CalcEqI(); PushVar(Var_14,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(93); return; }
	// _HspVar14 =0
	PushInt(0); 
	VarSet(Var_14,0);
	// _HspVar1 =_HspVar1-100
	PushVar(Var_1,0); PushInt(100); CalcSubI(); 
	VarSet(Var_1,0);
	// _HspVar3 =_HspVar3-20
	PushVar(Var_3,0); PushInt(20); CalcSubI(); 
	VarSet(Var_3,0);
	// dialog "にゃむにゃむは疲れてきたようだ。", 0, "にゃむにゃむ"+_HspVar9
	PushStr("にゃむにゃむ"); PushVar(Var_9,0); CalcAddI(); 
	PushInt(0); 
	PushStr("にゃむにゃむは疲れてきたようだ。"); 
	Extcmd(3,3);
	TaskSwitch(94);
}

static void L0094( void ) {
	// goto *L000b
	TaskSwitch(11);
	return;
	TaskSwitch(93);
}

static void L0093( void ) {
	TaskSwitch(11);
}

static void L0011( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(9);
}

static void L0009( void ) {
	// _HspVar7 =0
	PushInt(0); 
	VarSet(Var_7,0);
	// _HspVar9 =0
	PushInt(0); 
	VarSet(Var_9,0);
	// _HspVar10 =0
	PushInt(0); 
	VarSet(Var_10,0);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(3);
}

static void L0003( void ) {
	// if _HspVar7=1
	PushVar(Var_7,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(95); return; }
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(95);
}

static void L0095( void ) {
	// _HspVar7 =1
	PushInt(1); 
	VarSet(Var_7,0);
	// dialog (""+_HspVar0)+"は爪を研いだ！", 0, "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	PushInt(0); 
	PushStr(""); PushVar(Var_0,0); CalcAddI(); PushStr("は爪を研いだ！"); CalcAddI(); 
	Extcmd(3,3);
	TaskSwitch(96);
}

static void L0096( void ) {
	// _HspVar5 =_HspVar5+2
	PushVar(Var_5,0); PushInt(2); CalcAddI(); 
	VarSet(Var_5,0);
	// gosub
	PushLabel(5); 
	PushLabel(97); Prgcmd(1,2); return;
}

static void L0097( void ) {
	// pos 115, 200
	PushInt(200); 
	PushInt(115); 
	Extcmd(17,2);
	// celput 1, 4
	PushInt(4); 
	PushInt(1); 
	Extcmd(62,2);
	// redraw 1
	PushInt(1); 
	Extcmd(27,1);
	// dialog (""+_HspVar0)+"は強くなった気がした！", 0, "にゃむにゃむ"
	PushStr("にゃむにゃむ"); 
	PushInt(0); 
	PushStr(""); PushVar(Var_0,0); CalcAddI(); PushStr("は強くなった気がした！"); CalcAddI(); 
	Extcmd(3,3);
	TaskSwitch(98);
}

static void L0098( void ) {
	// _HspVar7 =0
	PushInt(0); 
	VarSet(Var_7,0);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(4);
}

static void L0004( void ) {
	// if _HspVar7=1
	PushVar(Var_7,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(99); return; }
	// dialog "全てのステータスがFULLになります。\n適用しますか？", 2, "Debug Mode"
	PushStr("Debug Mode"); 
	PushInt(2); 
	PushStr("全てのステータスがFULLになります。\r\n適用しますか？"); 
	Extcmd(3,3);
	TaskSwitch(100);
}

static void L0100( void ) {
	// if stat=6
	PushSysvar(3,0); PushInt(6); CalcEqI(); 
	if (HspIf()) { TaskSwitch(101); return; }
	// _HspVar1 =_HspVar2
	PushVar(Var_2,0); 
	VarSet(Var_1,0);
	// _HspVar3 =100
	PushInt(100); 
	VarSet(Var_3,0);
	// _HspVar4 =6
	PushInt(6); 
	VarSet(Var_4,0);
	// _HspVar5 =100000
	PushInt(100000); 
	VarSet(Var_5,0);
	// _HspVar7 =0
	PushInt(0); 
	VarSet(Var_7,0);
	// _HspVar9 =0
	PushInt(0); 
	VarSet(Var_9,0);
	// _HspVar10 =0
	PushInt(0); 
	VarSet(Var_10,0);
	// goto *L0005
	TaskSwitch(5);
	return;
	TaskSwitch(102);
}

static void L0101( void ) {
	// else
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(102);
}

static void L0102( void ) {
	TaskSwitch(99);
}

static void L0099( void ) {
	// dialog "にゃむにゃむ\n\nVer 1.0 b1\n\nMaesuke 2013", 0, "アプリについて"
	PushStr("アプリについて"); 
	PushInt(0); 
	PushStr("にゃむにゃむ\r\n\r\nVer 1.0 b1\r\n\r\nMaesuke 2013"); 
	Extcmd(3,3);
	TaskSwitch(103);
}

static void L0103( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(12);
}

static void L0012( void ) {
	// stop 
	Prgcmd(17,0);
	return;
	// goto 
	Prgcmd(0,0);
	return;
}

//-End of Source-------------------------------------------

CHSP3_TASK __HspTaskFunc[]={
(CHSP3_TASK) L0000,
(CHSP3_TASK) L0001,
(CHSP3_TASK) L0002,
(CHSP3_TASK) L0003,
(CHSP3_TASK) L0004,
(CHSP3_TASK) L0005,
(CHSP3_TASK) L0006,
(CHSP3_TASK) L0007,
(CHSP3_TASK) L0008,
(CHSP3_TASK) L0009,
(CHSP3_TASK) L0010,
(CHSP3_TASK) L0011,
(CHSP3_TASK) L0012,
(CHSP3_TASK) L0013,
(CHSP3_TASK) L0014,
(CHSP3_TASK) L0015,
(CHSP3_TASK) L0016,
(CHSP3_TASK) L0017,
(CHSP3_TASK) L0018,
(CHSP3_TASK) L0019,
(CHSP3_TASK) L0020,
(CHSP3_TASK) L0021,
(CHSP3_TASK) L0022,
(CHSP3_TASK) L0023,
(CHSP3_TASK) L0024,
(CHSP3_TASK) L0025,
(CHSP3_TASK) L0026,
(CHSP3_TASK) L0027,
(CHSP3_TASK) L0028,
(CHSP3_TASK) L0029,
(CHSP3_TASK) L0030,
(CHSP3_TASK) L0031,
(CHSP3_TASK) L0032,
(CHSP3_TASK) L0033,
(CHSP3_TASK) L0034,
(CHSP3_TASK) L0035,
(CHSP3_TASK) L0036,
(CHSP3_TASK) L0037,
(CHSP3_TASK) L0038,
(CHSP3_TASK) L0039,
(CHSP3_TASK) L0040,
(CHSP3_TASK) L0041,
(CHSP3_TASK) L0042,
(CHSP3_TASK) L0043,
(CHSP3_TASK) L0044,
(CHSP3_TASK) L0045,
(CHSP3_TASK) L0046,
(CHSP3_TASK) L0047,
(CHSP3_TASK) L0048,
(CHSP3_TASK) L0049,
(CHSP3_TASK) L0050,
(CHSP3_TASK) L0051,
(CHSP3_TASK) L0052,
(CHSP3_TASK) L0053,
(CHSP3_TASK) L0054,
(CHSP3_TASK) L0055,
(CHSP3_TASK) L0056,
(CHSP3_TASK) L0057,
(CHSP3_TASK) L0058,
(CHSP3_TASK) L0059,
(CHSP3_TASK) L0060,
(CHSP3_TASK) L0061,
(CHSP3_TASK) L0062,
(CHSP3_TASK) L0063,
(CHSP3_TASK) L0064,
(CHSP3_TASK) L0065,
(CHSP3_TASK) L0066,
(CHSP3_TASK) L0067,
(CHSP3_TASK) L0068,
(CHSP3_TASK) L0069,
(CHSP3_TASK) L0070,
(CHSP3_TASK) L0071,
(CHSP3_TASK) L0072,
(CHSP3_TASK) L0073,
(CHSP3_TASK) L0074,
(CHSP3_TASK) L0075,
(CHSP3_TASK) L0076,
(CHSP3_TASK) L0077,
(CHSP3_TASK) L0078,
(CHSP3_TASK) L0079,
(CHSP3_TASK) L0080,
(CHSP3_TASK) L0081,
(CHSP3_TASK) L0082,
(CHSP3_TASK) L0083,
(CHSP3_TASK) L0084,
(CHSP3_TASK) L0085,
(CHSP3_TASK) L0086,
(CHSP3_TASK) L0087,
(CHSP3_TASK) L0088,
(CHSP3_TASK) L0089,
(CHSP3_TASK) L0090,
(CHSP3_TASK) L0091,
(CHSP3_TASK) L0092,
(CHSP3_TASK) L0093,
(CHSP3_TASK) L0094,
(CHSP3_TASK) L0095,
(CHSP3_TASK) L0096,
(CHSP3_TASK) L0097,
(CHSP3_TASK) L0098,
(CHSP3_TASK) L0099,
(CHSP3_TASK) L0100,
(CHSP3_TASK) L0101,
(CHSP3_TASK) L0102,
(CHSP3_TASK) L0103,
(CHSP3_TASK) 0,

};

/*-----------------------------------------------------------*/


/*-----------------------------------------------------------*/

void __HspInit( Hsp3r *hsp3 ) {
	hsp3->Reset( _HSP3CNV_MAXVAR, _HSP3CNV_MAXHPI );
	hsp3->SetDataName( 0 );
	hsp3->SetFInfo( 0, 0 );
	hsp3->SetLInfo( 0, 0 );
	hsp3->SetMInfo( 0, 0 );
}

/*-----------------------------------------------------------*/

