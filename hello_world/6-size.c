#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char y;

	y = 'a';
	x = 10;
	long unlong = 123;
	float unfloat = 12.5;
	long long int deuxlong = 124;

	printf("size of a char : %c byte(s)\n", sizeof(y)),
	printf("size of a int : %i byte(s)\n", sizeof(x)),
	printf("size of a long : %Lf byte(s)\n", sizeof(unlong)),
	printf("size of a long long int : %lli byte(s)\n", sizeof(deuxlong)),
	printf("size of a float : %e byte(s)\n", sizeof(unfloat));	
	return (0);
}
