#include<stdio.h>
main()
{
	int i, g, ff;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (i = 0; i < 2; i++)
	{
		for (g = 0, ff = 0; ff < 3; ff++)
		{
			printf("a[%d][%d]=%d\n", i, ff,  a[i][ff]);
			g += a[i][ff];
		}
		printf("%dgg=%d\n\n", i, g);
	}
}