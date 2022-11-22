#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
* create_file - Entry point
* Description: 'read a text file and print it'
* Return: ssize_t
* @filename: char parameter
* @text_content: char parameterr
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		printf("file name null");
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		printf("file path");
		return (-1);
	}
	write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
