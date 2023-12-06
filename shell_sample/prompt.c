#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n;
	ssize_t numread;
	char *buf;

	buf = NULL;
	while (1)
	{
		printf("$ ");
		numread = getline(&buf, &n, stdin);
		if (numread == -1)
		{
			printf("closing\n");
			free(buf);
			return (-1);
		}
		printf("command is: %s\n", buf);
	}
	free(buf);
	return(0);
}
