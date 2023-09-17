#include "shell.h"

/**
 * Executing_built_in -  the function name.
 * @array: the input.
 * Return: the result.
*/

int Executing_built_in(char **array)
{
char *mot_cle[] = {"exit", "env"};
int (*func_list[])(char **) = {&my_exit, &my_env};
int i = 0;

if (array[0] == NULL)
return (-1);

while (i < 2)
{
if (_strcmp(array[0], mot_cle[i]) == 0)
return ((*func_list[i])(array));
i++;
}
return (Executing_commd_function(array));
}
