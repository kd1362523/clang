#include <stdio.h>
main()
{
	char no;
	printf("小文字を入力 :");
	scanf("%c", &no);
	printf("大文字に変換して %c\n", no-32);
}