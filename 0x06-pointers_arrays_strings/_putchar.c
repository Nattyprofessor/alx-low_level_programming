#include  <unistd.h>
#include "main.h"
/**
 * _putchar -  writes the cahracter c to stdout
 * @c: the cahracter to print
 * Return: in success 1 esle -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
