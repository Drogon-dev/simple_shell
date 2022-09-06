#include "shell.h"

/**
 * print_function - function to print to standard output
 *
 * @var: what to print
 * @fd: destinattion
 * @return number printed
 */
int print_function(char *var, int fd)
{
	return (write(fd, var, _strlen(var)));
}

void (*get_func(char *command))(char **)
{
	int i;

	map_func map[] = {
		{"env", env},
		{"cd", ch_dir},
		{"exit", quit}};

	for (i = 0; i < 3; i++)
	{
		if (_strcmp(command, map[i].cmd_name) == 0)
			return (map[i].func);
	}
	return (NULL);
}
