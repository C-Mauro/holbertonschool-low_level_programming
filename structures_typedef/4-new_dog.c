#include "dog.h"
#include "stdlib.h"
/**
 *
 */
int _strlen(char *s)
{
	int i;
	for (i = 0 ; s[i] != '\0' ; i++)
		;
		return (i);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int Lname, Lowner;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if(ptr == NULL)
		return (NULL);
	
	Lname = _strlen(name);
	Lowner = _strlen(owner);

	ptr->name = malloc (Lname + 1);

	if (ptr->name)
	{
		free(ptr->name);
		free(ptr);
		return(NULL);
	}
	ptr->owner = malloc(Lowner + 1);

	if(ptr->owner)
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->age = age;

	for(i = 0; i < Lname; i++)
	{
		ptr->name[i] = name[i];
		ptr->name[i] = '\0';
	}
	for(i = 0; i < Lowner; i++)
	{
		ptr->owner[i] = owner[i];
		ptr->owner[i] = '\0';
	}
	return (ptr);
}
