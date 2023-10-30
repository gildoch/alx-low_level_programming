#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
  * append_text_to_file - function that appends text at the end of a file.
  * @filename: file to append text
  * @text_content: text to write to file
  * Return: 1 on success , -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, cnt = 0;

	if (!filename)
		return (-1);

	fdo = open(filename, O_WRONLY | O_APPEND);

	if (fdo < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[cnt])
			cnt++;

		fdw = write(fdo, text_content, cnt);

		if (fdw != cnt)
			return (-1);
	}
	close(fdo);
	return (1);
}
