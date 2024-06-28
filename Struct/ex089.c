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
	printf("–¼‘O = ");
	scanf("%s", profile.name);
	printf("ˆŸ‰p”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í = ");
	scanf("%d%d%d", &profile.birth[0], &profile.birth[1], &profile.birth[2]);
	printf("ŒŒ‰tŒ^ = ");
	scanf("%s", profile.blood);
	printf("%s  %d”N%dŒ%d“ú¶‚Ü‚ê@ŒŒ‰tŒ^@%s\n", profile.name, profile.birth[0], profile.birth[1], profile.birth[2], profile.blood);
}