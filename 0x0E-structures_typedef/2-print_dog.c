#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print a struct dog
 * @d: The struct to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name; (nll\n");
	else
		printf("Name; %s\n", d->name);

	if (d->age > 0)
		printf("Age; (nll\n");
	else
		printf("Age; %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner; (nll\n");
	else
		printf("Owner; %s\n", d->owner);
}
