#include <stdio.h>
main()
{
	int no;
	printf("�������� :");
	scanf("%d", &no);
	if (no < 1989) {
		printf(" ���a���܂�ł�\n");
	}
	if (no > 2019) {
		printf(" �ߘa���܂�ł�\n");
	}
	else {
		printf("�������܂�ł�\n");
	}
}