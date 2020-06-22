#include <stdio.h>
/* 
https://stepik.org/lesson/65094/step/11?unit=41881
*/
int is_prime(int k){
    for(int i = 2; i <= k/2; i++)
      if(k % i == 0)
        return 0;
    return 1;
}