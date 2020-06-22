#include <stdio.h>
/* 
https://stepik.org/lesson/64311/step/10?unit=41389
*/

int main() {
  for (int i = 1; i <= 100; i++) {
     if(i % 3 == 0 && i % 5 == 0) 
         printf(" FizzBuzz");
     else if(i % 3 == 0) 
         printf(" Fizz");
     else if(i % 5 == 0) 
         printf(" Buzz");
     else 
         printf(" %d", i);
  }
  return 0;
}