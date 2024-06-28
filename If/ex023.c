#include <stdio.h>
main()
{
	int no,no1,no2;
	printf("•b”‚ğ“ü—Í :");
	scanf("%d", &no);
	if (no <= 5000) {
		no1 = no / 3600;
		no = no % 3600;
		no2 = no / 60;
		no = no % 60;
		printf("%dŠÔ%d•ª%d•b\n", no1, no2, no);
	}
	else {
		printf("ƒGƒ‰[\n");
	}
}