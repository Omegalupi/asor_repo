#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main(){
  int i = 0;

  for(i; i < 255; i++)
    printf("Error %d: %s\n", i, strerror(i));

  return 1;
}
