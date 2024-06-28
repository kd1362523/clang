#include<stdio.h>
main()
{
	FILE* fp;
	int max_score, score = 0;
	char ch, max_name[20];
	char name[20];
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("最高得点　名前:%s スコア:%d\n", max_name, max_score);

	printf("name?");
	scanf("%s", &name);
	while (1)
	{
		printf("現在のスコア;%d(ENTERで+1,eで終わり)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	if (score > max_score)
	{
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
	}
}