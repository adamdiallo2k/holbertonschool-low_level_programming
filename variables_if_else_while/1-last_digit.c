#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
	printf("Last digit of %d is %d and greater than 5\n", n, lastdigit);
	}

	else if (lastdigit < 5)
	{
		printf("Last digit of %d is %d and less than 5\n", n, lastdigit);
	}

	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	return (0);
}
