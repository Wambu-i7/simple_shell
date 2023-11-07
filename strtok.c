#include <stdio.h>
#include <string.h>
/**
 * main - tokenizes a string
 * Return: 0
 */
int main(void)
{
	char str [] = "my name is Emmie";
	char *delim = " ";
	char *token;

	token = strtok(str, delim);
	printf("%s ", token);

	return 0;
}
