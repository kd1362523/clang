#include <stdio.h>
main()
{
	int no, no1;
	printf("�������� :");
	scanf("%d", &no);
		for (no1 = 1; no1 <= 5; no1++) {
			printf("%d\t",no * no1);
		}
}