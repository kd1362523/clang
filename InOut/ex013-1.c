#include <stdio.h>
main()
{
	char su , su2;
	su = '5';
	su2 = '6';
	printf(" %c X %c = %d \n ", su,su2,(su - '0') * (su2 - '0'));
}