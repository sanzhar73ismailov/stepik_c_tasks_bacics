#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/3?unit=41087
*/
int main() {
  int n;
    do {
    	scanf("%d", &n);
    	if(n != -9999)
    	  printf("%d ", n);
	} while (n != -9999);
  return 0;
}