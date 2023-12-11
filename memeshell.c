#include "main.h"

/**
 * main - creates shell
 *
 * Return:
 */
int main(int ac, char **av)
{
	size_t n;
	ssize_t numread;
	char *buf, *bufcopy, *delim;

	delim = " ";
	buf = NULL;
	while (1)
	{
		printo("memeshell$ ");
		numread = getline(&buf, &n, stdin);
		if (numread == -1)
		{
			printo("closing memeshell\n");
			free(buf);
			return (-1);
		}
		printo(buf);
		printf("%ld\n", numread);
		/*printo("command is: %s\n", buf);*/
	}
	printf("%ld\n", numread);
	bufcopy = malloc(sizeof(char) * (numread + 1));
	strcpy(buf, bufcopy);
	memetoken(bufcopy, delim);
	free(buf);
	free(bufcopy);
	return(0);
}
