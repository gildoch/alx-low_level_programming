#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Function to add two numbers
 * @a: First operand
 * @b: Second Operand
 * Return: The sum of two numbers;
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to subtract two numbers
 * @a: First operand
 * @b: Second operand
 * Return: The subtraction of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function to multiply two numbers
 * @a: first operand
 * @b: second operand
 * Return: The multiplication of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function to divide two numbers
 * @a: first operand
 * @b: second operand
 * Return: The division of two numbers
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
 * op_mod - Funtion to mod a number
 * @a: first operand
 * @b: second operand
 * Return: The mod of a number by another
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
