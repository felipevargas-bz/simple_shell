#include "header.h"
/**
 * tock_arg - tokenizar line of argument.
 * @buff_arg: line of argument.
 * Return: return char double pointer of tokens.
 */
char **tock_arg(char *buff_arg)
{
	int number_arg = 0, pos = 0;
	char **arg_token = NULL;

	number_arg = count_arg(buff_arg);
	arg_token = malloc(sizeof(char *) * (number_arg + 2));

	arg_token[pos] = strtok(buff_arg, " \t\n");
	pos++;

	while (pos < number_arg)
	{
		arg_token[pos] = strtok(NULL, " \t\n");
		pos++;
	}

	return (arg_token);
}
