#include<stdio.h>
main()
{
	char coc;
	printf("���Z�q :");
	scanf("%c", &coc);
	switch (coc)
	{
	case '+' :
		printf("���Z");
		break;
	case '-' :
		printf("���Z");
		break;
	case '*':
		printf("��Z");
		break;
	case '/':
		printf("���Z");
		break;
	case '%':
		printf("���܂�");
		break;
	default:
		printf("���̑�");
	}
}