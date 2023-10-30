#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
  * create_file - function that creates a file
  * @filename: file to create
  * @text_content: NULL terminator
  * Return: creation status 1 on successs or -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, x, cnt;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	cnt = 0;
	if (text_content)
	{
		while (text_content[cnt])
			cnt++;

		x = write(fd, text_content, cnt);
		if (x != cnt)
			return (-1);
	}

	close(fd);
	return (1);
}
