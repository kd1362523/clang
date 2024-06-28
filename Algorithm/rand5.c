#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu,z;

	srand(time(0));
	rand();
	kazu = rand() % 300 + 1;
	for (z = 1; z < 101; z++)
	{
		kazu = rand() % 300 + 1;
		printf("%4d",kazu);
		if (z % 10 == 0)
		{
			printf("\n");
		}
	}
}
