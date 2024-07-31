#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

/**
 * struct format - a new type called format
 * @spec: Pointer to a format specifier
 * @fmt: Fointer to a function to print output based
 * on a format specifier
 * Description: defines new type called format with its
 * format specifier and related function
*/

typedef struct format
{
	char *spec;
	int (*fmt)();
} fmt_link;

int _putchar(char c);
int _printf_char(va_list arg);
int _printf string(va list arg);
int _strlen(char *s);
int _strlenc(const char *s);
int _printf percent(void);
int _printf_ints(va list args);
int printf dec(va list args);
int _printf(const char *format, ...);
int _printf b(va list val);

#endif /* MAIN Η */
