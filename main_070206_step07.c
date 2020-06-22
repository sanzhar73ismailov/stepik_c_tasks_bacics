#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/7?unit=41087
*/
int main() {
    int n;
    scanf("%d", &n);
    //max = min = n;
    for(int i = 1; i * i <= n; i++){
    	printf("%d ", i * i);
	}
  return 0;
}