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
		printf("�v���C���[�P�̗̑� : %d\n", plHP[0]);
		printf("�v���C���[�Q�̗̑� : %d\n", plHP[1]);
		printf("�v���C���[�P�̃^�[��(�P:�ʏ�U���Q:���U���R:�K�[�h�j��");
		scanf("%d", &plCom[0]);

		switch (plCom[0])
		{
		case 1:
			printf("�ʏ�U��\n\n");
			plHP[1] -= rand() % 30 + 1;
			break;
		case 2:
			printf("���U��\n\n");
			plHP[1] -= rand() % 21 + 40;
			plHP[0] -= rand() % 20;
			break;
		case 3:
			printf("��\n\n");
			plHP[0] += rand() % 15 + 1;
			break;
		}

		if (plHP[0] <= 0)
		{
			printf("����");
			break;
		}
		if (plHP[1] <= 0)
		{
			printf("�v���C���[�Q���j");
			break;
		}

		printf("�v���C���[1�̗̑� : %d\n", plHP[0]);
		printf("�v���C���[2�̗̑� : %d\n\n", plHP[1]);
		printf("�v���C���[2�̃^�[��(�P:�ʏ�U���Q:���U���R:�K�[�h�j��");
		scanf("%d", &plCom[1]);

		switch (plCom[1])
		{
		case 1:
			printf("�ʏ�U��\n\n");
			plHP[0] -= rand() % 30 + 1;
			break;
		case 2:
			printf("���U��\n\n");
			plHP[0] -= rand() % 21 + 40;
			plHP[1] -= rand() % 20;
			break;
		case 3:
			printf("��\n\n");
			plHP[1] += rand() % 15 + 1;
			break;
		}
		if (plHP[1] <= 0)
		{
			printf("������");
			break;
		}
		if (plHP[0] <= 0)
		{
			printf("�v���C���[1���j");
			break;
		}
	}
}
