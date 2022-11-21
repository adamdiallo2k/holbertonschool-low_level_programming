#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	char *buf = malloc(sizeof(char) * letters);
	fd = open(filename,O_RDONLY);
	
	if (fd == -1)
	{
		return (0);
	}
	read(fd, buf, letters);
	
	close(fd);
	
	return (write(STDOUT_FILENO,buf,strlen(buf)));
}
