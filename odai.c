#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int plHP[2] = { 100,100 };
	int plCom[2] = {};

	srand(time(0));
	rand();
	
	while (1)
	{
		printf("プレイヤー１の体力 : %d\n", plHP[0]);
		printf("プレイヤー２の体力 : %d\n", plHP[1]);
		printf("プレイヤー１のターン(１:通常攻撃２:強攻撃３:ガード）＞");
		scanf("%d", &plCom[0]);

		switch (plCom[0])
		{
		case 1:
			printf("通常攻撃\n\n");
			plHP[1] -= rand() % 30 + 1;
			break;
		case 2:
			printf("強攻撃\n\n");
			plHP[1] -= rand() % 21 + 40;
			plHP[0] -= rand() % 20;
			break;
		case 3:
			printf("回復\n\n");
			plHP[0] += rand() % 15 + 1;
			break;
		}

		if (plHP[0] <= 0)
		{
			printf("自滅");
			break;
		}
		if (plHP[1] <= 0)
		{
			printf("プレイヤー２撃破");
			break;
		}

		printf("プレイヤー1の体力 : %d\n", plHP[0]);
		printf("プレイヤー2の体力 : %d\n\n", plHP[1]);
		printf("プレイヤー2のターン(１:通常攻撃２:強攻撃３:ガード）＞");
		scanf("%d", &plCom[1]);

		switch (plCom[1])
		{
		case 1:
			printf("通常攻撃\n\n");
			plHP[0] -= rand() % 30 + 1;
			break;
		case 2:
			printf("強攻撃\n\n");
			plHP[0] -= rand() % 21 + 40;
			plHP[1] -= rand() % 20;
			break;
		case 3:
			printf("回復\n\n");
			plHP[1] += rand() % 15 + 1;
			break;
		}
		if (plHP[1] <= 0)
		{
			printf("自メル");
			break;
		}
		if (plHP[0] <= 0)
		{
			printf("プレイヤー1撃破");
			break;
		}
	}
}
