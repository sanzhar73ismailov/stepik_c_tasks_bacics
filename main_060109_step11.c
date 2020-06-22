#include <stdio.h>
/*
https://stepik.org/lesson/54840/step/11?unit=34364
*/
int main() {
    //printf("n=%d\n", 17/10);
  int k;
  scanf("%d", &k);
    switch(k % 10){
        case 1:
            switch(k / 10) {
                case 1:  printf("Мне %d лет", k); break;
                default: printf("Мне %d год", k); break;
            }
            break;
        case 2:
        case 3:
        case 4:  
            switch(k / 10) {
                case 1:  printf("Мне %d лет", k); break;
                default: printf("Мне %d года", k); break;
            }
            break;
            
		default: printf("Мне %d лет", k); break;
    }

  return 0;
}