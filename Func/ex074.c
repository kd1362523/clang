#include<stdio.h>

void display1(int n1);
void display2(int *n2);
main()
{
	int a,b;
	printf("data1?�F");
	scanf(" %d", &a);
	display1(a);
	printf("a=%d\n\n", a);
	printf("data1?�F");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
}

void display1(int n)
{
	printf("���la%d\n",n);
	n += 10;
	return;
}

void display2(int* n)  //�|�C���^��main�̊֐���ς��邱�Ƃ��ł���
{
	printf("���lb=%d\n", *n);
	*n += 10;
	return;
}