#include<stdio.h>
main()
{
	char a[100];
	int g = 0;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &a);
	int i3;
	for (i3 = 0; a[i3] != '\0'; i3++) {}
	printf("•¶š—ñ");
	for (g = 0; i3 > g; g++)
	{
		printf("%c", a[g]);
	}
	printf("\n•¶š”%d•¶š", g);
}