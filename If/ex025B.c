#include <stdio.h>
main()
{
	char moji;

	printf("��������� :");
	scanf("%c", &moji);
	if ('A' <= moji && 'Z' >= moji)
	{
		printf("�啶���ł�\n");
	}
	else //if��else�̌�ɒu������R���p�N�g�ɂȂ�
	{
		if ('a' <= moji && 'z' >= moji)
		{
			printf("�������ł�\n");
		}
		else
		{
			if ('0' <= moji && '9' >= moji)
			{
				printf("�����ł�\n");
			}
			else
			{
				printf("���̑��̕����ł�");
			}
		}
	}
}