#include<stdio.h>
enum Bitstate
{
	Base = 0,				//00000000　通常状態
	Poison = 1 << 0,		//00000001　どく状態
	Sleep = 1 << 1,			//00000010　ねむり状態
	Paralysis = 1 << 2,		//00000100　まひ状態
	Burn = 1 << 3,			//00001000　やけど状態
	AtkUp = 1 << 4,			//00010000　攻撃力アップ状態
	AtkDown = 1 << 5		//00100000　攻撃力ダウン状態
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	//状態を管理する変数MyStateを宣言してBase(0)で初期化
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("*****現在の状態*****\n");
	if (s & Poison)
	{
		printf("Poison\n");
	}
	if (s & Sleep)
	{
		printf("Sleep\n");
	}
	if (s & Paralysis)
	{
		printf("Paralysis\n");
	}
	if (s & Burn)
	{
		printf("Burn\n");
	}
	if (s & AtkUp)
	{
		printf("AtkUp\n");
	}
	if (s & AtkDown)
	{
		printf("AtkDown\n");
	}
	printf("********************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態にしますか？\n1,poison 2,sleep 3,paralysis 4,burn 5,atkup 6,atkdown 0,end=>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態を回復しますか\n1,poison 2,sleep 3,paralysis 4,burn 5,atkup 6,atkdown 7,endandend 0,end=>");
		scanf("%d", &a);
		if (a == 7)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		default:
			break;
		}
	}
}