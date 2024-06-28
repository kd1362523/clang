#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char data ,data2;//入力用

	c = scanf("%c%c",&data, &data2);//入力

	while (c != EOF)//ctar+zで終了
	{
		printf("%d",c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data, &data2);//入力
	}

	printf("%d\n", printf("HELLO") );//半角は１バイト文字だから５が出る
	printf("%d\n", printf("こんにちは"));//全角は２バイト文字だから１０が出る

}