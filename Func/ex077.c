#include<stdio.h>

void shisoku(int x, int y, int z, int* bb, int* bk);

main()
{
	int a, b, c,bb,bk;
	printf("”’l3“ü—Í?F");
	scanf(" %d%d%d", &a, &b, &c);
	shisoku(a, b, c,&bb,&bk);
	printf("%d%d", bb, bk);
}

void shisoku(int x, int y, int z, int* bb, int* bk)
{
	*bb = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*bk = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
}