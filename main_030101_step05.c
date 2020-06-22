#include <stdio.h>
/*
https://stepik.org/lesson/40164/step/5?unit=30907
*/
int main() {
  int grad1 = 51, grad2 = 0;
  
  int latitude1 = 31;
  int longitude1 = 25;
  int height1 = 48;
    
  int latitude2 = 9;
  int longitude2 = 29;
  int height2 = 93;
  
  printf("S.Holmes:\n");
  printf("%2dgrad %2d'%d.%d\" N\n", grad1, latitude1, longitude1, height1);
  printf("%-2dgrad %2d'%d.%d\" W\n", grad2, latitude2, longitude2, height2);
  
  return(0);
}

