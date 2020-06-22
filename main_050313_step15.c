#include <stdio.h>
#include <math.h>
/*
https://stepik.org/lesson/54462/step/14?unit=32612
*/
int main() {
	//exp(-h*z)*1.29  
  int N0 = 75;//7.5 * pow(10, 10);
  int k;
  scanf("%d", &k);
  
  double e = exp(-log(2) / 5570 * k);
  double N = N0 * e;
  
  printf("%.2lf", N);
  return 0;
}

