#include <stdio.h>
/* 
https://stepik.org/lesson/64657/step/7?unit=41549
*/

int main() {
  int n, val1=0, val2=0, k;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        int el;
        scanf("%d", &el);
        if(i < j) 
            val1 += el;
        if(j > n-i -1) 
            val2 += el;
      }
   }

    printf("%d %d", val1 < val2 ? val1 : val2, val1 > val2 ? val1 : val2);

  return 0;
}