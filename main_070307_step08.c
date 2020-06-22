#include <stdio.h>
/* 
https://stepik.org/lesson/64311/step/8?unit=41389
*/

int main() {
   int n = 0;
   const START_CODON = 2517;
   int start = 0;
  do {
     scanf("%d ", &n);
     if (start && n != -9999) {
         printf("%d ", n);
    } 
      
    if(!start && n != START_CODON)
         continue;
      else
         start = 1;
 
  } while (n != -9999);

 
  return 0;
}