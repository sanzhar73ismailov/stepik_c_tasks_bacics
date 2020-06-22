#include <stdio.h>
/* 
https://stepik.org/lesson/64560/step/5?unit=41410
*/

int main() {
  int n, el, lessExist = 0;
  scanf("%d", &n);
  int arr[100];
    
  for (int i = 0; i < n; i++) {
    scanf("%d", &el);
     arr[i] = el;
  }
  for (int i = 0; i < n-1; i++) {
    scanf("%d", &el);
    if(arr[i] < arr[n-1]) {
       printf("%d ", arr[i]);
       lessExist = 1; 
    }
  }
  if(!lessExist) {
    printf("0");   
  }
  
  return 0;
}