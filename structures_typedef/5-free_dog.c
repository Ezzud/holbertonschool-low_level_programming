#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free dog memory
 * @d: struct
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
