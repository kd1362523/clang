#include <stdio.h>
main()
{
	double ia,ib;
	printf("2�̎����n�H");
	scanf("%lf%lf", &ia,&ib);
	if (ia > ib)
	{
		printf("�傫���ق���%f�ł�", ia);
	}
	else
	{
		printf("�傫���ق���%f�ł�", ib);
	}
}