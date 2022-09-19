#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first number
 * @b: second number
 * Return: nothing to return
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
