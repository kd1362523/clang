#include<stdio.h>
main()
{
	char box[] = "orange222ppapppapppappppppapppapppap";
	int i3;
	for (i3 = 0; box[i3]!='\0'; i3++){}
	printf("������%s\n",&box[0]);
	printf("������%d", i3);
}

/*#include<stdio.h>
main()
{
	char box[1000];
	int i3;
	printf("����:");
	scanf("%s", &box[0]);
	for (i3 = 0; box[i3] != '\0'; i3++){}
	printf("������%d", i3);
}*/