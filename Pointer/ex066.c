#include<stdio.h>
#include<string.h>

#define CMT 4
main()
{
	char* p_game[3] = { "wii","ds","playstation4"};

	int i;

	char** p;

	p = p_game;

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", *p++);
	}

	
}