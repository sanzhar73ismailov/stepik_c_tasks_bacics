#include <stdio.h>
/*
https://stepik.org/lesson/57425/step/9?unit=35201
*/

int main() {
  int d, m;
  scanf("%d %d", &d, &m);
  if (
      ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31) || 
      ((m == 4 || m == 6 ||m == 9 ||m == 11) && d <= 30) ||
      (m == 2 && d <= 29)
      )
      printf("correct");
   else
       printf("error");
  return 0;
}