#include<stdio.h>
#include<string.h>

#define DCNT 8
main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j, w, gap;
	gap = DCNT / 2;
	while (gap > 0)
	{
		for (i = gap; i < DCNT; i++)
		{
			for (j = i - gap; j >= 0; j -= gap)
			{
				if (d[j + gap] < d[j])
				{
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else
				{
					break;
				}
			}
		}
		gap = gap / 2;
	}
	for (i = 0; i < DCNT; i++)
	{
		printf("%d ", d[i]);
	}
}