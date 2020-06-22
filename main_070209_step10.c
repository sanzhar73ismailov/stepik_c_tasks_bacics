#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/10?unit=41087
*/
int main() {
    int n;
    scanf("%d", &n);
    int val = 2;
    int i = 1;
    
    while (val <= n) {
       val *= 2;
       printf(" %d", i);
       i++;
	}
  return 0;
}