#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a = &a, * p_b = &b, * q;
	printf("実行前*p_a=%d *p_b=%d\n", *p_a, *p_b);
	q = p_a;
	p_a = p_b;
	p_b = q;
	printf("実行後*p_a=%d *p_b=%d\n", *p_a, *p_b);
}