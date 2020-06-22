#include <stdio.h>
/*
https://stepik.org/lesson/54462/step/10?unit=32612
*/
int main() {
  int n, k, x;
  scanf("%d %d %d", &n, &k, &x);
  
  printf("%d", (k + x) % n);
  return 0;
}

