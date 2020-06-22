#include <stdio.h>
/*
https://stepik.org/lesson/40164/step/9?unit=30907
*/
int main(void){

  for (int i=1; i<=5; i++) {
    for (int j=1; j<=5; j++)
      printf("%-5d",i*j);
    printf("\n");
  }

  return(0);
}

