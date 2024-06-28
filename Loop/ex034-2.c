#include <stdio.h>
main()
{
	int no,no1;
	printf("êî");
	scanf("%d", &no);
	do
	{
		no1 = 0;
		do 
		{
			 printf("*");
			 no1++;
		} while (no1 <= 4);
		printf("\n");
		no--;

	} while (no > 0);
}