#include <stdio.h>
/*
https://stepik.org/lesson/54462/step/7?unit=32612
*/
int main() {
  int k, x, d1, d2, d3, d4;
  scanf("%d", &k);
  scanf("%d", &x);
  
  d4 = x % 10;
  d3 = (x / 10 % 10) * k;
  d2 = (x / 100 % 10) * k * k;
  d1 = (x / 1000) * k * k * k;  
  
  printf("%d", d1 + d2 + d3 + d4);
  return 0;
}

