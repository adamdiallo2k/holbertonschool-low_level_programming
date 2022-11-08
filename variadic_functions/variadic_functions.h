#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
typedef struct fu
{
	char *fu;
	void (*f)(va_list a);
	} fu_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_chare(va_list c);
void print_float(va_list f);
void print_char(va_list c);
void print_int(va_list i);
#endif
