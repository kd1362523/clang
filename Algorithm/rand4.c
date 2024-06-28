#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu,z;

	srand(time(0));
	rand();
	kazu = rand() % 5 + 1;
	printf("‰^¨ƒŒƒxƒ‹");
	for (z = 0; z < kazu; z++)
	{
		printf("*");
	}
}
