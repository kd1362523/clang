#include<stdio.h>
main()
{
	char box[100], box2[100], w[100];
	int i3;
	printf("文字1:");
	scanf("%s", &box[0]);
	printf("文字2:");
	scanf("%s", &box2[0]);
	printf("moji1=%s\tmoji2=%s\n", box, box2);
	//wにbox
	for (i3 = 0; box[i3] != '\0'; i3++)
	{
		w[i3] = box[i3];
	}
	w[i3] = '\0';
	//boxにbox2
	for (i3 = 0; box2[i3] != '\0'; i3++)
	{
		box[i3] = box2[i3];
	}
	box[i3] = '\0';
	//box2にw
	for (i3 = 0; w[i3] != '\0'; i3++)
	{
		box2[i3] = w[i3];
	}
	box2[i3] = '\0';
	printf("入れ替え\nmoji1=%s\tmoji2=%s\n", box, box2);
}