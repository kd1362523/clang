#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char p;//入力用

	p = gets(dumy);//入力

	while (p != NULL)//ctar+zで終了
	{
		printf("%s\n",dumy);
		p= gets(dumy);
	}

	
}