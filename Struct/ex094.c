#include <stdio.h>
struct syohin_data
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct syohin_data zyo;

	struct syohin_data* s = &zyo;

	int i;
	for (i = 1; i < 6; i++)
	{
		printf("%d人目(名前)", i);
		scanf("%s", s->name);
		printf("%d人目(生年月日を空白空けて記入)", i);
		scanf("%d%d%d", &s->birth[0], &s->birth[1], &s->birth[2]);
		printf("%d人目(血液型)", i);
		scanf("%s", s->blood);
		s++;
	}

	s = &zyo;
	for (i = 0; i < 5; i++)
	{
		if (strcmp(s->blood,"A") == 0)
		{
			printf("%s--", s->name);
			printf("%d年%d月%d日生まれ  ", s->birth[0], s->birth[1], s->birth[2]);
			printf("血液型ー%s型\n", s->blood);
		}
		s++;
	}
}