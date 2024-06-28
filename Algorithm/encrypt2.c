#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[100];
	int i,n;
	int k[100];

	srand(time(0));

	printf("•¶š—ñ");
	scanf("%s" ,& s);

	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] += k[i];
	}
	printf("ˆÃ†‰»•¶š—ñ%s\n", s);
	printf("ˆÃ†‰»ƒL[");

	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
}