#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu,z,a;

	printf("1-1000�̒��œ�����̐���\�z���Ă�������\n\n");

	srand(time(0));
	rand();
	kazu = rand() % 1000 + 1 ;
	
	for (z = 0; kazu != z; a++)
	{
		printf("������̐��́H\n");
			scanf("%d", &z);
			if (kazu > z)
			{
				printf("�������菬����\n");
			}
			if (kazu < z)
			{
				printf("��������傫��\n");
			}
	}
	printf("�����I%d��ڂŐ�������\n", a);
	printf("������%d�ł���\n", kazu);
}
