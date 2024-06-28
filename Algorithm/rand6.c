#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu,z,a;

	printf("１グー　２チョキ　３パー ");
		scanf("%d", &a);

	srand(time(0));
	rand();
	kazu = rand() % 3 ;
	switch (a)
	{
	case 1:printf("pg\n");
		break;
	case 2:printf("pt\n");
		break;
	case 3:printf("pp\n");
		break;
	}
	printf("\n");
	switch (kazu)
	{
	case 0:printf("kg\n");
		break;
	case 1:printf("kt\n");
		break;
	case 2:printf("kp\n");
		break;
	}
	printf("\n");
	switch (((a-1)-kazu+3)%3)
	{
	case 0:printf("hiki");
		break;
	case 1:printf("kkati");
		break;
	case 2:printf("pkati");
		break;
	}
}
