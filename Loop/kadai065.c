#include <stdio.h>
main()
{
	int ia = 0, ib = 0, ic = 0;
	
	printf("整数（ー９９９で終了)???");
	scanf("%d", &ia);

	do
	{
		ib++;
		ic += ia;
		printf("整数（ー９９９で終了)???");
		scanf("%d", &ia);
	}while (ia != -999);
	
	printf("合計＝%d\n平均＝%.6f", ic, (float)ic / ib);
}