#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -entry point
 * @d: entry structure with pointer
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
