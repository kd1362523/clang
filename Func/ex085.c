#include <stdio.h>
void strcnt(char* str1, char* str2); /* �v���g�^�C�v�錾 */
main()
{
	char str1[256], str2[256];
	printf("�z��a:");
	gets(str1); 
	printf("�z��b:");
	gets(str2);
	strcnt(str1, str2);
	printf("�z��a:%s\n",str1);
}
/* �֐�strcnt�̋L�q */
void strcnt(char* str1, char* str2)
{
	int i, j;
	for (i = 0; *(str1 + i) != '\0'; i++);
	for (j = 0; *(str1 + i) = *(str2 + j); j++, i++);
}