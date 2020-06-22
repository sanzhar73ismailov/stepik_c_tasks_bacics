#include <stdio.h>
/* 
https://stepik.org/lesson/64657/step/5?unit=41549
*/

int main() {
  int n, k = 1;
  scanf("%d %d", &n);
  
  for(int i = 0; i < n; i++) {
     for(int j = i + 1; j > 0; j--) {
        printf("%d ", j);
     }
      
    for(int j = 2; j <= n-i; j++) {
        printf("%d ", j);
     }
     
     printf("\n");
   }
  return 0;
}