#include <stdio.h>
void strcnt(char* str1,char* str2); /* �v���g�^�C�v�錾 */
main()
{
	char str1[256], str2[256];
	printf("������?:");
	gets(str1); 
	strcnt(str1, str2);
	printf("str1=%s\nstr2=%s\n", str1,str2);
}
/* �֐�strcnt�̋L�q */
void strcnt(char* str1, char* str2)
{
	int i, j;
	for (i = 0; *(str1 + i) != '\0'; i++);
	
		printf("������%d\n",i);
		i--;
		for (j = 0; i >= 0; i--, j++)
		{
			*(str2 + j) = *(str1 + i);
		}
		*(str2 + j) = '\0';
	
}