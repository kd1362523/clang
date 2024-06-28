#include<stdio.h>
main()
{
	char data[15] = "C Language";

	char data2[15];

	char* p_data, * p_data2;

	p_data = data;

	p_data2 = data2;

	printf("date[]=%s\n", p_data);

	while (*p_data2++ = *p_data++);	//•¶š—ñ‚ÌƒRƒs[

	/*while (*p_data2 != '\0')
	{
		*p_data2++ = *p_data++;
	}
	*p_data2 = '\0';*/

	p_data2 = data2;

	printf("date2[]=%s\n", p_data2);

	while(*p_data2)
		{
		putchar(*p_data2++);
		}
	putchar('\n');
}