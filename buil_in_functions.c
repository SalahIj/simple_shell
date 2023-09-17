#include "shell.h"

/**
 * my_exit - the function name.
 * @array: the input.
 * Return: the result.
*/

int my_exit(char **array)
{
char *str;

str = array[1];
if (str != NULL)
return (_atoi(str));
else
return (0);
}

/**
 * my_env - The function name.
 * @args: the input.
 * Return: the result.
*/

int my_env(char **args)
{
char **env;
(void)(**args);
for (env = environ ; *env != NULL ; env++)
{
write(1, *env, _strlen(*env));
write(1, "\n", 1);
}
return (-1);
}
