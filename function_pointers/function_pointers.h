#ifndef FUNCTION_POINTERS_C
#define FUNCTION_POINTERS_C
#include <unistd.h>

void print_name(char *name, void (*f)(char *));
#endif
