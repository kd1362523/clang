#include <stdio.h>
main()
{
	int ia,ib;
	printf("二つの数値？");
	scanf("%d%d", &ia, &ib);
	printf("***%dと%dの四則演算***\n%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%dあまり%d\n", ia, ib, ia, ib, ia + ib, ia, ib, ia - ib, ia, ib, ia * ib, ia, ib, ia / ib, ia % ib);;
}