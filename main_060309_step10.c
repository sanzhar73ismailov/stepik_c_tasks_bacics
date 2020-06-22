#include <stdio.h>
/*
https://stepik.org/lesson/57425/step/10?unit=35201
*/

int main() {
  /*
  дошкольник <= 6
  7 <= школьник <= 18
  19 <= рабочий <= 59
  пенсионер >= 60
  */
  int age;
  scanf("%d", &age);
  if (age < 7) 
      printf("дошкольник");
  else if (age < 19) 
      printf("школьник");
  else if (age < 60) 
      printf("рабочий");
  else 
      printf("пенсионер");
    
  return 0;
    
}