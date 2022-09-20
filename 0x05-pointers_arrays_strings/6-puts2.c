#include <stdio.h>
#include "main.h"

/**
 * puts2 - puts2 function
 * @str: str parameter
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
