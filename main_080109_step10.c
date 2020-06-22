#include <stdio.h>
/* 
https://stepik.org/lesson/64560/step/10?unit=41410
*/

int main() {
  int n, el, min, max;
  scanf("%d", &n);
  int arr[100];
    
  for (int i = 0; i < n; i++) {
    scanf("%d", &el);
    arr[i] = el;
    if(i == 0) {
       min = el, max = el;   
    } else {
      if(min < el)
          min = el;
       if(max > el)
          max = el;
    }
  }
  for (int i = 0; i < n; i++) {
   if(arr[i] == min)
       arr[i] = max;
    else if(arr[i] == max)
       arr[i] = min;
  }

  for (int i = 0; i < n; i++) {
    el = arr[i];
    printf("%d ", el);
  }


  return 0;
}