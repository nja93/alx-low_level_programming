#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * text_content is NULL, do not add anything to the file
 * Return 1 if the file exists, -1 if the file does not exi
 * by chege
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int chege, w, length;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	chege = open(filename, O_WRONLY | O_APPEND, 0660);
	if (chege == -1)
		return (-1);

	for (length = 0; text_content[length] != '\0'; length++)
		;
	w = write(chege, text_content, length);

	if (w == -1)
		return (-1);

	close(chege);
	return (1);
}
