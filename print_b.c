#include "main.h"
/**
 * print_b - convert to binary
 * @val: A va_list that contains the unsigned int to be printed in binary
 * Return: integer
 */

int print_b(va_list val)
{
	unsigned int n = va_arg(val, unsigned int);
	unsigned int mask_t = 1 << (sizeof(unsigned int) * 8 - 1);
	int start = 0;
	int i = 0;

	while (mask_t)
	{
		if (n & mask_t)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
		{
			_putchar('0');
		}
		mask_t >>= 1;
		if (start)
			i++;
	}

	if (i == 0)
	{
		_putchar('0');
		i = 1;
	}

	return (i);
}
