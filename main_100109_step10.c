#include <stdio.h>
/* 
https://stepik.org/lesson/65094/step/10?unit=41881
*/
void factors(int k){
    for(int i = 1; i<=k; i++)
      if(k%i==0)
        printf("%d ",i);
}