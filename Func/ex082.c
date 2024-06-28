#include<stdio.h>

void max(int* p,int size,int or);

main()
{
	int data[8] = { 6, 10, 8, 2, 9, 5, 1, 7 };
	int sort,i;
	printf("ソート方法を入力 0;降順1;昇順");
	scanf("%d", &sort);
	max(data, 8, sort);
	for (i = 0; i < 8; i++) {
		printf("%d ", data[i]);
	}
}

void max(int* p, int size, int or )
{
	int i, j, w;
	if (or==0) {
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (*(p+i)<*(p+j))
				{
					w = *(p+i);
					*(p + i) = *(p + j);
					*(p + j) = w;
				}
			}
		}
	}
	else {
		int i, j, w;
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (*(p + i) > *(p + j))
				{
					w = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = w;
				}
			}
		}
	}
}
