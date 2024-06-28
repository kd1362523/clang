#include <stdio.h>
main()
{
	char ia;
	
	printf("アルファベット？");
	scanf("%c", &ia);
	if ('A' <= ia && 'Z' >= ia)
	{
		printf("変換結果は%c\n", ia + 32);
	}
	else if ('a' <= ia && 'z' >= ia)
	{
		printf("変換結果は%c\n", ia - 32);
	}
	else//小文字ifに引っかかって大文字の時にelseが出てくるぴえん
	{
		printf("変換結果は%c\n",ia);
	}
}