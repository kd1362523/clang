#include <stdio.h>
main()
{
	char moji;
	printf("��������� :");
	scanf("%c", &moji);
	if ('A' <= moji)
	{
		if ('Z' >= moji)
		{
			printf("�啶���ł�\n");
		}
		else 
		{
			printf("���̑�\n");
		}
    }
	else 
	{
		printf("���̑�\n");
	}
}