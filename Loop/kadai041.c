#include <stdio.h>
main()
{
	int ia = 0, ib = 0, ic = 0;
	
	printf("�����i�[�X�X�X�ŏI��)???");
	scanf("%d", &ia);

	while (ia != -999)
	{
		ib++;
		ic += ia;
		printf("�����i�[�X�X�X�ŏI��)???");
		scanf("%d", &ia);
	}
	
	printf("���v��%d\n���ρ�%.2f", ic, (float)ic / ib);
}