#include <stdio.h>
/*
https://stepik.org/lesson/40318/step/6?unit=30908
*/
int main(void) {

  int h; // ????
  int m; // ??????
  int s; // ???????

  scanf("%d", &h);
  scanf("%d", &m);
  scanf("%d", &s);

  int seconds = h*60*60 + m*60 + s;

  printf("%d\n", seconds);

  return 0;
}

