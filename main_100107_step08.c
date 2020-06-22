#include <stdio.h>
/* 
https://stepik.org/lesson/65094/step/8?unit=41881
*/
void square(int x, char c){
   for(int i = 0; i < x; i++, printf("\n"))
     for(int j = 0; j < x; j++, printf("%c", c));
}
int main(){ 
   int n, c;
   scanf("%d %c", &n, &c);
   square(n, c);
   return 0;
}