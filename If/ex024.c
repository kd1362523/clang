#include <stdio.h>
main()
{
	char moji;
	printf("文字を入力 :");
	scanf("%c", &moji);
	if ('A' <= moji)
	{
		if ('Z' >= moji)
		{
			printf("大文字です\n");
		}
		else 
		{
			printf("その他\n");
		}
    }
	else 
	{
		printf("その他\n");
	}
}