#include <stdio.h>
main()
{
	int no,no1=0,no2;
	printf("数");
	scanf("%d", &no);
	do
	{
		no2 = 0;

		do 
		{
			printf(" ");
			no2++;
		} while (no2 < no-no1);

		no2 = 0;//初期化！！！！！！！！！！！！

		do 
		{
			 printf("*");
			 no2++;
		} while (no2 < no1+1);
		printf("\n");                       
		no1++;

	} while (no1<no);
}