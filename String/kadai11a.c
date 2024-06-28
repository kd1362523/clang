#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	for (int i = 0; i <= 6; i++)
	{
		for (int g = 0; g <= 2; g++)
		{
			putchar(day[i][g]);
		}
		printf("\n");
	}
}