#include <stdio.h>
main()
{
	char moji;

	printf("��������� :");
	scanf("%c", &moji);
	if ('A' <= moji && 'Z' >= moji || 'a' <= moji && 'z' >= moji)
	{
		printf("aruhulabeltutodesu�ł�\n");
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