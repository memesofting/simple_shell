#include "main.h"

/**
 * main - creates shell
 *
 * Return:
 */
int main(void)
{
	char **av;
	size_t n;
	ssize_t numread;
	char *buf/*, *bufcopy, *delim*/;

	buf = NULL;
	while (1)
	{
		printo("memeshell$ ");
		numread = getline(&buf, &n, stdin);
		if (numread == -1)
		{
			printo("closing memeshell\n");
			free(buf);
			exit (0);
		}
		printo(buf);
		printf("%ld\n", numread);
		//bufcopy = malloc(sizeof(char) * (numread + 1));
		//strcpy(buf, bufcopy)
		av = memetoken(buf, " ");
		if (execve(av[0], av, NULL) == -1)
		{
			perror("Error:");
		}
	}
	free(buf);
	printo("I called memetoken");
	return(0);
}
