#include <stdio.h>
/* 
https://stepik.org/lesson/57650/step/11?unit=35411
*/
int main() {
    int n;
    scanf("%d", &n);
    int prime = 1;
    for(int i = 2; i < n; i++) {
    	if(n % i == 0 ) {
    		prime = 0;
    		break;
		}
    }
    printf("\n%d", prime);
    return 0;
}