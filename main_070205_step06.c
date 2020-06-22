#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/6?unit=41087
*/
int main() {
   int n, max = INT_MIN, min = INT_MAX, i = 0;
    //scanf("%d", &n);
    //max = min = n;
    
    do {
    	scanf("%d", &n);
    	if(n && n > max)
    	  max = n;
    	if(n && n < min)
    	  min = n;
    }while (n);
   printf("%d %d", max, min);
  return 0;
}