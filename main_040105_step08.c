#include <stdio.h>
/*
https://stepik.org/lesson/40857/step/8?unit=30903
*/
int main() {
    double pi = 3.1415926;
    int a;
    scanf("%d", &a);
    printf("%.2lf", (double)a * pi / 180);
    return 0;
}
