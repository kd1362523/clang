#include <stdio.h>
main()
{
	int e,s1,s2;

	printf("演算子を入力 :");

	scanf("%d", &e);

	if (e >= 5, e <= 0) {
		printf("エラーaaaaaaaaaaaaaaa\n");
	}

	else {
		printf("2つの整数を入力 :");

		scanf("%d%d", &s1, &s2);

		if (e == 1) {
			printf("%d\n", s1 + s2);
		}

		else {
			if (e == 2) {
				printf("%d\n", s1 - s2);
			}
			else {
				if (e == 3) {
					printf("%d\n", s1 * s2);
				}
				else {
					if (e == 4) {
						printf("%f\n", (float)s1 / s2);
					}
				}
			}
		}
	}
}