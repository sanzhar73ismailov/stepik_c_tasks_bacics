#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/9?unit=41087
*/
int main() {
    int n;
    scanf("%d", &n);
    int val = 1;
    int i = 0;
    
    while (val <= n) {
       val *= 10;
       i++;
	}
	
	printf("%d", i);
  return 0;
}