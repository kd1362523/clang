#include<stdio.h>
main()
{
	float box[3],i4 = 0.0;
	int i3;
	for (i3 = 0; i3 <= 2; i3++)
	{
		printf("zi:");
		scanf("%f", &box[i3]); /*�z��ł�&�ŃA�h���X�w��\*/
		i4 += box[i3];
	}
	printf("go%.2f\n", i4);
	printf("hekin%.2f\n", i4 / 3.0);
}