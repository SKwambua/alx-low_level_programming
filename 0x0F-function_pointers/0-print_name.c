#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name to be printed
 * @f: ponter to the printing funtion
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
