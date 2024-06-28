#include<stdio.h>
main()
{
	char coc;
	int a, b, c;
	printf("ˆ— :");
	scanf("%c", &coc);
	switch (coc/10)
	{
	case 1 :
		printf("10dai");
		break;
	case 2 :
		printf("20dai");
		break;
	case 3 :
		printf("30dai");
		break;
	case 4:
		printf("40dai");
		break;
	default:
		printf("éÒ");
	}
}