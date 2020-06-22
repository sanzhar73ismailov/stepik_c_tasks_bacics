#include <stdio.h>
#include <string.h>
/* 
https://stepik.org/lesson/65084/step/3?unit=41875
*/
int main() {
   char city1[50], city2[50];
   scanf("%s %s", city1, city2);
   char ch1 = city1[0] + 32;
   char ct1 = city1[strlen(city1) - 1];
   char ch2 = city2[0] + 32;
   char ct2 = city2[strlen(city2) - 1]; 
  
   printf(ch1 == ct2 || ch2 == ct1 ? "yes" : "no");
   return 0;
}