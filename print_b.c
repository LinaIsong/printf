#include "main.h"
/**
 * print_b - convert to binary
 * @val: A va_list that contains the unsigned int to be printed in binary
 * Return: integer
 */

int print_b(va_list val)
{
	int non_zero = 0;
	int count_c = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			non_zero = 1;
		if (non_zero)
		{
			b = p >> (31 - i);
			_putchar(b = 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
