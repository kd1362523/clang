#include <stdio.h>
#include <string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile profile;
	struct profile* p;
	p = &profile;
	printf("–¼‘O = ");
	scanf("%s", p->name);
	printf("ˆŸ‰p”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í = ");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("ŒŒ‰tŒ^ = ");
	scanf("%s", p->blood);
	printf("%s  %d”N%dŒŽ%d“ú¶‚Ü‚ê@ŒŒ‰tŒ^@%s\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
}