#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/5?unit=42143
*/
void char_register(char * ch, int fl){
    if (fl){
       if(*ch >= 'a' && *ch <= 'z')
          *ch -= 32;  
    } else {
       if(*ch >= 'A' && *ch <= 'Z')
          *ch += 32;
    }
}