#include <stdio.h>
/*
https://stepik.org/lesson/54462/step/2?unit=32612
*/
int main() {
  int k;
  scanf("%d", &k);
  printf("%d", 2 << (k / 3) - 1);
  return 0;
}

