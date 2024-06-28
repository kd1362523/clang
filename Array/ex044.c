#include<stdio.h>
main()
{
	char box[100], box2[100], w[100];
	int i3;
	printf("•¶Žš1:");
	scanf("%s", &box[0]);
	printf("•¶Žš2:");
	scanf("%s", &box2[0]);
	printf("moji1=%s\tmoji2=%s\n", box, box2);
	//w‚Ébox
	for (i3 = 0; box[i3] != '\0'; i3++)
	{
		w[i3] = box[i3];
	}
	w[i3] = '\0';
	//box‚Ébox2
	for (i3 = 0; box2[i3] != '\0'; i3++)
	{
		box[i3] = box2[i3];
	}
	box[i3] = '\0';
	//box2‚Éw
	for (i3 = 0; w[i3] != '\0'; i3++)
	{
		box2[i3] = w[i3];
	}
	box2[i3] = '\0';
	printf("“ü‚ê‘Ö‚¦\nmoji1=%s\tmoji2=%s\n", box, box2);
}