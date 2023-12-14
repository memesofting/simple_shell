#include "main.h"
/**
 * memereadline - reads string for non interactive shell execution
 * Return: pointer to string
 */
char *memereadline(void)
{
	int i, n;
	char *str;
	char ch;

	n = 1024;
	i = 0;
	str = malloc(sizeof(char) * n);
	if (str == NULL)
	{
		perror("memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			free(str);
			exit(EXIT_SUCCESS);
		}
		else if (ch == '\n')
		{
			str[i] = '\0';
			return (str);
		}
		else
		{
			str[i] = ch;
		}
		i++;
	}
	return (str);
}
