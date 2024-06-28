#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a; //変数宣言をしているときに*をつけるとポインタ変数になる
			  //int*までがデータ型でp_aが変数名
			  //*をつけて宣言したものだけがポインタ変数になる
	          //int* p_a,p_b←p_aは変数になるがp_bは変数にならない

	p_a = &a; //&==アドレス演算子、変数のアドレスを取り出す
			  //p_aにaの"アドレス"を代入する

	b = *p_a; //*==ポインタ演算子、アドレスの内容を取り出す
			  //アドレスの内容==変数の中身
			  //bにp_aの中身を代入する
			  //p_aの中身はaのアドレスでaは100だからbには100が代入される

	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}