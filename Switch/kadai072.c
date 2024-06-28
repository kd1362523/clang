#include<stdio.h>

main()
{
	
	char c;
	
	printf("アルファベット？");
	scanf("%c", &c);
	switch (c)
	{
	case 'a': 
		printf("a->America\n   Australia");
		break;

	case 'e': 
		printf("e->ENgland");
		break;

	case 'f': 
		printf("f->France");
		break;

	case 'j': 
		printf("j->Japan");
		break;
	}
}