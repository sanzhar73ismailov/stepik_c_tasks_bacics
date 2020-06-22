#include <stdio.h>
/*
https://stepik.org/lesson/57425/step/11?unit=35201
*/

int main() {
  int f1, f2, f3;
  scanf("%d %d %d", &f1, &f2, &f3);
  int temp = 0;
  if(f1 > f2) {
    temp = f1;
    f1 = f2;
    f2 = temp;
  } 
  if(f2 > f3) {
    temp = f2;
    f2 = f3;
    f3 = temp;
  }
  if(f1 > f2) {
    temp = f1;
    f1 = f2;
    f2 = temp;
  } 
  printf("%d %d %d", f1, f2, f3);
  return 0;
}