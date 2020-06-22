#include <stdio.h>
/* 
https://stepik.org/lesson/64560/step/8?unit=41410
*/

int main() {
  int n, el;
  double sum, mean = 0;
  scanf("%d", &n);
  int arr[100];
    
  for (int i = 0; i < n; i++) {
    scanf("%d", &el);
    arr[i] = el;
    sum += el;
  }
  mean = sum / n;
  for (int i = 0; i < n; i++) {
    el = arr[i];
    if(el > mean){
        printf("%d ", el);
    }
  }
  for (int i = 0; i < n; i++) {
    el = arr[i];
    if(el <= mean){
        printf("%d ", el);
    }
  }

  return 0;
}