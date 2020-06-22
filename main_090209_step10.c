#include <stdio.h>

/* 
https://stepik.org/lesson/64969/step/10?unit=41758
*/
int main() {
  char str[100];//= "1234567891\n";
  fgets(str, 100, stdin);
  fflush(stdin);
  int length = 0;
  for(int i = 0; i < strlen(str); i++) {
      if(str[i] == '\0' || str[i] == '\n') {
          length = i;
          break;
      }
          
  }
 // printf("\num=%d", num);
 // return 0;
 // int length = strlen(str) - 1;
  int ost = length % 3;
  for(int i = 0; i < length; i++) {
    if(length > 3 && (i > 0 && i == ost)) {
        printf(" ");
    } 
    printf("%c", str[i]);
    if(length > 3 && i > 1 && (length - i - 1) % 3 == 0 && i < (length - 1)) {
        printf(" ");
    }
  }
  //printf("\nlength=%d", length);
  //printf("\nlen=%d", strlen(str));
  return 0;
}