#include <stdio.h>
main()
{
	int ia = 0, ib = 0, ic = 0;
	
	

	while (ia != -999)
	{
		printf("�����i�[�X�X�X�ŏI��)???");
		scanf("%d", &ia);
		if (ia <= -1)
		{
			continue;
		}
		ib++;
		ic += ia;
		
		
		if (ia == -999)
		{
			break;
		}
	}
	
	printf("���v��%d\n���ρ�%.3f", ic, (float)ic / ib);
}