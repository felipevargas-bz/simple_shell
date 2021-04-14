#include "header.h"
/**
 * 
 * 
 */
int main(void)
{
	if (isatty(STDIN_FILENO))
	{
		shell();
	}
	else
	{
		shell_direc();
	}
	return (0);
}
void shell(void)
{
	while (1)
	{
		write(1, "shell $ ", 8);
		shell_direc();
	}
}
