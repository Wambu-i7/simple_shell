#include "shell.h"
/**
* find_path - locates path from global environment.
* Return: returns path if found or NULL if path not found.
*/

char *find_path(void)
{
	int i;
	char **env = envp, *path = NULL;

	while(*env)
	{
		if (string_comp(*env, "PATH=", PATH_LENGTH) == 0)
		{
			path = *env;
			while (*path && i < PATH_LENGTH)
			{
				path++;
				i++;
			}
			return(path);
		}
		env++;
	}
	return(NULL);
}
