#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - ...
  * @a: input one
  * @b: input two
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - ...
  * @a: input one
  * @b: input two
  *
  * Return: dif
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - ...
  * @a: input one
  * @b: input two
  *
  * Return: mult
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - ...
  * @a: input one
  * @b: input two
  *
  * Return: div
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - ...
  * @a: input one
  * @b: input two
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
