#include <stdio.h>
/* 
https://stepik.org/lesson/57650/step/7?unit=35411
*/
int main() {
    long n, f1 = 1, f2 = 1, f = 1;
    scanf("%d", &n);
    for(int i = 3; i <= n; i++){
      f = f2 + f1;
      f1 = f2;
      f2 = f;
    }
    printf("%d\n", f);
    return 0;
}