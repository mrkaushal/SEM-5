#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  if (fork() == 0)
    if (fork())
      printf("Hello world!!\n");
  exit(0);
}
