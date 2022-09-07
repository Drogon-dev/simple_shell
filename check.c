#include "shell.h"
/**
 *checker- checks
 *@cmd: tokenized
 *@buf: line
 *Return: 1
 */
int checker(char **cmd, char *buf)
{
	if (handle_builtin(cmd, buf))
	return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}
