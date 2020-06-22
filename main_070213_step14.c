#include <stdio.h>
/* 
https://stepik.org/lesson/64123/step/14?unit=41087
*/

int main(void) {
  int a = 0, k = 0;
  int res = 0;
  scanf("%d %d", &a, &k);
  res = 1;
  int chet = 0;
  if(k%2 == 0) {
   chet = 1; 
   k--;
  }
//пока степень больше нуля
  while(k > 0){
// если степень чётная, то
    if (k%2 == 0){   
      res = res*res; // умножаем текущий результат на себя
      k = k/2; // степень делим пополам
    }else { //если степень нечётная
      res = res * a; // то умножаем на исходное число
      
      k = k - 1;   // от степени вычитаем единицу
      if(chet && k == 0) {
          res = res * a;
      }
   }
 }
  printf("%d\n", res);

  return 0;
}