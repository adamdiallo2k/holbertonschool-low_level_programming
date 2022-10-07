#include "main.h"

/**
* _abs - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
* @c: int parameter
*/
void jack_bauer(void) {
  int minutes = 0;
  int hour = 0;
  int firstDigit;
  int lastDigit;
  while(hour != 23 || minutes < 60) 
  {
  if (minutes > 59)
    {
      minutes = 0;
      hour++;
    }
  if(hour < 10)
  {
   _putchar(0 + '0');
   _putchar(hour + '0');
   _putchar(':'); 
  } 
  else if(hour > 9)
  {
    lastDigit = hour % 10;
    firstDigit = hour;
    while (firstDigit >= 10)
      {
        firstDigit = firstDigit / 10;
      }
    _putchar(firstDigit + '0');
    _putchar(lastDigit + '0');
    _putchar(':');
  }
  if (minutes <= 9)
  {
  _putchar(0 + '0');
  _putchar(minutes + '0');
  }
  else 
  {
    lastDigit = minutes % 10;
    firstDigit = minutes;
    while (firstDigit >= 10){
        firstDigit = firstDigit / 10;
      }
   _putchar(firstDigit + '0');
   _putchar(lastDigit + '0');
    }
  _putchar('\n');
  minutes++; 
}
}
