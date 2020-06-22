#include <stdio.h>
/* 
https://stepik.org/lesson/57650/step/5?unit=35411
*/
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = b; i >= a; printf("%d ", i--));
    //printf("\n%d", j);
    return 0;
}