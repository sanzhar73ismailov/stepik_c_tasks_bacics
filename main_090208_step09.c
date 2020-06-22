#include <stdio.h>

/* 
https://stepik.org/lesson/64969/step/9?unit=41758
*/
int main() {
  char str[100];
  fgets(str, 100, stdin);
  fflush(stdin);
  
  
  int print = 1;
  int found1 = 0, found2 = 0;
  int start = 0, end = 0;  
  for(int i = 1; i < 100; i++){
      //printf("%c=%d is zero=%d\n", str1[i],str1[i], (str1[i]=='\n'));
     if(!found1 && str[i] == '*' && str[i-1] == '/') {
         found1 = 1;
         start = i - 1;
     }
     if(found1 && (i - start > 2) && str[i] == '/' && str[i-1] == '*') {
         found2 = 1;
         end = i;
         break;
     }
     if(str[i] == '\n')
          break;
  }

    
    for(int i = 0; i < 100; i++){
     if(found1 &&  found2 && i >= start && i <= end) {
         continue;
     }
     printf("%c", str[i]);
      if(str[i] == '\n')
          break;
  }
    
    return 0;
}