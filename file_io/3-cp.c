#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 * @ac: int parameter
* @ac: char double pointerparameterr
* @av: char double pointerparameterr
 */

int main(int ac, char **av)
{
	int fdsource, fddest, size = 1, wr = 0;
	char buf[1024];

	fdsource = open(av[1], O_RDONLY);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (fdsource == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	fddest = open(av[2], O_WRONLY, O_CREAT, O_TRUNC, 0664);

	while (size > 0)
	{
	/** lire du premier charactere jusqu'a la size*/
	size = read(fdsource, buf, 1024);

	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", av[1]);
		exit(98);
	}
	/** on met size car il va s'arréter dés qu'il va trouver un null*/
	wr = write(fddest, buf, size);

	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", av[1]);
		exit(0);
	}
	}

	if (close(fddest) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %i\n",fddest);
		exit(100);
	}
	if (close(fdsource) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %i\n",fdsource);
		exit(100);
	}
	return (ac);
}
