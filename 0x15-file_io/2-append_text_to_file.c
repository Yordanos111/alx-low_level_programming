#include "main.h"
/**
  * append_text_to_file -  a function that appends text at the end of a file
  * @filename: the name of the file and text_content is the NULL
  * terminated string to add at the end of the file
  * @text_content: string
  * Return: 1 on success, -1 on failure or if filename is NULL
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int nfile;
	int app;
	int i;

	if (filename == NULL)
		return (-1);
	nfile = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (nfile < 0)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;

		app = write(nfile, text_content, i);
		if (app < 0)
		{
			close(nfile);
			return (-1);
		}
	}

	close(nfile);
	return (1);
}
