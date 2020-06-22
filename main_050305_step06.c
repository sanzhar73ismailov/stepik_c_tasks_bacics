#include <stdio.h>
/*
https://stepik.org/lesson/54462/step/6?unit=32612
*/
int main() {
  int b, d1, d2, d3, d4;
  scanf("%d", &b);
  
  d4 = b % 10;
  d3 = (b / 10 % 10) * 2;
  d2 = (b / 100 % 10) * 2 * 2;
  d1 = (b / 1000) * 2 * 2 * 2;  
  
  printf("%d", d1 + d2 + d3 + d4);
  return 0;
}

