#include<stdio.h>
main()
{
	char* p = "peach";

	char data1[10] = "banana", * p_data1;

	char data2[10], * p_data2;


	p_data1 = data1;
	p_data2 = data2;

	while (*p_data2++ = *p_data1++);	//++で要素が進んでる

	p_data1 = data1;					//++で進んだ要素を戻すための代入

	while (*p_data1++ = *p++);

	printf("data1[]=%s",data1);
	
	printf("\ndata2[]=%s\n",data2);
	
}