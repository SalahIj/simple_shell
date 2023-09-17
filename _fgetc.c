#include "shell.h"

/**
 * _fgetc - the of the function.
 * @fd: the input.
 * Return: the result.
*/

int _fgetc(int fd)
{
char Char;
ssize_t size;

size = read(fd, &Char, 1);
if (size == -1)
{
perror("read");
return (-1);
}
else if (size == 0)
return (EOF);

return ((int)Char);
}
