#include <stdio.h>
#include <math.h>

/*
https://stepik.org/lesson/53872/step/15?unit=32085
*/

int main() {
  const int SPEED = 900;
  int R, r;
  scanf("%d", &R);
  r = 2 * R;
  printf("%d %d", r, r * 2 / SPEED);
  return 0;
}
