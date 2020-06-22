#include <stdio.h>
#include <string.h>
/* 
https://stepik.org/lesson/65084/step/5?unit=41875
*/
int main() {
   char str1[51], str2[51];
   int theSame = 1;
   scanf("%s %s", str1, str2);
   for(int i = 0; i < strlen(str1); i++) {
      if(str1[i] != str2[i]) {
         theSame = 0;
         break;
      }
   }
   printf(theSame? "yes" : "no");
   return 0;
}