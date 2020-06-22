#include <stdio.h>
#include <math.h>
/* 
https://stepik.org/lesson/64969/step/7?unit=41758
*/
int main() {
  int k =  0;
  const int strLength = 15;
  char str1[strLength];
  char str2[strLength];
  fgets(str1, strLength, stdin);
  fflush(stdin);
  fgets(str2, strLength, stdin);
  fflush(stdin);
    //puts(str1);
   // puts(str2);
  for(int i = 0; i < strLength; i++){
      //printf("%c=%d is zero=%d\n", str1[i],str1[i], (str1[i]=='\n'));
      if(str1[i] != str2[i])
         k++;
      if(str1[i] == '\n' && str2[i] == '\n')
          break;
  }
  printf("%d", k);
  return 0;
}