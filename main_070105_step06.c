#include <stdio.h>
/* 
https://stepik.org/lesson/57650/step/6?unit=35411
*/
int main() {
    int k, f = 1;
    scanf("%d", &k);
    for(int i = 1; i <= k; f *= i++);
    printf("%d\n", f);
    return 0;

}