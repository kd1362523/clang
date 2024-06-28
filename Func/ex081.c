#include<stdio.h>

int get_max(int* p,int size);
int get_min(int* p,int size);
main()
{
	int data[8] = { 6, 10, 8, 2, 9, 5, 1, 7 };
	printf("Å‘å’l=%d\n", get_max(data,8));
	printf("Å¬’l=%d\n", get_min(data,8));
}

int get_max(int* p, int size)
{
	int max, i;
	max = *p;
	for (i = 1; i < size; i++)
	{
		if (max < *(p + i))
		{
			max = *(p + i);
		}
	}
	return(max);
}

int get_min(int* p, int size)
{
	int min, i;
	min = *p;
	for (i = 1; i < size; i++)
	{
		if (min > *(p + i))
		{
			min = *(p + i);
		}
	}
	return(min);
}