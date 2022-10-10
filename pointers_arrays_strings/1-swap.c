#include "main.h"
/**
* swap_int : Entry
* Descritption: 'program to change value of pointer'
* Return: Always 0.
* @a: int parameter
* @b: int parameter
*/
void swap_int(int *a, int *b)
{
        int temp = *a;
	
	*a =  *b;
	*b = temp;

}

