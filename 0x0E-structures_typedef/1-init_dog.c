#include <stdio.h>
#include "dog.h"

/**
 * initialize a variable of type struct dog
 * @d: dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
			d = mallco(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	
}
