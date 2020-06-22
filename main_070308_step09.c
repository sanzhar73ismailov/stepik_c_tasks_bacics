#include <stdio.h>
/* 
https://stepik.org/lesson/64311/step/9?unit=41389
*/

int main() {
   int n;
   int start = 0, stop = 0, sum = 0;
  do {
     scanf("%d ", &n);
     if (start && !stop && n != -9999) {
         sum += n;
     } 
    if(!start && n == 0){
        start = 1;
        continue;
    }
    if(start && !stop && n == 0) {
        stop = 1;
    }
  } while (n != -9999);
   printf("%d ", sum);
   return 0;
}