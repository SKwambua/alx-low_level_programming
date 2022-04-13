#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: name to be printed
 * @f: ponter to the printing funtion
 */
void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
