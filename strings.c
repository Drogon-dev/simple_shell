#include "shell.h"

/**
 * _strcmp - comp str
 * @s1: s2;
 * @s2: s1;
 *
 * Return: diff
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, output;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
	i++;

	output = (*(s1 + i) - *(s2 + i));

	return (output);
}

/**
 * _strlen - check len
 * @s: str
 *
 * Return: len
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
	count++;
		s++;
	}
	return (count);
}

/**
 * _strncmp - comp str
 * @s1: s2
 * @s2: s1
 * @n: byt
 * Return: difference between s1 and s2
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	}
	return (0);
}

/**
 * _strdup - dup str
 * @s: str to dup
 *
 * Return: address
 */
char *_strdup(char *s)
{
	char *ptr;
	int i, len;

	if (s == NULL)
	return (NULL);

	len = _strlen(s);

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
	return (NULL);
	for (i = 0; *s != '\0'; s++, i++)
	ptr[i] = s[0];

	ptr[i++] = '\0';
	return (ptr);
}

/**
 * _strchr - find char
 * @s: str
 * @c: char
 *
 * Return: address
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
