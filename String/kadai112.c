#include<stdio.h>
main()
{
	char a[] = "abcde";
	char b[100];
	printf("�i�R�s�[���j�z��P data1[] = ");
	for (int g = 0; g <= 4; g++)
	{
		printf("%c", a[g]);
	}
	for (int g = 0; g <= 4; g++)
	{
		b[g] = a[g];
	}
	printf("\n�i�R�s�[��j�z��Q data2[] = ");
	for (int g = 0; g <= 4; g++)
	{
		printf("%c", b[g]);
	}
}