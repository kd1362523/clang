#include <stdio.h>
main()
{
	int i;
	printf("breaktestpro\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			break;
		}
			printf("%3d", i);
	}
	
	printf("\n\ncontinutestpro\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			continue;
		}
		printf("%3d", i);
	}
}