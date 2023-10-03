#include <stdio.h>

/**
  * main - Entry point
  * @argc: Argument count
  * @argv: Array of arguments
  * Return: Arguments
  */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
