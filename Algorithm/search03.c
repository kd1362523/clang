#include<stdio.h>

main()
{
	int low = 0, high = 10,mid = 0,s;
	int d[10+1] = { 10,15,18,23,28,35,47,55,68,78,96 };

	printf("探索値");
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
		printf("見つからなかった\n");
	}
	else
	{
		printf("配列の%d番目に見つかった\n", mid+1);
	}
}