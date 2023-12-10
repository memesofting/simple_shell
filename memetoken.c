#include "main.h"
/**
 * memetoken - splits string with strtok function
 *
 * Return: 0
 */
void memetoken(char *str, char *delim)
{
	int len;
	char *tok;
	char *strcopy;

	len = strlen(str);
	strcopy = malloc(sizeof(char) * (len + 1));
	/*rd = read(STDOUT_FILENO, tok, 1);*/
	strcpy(strcopy, str);
	tok = strtok(strcopy, delim);
	printo(tok);
	while (tok != NULL)
	{
		tok = strtok(NULL, delim);
		printo(tok);
	}
/*	_putchar('\n');
 *	printo(strcopy);
 */
	printo("That's it :)\n");
	free(strcopy);
}

int main(void)
{
	/*char *string;*/
	char *d;

	d = " ";
	char *string = "good boy\n";
	printo(string);
	memetoken(string, d);
	return (0);
}
