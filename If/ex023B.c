#include <stdio.h>
main()
{
	int no;
	printf("������� :");
	scanf("%d", &no);
		if (no == 2) 
		{
			printf("29");
		}
		else if(no == 4 || no == 6 || no == 9 || no == 11)
		{
			printf("30");
		}
		else 
		{
			printf("31");
		}
}