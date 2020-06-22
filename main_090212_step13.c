#include <stdio.h>

/* 
https://stepik.org/lesson/64969/step/13?unit=41758
*/
int main() {
 char str[100];
  fgets(str, 100, stdin);
  fflush(stdin);
  int prev = 0;
  for(int i = 1; i < 100; i++) {
      char current = str[i];
      //printf("[%c]=[%d]\n", current,current);
      if(current == '\0' || current == '\n') {
         break;
      }
      
      if(current == ' ') {
         continue;
      }
      
      if(i > 0 && str[i-1] == ' ') {
          prev = i;
          //continue;
      }
      
      if (str[i+1] == ' ' || str[i+1] == '\n'){
          //printf("[[[%c]]]\n", str[i]);   
              for(int j = i; j >= prev; j--){
                 printf("%c", str[j]);   
              }
              printf(" ");
          
      }
      
      
      
  }
    return 0;
}