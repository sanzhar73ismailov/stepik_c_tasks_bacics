#include <stdio.h>
/* 
https://stepik.org/lesson/65094/step/4?unit=41881
*/
int min(int a, int b, int c){
 return a < b ? (a < c ? a : c) : (b < c ? b : c);
}
int main(void){
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   printf("%d", min(a,b, c));
   return 0;
}