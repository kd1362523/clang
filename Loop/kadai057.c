#include<stdio.h>

main()
{
	char a;
	printf("アルファベット小文字？");
	scanf("%c", &a);
	for (char b = a + 1; b < 'z'; b++)
	{
		printf("%c ", b);
	}
}