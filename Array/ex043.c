#include<stdio.h>
main()
{
	char box[] = "orange222ppapppapppappppppapppapppap";
	int i3;
	for (i3 = 0; box[i3]!='\0'; i3++){}
	printf("文字列%s\n",&box[0]);
	printf("文字数%d", i3);
}

/*#include<stdio.h>
main()
{
	char box[1000];
	int i3;
	printf("文字:");
	scanf("%s", &box[0]);
	for (i3 = 0; box[i3] != '\0'; i3++){}
	printf("文字数%d", i3);
}*/