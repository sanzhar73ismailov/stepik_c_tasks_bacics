#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/5?unit=41087
*/
int main() {
  int n, sum = 0;
  do {
    	scanf("%d", &n);
    	sum = sum + n;
    } while (n);
   printf("%d ", sum);
    
  return 0;
}