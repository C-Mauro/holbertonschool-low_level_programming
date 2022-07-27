#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	char *buffer;
	size_t buffersize = 32;
	size_t characters;

	buffer = (char *)malloc(buffersize * sizeof(char));

	if (buffer == NULL)
		return (1);

	printf("$ ");
	characters = getline(&buffer, &buffersize, stdin);
	printf ("%s" , buffer); 
	printf ("%zu characters were read.\n", characters);

	char *token = strtok(buffer, " ");

	while ( token != NULL )
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);

}
