#include <stdio.h>
main()
{
	double ia,ib;
	printf("2�̎����n�H");
	scanf("%lf%lf", &ia,&ib);
	printf("***%.1f��%.1f�̎l�����Z***\n�a=%f�@��=%f�@��=%f�@��=%f", ia, ib, ia + ib,ia - ib, ia * ib, ia / ib);
}