#include <stdio.h>
/**
 *main -start the program
 *@argc: arg count
 *@argv: pointer
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
		printf("%s\n", argv[i]);

	return (0);
}
