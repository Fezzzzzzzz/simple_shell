#include "shell.h"
int main(void)
{
	char **arg = command_line();
	printf("%s", arg[1]);
	free(arg);

}