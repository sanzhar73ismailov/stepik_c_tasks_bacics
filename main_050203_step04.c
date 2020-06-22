#include <stdio.h>
#include <math.h>

/*
https://stepik.org/lesson/54437/step/4?unit=32490
*/

int main() {
  int x1, x2, x3, x4, x5;
  scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
  int odd =   (x1 % 2 != 0)
            + (x2 % 2 != 0)
            + (x3 % 2 != 0)
            + (x4 % 2 != 0)
            + (x5 % 2 != 0); 
  printf("%d", odd - (5 - odd));
  return 0;
}
