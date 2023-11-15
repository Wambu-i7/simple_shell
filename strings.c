#include "shell.h"
/**
 *string_comp - compares two strings.
 *@str1: compared to str2.
 *@str2: compared to str1.
 * Return: returns the difference between the two strings.
 */
int string_comp(char *str1, char *str2)
{
	int j = 0, result;

	while (*(str1 + j) == *(str2 + j) && *(str1 + j) != '\0')
		j++;
	result = (*(str1 + j) - *(str2 + j));

	return (result);
}

/**
 * string_len - returns the length of a string.
 * @str: The string to get the length of.
 * Return: returns length of the string.
 */
int string_len(char *str)
{
	int count;

	for (count = 0; *str != '\0'; str++)
		count++;
	return (count);
}
/**
 * string_cpy - copies the string pointed by src
 *  to the buffer pointed to by dest.
 *  @src: Source of string to be copied.
 *  @dest: Destination of the copied string.
 *  Return: pointer to dest.
 */
char string_cpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
/**
 * string_dup -duplicates a string.
 * @str: string to be duplicated.
 * Return: pointer to the duplicated string.
 */
char string_dup(char *str)
{
	char *pointer;
	int j, length;

	if (str == NULL)
		return (NULL);
	length = string_len(str);
	pointer = malloc(sizeof(char) * (length + 1));
	if (!pointer)
		return (NULL);
	for (j = 0; str != '\0'; str++, j++)
		pointer[j] = str[0];
	pointer[j++] = '\0';
	return (pointer);
}
/**
 * string_find_char - locates a character in a string.
 * @str: String to be checked.
 * @chr: character being located.
 * Return: Returns a pointer to first occurence of the character
 *  or NULL if the character is not found.
 */
char *string_find_char(char *str, char chr)
{
	while (*str)
	{
		if (*str == chr)
			return (str);
		str++;
	}
	if (!chr)
		return (str);
	return (NULL);
}
