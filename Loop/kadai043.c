#include <stdio.h>
main()
{
	char ib = 0, ic = 0;
	int ia = 0;

	printf("文字コード（－１で入力終了）");
	scanf("%d", &ia);

	while (ia != -1)
	{
		printf("%c\n", ia);
		printf("文字コード（－１で入力終了）");
		scanf("%d", &ia);
		
	}
}