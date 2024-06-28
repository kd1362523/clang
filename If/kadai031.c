#include <stdio.h>
main()
{
	double ia,ib;
	printf("2‚Â‚ÌŽÀ”’nH");
	scanf("%lf%lf", &ia,&ib);
	if (ia > ib)
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í%f‚Å‚·", ia);
	}
	else
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í%f‚Å‚·", ib);
	}
}