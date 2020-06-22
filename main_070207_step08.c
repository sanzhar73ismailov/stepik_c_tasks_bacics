#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/8?unit=41087
*/
int main() {
  
   int n;
    scanf("%d", &n);
    int i = 2;
    
    while (1) {
    	//int val = pow(2, i);
    	//printf("2^%10d = %d \n", i,  (int) val);
    
    	if ( n == 1 || i == n ) {
   		   printf("YES\n");
   		   break;
		} else if ( i > n ){
			printf("NO\n");
			break;
		}
		i *= 2;
	}
    
  return 0;
}