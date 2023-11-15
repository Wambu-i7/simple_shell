#include "shell.h"
/**
 * main - Entry point.
 * Return: Always 0 on success.
 */

int main(void) {
    char *input;
    char **tokens;
    char *path;
    char *command;

    while (1) {
        // Read input
        read_line(&input);

        // Tokenize input
        tokens = tokenization(input);

        // Check for built-in commands
        if (builtin_func(tokens, input)) {
            // If it's a built-in command, continue to the next iteration of the loop
            free(input);
            free(tokens);
            continue;
        }

        // Find the PATH
        path = find_path();

        // Validate the path and get the full command path
        command = valid_path(path, tokens[0]);

        if (command != NULL) {
            // Execute the command
            execute_command(command, tokens);
            free(command);
        } else {
            // Handle invalid command
            fprintf(stderr, "Command not found: %s\n", tokens[0]);
        }

        // Free allocated memory
        free(input);
        free(tokens);
    }

    return 0;
}
