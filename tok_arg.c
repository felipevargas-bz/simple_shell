#include "header.h"
/**
 * 
 * 
 */
char **tock_arg(char *buff_arg)
{
	int number_arg = 0, pos = 0;
	char **arg_token = NULL;

	number_arg = count_arg(buff_arg);
	arg_token = malloc(sizeof(char *) * (number_arg + 1));
	
	arg_token[pos] = strtok(buff_arg, " \t\n");
	pos++;

	while ((arg_token[pos] = strtok(NULL, " \t\n")))
	{
		pos++;
	}
	return (arg_token);
}