#include "main.h"
/**
 * memetoken - splits string with strtok function
 *
 * Return: 0
 */
void memetoken(char *str, char *delim)
{
	char *tok, *strcopy;
	int numtok, i;
	//char **av;

	numtok = 0;
	i = 0;
	strcopy = malloc(sizeof(char) * (strlen(str) + 1));
	/*copy str int strcopy and tokenize strcopy*/
	strcpy(strcopy, str);
	tok = strtok(strcopy, delim);
	while (tok != NULL)
	{
		printo(tok);
		//_putchar('\n');
		tok = strtok(NULL, delim);
		numtok++;
	}
	//av = malloc(sizeof(char *) * (numtok + 1));
	//tok = strtok(strcopy, delim);
	//while (tok != NULL)
	//{
	//	av[i] = malloc(sizeof(char) * (strlen(tok) + 1));
	//	strcpy(av[i], tok);
	//	tok = strtok(NULL, delim);
	//	i++;
	//}

	//av = NULL
	printf("number of tokens: %d\n", numtok);
	strcopy = NULL;
	free(strcopy);
	//printo("That's it :)\n");
}
