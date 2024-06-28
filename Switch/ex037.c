#include<stdio.h>
main()
{
	char coc;
	printf("‰‰Zq :");
	scanf("%c", &coc);
	switch (coc)
	{
	case '+' :
		printf("‰ÁZ");
		break;
	case '-' :
		printf("Œ¸Z");
		break;
	case '*':
		printf("æZ");
		break;
	case '/':
		printf("œZ");
		break;
	case '%':
		printf("‚ ‚Ü‚è");
		break;
	default:
		printf("‚»‚Ì‘¼");
	}
}