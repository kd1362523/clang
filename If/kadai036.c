#include <stdio.h>
main()
{
	int ia,ib;
	
	printf("整数1？");
	scanf("%d", &ia);
	printf("整数2？");
	scanf("%d", &ib);
	
	if (ia == ib)
	{
		printf("%dと%dは等しい\n",ia,ib);
	}
	if (ia >= ib)
	{
		printf("%dの方が%dより%d大きい\n", ia, ib, ia - ib);
	}
	if (ia <= ib)
	{
		printf("%dの方が%dより%d小さい\n", ia, ib, ib - ia);
	}
}