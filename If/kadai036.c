#include <stdio.h>
main()
{
	int ia,ib;
	
	printf("����1�H");
	scanf("%d", &ia);
	printf("����2�H");
	scanf("%d", &ib);
	
	if (ia == ib)
	{
		printf("%d��%d�͓�����\n",ia,ib);
	}
	if (ia >= ib)
	{
		printf("%d�̕���%d���%d�傫��\n", ia, ib, ia - ib);
	}
	if (ia <= ib)
	{
		printf("%d�̕���%d���%d������\n", ia, ib, ib - ia);
	}
}