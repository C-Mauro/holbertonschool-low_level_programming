#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *read_textfile -reads a text file and prints it to the POSIX standard output
 *@filename: pointer to a file
 *@letters: number of letters to reads and print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, letreaded;
	char *buffer = malloc(sizeof(char *) * letters);

	if (!buffer)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	letreaded = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, letreaded);

	free(buffer);
	close(fd);
	return (letreaded);
}

