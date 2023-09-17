#include "shell.h"

/**
 * Error_printing -  Printing error function.
 * @array: the input.
*/

void Error_printing(char **array)
{
char *string, *bat = NULL;
int j;

if (_strchr(array[0], '/') != NULL)
{
bat = malloc(sizeof(char) * BUFFER_SIZE);
if (bat == NULL)
{
perror("malloc");
exit(EXIT_FAILURE);
}
_strcpy(bat, "-bash: ");
_strcat(bat, array[0]);
_strcat(bat, ": No such file or directory");
_puts(bat);
_putchar('\n');
for (j = 0; array[j]; j++)
free(array[j]);
free(array);
free(bat);
exit(EXIT_FAILURE);
}
else
{
string = _strcat(array[0], ": command not found");
_puts(string);
_putchar('\n');
for (j = 0; array[j]; j++)
free(array[j]);
free(array);
exit(EXIT_FAILURE);
}
}
