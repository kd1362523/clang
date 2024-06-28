#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display3(struct syohin_data *syohin);
main()
{
	struct syohin_data syohin = { "ケシゴム", 50 };
	
	display3(&syohin);
}

void display3(struct syohin_data *syohin)
{
	//アドレスを受け取っているので
	//書き換えが可能

	//単価を100にしてみ

	syohin->tanka = 100;

	//消しゴムもstrcpyを使えば書き換えれる
	//文字列の書き換えはstrcpy()がいる

	strcpy(syohin->name, "うんこ");

	printf("%s  %d\n",
		syohin->name, syohin->tanka);

}