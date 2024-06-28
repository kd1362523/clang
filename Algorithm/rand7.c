#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu,z,a;

	printf("1-1000‚Ì’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n\n");

	srand(time(0));
	rand();
	kazu = rand() % 1000 + 1 ;
	
	for (z = 0; kazu != z; a++)
	{
		printf("“–‚½‚è‚Ì”‚ÍH\n");
			scanf("%d", &z);
			if (kazu > z)
			{
				printf("“–‚½‚è‚æ‚è¬‚³‚¢\n");
			}
			if (kazu < z)
			{
				printf("“–‚½‚è‚æ‚è‘å‚«‚¢\n");
			}
	}
	printf("³‰ğI%d‰ñ–Ú‚Å³‰ğ‚µ‚½\n", a);
	printf("³‰ğ‚Í%d‚Å‚µ‚½\n", kazu);
}
