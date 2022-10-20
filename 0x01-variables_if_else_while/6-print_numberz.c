#include <stdio.h>
/**
 * main - print single base 10 numbers 
 *
 * Return: 0
 */
int main(void)
{
	int z;

	z  = 0;
	while (z < 10)
	{
		putchar(z + "0");
		z++;
	}
	putchar('\n');
	return (0);
}
