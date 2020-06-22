#include <stdio.h>
#include <math.h>
/* 
https://stepik.org/lesson/64969/step/6?unit=41758
*/
int main() {
  int i = 99, lastSumb = 0;
  char str[100] = {0};
  fgets(str, 100, stdin);
  fflush(stdin);
    
  while(str[i] == '\0' || str[i] == ' '|| str[i] == '\n') { 
      i--;
  }
  lastSumb = i;

  char prev = ' ';
  i = 0;
  while (i <= lastSumb) {
     if(str[i] != ' ' || prev != ' ')
	    printf("%c", str[i]);
	  prev = 	str[i] ;
	  i++;
    }
    
  return 0;
}