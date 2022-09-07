#include "shell.h"

/**
 * env - enviroment variable
 *
 * @command:command
 * Return: void
 */
void env(char **command __attribute__((unused)))
{
	int i = 0;

	while (environ[i])
	{
		print_function(environ[i++], STDOUT_FILENO);
		print_function("\n", STDOUT_FILENO);
	}
}
/**
 * quit - function to quit
 *
 * @command: command
 * Return: void
 */

void quit(char **command)
{
	(void)command;
}

/**
 * ch_dir - function to change directory
 *
 * @command: command
 * Return: void
 */
void ch_dir(char **command)
{
	(void)command;
}
