#include<stdio.h>
main()
{
	char data[] = "Language";

	char* p_data,ch;

	int i = 0, j = 0;

	p_data = data;
	printf("data[]=Language\n");
	printf("����������?");
	scanf("%c", &ch);
	
	while (*(p_data + i)) {	
		if (ch == *(p_data + i)) {
			printf("%d ", i + 1);
			j++;
		}
		i++;
	}
	if (j > 0) {
		printf("�����ڂł�\n");
	}
	else {
		printf("no\n");
	}
}