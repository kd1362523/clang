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
	printf("���O = ");
	scanf("%s", profile.name);
	printf("���p�N�������󔒂ŋ�؂��ē��� = ");
	scanf("%d%d%d", &profile.birth[0], &profile.birth[1], &profile.birth[2]);
	printf("���t�^ = ");
	scanf("%s", profile.blood);
	printf("%s  %d�N%d��%d�����܂�@���t�^�@%s\n", profile.name, profile.birth[0], profile.birth[1], profile.birth[2], profile.blood);
}