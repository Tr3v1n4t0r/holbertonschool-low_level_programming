#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initializes variables of type struct dog
 *
 *@d: pointer to struct
 *@name: new name
 *@age: new age
 *@owner: new owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
