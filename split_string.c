#include "main.h"
/**
 * main - splits string with strtok function
 *
 * Return: 0
 */
void p_tok(char *str, char *delim)
{
	char *tok;

	tok = strtok(str, delim);
	while (tok != NULL)
	{
		printo("%s\n", tok);
		tok = strtok(NULL, delim);
	}
	printo("That's it :)\n");
}

/**
 * int main(void)
 * {
 * char str[];
 * char str[] = "Life is good";
 * p_tok(str, " ");
 * return (0);
 * }
 */
