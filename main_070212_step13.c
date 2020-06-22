#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/13?unit=41087
*/

unsigned long factorial(unsigned long f)
{
    if ( f == 0 ) 
        return 1;
    return(f * factorial(f - 1));
}

int main() {
  double ep, e = 0;
  long num = 0;
  scanf("%lf", &ep);
  //printf("ep = %.8lf\n", ep);
  while (1) {
    //printf("num=%ld\n", num);
    long f = factorial(num);
   // printf("f=%ld\n", f);
    double res = 1.0 / f;
    //printf("res = %.8lf\n", res);
    e = e + res;
    //printf("e = %.8lf     ====== \n", e);
    if (res < ep)
        break;
    num++;
  }
  printf("%.8lf", e);
  
  return 0;
}