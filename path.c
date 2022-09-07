#include "shell.h"

/**
 * find_path - finds path
 * Return: NULL or path.
 */
char *find_path(void)
{
	int x;
	char **env = environ, *path = NULL;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && x < 5)
			{
				path++;
				x++;
			}
			return (path);
		}
	env++;
	}
	return (NULL);
}
