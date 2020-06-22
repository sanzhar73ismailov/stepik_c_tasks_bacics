#include <stdio.h>
/* 
https://stepik.org/lesson/64560/step/3?unit=41410
*/

int main() {
  int n, el, isPol = 1;
  scanf("%d", &n);
  int arr[100];
    
  for (int i = 0; i < n; i++) {
    scanf("%d", &el);
     arr[i] = el;
  }
  for (int i = 0; i < n / 2; i++) {
     if(arr[i] != arr[n-i-1]) {
         isPol = 0;
         break;
     }
  }
  if (isPol)
        printf("YES");
  else 
        printf("NO");
  return 0;
}