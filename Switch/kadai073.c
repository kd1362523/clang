#include<stdio.h>

main()
{
	int a;
	char c;
	printf("10進数の整数？");
	scanf("%d", &a);
	
	printf("アルファベット(o or h or d)？");
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