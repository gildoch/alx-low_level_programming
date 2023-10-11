#include <stdio.h>
#include <stdlib.h>


/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @len: number of bytes to print
 *
 * Return: void
 */

void print_opcodes(char *a, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < len - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: O
 */
int main(int argc, char **argv)
{
	int len;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	len = atoi(argv[1]);
	if (len < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, len);
	return (0);
}
