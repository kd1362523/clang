#include <stdio.h>
main()
{
	int a = 100, b = 200, g;
	int* p_a = &a, * p_b = &b;
	printf("実行前a=%d b=%d\n", a, b);
	g = *p_a;
	*p_a = *p_b;
	*p_b = g;
	printf("実行後a=%d b=%d\n", a, b);
}