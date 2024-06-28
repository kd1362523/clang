#include <stdio.h>
main()
{
	double ia,ib;
	printf("2つの実数地？");
	scanf("%lf%lf", &ia,&ib);
	printf("***%.1fと%.1fの四則演算***\n和=%f　差=%f　積=%f　商=%f", ia, ib, ia + ib,ia - ib, ia * ib, ia / ib);
}