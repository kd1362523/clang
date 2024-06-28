#include<stdio.h>
main()
{
	
	int d, s = 0, c = 0;
	int ret;

	printf("®”F");
	ret = scanf("%d", &d);

	while (ret != EOF)
	{
		s += d;
		c++;

		printf("®”F");
		ret = scanf("%d", &d);
	}

	printf("gokei%d hekin%.2f", s, (float)s / c);
}