#include "header.h"
/**
 * 
 * 
 */
void execute(char *command, char **arg_token)
{
	pid_t father = fork();
	wait(NULL);

	if (father == 0)
	{
		if (execve(command, arg_token, NULL) == -1)
		{
			exit(98);
		}
	}
}