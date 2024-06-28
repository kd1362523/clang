#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa, * pb;
	
	for (int aa = 0; aa < 10; aa++)
	{
		pa = &a[aa];
		pb = &b[aa];
		pa = pb;
	}
	for (int aa = 9; aa != -1; aa--)
	{
		pb = &a[aa];
		printf("%d ", *pb);
	}
}