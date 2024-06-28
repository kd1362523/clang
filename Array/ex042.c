#include<stdio.h>
main()
{
	char box[] = "Appap2";
	int i3;
	printf("一文字\n");
	for (i3 = 0; box[i3]!='\0'; i3++)
	{
		printf("%c\n", box[i3]);
	}
	printf("\n文字列\n");
	//printf("%s\n",&box[1]);//%sの時はアドレスを指定する
	printf("%s\n",box);//配列名だけ書くと戦闘アドレスを表示
}