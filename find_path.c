#include "shell.h"
/**
* find_path - locates path from global environment.
* Return: returns path if found or NULL if path not found.
*/

char *find_path(void)
{
	int i = 0;
	char **env = envp;/*pointer to an environment variable*/
	char *path = NULL;/*pointer to path storage*/

	while (*env)
	{
		/*check if current env variable starts with PATH=*/
		if (string_comp(*env, "PATH=", PATH_LENGTH) == 0)
		{
		/*store pointer to beggining of PATH string*/
			path = *env;
			/*find length of the PATH string*/
			while (*path && *path != '=')
			{
				path++;
				i++;
			}
			if (i < PATH_LENGTH)
			{
			/*return pointer to beggining of PATH string*/
				return (path + 1);
			}
			else
			{
				/*handle case where PATH string is too long*/
				return NULL;
			}
		}
		env++;
	}
	/*if PATH is not found, return NULL*/
	return (NULL);
}
