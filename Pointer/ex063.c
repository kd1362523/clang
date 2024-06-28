#include<stdio.h>
main()
{
	char* p_ride3[3] = { "car","bus","shinkansen" };

	int i;

	for (i = 0; i <= 2; i++)
	{
		printf("%s\n", p_ride3[i]);
	}
	
}