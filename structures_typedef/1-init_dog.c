#include "dog.h"
#include <stdio.h>
/**
 *init_dog -initialize a variable of type struct dog
 *@d: pointer to dog
 *@name: dog's name (pointer)
 *@age: dogs age
 *@owner: dog's owner (pointer)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
