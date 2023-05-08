#include <stdlib.h>
#include "main.h"


/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (length > 0)
	{
		bytes_written = write(file, text_content, length);
		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
