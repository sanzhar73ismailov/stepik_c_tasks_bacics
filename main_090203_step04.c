#include <stdio.h>
/* 
https://stepik.org/lesson/64969/step/4?unit=41758
*/
int main() {
   char symb[1000];
   int i = 0, pos = -1;
   fgets(symb, 1000, stdin);
   fflush(stdin); // очищаем поток ввода
   char c = symb[0]; 
   //puts(symb);
   //printf("symb= [%c]\n", c);
   char str[1000];
   fgets(str, 1000, stdin);
   fflush(stdin); // очищаем поток ввода

    while (str[i] != '\0') {
    	//printf("{{{ %c", str[i]);
        if(str[i] == c) {
          pos = i;
		  break;
        }
        i++;
    }
    printf("%d", pos);
        
  return 0;
}