#include<stdio.h>
main()
{
	char box[100], box2[100], w[100];
	int i3;
	printf("����1:");
	scanf("%s", &box[0]);
	printf("����2:");
	scanf("%s", &box2[0]);
	printf("moji1=%s\tmoji2=%s\n", box, box2);
	//w��box
	for (i3 = 0; box[i3] != '\0'; i3++)
	{
		w[i3] = box[i3];
	}
	w[i3] = '\0';
	//box��box2
	for (i3 = 0; box2[i3] != '\0'; i3++)
	{
		box[i3] = box2[i3];
	}
	box[i3] = '\0';
	//box2��w
	for (i3 = 0; w[i3] != '\0'; i3++)
	{
		box2[i3] = w[i3];
	}
	box2[i3] = '\0';
	printf("����ւ�\nmoji1=%s\tmoji2=%s\n", box, box2);
}