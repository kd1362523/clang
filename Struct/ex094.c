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
		printf("%d�l��(���O)", i);
		scanf("%s", s->name);
		printf("%d�l��(���N�������󔒋󂯂ċL��)", i);
		scanf("%d%d%d", &s->birth[0], &s->birth[1], &s->birth[2]);
		printf("%d�l��(���t�^)", i);
		scanf("%s", s->blood);
		s++;
	}

	s = &zyo;
	for (i = 0; i < 5; i++)
	{
		if (strcmp(s->blood,"A") == 0)
		{
			printf("%s--", s->name);
			printf("%d�N%d��%d�����܂�  ", s->birth[0], s->birth[1], s->birth[2]);
			printf("���t�^�[%s�^\n", s->blood);
		}
		s++;
	}
}