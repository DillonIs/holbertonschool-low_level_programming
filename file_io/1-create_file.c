#include "main.h"

/**
 * create_file - Creates a new file
 * @filename: Variable to define the file name
 * @text_content: The content of the file to be written
 *
 * Return: Returns 1 on success otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int descriptor;
	int read_write;
	int letter_ind = 0;

	if (!filename)
	{
		return (-1);
	}

	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (descriptor == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	while (text_content[letter_ind])
	{
		letter_ind++;
	}

	read_write = write(descriptor, text_content, letter_ind);

	if (read_write == -1)
	{
		return (-1);
	}

	close(descriptor);

	return (1);
}
