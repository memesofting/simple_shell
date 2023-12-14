#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stddef.h>

extern char **environ;

int printo(char *letters);
void _putchar(char c);
int memeprompt(void);
char **memetoken(char *str, char *delim);
/*int main(int ac, char **av);*/
int main(int ac, char **av, char **env);
/*int main(void);*/
void p_tok(char *str, char *delim);
int memeexecve(char **command);
char *memegetline(void);
int memeaccess(char *path);

#endif
