#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int a = 0;
	int* p_a;
	printf("�|�C���^���Œ�ŕ\��\n");
	printf("�z��data[]=");
	for (a = 0; a < 8; a++)
	{
		printf("%d,", data[a]);
	}
	p_a = data;
	printf("\n�|�C���^��ω������ĕ\��\n");
	printf("�z��data[]=");
	for (a = 0; a < 8; a++)
	{
		
		printf("%d,", *p_a++);
	}
}