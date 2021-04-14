#include "header.h"
/**
 * argument - Read line command
 * Return: Address of the string with tokenized arguments
 */
char **argument(void)
{
	size_t len_arg = 0;
	char *buff_arg = NULL;
	char **arg_token = NULL;

	if (getline(&buff_arg, &len_arg, stdin) != EOF)
	{
		arg_token = tock_arg(buff_arg);
	}
	else
	{
		free(buff_arg);
		buff_arg = NULL;
		exit(0);
	}
	free(buff_arg);
	buff_arg = NULL;
	return (arg_token);
}
