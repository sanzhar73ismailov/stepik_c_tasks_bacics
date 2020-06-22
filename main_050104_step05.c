#include <stdio.h>

/*
https://stepik.org/lesson/53872/step/4?unit=32085
*/
int main() {
  
  int ri, ro;
  long length;
  double s, PI = 3.14159265358979323846;
  scanf("%d %d", &ri, &ro);
  s =  ((PI * ro * ro) - (PI * ri * ri)) * 100;
  length = ro - ri;
  printf("%d %.2lf", length, s);
  return 0;
}
