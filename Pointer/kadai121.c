#include <stdio.h>
main()
{
	int a = 100, b = 10;
	int* p_a = &a, * p_b = &b;
	
	printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d", a, b, *p_a + *p_b, a, b, *p_a - *p_b, a, b, *p_a * *p_b, a, b, *p_a / *p_b);
}