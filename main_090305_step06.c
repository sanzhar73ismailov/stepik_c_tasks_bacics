#include <stdio.h>

/* 
https://stepik.org/lesson/65084/step/6?unit=41875
*/
int main() {
   char str1[51], str2[51];
   int theSame = 1;
   fgets(str1, 50, stdin);
   fflush(stdin);
   fgets(str2, 50, stdin);
   fflush(stdin);  
   for(int i = 0; i < strlen(str1); i++) {
      char c1 = str1[i] > 96 ? str1[i] - 32 : str1[i];
      char c2 = str2[i] > 96 ? str2[i] - 32 : str2[i];
      if(c1 != c2) {
         theSame = 0;
          break;
      }
   }
   printf(theSame ? "yes" : "no");
   return 0;

}