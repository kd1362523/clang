#include<stdio.h>
main()
{
	FILE* fp;
	int a = 10, b = 20;
	fp = fopen("file01.txt", "w");
	fprintf(fp, "�w��_\n");
	fprintf(fp, "dou�쌏 �|�̌�\n");
	fprintf(fp, "1 10 dou�̒߈�\n");
	fclose(fp);
}