#include <stdio.h>
#include <math.h>
/*
https://stepik.org/lesson/57425/step/5?unit=35201
*/


int main() {
  int x1, y1, x2, y2;
  scanf("%d %d", &x1, &y1);
  scanf("%d %d", &x2, &y2);
  printf("%d", (sqrt(x1*x1 + y1*y1) > sqrt(x2*x2 + y2*y2)) + 1); 
  return 0;
}