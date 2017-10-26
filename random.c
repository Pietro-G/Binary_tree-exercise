#include <stdio.h>

void print_stuff( int x, int y)
{
  printf("%d %x %x %x %x %x\n", y, x, x+y, x-y, x/y, x*y);
}

int main(int argc, char *argv[]) {
  print_stuff(100,200);
  return 0;
}
