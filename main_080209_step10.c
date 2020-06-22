#include <stdio.h>
/* 
https://stepik.org/lesson/64657/step/10?unit=41549
*/
int main() {
  int n, k;
    
  scanf("%d", &n);
  int arr[n][n];
    
  for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        int el;
        scanf("%d", &el);
        arr[i][j] = el;
       }
   }
   scanf("%d", &k);
   //k = 2; 
   for(int i = 0; i < n; i++) {
       for(int j = 0; j < n; j++) {
           int col = (n - (k%n) + j) % (n);
           printf("%d ", arr[i][col]);
       }
      printf("\n");
   }
    
  return 0;
}