#include <stdio.h>
/* 
https://stepik.org/lesson/64560/step/4?unit=41410
*/

int main() {
  int n, el;
  scanf("%d", &n);
  int arr[100];
    
  for (int i = 0; i < n; i++) {
    scanf("%d", &el);
     arr[i] = el;
     if(arr[i] % 2 == 0) {
        printf("%d ", arr[i]);   
     }
  }
  for (int i = 0; i < n; i++) {
     if(arr[i] % 2 != 0) {
        printf("%d ", arr[i]);   
     }
  }
  return 0;
}