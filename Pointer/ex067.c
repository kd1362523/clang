#include<stdio.h>
#include<string.h>

#define CMT 4
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programing1","C"};

	int i, j;

	char* w;


	for (i = 0; i < CMT - 1; i++)
	{
		for (j = i + 1; j < CMT; j++)
		{
			if (strcmp(p_tbl[i], p_tbl[j]) < 0)
			{
				w = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = w;
			}
		}
	}

	for (i = 0; i < CMT; i++)
	{
		printf("%s\n", p_tbl[i]);
	}
}