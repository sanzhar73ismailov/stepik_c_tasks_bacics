#include <stdio.h>
/* 
https://stepik.org/lesson/64311/step/7?unit=41389
*/

int main() {
   int n, nPrev,i = 0;
   int increase = 1;
  do {
     scanf("%d ", &n);
     if (i > 0 && n != -9999 && !(n > nPrev)) {
         increase = 0;
         break;
     }
    nPrev = n;
    i++;
  } while (n != -9999);

  if(increase)
      printf("YES");
  else
     printf("NO");
             
  return 0;
}