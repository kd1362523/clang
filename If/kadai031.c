#include <stdio.h>
main()
{
	double ia,ib;
	printf("2つの実数地？");
	scanf("%lf%lf", &ia,&ib);
	if (ia > ib)
	{
		printf("大きいほうは%fです", ia);
	}
	else
	{
		printf("大きいほうは%fです", ib);
	}
}