3#include <stdio.h>
main()
{
	//�����^�ϐ� i�̐錾��1�ւ̏�����
	int no = 1;
	//do�`while�̌J��Ԃ�����
	do
	{
		//i=?�̕\��(?�̕����͕ϐ�i�̒l)�ϐ�no�̃C���N�������g
		printf("no=%d\n", no++);
		//�㔻�菈��(i��10�ȉ��̎��J��Ԃ�)
	} while (no <= 10);
}