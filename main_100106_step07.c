#include <stdio.h>
/* 
https://stepik.org/lesson/65094/step/7?unit=41881
*/
int sequence_multipliers(int k){
 for(int i = 1; i < k/2; i++){
    if((i * (i+1) * (i+2)) == k)
        return i;
 }
    return -1;
}
int main(void){
   int n;
   scanf("%d", &n);
   printf("%d", sequence_multipliers(n));
   return 0;
}