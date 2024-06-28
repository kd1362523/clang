#include <stdio.h>
main()
{
	int ia = 0, ib = 0, ic = 0;
	
	do
	{
		ia++;
		printf("%d",ia);
		ib += ia;
		printf("+");
	}while (ib <= 300);
	
	printf("=%d",ib);
}