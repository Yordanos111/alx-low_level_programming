#include "main.h"
/**
  * create_file - a function that creates a file
  * @filename: the pointer to filename
  * @text_content: string
  * Return:  1 on success, -1 on failure or if filename is NULL
  */
int create_file(const char *filename, char *text_content)
{
	int nfile;
	int i;
	int wr;

	if (filename == NULL)
		return (-1);
	nfile = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (nfile == -1)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		wr = write(nfile, text_content, i);
		if (wr != i)
			return (-1);
	}

	close(nfile);
	return (1);
}
