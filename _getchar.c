#include "shell.h"

/**
 * _getchar - Function name.
 * Return: th result.
*/

int _getchar(void)
{
char Char;
int res = read(0, &Char, 1);
if (res == 1)
return ((int)Char);
else
return (-1);
}
