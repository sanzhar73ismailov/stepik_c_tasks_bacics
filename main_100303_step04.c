#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/4?unit=42143
*/
void minmax(int * x, int * y){
  if(*x > *y) {
     int temp = *y;
     *y = *x;
      *x = temp;
  }
}