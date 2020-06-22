#include <stdio.h>
/* 
https://stepik.org/lesson/57650/step/4?unit=35411
*/
int main() {
    int k, m, i, j;
    scanf("%d %d", &k, &m);
    for(j = 0,  i = k > 0 ? k : 1 ; i <= m; printf("%d ", i++), j++);
    printf("\n%d", j);
    return 0;
}