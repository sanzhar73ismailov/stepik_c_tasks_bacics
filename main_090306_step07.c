#include <stdio.h>

/* 
https://stepik.org/lesson/65084/step/7?unit=41875
*/
int main() {
  int n;
  scanf("%d", &n);
  int sum1 = (n / 1000 % 10) + (n / 10000 % 10) + (n / 100000 % 10);  
  int sum2 = (n % 10) + (n / 10 % 10) + (n / 100 % 10);
  printf(sum1 == sum2 ? "yes" : "no");
  return 0;
}