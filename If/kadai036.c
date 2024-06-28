#include <stdio.h>
main()
{
	int ia,ib;
	
	printf("®”1H");
	scanf("%d", &ia);
	printf("®”2H");
	scanf("%d", &ib);
	
	if (ia == ib)
	{
		printf("%d‚Æ%d‚Í“™‚µ‚¢\n",ia,ib);
	}
	if (ia >= ib)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢\n", ia, ib, ia - ib);
	}
	if (ia <= ib)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢\n", ia, ib, ib - ia);
	}
}