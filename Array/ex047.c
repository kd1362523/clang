#include<stdio.h>
main()
{
	float x[3][2], i4;
	int i3 ,i5;
	for (i3 = 0 ; i3 < 3; i3++)
	{
		for (i5=0, i4 = 0.0; i5 < 2; i5++)
		{
			printf("x[%d][%d]=",i3,i5);
			scanf("%f", &x[i3][i5]);
			i4 += x[i3][i5];
		}
		printf("%dhekin%.2f\n\n", i3, i4 / 2.0);
	}
	
}