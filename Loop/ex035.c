#include <stdio.h>
main()
{
	int gokei,ia;
	gokei = 0;
	printf("��������");
	scanf("%d", &ia);
	while (1)
	{
		gokei += ia;
		printf("��������");
		scanf("%d", &ia);
		if (ia == -999)
		{
			break;
		}
	}
	printf("���v=%d\n", gokei);
}