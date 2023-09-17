#include "shell.h"

/**
 * _strcpy - coping the strings
 * @dest: the first input.
 * @src: the second input.
 * Return: the value of coping.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0, j = 0;

while (*(src + i) != '\0')
i++;
for (j = 0; j < i; j++)
dest[j] = src[j];

dest[i] = '\0';
return (dest);
}

/**
 * _strcat - concatening two strings
 * @dest: first input
 * @src: second input
 * Return: the first input
 */

char *_strcat(char *dest, char *src)
{
int i, j = 0;

for (i = 0; dest[i]; i++)
;
for (j = 0; *(src + j) != '\0'; j++)
{
*(dest + i) = *(src + j);
i++;
}
*(dest + i) = '\0';
return (dest);
}

/**
 * _strlen - lenght function
 * @str: the input.
 * Return: the result.
*/

int _strlen(char *str)
{
int i = 0;

while (str[i])
i++;

return (i);
}
