#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char data ,data2;//���͗p

	c = scanf("%c%c",&data, &data2);//����

	while (c != EOF)//ctar+z�ŏI��
	{
		printf("%d",c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data, &data2);//����
	}

	printf("%d\n", printf("HELLO") );//���p�͂P�o�C�g����������T���o��
	printf("%d\n", printf("����ɂ���"));//�S�p�͂Q�o�C�g����������P�O���o��

}