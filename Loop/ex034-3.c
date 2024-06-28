#include <stdio.h>
main()
{
	int no,no1=0,no2;
	printf("êî");
	scanf("%d", &no);
	do
	{
		no2 = 0;
		do 
		{
			 printf("*");
			 no2++;
		} while (no2 < no1+1);//àÍâÒñ⁄ÇÃèàóùÇÕ(no2<no1+1)ÇæÇ©ÇÁãUÇ…Ç»ÇÈ
		printf("\n");                        //1   0  +1
		no1++;

	} while (no > no1);
}