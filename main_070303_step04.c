#include <stdio.h>
/* 
https://stepik.org/lesson/64311/step/4?unit=41389
*/

int main() {
   int n, i = 0;
   int seqPos = 1;
  do {
     scanf("%d ", &n);
     if ((i == 0 && n == -9999) || (n != -9999 && n < 0)) {
         seqPos = 0;
         break;
     }
    i++;
  } while (n != -9999);

  if(seqPos)
      printf("YES");
  else
     printf("NO");
             
  return 0;
}