#include<stdio.h>
main()
{
	char c[] = "mikan to ringo";
	char* p_c;
	p_c = c;
	for (int i = 0; i < 5 ; i++)
	{
		printf("%c", *p_c++);	
	}
	*p_c++;
	for (int i = 6; i < 8; i++)
	{
		printf("%c", *p_c++);
	}
	*p_c++;
	for (int i = 9; i < 15; i++)
	{
		printf("%c", *p_c++);
	}
}