#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
* read_textfile - Entry point
* Description: 'read a text file and print it'
* Return: ssize_t
* @filename: char  parameter
* @letters: size_t parameter
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	char *buf = malloc(sizeof(char) * letters);
	
	if (buf == NULL || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	read(fd, buf, letters);

	close(fd);

	return (write(STDOUT_FILENO, buf, strlen(buf)));
}
