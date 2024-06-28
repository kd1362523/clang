#include<stdio.h>

//関数プロトタイプ宣言
int add(int a, int b);//宣言だから;がいる
main()
{
	int a, b, kotae;
	printf("整数2k：");
	scanf(" %d%d", &a, &b);
	kotae = add(a, b);
	printf("gokei%d\n", kotae);

	//printf("gokei%d",add(a, b));

}
	
//関数定義
//定義付けだから;がいらない
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}
	
//これでも大丈夫
//int add(int a, int b)
//{
//	return a + b;
//}