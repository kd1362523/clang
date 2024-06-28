#include<stdio.h>
main()
{
	char c[100];
	char* p_c;
	printf("•¶š—ñH");
	scanf("%c", &c);
	p_c = c;
	for (int i = 0; i < 5 ; i++)
	{
		printf("%c", *p_c++);	
	}
	
}