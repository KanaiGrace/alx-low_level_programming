#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads texte file and printd to standard output
 * @filename:pointer to file
 * @letters:number of characters passed
 * Return:0 or count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *ptrfile;
int a;
size_t cnt = 0;
ssize_t wtch;
char *buffer;
if (filename == NULL)
return (0);
ptrfile = fopen(filename, "r+" );
if (ptrfile == NULL)
{
return (0);
}
buffer = (char *)malloc((letters + 1) * sizeof(char));
if (buffer == NULL)
return (0);
while ((a = fgetc(ptrfile)) != EOF && cnt < letters)
{
buffer[cnt] = a;
cnt++;
}
buffer[cnt] = '\0';
wtch = write(STDOUT_FILENO, buffer, cnt);
if (wtch == -1 || wtch < (ssize_t)cnt)
return (0);
free(buffer);
fclose(ptrfile);
return (cnt);
}