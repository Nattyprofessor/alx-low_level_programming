#include <stdio.h>

const int max = 4;
 int main ()
{
	int var[] = {10, 100, 1000};
	int i, *poi;

	poi = var;

	for (i = 0; i < max; i++)
	{
		printf("The memory address for var[%d] = %x\n", i, *poi);
		printf("The value for [%d] = %d\n", i, *poi);

		poi++;
	}
	return (0);
}

