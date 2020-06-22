#include <stdio.h>

/*
https://stepik.org/lesson/53872/step/8?unit=32085
*/
int main() {
  int n;
  scanf("%d", &n);
  printf("%d%d%d", n/1%10, n/10%10, n/100%10);
  return 0;
}
