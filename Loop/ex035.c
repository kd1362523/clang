#include <stdio.h>
main()
{
	int gokei,ia;
	gokei = 0;
	printf("数を入れて");
	scanf("%d", &ia);
	while (1)
	{
		gokei += ia;
		printf("数を入れて");
		scanf("%d", &ia);
		if (ia == -999)
		{
			break;
		}
	}
	printf("合計=%d\n", gokei);
}