#include <stdio.h>
main()
{
	int itbl[3] = { 10, 20, 30 };
	int* p_itbl;
	double dtbl[3] = { 10.0, 20.0, 30.0 };
	double* p_dtbl;
	//�z��(����ł�itbl[3]�Ȃ�)�̓A�h���X(�z��̐擪�A�h���X)
	//p_itbl = &itbl[0]�Ə����Ă�OK
	p_itbl = itbl;
	printf("*p_itbl = %d\t", *p_itbl);
	p_itbl++;
	printf("%d\t", *p_itbl);
	p_itbl++;
	printf("%d\n", *p_itbl);
	p_dtbl = dtbl;
	printf("*p_dtbl = %.1f\t", *p_dtbl);
	p_dtbl++;
	printf("%.1f\t", *p_dtbl);
	p_dtbl++;
	printf("%.1f\n", *p_dtbl);
}