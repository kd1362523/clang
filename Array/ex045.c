#include<stdio.h>
main()
{
	int i, g;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (g = 0, i = 0; i <= 2; i++)
	{
		printf("a[0][%d]=%d\n", i, a[0][i]);
		g += a[0][i];
	}
	printf("0gg=%d\n\n", g);
	for (g = 0, i = 0; i <= 2; i++)
	{
		printf("a[1][%d]=%d\n", i, a[1][i]);
		g += a[1][i];
	}
	printf("1gg=%d\n\n", g);
}