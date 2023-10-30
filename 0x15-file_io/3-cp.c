#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: argument count
  * @argv: array of arguments
  * Return: 0 on success
  */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fdo, fdw, x, clsfdo, clsfdw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdo = open(argv[1], O_RDONLY);
	if (fdo < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fdo, buffer, 1024)) > 0)
	{
		if (fdw < 0 || write(fdw, buffer, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fdo);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	clsfdo = close(fdo);
	clsfdw = close(fdw);
	if (clsfdo < 0 || clsfdw < 0)
	{
		if (clsfdo < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdo);
		if (fdw < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (0);
}
