#include "shell.h"

/**
 * exit_cmd - exit cmd
 * @command: tokenized command
 * @line: input read from stdin
 *
 * Return: no return
 */
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
