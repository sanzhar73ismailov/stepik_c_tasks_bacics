#include <stdio.h>
/* 
https://stepik.org/lesson/64750/step/8?unit=41555
*/
int main() {
  int n;
  scanf("%d", &n);
  for(int i = 91-n; i < 91; i++) {
      printf("%c", i);
      
  }
  return 0;
}