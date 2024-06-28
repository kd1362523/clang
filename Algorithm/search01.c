#include<stdio.h>

main()
{
	int s, i=0;
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };

	for (i = 0; i < 10; i++) {
		printf("% d", d[i]);
	}

	printf("\n’Tõ’l>");
	scanf("%d", &s);
	i = 0;

	while (i < 10) {
		if (s == d[i])break;
		i++;
	}
	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("”z—ñ‚Ì%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½\n", i+1);
	}
}