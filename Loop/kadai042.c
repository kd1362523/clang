#include <stdio.h>
main()
{
	int ia = 0, ib = 0, ic = 0;
	
	while (ib <= 300)
	{
		ia++;
		printf("%d",ia);
		ib += ia;
		printf("+");
	}
	
	printf("=%d",ib);
}