#include <stdio.h>
main()
{
	int ia;
	
	printf("0から100までの整数？");
	scanf("%d", &ia);
	
	
	if (ia > 90)
	{
		printf("この数値の判定結果は「5」です\n");
	}
	if (ia >= 80 && ia < 90)
	{
		printf("この数値の判定結果は「4」です\n");
	}
	if (ia >= 50 && ia < 80)
	{
		printf("この数値の判定結果は「3」です\n");
	}
	if (ia >= 30 && ia < 50)
	{
		printf("この数値の判定結果は「2」です\n");
	}
	if (ia < 30)
	{
		printf("この数値の判定結果は「1」です\n");
	}
}