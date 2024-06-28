#include<stdio.h>
main()
{
	char* p_ride3[3] = { "car","bus","shinkansen" };

	char* p;

	int i;

	for (i = 0; i <= 2; i++)
	{
		p = p_ride3[i];
		while (*p)
		{
			putchar(*p++);
		}
		printf("\n");
	}
}