#include "shell.h"

/**
 * _getline - getline function.
 * @buffer: the first input.
 * @n: the second input.
 * @fd: the third input.
 * Return: the result.
*/

ssize_t _getline(char **buffer, size_t *n, int fd)
{
int c;
size_t length = 0, size;
char *new_buffer;

size = BUFFER_SIZE;
if (buffer == NULL || n == 0)
return (-1);
*buffer = malloc(sizeof(char *) * BUFFER_SIZE);
if (*buffer == NULL)
{
perror("malloc");
return (-1);
}
while ((c = _fgetc(fd)) != EOF)
{
if (length >= BUFFER_SIZE - 1)
{
size += size;
new_buffer = malloc(sizeof(char *) * size);
if (new_buffer == NULL)
{
perror("malloc");
return (-1);
}
*buffer = new_buffer;
}
(*buffer)[length] = (char)c;
if (c == '\n')
break;
length++;
}
(*buffer)[length] = '\0';
*n = length;
if (length > 0)
return (length);
else
return (-1);
}
