#include "shell.h"

/**
 * _getenv - Function get env.
 * @name: the input.
 * Return: the result.
*/

char *_getenv(char *name)
{
char *key = NULL;
int i;

for (i = 0; environ[i]; i++)
{
key = strtok(environ[i], "=");
if (strcmp(key, name) == 0)
return (strtok(NULL, "="));
}
return (NULL);
}
