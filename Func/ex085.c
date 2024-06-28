#include <stdio.h>
void strcnt(char* str1, char* str2); /* プロトタイプ宣言 */
main()
{
	char str1[256], str2[256];
	printf("配列a:");
	gets(str1); 
	printf("配列b:");
	gets(str2);
	strcnt(str1, str2);
	printf("配列a:%s\n",str1);
}
/* 関数strcntの記述 */
void strcnt(char* str1, char* str2)
{
	int i, j;
	for (i = 0; *(str1 + i) != '\0'; i++);
	for (j = 0; *(str1 + i) = *(str2 + j); j++, i++);
}