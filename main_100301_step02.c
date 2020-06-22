#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/2?unit=42143
*/
void swap(int * a, int * b){
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}