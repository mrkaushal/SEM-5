#include <sys/types.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
  pid_t pid = fork();
  if (pid < 0)
  {
    fprintf(stderr, "Fork Failed");
    return 1;
  }
  else if (pid == 0)
  {
    printf("I'm the child \n");
  }
  else
  {
    wait(NULL);
    printf("Child Complete \n");
  }
  return 0;
}