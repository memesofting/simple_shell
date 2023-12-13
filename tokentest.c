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
	char *tok, *strcopy, *strcopy2;
	int numtok, i;
	char **avptr;

	numtok = 0;
	strcopy = strdup(str);
	strcopy2 = strdup(str);
	tok = strtok(strcopy, delim);
	while (tok != NULL)
	{
		numtok++;
		tok = strtok(NULL, delim);
	}
	avptr = malloc(sizeof(char *) * (numtok + 1));
	tok = strtok(strcopy2, delim);
	i = 0;
	while (tok != NULL)
	{
		avptr[i] = malloc(sizeof(char) * (strlen(tok) + 1));
		strcpy(avptr[i], tok);
		tok = strtok(NULL, delim);
		i++;
	}
	avptr[i] = NULL;
	/*printf("number of tokens: %d\n", numtok);*/
	free(strcopy);
	free(strcopy2);
	/*printo("That's it :)\n");*/
	return (avptr);
}
