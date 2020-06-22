#include <stdio.h>
/* 
https://stepik.org/lesson/64657/step/2?unit=41549
*/

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[n][m];
  

  for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        int val;
        scanf("%d", &val);
        arr[i][j] = val;
      }
   }
  for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
      	  printf("%d ", arr[i][j]);
	  }
      printf("\n");
  }
  return 0;
}