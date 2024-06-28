#include <stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í :");
	scanf("%c", &moji);
	if ('A' <= moji)
	{
		if ('Z' >= moji)
		{
			printf("‘å•¶Žš‚Å‚·\n");
		}
		else 
		{
			printf("‚»‚Ì‘¼\n");
		}
    }
	else 
	{
		printf("‚»‚Ì‘¼\n");
	}
}