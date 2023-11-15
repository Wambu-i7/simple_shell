#include "shell.h"

/**
 * valid_path - checks valididty of the path.
 * @path: Path to verify.
 * @c: Command enterd by user.
 * Return: path appended with a command on success
 *  or NULL on failure.
 */
char *valid_path(char **path, char *c)
{
	int j = 0;
	char *result;

	while (path[j])
	{
		result = concat_path_cmd(path[j], c);
		if (access(result, F_OK | X_OK) == 0)
			return (result);
		free(result);
		j++;
	}
	return (NULL);
}
