#include <stdio.h>
main()
{
	char ia;
	
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &ia);
	if ('A' <= ia && 'Z' >= ia)
	{
		printf("�ϊ����ʂ�%c\n", ia + 32);
	}
	else if ('a' <= ia && 'z' >= ia)
	{
		printf("�ϊ����ʂ�%c\n", ia - 32);
	}
	else//������if�Ɉ����������đ啶���̎���else���o�Ă���҂���
	{
		printf("�ϊ����ʂ�%c\n",ia);
	}
}