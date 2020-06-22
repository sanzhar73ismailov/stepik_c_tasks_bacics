#include <stdio.h>
/*
https://stepik.org/lesson/54462/step/4?unit=32612
*/
int main() {
  int f;
  scanf("%d", &f);
  //(32°F ? 32) ? 5/9 
  printf("%.2lf", (f - 32) * 5.0 / 9);
  return 0;
}

