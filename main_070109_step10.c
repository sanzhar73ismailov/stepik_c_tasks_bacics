#include <stdio.h>
/* 
https://stepik.org/lesson/57650/step/10?unit=35411
*/
int main() {
    int a;
    scanf("%d", &a);
    int num = 0;
    for(int i = 1; i <= a; i++) {
    	if(a % i == 0 ) {
    		printf("%d ", i);
    		num++;
		}
    }
    printf("\n%d", num);
    return 0;
}