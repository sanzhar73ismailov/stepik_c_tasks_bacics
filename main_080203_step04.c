#include <stdio.h>
/* 
https://stepik.org/lesson/64657/step/4?unit=41549
*/

int main() {
  int n;
  scanf("%d %d", &n);

  

  for(int i = 0; i < n; i++) {
      for(int j = 1; j < n+1; j++) {
       if(i % 2 == 0) {
         printf("%d ", j); 
       } else{
         printf("%d ", n - j + 1);
       }
      }
      printf("\n");
   }
  

  
  return 0;
}