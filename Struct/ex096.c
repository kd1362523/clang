#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display3(struct syohin_data *syohin);
main()
{
	struct syohin_data syohin = { "�P�V�S��", 50 };
	
	display3(&syohin);
}

void display3(struct syohin_data *syohin)
{
	//�A�h���X���󂯎���Ă���̂�
	//�����������\

	//�P����100�ɂ��Ă�

	syohin->tanka = 100;

	//�����S����strcpy���g���Ώ����������
	//������̏���������strcpy()������

	strcpy(syohin->name, "����");

	printf("%s  %d\n",
		syohin->name, syohin->tanka);

}