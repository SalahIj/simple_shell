#include "shell.h"

/**
 * Executing_commd_function - the function name.
 * @array: the input.
 * Return: the result.
*/

int Executing_commd_function(char **array)
{
pid_t pid;
int j, status;
static char **environ;
char *cmd;
pid = fork();
if (pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
if (pid == 0)
{
cmd = Verifying_path_function(array[0]);
if (cmd != NULL)
{
if (execve(cmd, array, environ) == -1)
{
perror(array[0]);
for (j = 0; array[j]; j++)
free(array[j]);
free(array);
exit(EXIT_FAILURE);
}
}
else
Error_printing(array);
}
else
{
if (wait(&status) == -1)
{
perror("wait");
exit(EXIT_FAILURE);
}
}
return (-1);
}
