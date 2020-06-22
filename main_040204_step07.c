#include <stdio.h>
/*
https://stepik.org/lesson/41090/step/7?unit=30904
*/
int main() {
	double pi = 3.141593;
    double a, b, y;
    scanf("%lf %lf %lf", &a, &b, &y);
    y = y / 180 * pi;
    double res = 0.5 * a * b * sin(y);
    printf("%.2lf", res);
  return 0;
}
