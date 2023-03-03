#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

int main()
{
	char *arg[] = {"ps", "aux"};
	char *path[] = {"/bin/"};
	printf("path: %s\n", strcat(path, arg[0]));
	execve("/bin/", arg, NULL);
}
