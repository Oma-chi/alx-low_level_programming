#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * get_op_func - fuction that gets coorect funct based on s
 * @s: ops to selecgt from
 * Return: a pointer to the op funct and null oif not found
 */

int (*get_op_func(char *s))(int, int)
{
	op

