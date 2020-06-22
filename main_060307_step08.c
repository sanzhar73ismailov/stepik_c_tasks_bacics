#include <stdio.h>
/*
https://stepik.org/lesson/57425/step/9?unit=35201
*/

int main() {
 int n;
 scanf("%d", &n);
 printf("%d", 350 +  ( n <= 500 ? 0 : (n - 500) * 2 ));    
  return 0;
}