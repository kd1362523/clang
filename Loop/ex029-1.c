#include <stdio.h>
main()
{
	int ia;
	printf("数を入れて");
	scanf("%d", &ia);
	while (0 < ia)
	{
		printf("END");
		ia--;
	}
}