#include<stdio.h>

main()
{
	char s[100];
	int i,k[100];

	printf("ˆÃ†‰»•¶š");
	scanf("%s" ,& s);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("\ns[%d]‚Ì•œ†‰»ƒL[", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("%s", s);
}