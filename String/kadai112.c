#include<stdio.h>
main()
{
	char a[] = "abcde";
	char b[100];
	printf("（コピー元）配列１ data1[] = ");
	for (int g = 0; g <= 4; g++)
	{
		printf("%c", a[g]);
	}
	for (int g = 0; g <= 4; g++)
	{
		b[g] = a[g];
	}
	printf("\n（コピー先）配列２ data2[] = ");
	for (int g = 0; g <= 4; g++)
	{
		printf("%c", b[g]);
	}
}