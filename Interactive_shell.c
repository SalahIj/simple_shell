#include "shell.h"

/**
 * Interactive_shell - the function name.
 */

void Interactive_shell(void)
{
	char **array, *buff = NULL;
	int stat = -1;

	signal(SIGINT, CleanupAndExit);
	while (1)
	{
		write(1, "$ ", 2);
		buff = Reading_function();
		array = Spliting_function(buff, " \n\t");
		stat = Executing_built_in(array);

		free(buff);
		free(array);
		if (stat >= 0)
		{
			exit(stat);
		}
		buff = NULL;
	}
}
