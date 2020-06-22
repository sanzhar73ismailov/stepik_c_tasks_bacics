#include <stdio.h>
/* 
https://stepik.org/lesson/65094/step/6?unit=41881
*/
int factorial(int p){
  return p < 2 ? 1 : p * factorial(p - 1);
}
int combin(int n, int k){
  return factorial(n) / (factorial(k) * factorial(n-k));
}

int main(void){
    int n = 0, k = 0;
    scanf("%d%d",&n,&k);

    printf("%d",combin(n,k));

    return 0;
}