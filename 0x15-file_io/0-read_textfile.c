#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * read_textfile - function that reads a text file and prints it
  * @filename: file to read
  * @letters: number of letters to read and print
  * Return: number of letters printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ifd, ofd, i;
	char *buffer;

	if (!filename)
		return (0);

	ifd = open(filename, O_RDONLY);
	if (ifd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	i = read(ifd, buffer, letters);
	if (i < 0)
	{
		free(buffer);
		return (0);
	}

	buffer[i] = '\0';
	close(ifd);

	ofd = write(STDOUT_FILENO, buffer, i);
	if (ofd < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (ofd);
}
