#include "main.h"

/**
 * main - creates shell
 *
 * Return:
 */
int main(void)
{
	while (1)
	{
		printo("memeshell$ ");
		char **av;
		char *buf;
		size_t n;
		ssize_t numread;

		buf = NULL;
		n = 0;
		numread = 0;
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
		//memeexecve(av);
	}
	return(0);
}
