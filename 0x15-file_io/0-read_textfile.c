#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file.
 * @letters: the number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 * or 0 if the function fails or filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_value, read_value, write_value;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_value = open(filename, O_RDONLY);
	read_value = read(open_value, buffer, letters);
	write_value = write(STDOUT_FILENO, buffer, read_value);

	if (open_value == -1 || read_value == -1 || write_value == -1
	|| write_value != read_value)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_value);

	return (write_value);
}
