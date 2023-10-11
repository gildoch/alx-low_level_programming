#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Arguments counts
 * @argv: Array of arguments
 *
 * Return: The operation
 */
int main(int argc, char *argv[])
{
	int (*op_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_ptr = get_op_func(argv[2]);
	if (!op_ptr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
