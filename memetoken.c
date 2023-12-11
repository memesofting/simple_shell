#include "main.h"
/**
 * memetoken - splits string with strtok function
 * @str: string to split
 * @delim: delimeter char
 *
 * Return: pointer to char
 */
char **memetoken(char *str, char *delim)
{
	char *tok, *strcopy;
	char *strcopy2;
	int numtok, i, j;
	char **av;

	numtok = 0;
	i = 0;
	strcopy = malloc(sizeof(char) * (strlen(str) + 1));
	strcopy2 = malloc(sizeof(char) * (strlen(str) + 1));
	/*copy str int strcopy and tokenize strcopy*/
	strcpy(strcopy, str);
	tok = strtok(strcopy, delim);
	while (tok != NULL)
	{
		//printo(tok);
		//_putchar('\n');
		numtok++;
		tok = strtok(NULL, delim);
	}
	//printf("number of tokens: %d\n", numtok);
	av = malloc(sizeof(char *) * (numtok + 1));
	tok = strtok(strcopy2, delim);
	while (tok != NULL)
	{
		av[i] = malloc(sizeof(char) * (strlen(tok) + 1));
		strcpy(av[i], tok);
		tok = strtok(NULL, delim);
		i++;
	}

	av[i] = NULL;
	printf("number of tokens: %d\n", numtok);
	free(strcopy);
	free(strcopy2);
	printo("That's it :)\n");
	return (av);
}
