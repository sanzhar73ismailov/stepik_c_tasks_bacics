#include <stdio.h>
/*
https://stepik.org/lesson/40164/step/8?unit=30907
*/
int main(void){

  printf("N\t10*N\t100*N\t1000*N\n\n");  
  for (int i=1;i<=10;i++)
    printf("%d\t%d\t%d\t%d\n",i,10*i,100*i,1000*i);

  return(0);
}

