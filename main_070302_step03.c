#include <stdio.h>
/* 
https://stepik.org/lesson/64311/step/3?unit=41389
*/

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
     for(int j = 1; j <= i; printf("%d ", j++)){}
     printf("\n");
    }
    return 0;
}