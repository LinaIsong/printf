#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _putchar(char c);
int _printf_char(va_list arg);
int _printf_string(va_list arg);
int _strlen(char *s);
int _strlenc(const char *s);
int _printf_percent(void);
int _printf_ints(va_list args);
int _printf_dec(va_list args);
int _printf(const char *format, ...);
int _printf_b(va_list val);

#endif /* MAIN_H */
