#include<stdio.h>

main()
{
	int low = 0, high = 10,mid = 0,s;
	int d[10+1] = { 10,15,18,23,28,35,47,55,68,78,96 };

	printf("�T���l");
	scanf("%d", &s);

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (s == d[mid])break;
	
		if (s > d[mid])
		{
			low = mid + 1;
		}

		if (s < d[mid])
		{
			high = mid - 1;
		}
	}
	if(low>high)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("�z���%d�ԖڂɌ�������\n", mid+1);
	}
}