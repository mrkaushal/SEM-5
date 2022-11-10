#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void main()
{
  execve("hello", NULL, NULL);
  printf("Error");
}
