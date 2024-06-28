#include<stdio.h>
main()
{
	char c[] = "kadai12h.c";
	char r[100];
	char* p_c, * p_r;
	p_c = c;
	p_r = r;
	p_r = p_c;
	for (int i = 0; i < 10; i++)
	{
		
		printf("%c", *p_r++);
		
		
	}
}