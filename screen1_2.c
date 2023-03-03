#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

int main()
{
	char *command1[] = {"ps", "aux"};
	//char *command2[] = {"grep", "visual"};
	pid_t pid;
	int mypipe[2];
	pipe(mypipe);
	pid = fork();
	if (pid == 0)
		execve("/bin/ps", command1, NULL);
	wait()
}
