#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: String whose length is to be found
 *
 * Return: Always (Success) 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;

	return (i);
}

/**
 * _strlenc - finds the length of a string of constatnt chars
 * @s: String whose length is to be found
 *
 * Return: Always (Success) 0
 */
int _strlenc(const char *s)
{
	int j;

	for (j = 0; s[j] != 0; j++)
		;
	return (j);
}
