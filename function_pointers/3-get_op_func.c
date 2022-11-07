#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "string.h"
/**
* get_op_func - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
* @s: char parameter
*/


int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
/*	if (strcmp( s, "+") != 0 && strcmp( s, "-") != 0 && strcmp( s, "*") != 0 && strcmp( s, "/") != 0 && strcmp( s, "%") != 0)
                      return (NULL);
*/	

    	while (i < 5)
    	{
		if (ops[i].op[0] == s[0])
			return ops[i].f;
		i++;
	}
	return (NULL);
}
