#include <stdio.h>
main()
{
	int, no, no1, no2, no3;
	printf("1つ目の実数");
	scanf("%d" & no);
	printf("2つ目の実数");
	scanf("%d" & no1);
	printf("3つ目の実数");
	scanf("%d" & no2);
	no3 = no + no1 + no2;
	printf("合計=%d\t平均=%f\n", no3, no3 / 3.0);
}