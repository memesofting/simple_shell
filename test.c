#include "main.h"

int main(void)
{
	char *str, *tok, *copy;
	str = "my house";
	copy = malloc(sizeof(char) * strlen(str));
	strcpy(copy, str);
	tok = strtok(copy, " ");
	while (tok != NULL)
	{
		tok = (NULL, " ");
		printo(tok);
	}
	/*printo("good\n");*/
	/*printo(tok);*/
	return (0);
}
