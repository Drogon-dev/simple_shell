#include "shell.h"

/**
 * main - main function for shell project
 * @argc: number of command pass
 * @argv: pointer to list of commmands passed
 */

int main(int argc __attribute__((unused)),
		 char **argv)
{
	char *line;
	char **args;
	int cmd_type;

	(void)argv;

	signal(SIGINT, ctrl_C);

	while (1)
	{
		print_function(" ($) ", STDOUT_FILENO);
		line = _get_line();

		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				break;
		}
		args = tokenize(line, DELIM);
		cmd_type = command_check(args[0]);
		shell_exec(args, cmd_type);
	}
	return (1);
}
