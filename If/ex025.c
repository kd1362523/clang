#include <stdio.h>
main()
{
	char moji;

	printf("文字を入力 :");
	scanf("%c", &moji);
	if ('A' <= moji && 'Z' >= moji || 'a' <= moji && 'z' >= moji)
	{
		printf("aruhulabeltutodesuです\n");
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