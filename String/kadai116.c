#include<stdio.h>
void strcnt(char* str1, char* str2);
main()
{
	char a[100],b[100];
	int g = 0;
	printf("•¶š—ñ1H");
	gets(a);
	printf("•¶š—ñ2H");
	gets(b);
	strcnt(a, b);
	printf("”z—ña:%s\n", a);
}
void strcnt(char* str1, char* str2)
{
	int i, j;
	for (i = 0; *(str1 + i) != '\0'; i++);
	for (j = 0; *(str1 + i) = *(str2 + j); j++, i++);
}