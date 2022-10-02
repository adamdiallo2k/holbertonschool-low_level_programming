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

	printf("size of a char : %d\n",sizeof(y));
	printf("size of a int : %i\n",sizeof(x));
	printf("size of a long : %ld\n",sizeof(unlong));
	printf("size of a long long int : %lli\n",sizeof(deuxlong));
	printf("size of a float : %d\n",sizeof(unfloat));	
	return (0);
}
