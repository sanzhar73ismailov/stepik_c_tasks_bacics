#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/15?unit=41087
*/

#include <stdio.h>

int main() {
  int x, y;
  int res = 1;
  scanf("%d %d", &x, &y);
  int i = 1;
  while(res % y != 0) {
     res = x * i++;
  }
  printf("%d", res);
  return 0;
}