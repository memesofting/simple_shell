#include "main.h"
/**
 * main - splits string with strtok function
 *
 * Return: 0
 */
void p_tok(char *str, char *delim)
{
	char *tok;
	char *copy;

	copy = malloc(sizeof(char) *(strlen(str) + 1));
	strcpy(copy, str);
	tok = strtok(copy, delim);
	while (tok != NULL)
	{
		printo(/*"%s\n",*/tok);
		_putchar('\n');
		tok = strtok(NULL, delim);
	}
	printo("That's it :)\n");
}

//int main(void)
//{
//	char str[] = "Life is good";
//	p_tok(str, " ");
//	return (0);
//}
