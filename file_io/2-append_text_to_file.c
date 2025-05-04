#include "main.h"

/**
 *
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor;
	int read_write;
	int letter_ind = 0;

	if (!filename)
	{
		return (-1);
	}

	descriptor = open(filename, O_WRONLY | O_APPEND);

	if (descriptor == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[letter_ind])
		{
			letter_ind++;
		}

		read_write = write(descriptor, text_content, letter_ind);


