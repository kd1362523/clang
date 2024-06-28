#include<stdio.h>

main()
{
	printf("   1 2 3 4 5 6 7 8 9\n=========================\n");
	for (int a = 1; a <= 9; a++)
	{
		printf("%d/", a);
		for (int b = 1; b <= 9; b++)
		{
			printf("%d ", a * b);
		}
		printf("\n");
	}
}