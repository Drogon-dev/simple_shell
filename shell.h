#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define READ_BUF 1000

#define DELIM " \a\t\r\n"

#define INTERNAL_CMD 1
#define EXTERNAL_CMD 2
#define PATH_CMD 3
#define INVALID_CMD -1

extern char **environ;

typedef struct internal_func
{
	char *cmd_name;
	void (*func)(char **command);
} map_func;
void env(char **);
void ch_dir(char **);
void quit(char **);
void ctrl_C(int);
char *_get_line(void);
char **tokenize(char *, const char *);
void shell_exec(char **, int);
int command_check(char *);
void execute(char **, int);

int print_function(char *, int);
void (*get_func(char *))(char **);

int _strlen(char *);
int _strcmp(char *, char *);

void *_realloc(void *, int, int);

char *_getenv(char *);

#endif 
