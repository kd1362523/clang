#include<stdio.h>

main()
{
	int a;
	char c;
	printf("10�i���̐����H");
	scanf("%d", &a);
	
	printf("�A���t�@�x�b�g(o or h or d)�H");
	scanf("%*c%c", &c);
	switch (c)
	{
	case 'o': 
		printf("%o", a);
		break;

	case 'h': 
		printf("%x", a);
		break;

	case 'd': 
		printf("%d", a);
		break;

	
	}
}