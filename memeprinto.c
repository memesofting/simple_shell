#include "main.h"

/**
 * printo - prints string to standard output
 * @letters: string to print
 *
 * Return: no of char printed
 */

int printo(char *letters)
{
	int i, len;

	i = 0;
	len = strlen(letters);
	while (i < len)
	{
		_putchar(letters[i]);
		i++;
	}
	return (len);
}
