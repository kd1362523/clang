#include<stdio.h>

main()
{
	int s, i=0;
	int d[10+1] = { 10,5,30,77,16,3,47,29,37,33 };

	for (i = 0; i < 10; i++) {
		printf("% d", d[i]);
	}

	printf("\n�T���l>");
	scanf("%d", &s);

	d[10] = s;
	
	for (i = 0; s != d[i]; i++)	{}

	if (i >= 10)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("�z���%d�ԖڂɌ�������\n", i+1);
	}
}