#include "shell.h"
int main(int argc, char *argv[])
{
	char **args;
	do {
		write(STDOUT_FILENO, "($) ", _strlen("($) "));
		args = command_line();
	printf("%s", args[0]);
	} while (args[0] != "exit");
	return (0);
}
