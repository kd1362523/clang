#include <stdio.h>
main()
{
	char moji;

	printf("•¶š‚ğ“ü—Í :");
	scanf("%c", &moji);
	if ('A' <= moji && 'Z' >= moji || 'a' <= moji && 'z' >= moji)
	{
		printf("aruhulabeltutodesu‚Å‚·\n");
	}
	    else
		{
			if ('0' <= moji && '9' >= moji)
			{
				printf("”š‚Å‚·\n");
			}
			else
			{
				printf("‚»‚Ì‘¼‚Ì•¶š‚Å‚·");
			}
		}
}