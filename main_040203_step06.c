#include <stdio.h>
/*
https://stepik.org/lesson/41090/step/6?unit=30904
*/
int main() {
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("%.2lf", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
    return 0;
}
