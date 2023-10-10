#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog - to free dog
 * @d: the structure
 * Return: to return 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
