#include "dog.h"
#include "stdlib.h"
/**
 *_strlen -string lenght
 *@s: string
 *Return: number of bytes (string)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
		return (i);
}
/**
 *new_dog -create a new dog type
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, Lname, Lowner;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	Lname = _strlen(name);
	Lowner = _strlen(owner);

	ptr->name = malloc(Lname + 1);
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(Lowner + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->age = age;

	for (i = 0; i < Lname; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	for (i = 0; i < Lowner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	return (ptr);
}
