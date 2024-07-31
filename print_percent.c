#include "main.h"

/**
 * _printf_percent - prints the % char
 *
 * Return: Always (Success) 1
 */
int _printf_percent(void)
{
	write(1, "%", 1);

	return (1);
}
