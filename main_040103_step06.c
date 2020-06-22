#include <stdio.h>
/*
https://stepik.org/lesson/40857/step/6?unit=30903
*/
int main() {
  int num;
  scanf("%d", &num);
  int c = num % 10;
  int b = num % 100 / 10;
  int a = num / 100;
  int res = a + b + c;
  
  printf("%d\n", res);
  return 0;
}
