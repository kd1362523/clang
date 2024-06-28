#include <stdio.h>
main()
{
	int no;
	printf("”");
	scanf("%d", &no);
	do
	{
		no--;
		printf("*****\n");
	} while (no > 0);
}