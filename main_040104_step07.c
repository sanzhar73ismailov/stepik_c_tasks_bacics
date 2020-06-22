#include <stdio.h>
/*
https://stepik.org/lesson/40857/step/7?unit=30903
*/
int main() {
  int start, end;
  double tarif;
  
  scanf("%d", &start);
  scanf("%d", &end);
  scanf("%lf", &tarif);

  double res = (end - start) * tarif;
  printf("%-8.2lf", res);

  return 0;
}
