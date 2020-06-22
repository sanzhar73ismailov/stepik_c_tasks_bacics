#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
https://stepik.org/lesson/53872/step/10?unit=32085
*/
int main() {
  long long k, dif;
  scanf("%lld", &k);
  dif =  pow(2, 30) - pow(10, 9);
  printf("%lld", dif * k);
  
  return 0;
}
