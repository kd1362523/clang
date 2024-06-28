#include <stdio.h>
main()
{
	int gokei,ia;
	gokei = 0;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &ia);
	while (1)
	{
		gokei += ia;
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &ia);
		if (ia == -999)
		{
			break;
		}
	}
	printf("‡Œv=%d\n", gokei);
}