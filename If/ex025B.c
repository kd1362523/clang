#include <stdio.h>
main()
{
	char moji;

	printf("文字を入力 :");
	scanf("%c", &moji);
	if ('A' <= moji && 'Z' >= moji)
	{
		printf("大文字です\n");
	}
	else //ifをelseの後に置いたらコンパクトになる
	{
		if ('a' <= moji && 'z' >= moji)
		{
			printf("小文字です\n");
		}
		else
		{
			if ('0' <= moji && '9' >= moji)
			{
				printf("数字です\n");
			}
			else
			{
				printf("その他の文字です");
			}
		}
	}
}