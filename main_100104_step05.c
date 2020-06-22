#include <stdio.h>
/* 
https://stepik.org/lesson/65094/step/5?unit=41881
*/
int main(void){
   int n;
   scanf("%d", &n);
   printf("%d", factorial(n));
   return 0;
}
int factorial(int k){
 if(k == 0)
     return 1;
  return k * factorial(k - 1);
}