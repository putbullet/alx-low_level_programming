#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string.
 *         NULL if str is NULL or memory allocation fails.
 */
char *_strdup(char *str)
{
	size_t len;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);
	return (duplicate);
}

