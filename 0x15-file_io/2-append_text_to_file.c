#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * text_content is NULL, do not add anything to the file
 * Return 1 if the file exists, -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 * by chege
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int chege, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	chege = open(filename, O_WRONLY | O_APPEND);
	w = write(chege, text_content, length);

	if (chege == -1 || w == -1)
		return (-1);

	close(chege)

	return (1);
}
