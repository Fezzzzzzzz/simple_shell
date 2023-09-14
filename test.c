#include "shell.h"

char **command_line()
{
	int i = 0;
	size_t n;
	char *buff;
	getline(&buff, &n, stdin);
	char **args =(char **) malloc(sizeof(char*) * _strlen(buff));
	if (args == NULL)
		exit(-1);
	char *token = strtok(buff, " ");
	while (token != NULL)
	{
		args[i++] = token;
		token = strtok(NULL, " ");
	}
	args[i] = NULL;
	printf("%s", args[0]);
	return (args);
}