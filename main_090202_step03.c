#include <stdio.h>
/* 
https://stepik.org/lesson/64969/step/3?unit=41758
*/
int main() {
  int i = 0, words = 0;
  
  char str[100] = {0};
  gets(str);
  
  //char str[] = "          Hello Hi                 One           ";
  char prev = ' ';
    while (str[i] != '\0') {
    	//printf("%c", str[i]);
        if(str[i] != ' ' && prev == ' ')
		  words++;  
	    prev = 	str[i] ;
		i++;
    }
    printf("%i", words);
    //printf("\ntest=%i\n", words == 3);
        
  return 0;
}