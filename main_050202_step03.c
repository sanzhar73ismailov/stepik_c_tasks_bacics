#include <stdio.h>
#include <math.h>

/*
https://stepik.org/lesson/54437/step/2?unit=32490
*/

int main() {
  int k;
  scanf("%d", &k);
  printf("%d", k % 2 ? -1 : 1);
  return 0;
}
