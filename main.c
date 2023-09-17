#include "shell.h"

/**
 * main - the entry.
 * @argc: the first input.
 * @argv: the second input.
 * @env: the third input.
 * Return: the result.
 */


int main(int argc, char **argv, char **env)
{
	(void)argc;
	(void)argv;
	(void)env;

	if (isatty(STDIN_FILENO) == 1)
	{
		Interactive_shell();
	}
	else
	{
		No_Interactive_shell();
	}
	return (0);
}
