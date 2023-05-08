#include "main.h"

/**
 * create_file - Creates a file with a given text content
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_len, write_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = 0;
		while (text_content[text_len] != '\0')
			text_len++;

		write_status = write(fd, text_content, text_len);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

