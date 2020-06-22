#include <stdio.h>
/* 
https://stepik.org/lesson/64311/step/7?unit=41389
*/

int main() {
   int n, nPrev,i = 0;
   int numberWrong = 0;
  do {
     scanf("%d ", &n);
     if (i > 0 && n != -9999 && !(n > nPrev)) {
         numberWrong = i + 1;
         break;
     }
    nPrev = n;
    i++;
  } while (n != -9999);

  printf("%d", numberWrong);
 
  return 0;
}