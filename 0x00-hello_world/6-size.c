#include <stdio.h>
/**
 * main - prints the size of various types
 *
 * Description
 * Return: 0
 */
int main(void)
{
char a;
int b;
long c;
long long d;
float e;
printf("Size of a char: %ld byte(s)\n", sizeof(a));
printf("Size of an int: %1d byte(s)\n", sizeof(b));
printf("Size of a long int: %ld byte(s)\n", sizeof(c));
printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
printf("Size of a float: %ld byte(s)\n", sizeof(e));
return (0);
}
