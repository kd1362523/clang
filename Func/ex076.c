#include<stdio.h>

void shisoku(int x, int y, int* wa, float* sa);

main()
{
	int a, b, c;
	float d;
	printf("”’l2“ü—Í?F");
	scanf(" %d%d", &a, &b);
	shisoku(a, b, &c, &d);
	printf("wa=%d sa=%.2f \n", c, d);
}

void shisoku(int x, int y, int* wa, float* sa)
{
	*wa = x + y;
	*sa = (float)(x + y) / 2;
}