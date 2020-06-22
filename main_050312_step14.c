#include <stdio.h>
#include <math.h>
/*
https://stepik.org/lesson/54462/step/14?unit=32612
*/
int main() {
	//exp(-h*z)*1.29
  int h;
  double z = 1.25 * pow(10, -4);
  double p0 = 1.29;
  
  scanf("%d", &h);
  
  double p = exp((-h) * z) * p0; 
  printf("%.2lf", p);
  return 0;
}

