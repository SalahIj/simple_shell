#include "shell.h"

/**
 * _strdup - duplicate string
 * @source: string
 * Return: duplicated string
 */

char *_strdup(char *source)
{
	size_t length = _strlen(source) + 1;
	char *dup = (char *)malloc(sizeof(char) * length);

	if (dup != NULL)
	{
		_strcpy(dup, source);
	}
	return (dup);
}

/**
 * _strcmp - compaire two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * _strchr - search for a char
 * @str: string
 * @c: target
 * Return: string
 */

char *_strchr(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return (str);
		}
		str++;
	}
	if (c == '\0')
	{
		return (str);
	}
	return (NULL);
}


/**
 * _atoi - string to number.
 * @s: the input of the function.
 * Return: the result.
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int sig = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sig = sig * (-1);
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n  > 0)
		{
			break;
		}
		s++;
	}
	return (n * sig);
}
