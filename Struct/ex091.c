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
	printf("���O = ");
	scanf("%s", p->name);
	printf("���p�N�������󔒂ŋ�؂��ē��� = ");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("���t�^ = ");
	scanf("%s", p->blood);
	printf("%s  %d�N%d��%d�����܂�@���t�^�@%s\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
}