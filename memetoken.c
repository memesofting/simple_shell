#include "main.h"
/**
 * memetoken - splits string with strtok function
 *
 * Return: 0
 */
char **memetoken(char *str, char *delim)
{
	int len;
	char *tok, *strcopy;
	int numtok, i;
	char **av;

	numtok = 0;
	len = strlen(str);
	strcopy = malloc(sizeof(char) * len);
	/*copy str int strcopy and tokenize strcopy*/
	strcpy(strcopy, str);
	tok = strtok(strcopy, delim);
	printo(tok);
	_putchar('\n');
	while (tok != NULL)
	{
		tok = strtok(NULL, delim);
		printo(tok);
		_putchar('\n');
		numtok++;
	}
	av = malloc(sizeof(char *) * (numtok + 1));
	tok = strtok(strcopy, delim);
	i = 0;
	while (tok != NULL)
	{
		av[i] = malloc(sizeof(char) * (strlen(tok) + 1));
		strcpy(av[i], tok);
		tok = strtok(NULL, delim);
		i++;
	}

	av[i] = NULL;
	free(strcopy);
	printo("That's it :)\n");
}
