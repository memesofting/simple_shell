#include <stdio.h>
/**
 * main - print all arguments without using argc
 *
 * Return: Always 0
 */

/*int main(int ac __attribute__((unused)), char **av)*/
int main(int ac, char **av)
{
	int i;

	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
