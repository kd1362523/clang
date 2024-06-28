#include<stdio.h>

int g(int a, int b, int c);
float h(int a, int b, int c);
main()
{
	int a, b, c, gokei;
	float heikin;
	printf("®”3kF");
	scanf(" %d%d%d", &a, &b, &c);
	gokei = g(a, b, c);
	heikin = h(a, b, c);
	printf("gokei%dheikin%.2f\n", gokei, heikin);

}

int g(int a, int b, int c)
{
	return a + b + c;
}

float h(int a, int b, int c)
{
	return (a + b + c) / 3.0;
}