#include <stdio.h>
/*
https://stepik.org/lesson/40164/step/6?unit=30907
*/
int main() {
  	  int a=3, b=4;
  double res = 0.75;

  printf("||-----|-----|-----|-----||\n");
  printf("|| act | one | two | res ||\n");
  printf("||=====+=====+=====+=====||\n");
  printf("||%5c|%-5d|%-5d|%05d||\n",'+',a,b,a+b);
  printf("||%5c|%5d|%5d|%05d||\n",'-',a,b,a-b);
  printf("||%5c|%5d|%-5d|%05d||\n",'*',a,b,a*b);
  printf("||%-5c|%-5d|%5d|%4.3f||\n",'/',a,b,res);
  printf("===========================");

  return(0);
  
  return(0);
}

