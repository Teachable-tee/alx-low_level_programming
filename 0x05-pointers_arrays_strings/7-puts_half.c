#include <stdio.h>
#include "main.h"

/**
 * puts_half - orubts half of the string
 * @str: parameter
 * Return: returns nothing
 */

void puts_half(char *str);
{
	int x, y, i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		putchar(str[i]);
	putchar('\n')
