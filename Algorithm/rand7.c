#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu,z,a;

	printf("1-1000の中で当たりの数を予想してください\n\n");

	srand(time(0));
	rand();
	kazu = rand() % 1000 + 1 ;
	
	for (z = 0; kazu != z; a++)
	{
		printf("当たりの数は？\n");
			scanf("%d", &z);
			if (kazu > z)
			{
				printf("当たりより小さい\n");
			}
			if (kazu < z)
			{
				printf("当たりより大きい\n");
			}
	}
	printf("正解！%d回目で正解した\n", a);
	printf("正解は%dでした\n", kazu);
}
