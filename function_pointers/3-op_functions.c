#include <stdio.h>
#include "3-calc.h"

/**
* op_add - Entry point
* Description: 'print a name'
* Return: nothing
* @a: int pointer parameter
* @b: int parameter
*/


int op_add(int a, int b)
{
	return (a  + b);
}

/**
* op_sub - Entry point
* Description: 'return difference'
* Return: nothing
* @a: int parameter
* @b: int parameter
*/

  int op_sub(int a, int b)
  {
          return (a - b);
  }

 /**
  * op_mul - Entry point
  * Description: 'return product'
  * Return: nothing
  * @a: int parameter
  * @b: int parameter
  */

    int op_mul(int a, int b)
    {
            return (a * b);
    }

 /**
  * op_div - Entry point
  * Description: 'return division'
  * Return: nothing
  * @a: int parameter
  * @b: int parameter
  */
  
    int op_div(int a, int b)
    {       
            return (a / b);
    }

 /**
  * op_mod - Entry point
  * Description: 'return difference'
  * Return: nothing
  * @a: int parameter
  * @b: int parameter
  */

    int op_mod(int a, int b)
    {
            return (a % b);
    }
