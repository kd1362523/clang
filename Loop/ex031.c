#include <stdio.h>
main()
{
	int no, no1;
		for (no = 0,no1 = 1; no1 <= 10000; no1++) {
			no += no1;//+=��a+=b��a=a+b
			printf("�P����%d�܂ł̘a��%d\n", no1, no);
		}
}