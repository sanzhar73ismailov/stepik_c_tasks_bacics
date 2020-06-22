#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/7?unit=42143
*/
int gcd(int x, int y){
    int maxDev = 0;
    int min = x < y ? x : y;
    int max = x > y ? x : y;
    
    for(int i = 1; i <= min; i++) {
        if(x % i == 0 && y % i == 0){
            maxDev = i;
        }
    }
    return maxDev;
}