#include <stdio.h>
main()
{
	int ia ,ia2;
	ia2 = 0;
	printf("数を入れて");
	scanf("%d", &ia);
	while (ia2 < ia)
	{
		printf("*");
		ia2++;
	}
}