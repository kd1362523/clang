#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*main()
{
	int date[20];
	int i = 0, target = 0, work = 0
	srand(time(0));

		for (i = 0; i < 20; i++)
		{
			i = data[i];
		}

	for (i = 0; i < 20; i++)
	{
		rand() % 20 + 1 = target;
		date[i] = work;
		date[target] = date[i];
		work = data[target];
	}
}*/


main()
{
	int i, ta, wo, da[20];
	srand(time(0));
	i = 0;
	while (i < 20)
	{
		da[i] = i + 1;
		i++;
	}
	i = 0;
	while (i < 20)
	{
		ta = rand() % 20;
		wo = da[i];
		da[i] = da[ta];
		da[ta] = wo;
		i++;
	}
	for (i = 0; i < 20; i++) {
		printf("%d ", da[i]);

	}

}