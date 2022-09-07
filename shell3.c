#include "shell.h"

/**
 * _strlen - check the length of a string
 * @str: str to check its length
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * _strcmp - copy string
 * @str1: Destination
 * @str2: where to  copy from
 * Return: 0
 */

int _strcmp(char *str1, char *str2)
{
	int len1 = _strlen(str1);
	int len2 = _strlen(str2);
	int i;

	if (len1 != len2)
		return (-1);
	while (str1[i])
	{
		if (str1[i] != str2[i])
			return (-1);
		i++;
	}
	return (0);
}
