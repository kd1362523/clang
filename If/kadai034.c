#include <stdio.h>
main()
{
	char ia;
	
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &ia);
	if ('A' <= ia && 'Z' >= ia)
	{
		printf("�啶���ł�\n");
	}
	else if ('a' <= ia && 'z' >= ia)
	{
		printf("�������ł�\n");
	}
	else
	{
		printf("elo");
	}
}