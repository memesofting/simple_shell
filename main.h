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
int append_text_to_file(const char *filename, char *text_content);

int printo(char *letters);
void _putchar(char c);
int memeprompt(void);
void memetoken(char *str, char *delim);
/*int main(int ac, char **av);*/
int main(void);
void p_tok(char *str, char *delim);

#endif
