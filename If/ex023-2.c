#include <stdio.h>
main()
{
	int no,no1,no2,no3;
	printf("西暦を入力 :");
	scanf("%d", &no);
	no1 = no % 400;
	no2 = no % 4;
	no3 = no % 100;
	if (no1 == 0 || no2 == 0 && no3 != 0) {
		printf("うるう年です\n");
	}
	else {
		printf("うるう年ではありません\n");
	}
}