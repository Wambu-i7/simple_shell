#include "shell.h"
/**
 * main - Entry point
 * Return: 0 on success
 */
<<<<<<< HEAD
int main(void)
{
	char *input;
	char **tokens;
	char *path;
	char *command;

	while (1)
	{
		/*red the input*/
		read_line(&input);

		/*tokenize input*/
		tokens = tokenization(input);

		/*check for built in commands*/
		if (builtin_func(tokens, input))
		{
		/*if its a builtin, continue to next iteration of loop*/
=======

int main(void) {
    char *input;
    char **tokens;
    char *path;
    char *command;

    while (1) {
        /* Read input */
        read_line(&input);

        /* Tokenize input */
        tokens = tokenization(input);

        /* Check for built-in commands */
        if (builtin_func(tokens, input))
       	{
            free(input);
            free(tokens);
            continue;
        }

        /* Find the PATH */
        path = find_path();
        command = valid_path(path, tokens[0]);

        if (command != NULL)
       	{
            execute_command(command, tokens);
            free(command);
        }
       	else
       	{
     
            write(STDERR_FILENO, "Command not found: ", 19);
            write(STDERR_FILENO, tokens[0], string_len(tokens[0]));
            write(STDERR_FILENO, "\n", 1);
        }

        /* Free allocated memory */
        free(input);
        free(tokens);
    }

    return 0;
}

>>>>>>> 9e31b616b58645c1bae3310a5f20664291a0a0fa
