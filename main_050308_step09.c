#include <stdio.h>
/*
https://stepik.org/lesson/54462/step/9?unit=32612
*/
int main() {
  int k, x1, x2;
  scanf("%d %d %d", &k, &x1, &x2);
  
  printf("%d %d", x1 % k, x2 % k);
  return 0;
}

