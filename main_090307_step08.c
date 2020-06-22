#include <stdio.h>

/* 
https://stepik.org/lesson/65084/step/8?unit=41875
*/
int main() {
   char str1[51], str2[51];
   //char str1[] = "integral";
   //char str2[] = "agent"; 
   int found = 0;
   scanf("%s %s", str1, str2);
   //printf("s1=%d\n", strlen(str1));
   //printf("s2=%d\n", strlen(str2));       
   for(int i = 0; i < strlen(str2); i++) {
      for(int j = 0; j < strlen(str1); j++) {
          if(str2[i] == str1[j]){
            str1[j] = '.';
            found++;
            break;
          }
      }
    }
  //  printf("found=%d\n", found);
  //  printf("str1=%s\n", str1);
   printf(found == strlen(str2) ? "yes" : "no");
  return 0;
}