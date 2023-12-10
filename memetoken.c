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
	while (tok != NULL)
	{
		printo(tok);
		tok = strtok(NULL, delim);
	}
	printo(strcopy);
	printo("That's it :)\n");
}

int main(void)
{
	/*char *string;*/

	char *string = "good boy\n";
	printo(string);
	memetoken(string, " ");
	return (0);
}
