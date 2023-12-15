#include "shell.h"
/**
*exit_cmd - handles the exit command.
*@line: input read from stdin.
*@command: tokenized command
*Return: no return
**/
void exit_cmd(char **command, char *line)
{
free(line);
free_buffers(command);
exit(0);
}

