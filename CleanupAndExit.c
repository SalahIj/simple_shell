#include "shell.h"

/**
 * CleanupAndExit -  the function name.
 * @signum: the input.
*/

void CleanupAndExit(int signum)
{
(void)signum;
write(STDOUT_FILENO, "\n", 1);
write(STDOUT_FILENO, "$ ", 2);
}
