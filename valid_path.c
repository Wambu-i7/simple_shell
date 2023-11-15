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
/* iterate through each path in the array*/
	while (path[j])
	{
	/*concatenate the current path and command*/
		result = concat_path_cmd(path[j], c);
	/*check if the concatenated path and command is a valid executable*/
		if (access(result, F_OK | X_OK) == 0)
			return (result);/*if valid, return results*/
		free(result);/*free the allocated memory*/
		j++;
	}
	return (NULL);/*if no valid path is found,return NULL*/
}
