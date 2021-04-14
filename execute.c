#include "header.h"
/**
 * 
 * 
 */
int execute(char *command, char **arg_token)
{
  pid_t pid;
  
  if (arg_token == NULL)
  {
    return (-1);
  }
  pid = fork();
  wait(NULL);
  if (pid == -1)
  {
    perror("pid Error");
    return (-1);
  }
  else if (pid == 0)
  {
    execve(command, arg_token, environ);
    return (0);
  }
  return (-1);
}
