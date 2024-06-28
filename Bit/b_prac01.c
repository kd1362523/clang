#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum Bitstate
{
	Base = 0,				//00000000�@�ʏ���
	Poison = 1 << 0,		//00000001�@�ǂ����
	Sleep = 1 << 1,			//00000010�@�˂ނ���
	Paralysis = 1 << 2,		//00000100�@�܂Џ��
	Burn = 1 << 3,			//00001000�@�₯�Ǐ��
	AtkUp = 1 << 4,			//00010000�@�U���̓A�b�v���
	AtkDown = 1 << 5		//00100000�@�U���̓_�E�����
};

typedef unsigned int UINT;

typedef struct
{
	char name[20];
	int hp;
	int mp;
	int atk;
	int def;
	UINT MyState;
} Chara;

typedef struct
{
	char name[20];
	int hp;
	int mp;
	int atk;
	int def;
	UINT MyState;
} Mob;

void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
int DisplayMenu(void);

main()
{
	//				name  hp mp atk def MyState
	Chara chara = { "HERO",20,15,15,10,Base };
	Mob mob[3] = { {"A",10,10,5,5,Base},
					{"B",5,15,7,3,Base},
					{"C",15,5,15,15,Base} };
	strnd(time(0));
}

int DisplayMenu(void)
{
	char ch;
	printf("�R�}���h\n1,������\n2,������܂���\n");
	ch = getch();
}

void DisplayStatus(UINT s)
{
	printf("*****���݂̏��*****\n");
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
		printf("�ǂ̏�Ԃɂ��܂����H\n1,poison 2,sleep 3,paralysis 4,burn 5,atkup 6,atkdown 0,end=>");
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
		printf("�ǂ̏�Ԃ��񕜂��܂���\n1,poison 2,sleep 3,paralysis 4,burn 5,atkup 6,atkdown 7,endandend 0,end=>");
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