#include<stdio.h>
main()
{
	char box[] = "Appap2";
	int i3;
	printf("�ꕶ��\n");
	for (i3 = 0; box[i3]!='\0'; i3++)
	{
		printf("%c\n", box[i3]);
	}
	printf("\n������\n");
	//printf("%s\n",&box[1]);//%s�̎��̓A�h���X���w�肷��
	printf("%s\n",box);//�z�񖼂��������Ɛ퓬�A�h���X��\��
}