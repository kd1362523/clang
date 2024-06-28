#include<stdio.h>

main()
{
	int a;

	printf("®”H");
	scanf("%d", &a);
	for (int b = 0; b <= 10; b++)
	{
		printf("%d ", a + b);
	}
}