#include "shell.h"
/**
 * concat_path_cmd - concatenates command to path
 * @path: path to the command
 * @c: the command
 * Return: concatenated string
 */
char *concat_path_cmd(char *path, char *c)
{
	char *buffer;
	size_t a = 0, b = 0;

	if (c == 0)
		c = "";
	if (path == 0)
		path = "";
	buffer = malloc(sizeof(char) * (string_len(path) + string_len(c) + 2));
	if (!buffer)
		return (NULL);
	while (path[a])
	{
		buffer[a] = path[a];
		a++;
	}
	if (path[a - 1] != '/')
	{
		buffer[a] = '/';
		a++;
	}
	while (c[b])
	{
		buffer[a + b] = c[b];
		b++;
	}
	buffer[a + b] = '\0';
	return (bufer);
}
