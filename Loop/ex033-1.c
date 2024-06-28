#include <stdio.h>
main()
{
	int no, no1=0,no3=0;
	printf("êî");
	scanf("%d", &no);
		do
		{
			no1 += no;
			printf("êî");
			scanf("%d", &no);
			no3++;
		} while (no != -999);
			printf("=%d\t=%.2f\n", no1,(float)no1/no3);
}