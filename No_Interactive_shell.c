#include "shell.h"

/**
 * No_Interactive_shell - the function name.
 */

void No_Interactive_shell(void)
{
	char **array, *buff = NULL;
	int stat = -1;

	signal(SIGINT, CleanupAndExit);
	while (1)
	{
		if (isatty(0) != 0)
			write(1, "$ ", 2);
		buff = Reading_from_stream();
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
