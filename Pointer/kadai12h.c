#include<stdio.h>
main()
{
	char c[] = "kadai12h.c";
	char* p_c;
	p_c = c;
	for (int i = 0; i < 10; i++)
	{
		
		printf("%c", *p_c++);
		
		
	}
}