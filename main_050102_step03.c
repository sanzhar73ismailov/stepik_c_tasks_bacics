#include <stdio.h>

/*
https://stepik.org/lesson/53872/step/3?unit=32085
*/
int main() {
  const double PI = 3.14159265358979323846;
  int r, h;
  scanf("%d %d", &r, &h);
  double cylinderVolume, coneVolume;
  cylinderVolume = h * PI * (r * r);
  coneVolume  = 1.0 / 3 * h * PI * (r * r);
  printf("%.2lf %.2lf", cylinderVolume, coneVolume);
  return 0;
}
