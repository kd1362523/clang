#include <stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] =
	{
		{ "�G���s�c", 30, 5},
		{ "�P�V�S��", 50, 2},
		{ "�t�f�o�R", 500, 3}
	};

	struct syohin_data* s = syohin;

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("���i��:%s\t", s->name);
		printf("�P ��:%4d\t", s->tanka);
		printf("�� ��:%4d\t", s->kosuu);
		printf("���z:\\%4d\n", s->tanka * s->kosuu);
		s++;
	}
}