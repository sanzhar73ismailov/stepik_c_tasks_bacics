#include <stdio.h>
/*
https://stepik.org/lesson/54840/step/10?unit=34364
*/
int main() {
  int k, x, res = 1;
  scanf("%d %d", &k, &x);
    switch(k){
        case 4: res *= x / 1000 % 10;
        case 3: res *= x / 100 % 10;
        case 2: res *= x / 10 % 10;
        case 1: res *= x % 10;    
    }
    printf("%d", res);
  return 0;
}