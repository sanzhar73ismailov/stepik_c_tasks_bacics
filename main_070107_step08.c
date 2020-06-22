#include <stdio.h>
/* 
https://stepik.org/lesson/57650/step/8?unit=35411
*/
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = a, count = 1; i <= b; i++, count++) {
    	for(int j = 0; j < count; j++) {
    		printf("%5d", i);
		}
    }
    return 0;
}