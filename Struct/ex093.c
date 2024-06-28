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
		{ "エンピツ", 30, 5},
		{ "ケシゴム", 50, 2},
		{ "フデバコ", 500, 3}
	};

	struct syohin_data* s = syohin;

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("商品名:%s\t", s->name);
		printf("単 価:%4d\t", s->tanka);
		printf("個 数:%4d\t", s->kosuu);
		printf("金額:\\%4d\n", s->tanka * s->kosuu);
		s++;
	}
}