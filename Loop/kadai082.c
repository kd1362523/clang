#include <stdio.h>
main()
{
	int ia = 0, ib = 0, ic = 0;
	
	

	while (ia != -999)
	{
		printf("整数（ー９９９で終了)???");
		scanf("%d", &ia);
		if (ia <= -1)
		{
			continue;
		}
		ib++;
		ic += ia;
		
		
		if (ia == -999)
		{
			break;
		}
	}
	
	printf("合計＝%d\n平均＝%.3f", ic, (float)ic / ib);
}