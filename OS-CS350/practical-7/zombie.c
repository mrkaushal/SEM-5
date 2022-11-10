#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
int main()
{
  int pid;
  pid = getpid();
  printf("Current Process ID is : %d\n", pid);
  printf("[ Forking Child Process ... ] \n");
  pid = fork();
  if (pid < 0)
  {
    printf("Process can not be created ");
  }
  if (pid > 0)
  {
    printf("PARENT Process is sleeping ...");
    sleep(5);
    printf("\nID : %d\n", getppid());
  }
  else
  {
    exit(0);
  }
  return 0;
}