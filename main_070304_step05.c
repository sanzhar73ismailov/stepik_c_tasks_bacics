#include <stdio.h>
/* 
https://stepik.org/lesson/64311/step/5?unit=41389
*/

int main() {
   int n, x, xPrev, i = 0;
   scanf("%d ", &n);
   int seqPos = 1;
    
  do {
     scanf("%d ", &x);
    if (i == 0 || x != xPrev)
         printf("%d ", x);
    
    xPrev = x;
    i++;
  } while (i <= n);

    return 0;
}