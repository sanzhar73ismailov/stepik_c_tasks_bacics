#include <stdio.h>

/*
https://stepik.org/lesson/53872/step/6?unit=32085
*/
int main() {
  
  int n;
  const double MOL_WEIGHT = 3e-23;
  const double DROP_WEIGHT = 0.05;
  const double GLASS_WEIGHT = 249.5;
  
  double molecules, drops;
  
  double s, PI = 3.14159265358979323846;
  scanf("%d", &n);
  
  molecules = GLASS_WEIGHT * n / MOL_WEIGHT ;
  drops = GLASS_WEIGHT * n / DROP_WEIGHT;
  
 
  printf("%.0lf %.3e", drops, molecules);
  return 0;
}
