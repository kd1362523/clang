#include<stdio.h>
main()
{
	FILE* fp;
	int score = 0;
	char ch;
	char name[20];
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
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose(fp);
}