#include <stdio.h>
/* 
https://stepik.org/lesson/64657/step/9?unit=41549
*/

int main() {
  int n, m, min, max, minJ = 0, maxJ = 0;
    
  scanf("%d %d", &n, &m);
  int sums[m];
  int arr[n][m];
  for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        
        int el;
        scanf("%d", &el);
        if(i == 0){
            sums[j] = 0;
        }
        sums[j] +=el;
        arr[i][j] = el;
        if(i == n-1) {
         if(j == 0){
           min = sums[0];
           max = sums[0];
         }
         if(sums[j] < min) {
             min = sums[j];
             minJ = j;
         }
         if(sums[j] > max) {
             max = sums[j];
             maxJ = j;
         }
        }
      }
   }


    for(int i = 0; i < n; i++) {
        int temp = arr[i][minJ];
        arr[i][minJ] = arr[i][maxJ];
        arr[i][maxJ] = temp; 
    }
    for(int i = 0; i < n; i++) {
       for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
       }
        printf("\n");
    }
  return 0;
}