#include <stdio.h>
/* 
https://stepik.org/lesson/57650/step/9?unit=35411
*/
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++) {
    	for(int j = 0; j < i; j++) {
    		printf("%4d", i);
		}
    }
    return 0;
}