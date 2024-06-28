#include<stdio.h>
main()
{
	int a[10] = {10,20,30,40,50,60,70,80,90,100};
	int b[10] = {100,200,300,400,500,600,700,800,900,1000};
	
	int i;
	int g = 0;

	
	
	
	printf("a=");
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", a[i]);
		g += a[i];
	}
	printf("\n‚²‚¤‚¯‚¢%d\t‚Ö‚¢‚«‚ñ%d", g, g / i);
	g = 0;
	printf("\nb=");
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", b[i]);
		g += b[i];
	}
	printf("\n‚²‚¤‚¯‚¢%d\t‚Ö‚¢‚«‚ñ%d", g, g / i);
}