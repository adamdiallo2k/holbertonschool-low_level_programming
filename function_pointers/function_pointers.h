#ifndef FUNCTION_POINTERS_C
#define COMMANDS_H_
#include <unistd.h>

void print_name(char *name, void (*f)(char *));
#endif
