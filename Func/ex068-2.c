#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char p;//“ü—Í—p

	p = gets(dumy);//“ü—Í

	while (p != NULL)//ctar+z‚ÅI—¹
	{
		printf("%s\n",dumy);
		p= gets(dumy);
	}

	
}