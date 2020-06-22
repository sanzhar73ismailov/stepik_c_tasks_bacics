#include <stdio.h>
/* 
https://stepik.org/lesson/57650/step/3?unit=35411
*/
int main() {
    int k, m;
    scanf("%d %d", &k, &m);
    for(int i = k > 0 ? k : 1 ; i <= m; printf("%d ", i++));
    return 0;
}