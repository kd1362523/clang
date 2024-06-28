#include <stdio.h>
main()
{
	char ia;
	
	printf("アルファベット？");
	scanf("%c", &ia);
	if ('A' <= ia && 'Z' >= ia)
	{
		printf("大文字です\n");
	}
	else if ('a' <= ia && 'z' >= ia)
	{
		printf("小文字です\n");
	}
	else
	{
		printf("elo");
	}
}