#include<stdio.h>

int get_max(int* p,int size);
int get_min(int* p,int size);
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	printf("�z��̓��e\n");
	printf("�z��data[]=");
	for (int a = 0; a < 9; a++)
	{
		printf("%d ", data[a]);
	}
	printf("\n�ő�l=%d\n", get_max(data,9));
	printf("�ŏ��l=%d\n", get_min(data,9));
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