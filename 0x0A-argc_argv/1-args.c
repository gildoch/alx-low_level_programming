#include <stdio.h>

/**
  * main - Entry point
  * @argc: Arguments count
  * @argv: Array of arguments
  * Return: Number of argumemts
  */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
