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
	printf("�ō����_�@���O:%s �X�R�A:%d\n", max_name, max_score);

	printf("name?");
	scanf("%s", &name);
	while (1)
	{
		printf("���݂̃X�R�A;%d(ENTER��+1,e�ŏI���)\n", score);
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