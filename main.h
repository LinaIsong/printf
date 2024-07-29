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
 * @fmt: Pointer to a function to print output based
 * on a format specifier
 *
 * Description: defines a new type called format with its
 * format specifier and related function
 */
typdef struct format
{
	char *spec;
	int (*fmt)();
} link;

int _putchar(char c);
int _printf_char(va_list arg);
int _printf_string(va_list arg);
int _strlen(char *s);
int _strlenc(const char *s);
int _printf_percent(void);
int _printf_int(va_list args);
int _printf_dec(va_list args);
int _printf(const char *format, ...);

#endif /* MAIN_H */
