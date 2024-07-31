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
	int i, a = 0, b;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & n);
		if (p >> (31 - i))
			non_zero =  1;
		if (non_zero)
		{
			b = p >> (31 - i);
			_putchar(b + '0');
			count_c++;
		}
	}
	if (count_c == 0)
	{
		count_c++;
		_putchar('0');
	}
	return (count_c);
}
