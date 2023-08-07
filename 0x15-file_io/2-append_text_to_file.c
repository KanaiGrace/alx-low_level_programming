#include "main.h"

/**
 * append_text_to_file - append text at end of file
 * @filename:pointer to file
 * @text_content:pointer to file to be appended
 * Return:1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fld, hold, count;
count = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (count = 0; text_content[count];)
count++;
}
fld = open(filename, O_WRONLY | O_APPEND);
hold = write(fld, text_content, count);
if (fld == -1 || hold == -1)
return (-1);
close(fld);
return (1);
}
