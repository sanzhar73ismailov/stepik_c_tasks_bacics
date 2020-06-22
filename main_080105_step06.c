#include <stdio.h>
/* 
https://stepik.org/lesson/64560/step/6?unit=41410
*/

int main() {
  int n, el, lessOrGreaterExist = 0, first, last;
  scanf("%d", &n);
  int arr[100];
    
  for (int i = 0; i < n; i++) {
    scanf("%d", &el);
     arr[i] = el;
  }
  first = arr[0];
  last = arr[n-1];
  for (int i = 1; i < n-1; i++) {
    scanf("%d", &el);
    if(arr[i] > first && arr[i] < last) {
       printf("%d ", arr[i]);
       lessOrGreaterExist = 1; 
    }
  }
  if(!lessOrGreaterExist) {
    printf("0");   
  }
  
  return 0;
}