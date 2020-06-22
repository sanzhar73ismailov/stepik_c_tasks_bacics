#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/6?unit=42143
*/
void char_cesar(char * ch, int shift){
    if (*ch + shift < 123) {
        *ch = *ch + shift;
    } else {
        *ch = 'a' + (*ch + shift - 'z' - 1);    
    }
}