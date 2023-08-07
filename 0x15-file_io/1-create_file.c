#include <stdio.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename:pointer name of file
 * @text_content:pointer to string
 * Return:1 or 0
 */
int create_file(const char *filename, char *text_content)
{
int fld, hld, count;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (count = 0; text_content[count];)
count++;
}
fld = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
hld = write(fld, text_content, count);
if (fld == -1 || hld == -1)
return (-1);
close(fld);
return (1);
}
