#include<stdio.h>

//�֐��v���g�^�C�v�錾
int add(int a, int b);//�錾������;������
main()
{
	int a, b, kotae;
	printf("����2k�F");
	scanf(" %d%d", &a, &b);
	kotae = add(a, b);
	printf("gokei%d\n", kotae);

	//printf("gokei%d",add(a, b));

}
	
//�֐���`
//��`�t��������;������Ȃ�
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}
	
//����ł����v
//int add(int a, int b)
//{
//	return a + b;
//}