#include "shell.h"

int _strlen(char *string)
{
	int i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}
