#include<stdio.h>

main()
{
	int s, i=0;
	int d[10+1] = { 10,5,30,77,16,3,47,29,37,33 };

	for (i = 0; i < 10; i++) {
		printf("% d", d[i]);
	}

	printf("\n探索値>");
	scanf("%d", &s);

	d[10] = s;
	
	for (i = 0; s != d[i]; i++)	{}

	if (i >= 10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("配列の%d番目に見つかった\n", i+1);
	}
}