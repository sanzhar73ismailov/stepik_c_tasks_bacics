#include <stdio.h>
/* 
https://stepik.org/lesson/64560/step/7?unit=41410
*/

int main() {
  int n, el;
  double sum = 0;
  scanf("%d", &n);
  int arr[100];
    
  for (int i = 0; i < n; i++) {
    scanf("%d", &el);
    sum += el;
  }
   printf("%.02lf", sum / n);
  
  return 0;
}