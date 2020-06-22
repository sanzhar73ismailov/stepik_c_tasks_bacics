#include <stdio.h>

/* 
https://stepik.org/lesson/64969/step/11?unit=41758
*/
int main() {
   char str[100];
  fgets(str, 100, stdin);
  fflush(stdin);
  int num = 1;
  int withPoint = 0;
  int len = 0;
  for(int i = 0; i < 100; i++) {
      if(str[i] == '\0' || str[i] == '\n') {
        len = i;  
         break;
       }
  }
  //printf("\len=%d", len);
  //return 0;
    
  for(int i = 0; i < len; i++) {
     if (str[i] == '.' && (i == 0 || i == len-1)) {
        num = 0;
        break;
     }
     if (str[i] == '-' && i == 0) {
        continue;
     }
      if(!withPoint && str[i] == '.') {
          withPoint = 1;
          continue;
      } else if(withPoint && str[i] == '.') {
          num = 0;
          break;
      }
      if(str[i] < 48 || str[i] > 57){
          num = 0;
          break;
      }
  }
  printf(!num ? "error" : withPoint ? "float" : "int");

  return 0;
}