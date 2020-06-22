#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/12?unit=41087
*/
int main() {
  int n;
  scanf("%d", &n);
  while(n * 10 / 10){
    printf("%d", n % 10);
    n /= 10;
  }
  //printf("%d", 1/ 10);
  return 0;
}