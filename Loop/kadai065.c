#include <stdio.h>
main()
{
	int ia = 0, ib = 0, ic = 0;
	
	printf("�����i�[�X�X�X�ŏI��)???");
	scanf("%d", &ia);

	do
	{
		ib++;
		ic += ia;
		printf("�����i�[�X�X�X�ŏI��)???");
		scanf("%d", &ia);
	}while (ia != -999);
	
	printf("���v��%d\n���ρ�%.6f", ic, (float)ic / ib);
}