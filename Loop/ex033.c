#include <stdio.h>
main()
{
	int no, no1,no3;
	printf("��");
	scanf("%d", &no);
		for (no1 = 0,no3 = 0; no != -999; no3++)
		{
			no1 += no;
			printf("��");
			scanf("%d", &no);
		}
			printf("=%d\t=%.2f\n", no1,(float)no1/no3);
}