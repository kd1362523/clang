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
		if (ia == -999)
		{
			break;
		}
	}
	
	printf("���v��%d\n���ρ�%.3f", ic, (float)ic / ib);
}