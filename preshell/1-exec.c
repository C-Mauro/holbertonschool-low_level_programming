#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int i;


	for (; i < 5; i++)

		if (fork() == 1)
		execve(argv[], agrv, NULL);

		else 
			wait(&status);

	return (0);

}
