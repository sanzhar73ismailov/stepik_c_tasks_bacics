#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/3?unit=42143
*/
void sum_digits(int * x){
    int result = 0;
    while(*x > 0) {
        result += *x % 10;
        *x /= 10;
    }
    *x = result;
}