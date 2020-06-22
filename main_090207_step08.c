#include <stdio.h>
#include <math.h>
/* 
https://stepik.org/lesson/64969/step/8?unit=41758
*/
int main() {
  int rows, x = 0, y = 0;
  scanf("%d\n", &rows);
  for(int i = 0; i < rows; i++) {
     char str[10];
     int steps;
     scanf("%s %d",&str, &steps);
     switch (str[0]) {
       case 'N':
           y += steps; 
          // sscanf(str, "%d", &x); 
           break;
       case 'E':
           x += steps; break;
       case 'S':
           y -= steps; break;
       case 'W':
           x -= steps; break;
   }
  }
    printf("%d %d\n", x, y);
  return 0;
}