#include <stdio.h>
main()
{
	int c[10];
	int ia = 0, ib = 0, ic = 0;

	printf("�����i�[�X�X�X�ŏI��)???");
	scanf("%d", &ia);

	while (ia != -999)
	{
		c[ib] = ia;
		ib++;
		ic++;
		printf("�����i�[�X�X�X�ŏI��)???");
		scanf("%d", &ia);
		if (ia == -999)
		{
			break;
		}

	}

	printf("�z�� c = ");
	for (ib = 0; ib < ic; ib++)
	{
		printf("%d ", c[ib]);
	}
}