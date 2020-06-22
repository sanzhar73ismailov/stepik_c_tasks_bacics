#include <stdio.h>
/* 
https://stepik.org/lesson/64560/step/9?unit=41410
*/

int main() {
  int n, el, k;
  scanf("%d", &n);
  k = n /2;
  int arr[100];
    
  for (int i = 0; i < n; i++) {
    scanf("%d", &el);
    if(i < k) {
      arr[i + k] = el;    
    } else {
      arr[i - k] = el;
    }
  }

  for (int i = 0; i < n; i++) {
    el = arr[i];
    printf("%d ", el);
  }


  return 0;
}