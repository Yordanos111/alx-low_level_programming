#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees memory allocated for dogs
 * @d: st dog
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
