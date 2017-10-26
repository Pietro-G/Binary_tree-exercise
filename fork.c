#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char *argv[]) {
  printf(" Before the fork!\n");
  pid_t pid = fork();
  if (pid)
  {
      // waitpid( pid, 0 , 0); Gives a non-deterministic run-time.
      printf( "I'm the parent %d\n" );
      // waitpid( pid, 0 , 0); Gives a non-deterministic run-time.
  }
  else
  {
    printf ("I'm the child!\n");
  }
  printf(" After the fork!", pid);
  return 0;
}
