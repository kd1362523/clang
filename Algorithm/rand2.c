#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));
	rand();
	kazu = rand() % 6 + 1;
	printf("R%d\n", kazu);
}
