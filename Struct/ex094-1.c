#include <stdio.h>
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile name[5] = { { "rina", { 2002,02,20 }, "A" },
							{ "rinawww", { 2155,02,50 }, "AB" },
							{ "rina4545", { 2077,04,20 }, "O" },
							{ "rina810", { 2003,02,80 }, "G" },
							{ "yazyu", { 1999,02,20 }, "HH" }};

	struct profile* p = name;

	int i;
	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 02)
		{
			printf("%s--", p->name);
			printf("%d”N%02dŒŽ%02d“ú¶‚Ü‚ê  ", p->birth.nen, p->birth.tuki, p->birth.hi);
			printf("ŒŒ‰tŒ^[%sŒ^\n", p->blood);
		}
		p++;
	}
}