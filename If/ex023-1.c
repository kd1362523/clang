#include <stdio.h>
main()
{
	int no, no1, no2;
	printf("秒数を入力 :");
	scanf("%d", &no);
	
	if (no < 0) 
	{
		printf("プラス入れろボケ\n");
	}

	else {
		if (no <= 5000) 
		{
			no1 = no / 3600;
			no = no % 3600;
			no2 = no / 60;
			no = no % 60;
			printf("%d時間%d分%d秒\n", no1, no2, no);
		}

		else 
		{
			printf("エラー\n");
		}
	}
}