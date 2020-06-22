#include <stdio.h>
/* 
https://stepik.org/lesson/64311/step/2?unit=41389
*/

int main() {
  int n;
  do {
     scanf("%d ", &n);
     if (n > 0)
       printf("%d ", n);
  } while(n);
  return 0;
}