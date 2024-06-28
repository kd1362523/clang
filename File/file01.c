#include<stdio.h>
main()
{
	FILE* fp;
	int a = 10, b = 20;
	fp = fopen("file01.txt", "w");
	fprintf(fp, "w–ì–_\n");
	fprintf(fp, "dou–ìŒ |‚ÌŒ\n");
	fprintf(fp, "1 10 dou‚Ì’ßˆä\n");
	fclose(fp);
}