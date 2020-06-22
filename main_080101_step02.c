#include <stdio.h>
/* 
https://stepik.org/lesson/64560/step/2?unit=41410
*/

int main() {
  int n, el;
  scanf("%d", &n);
  int arr[n];
  for (int i = n; i > 0; i--) {
    scanf("%d", &el);
     arr[i-1] = el;
  }
  for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
  return 0;
}