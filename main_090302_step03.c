#include <stdio.h>

/* 
https://stepik.org/lesson/65084/step/3?unit=41875
*/
int main() {
  char name[25];
  char ext[3];
  scanf("%s", name);
  printf("%s.", name);
  scanf("%s", &ext);
  
  printf("%s", ext);
  return 0;
}