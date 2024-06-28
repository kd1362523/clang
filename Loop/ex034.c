3#include <stdio.h>
main()
{
	//整数型変数 iの宣言と1への初期化
	int no = 1;
	//do～whileの繰り返し処理
	do
	{
		//i=?の表示(?の部分は変数iの値)変数noのインクリメント
		printf("no=%d\n", no++);
		//後判定処理(iが10以下の時繰り返し)
	} while (no <= 10);
}