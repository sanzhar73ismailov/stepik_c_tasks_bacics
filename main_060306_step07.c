#include <stdio.h>
/*
https://stepik.org/lesson/57425/step/7?thread=solutions&unit=35201
*/

int main() {
    int b1, b2, b3, b4;
    scanf("%d %d %d %d", &b1, &b2, &b3, &b4);
    if(
      (b1 == 2 && b2 == 8 && b3 == 4) || 
      (b1 == 2 && b2 == 4 && b3 == 8)  ||
      (b1 == 8 && b2 == 2 && b3 == 4) || 
      (b1 == 8 && b2 == 4 && b3 == 2)  ||
      (b1 == 4 && b2 == 2 && b3 == 8) || 
      (b1 == 4 && b2 == 8 && b3 == 2)  
      ) 
        printf("open");    
    else 
        printf("close");
    return 0;
}