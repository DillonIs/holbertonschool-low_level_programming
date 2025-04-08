#include "main.h"

/**
 * read_textfile - Reads and counts chars in a text file
 * @filename: File to read
 * @letters: The amount of letters it should read and print
 *
 * Return: Returns 0 if failed, or fdRead if success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescrip;
	ssize_t fdRead, fdWrite, fdClose;
	char *lineBuffer;

	if (filename == NULL)
	{
		return (0);
	}

	lineBuffer = malloc(sizeof(char) * letters);

	if (lineBuffer == NULL)
	{
		return (-1);
	}

	filedescrip = open(filename, O_RDONLY);

	if (filedescrip == -1)
	{
		return (0);
	}

	fdRead = read(filedescrip, lineBuffer, letters);

	if (fdRead == -1)
	{
		return (-1);
	}
	fdWrite = write(STDOUT_FILENO, lineBuffer, fdRead);
	if (fdWrite == -1)
	{
		return (-1);
	}
	fdClose = close(filedescrip);
	if (fdClose == -1)
	{
		return (-1);
	}
	return (fdRead);
}
