#include "main.h"

int main(void)
{
	size_t n;
	ssize_t numread;
	char *buf;

	buf = malloc(sizeof(char) *n);
	char prompt[] = "$ ";
	buf = NULL;
	while (1)
	{
		printo("$");
		write(1, &prompt, strlen(prompt));
		numread = getline(&buf, &n, stdin);
		if (numread == -1)
		{
			printo("closing\n");
			free(buf);
			return (-1);
		}
		printo(buf);
		/*printo("command is: %s\n", buf);*/
	}
	free(buf);
	return(0);
}
