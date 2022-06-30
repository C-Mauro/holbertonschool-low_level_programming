#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog -free dog
 *@d: pointer to dog struct
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
