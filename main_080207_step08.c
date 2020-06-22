#include <stdio.h>
/* 
https://stepik.org/lesson/64657/step/8?unit=41549
*/

int main() {
  int n, m;
    
  scanf("%d %d", &n, &m);
  int sums[m];
  for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(i == 0)
            sums[j] = 0; 
        int el;
        scanf("%d", &el);
        sums[j] +=el;
      }
   }
   for(int i = m; i > 0; i--) {
       printf("%d ", sums[i-1]);
   }

  return 0;
}