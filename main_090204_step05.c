#include <stdio.h>
#include <math.h>
/* 
https://stepik.org/lesson/64969/step/5?unit=41758
*/
int main() {
  char str[100];
  fgets(str, 100, stdin);
  fflush(stdin); // очищаем поток ввода

  int i = 0, x = 0;
  while(str[i] != '\0'){
     i++;
  }
   int level = 0;
   for (i = i - 2; i >= 0; i--, level++){
       if(str[i] == '1'){
         x += pow(2, level);   
       }
   }
   printf("%d", x);

  return 0;
}