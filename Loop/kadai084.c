#include <stdio.h>
main()
{
	int ia = 0, ib = 0, ic = 0;
	
	

	while (ia != -999)
	{
		printf("����1�i�[�X�X�X�ŏI��)???");
		scanf("%d", &ia);
		printf("����2�i�[�X�X�X�ŏI��)???");
		scanf("%d", &ib);
		if (ia == -999)
		{
			break;
		}
		if (ib == -999)
		{
			break;
		}
		if (ib == 0)
		{
			continue;
		}
		printf("%d/%d=%d���܂�%d\n", ia, ib, ia / ib, ia % ib);
		
		
		
	}
	
	
}