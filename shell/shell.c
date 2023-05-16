#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
pid_t my_pid, parent_pid;

my_pid = getpid();
parent_pid = getppid();

printf("The child ID is %u\t and the parent process ID is %u\n", my_pid, parent_pid);
return(0);
}
