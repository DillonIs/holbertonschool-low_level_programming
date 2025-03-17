#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Frees the dogs
 * @d: Pointer to the struct
 *
 * Return: none void
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
