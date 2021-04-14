#include "header.h"
/**
 * 
 * 
 */
char **argument(void)
{
	ssize_t len_arg = 0;
	char *buff_arg = NULL;
	char **arg_token = NULL;

	if (getline(&buff_arg, &len_arg, stdin) != EOF)
	{
		arg_token = tock_arg(buff_arg);
	}
	else
	{
		exit(0);
	}
	return (arg_token);
}