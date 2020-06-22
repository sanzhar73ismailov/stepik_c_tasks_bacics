#include <stdio.h>

/* 
https://stepik.org/lesson/65084/step/2?unit=41875
*/
int main() {
    char str1[40] = "Hello, "; 
    char str2[20];    
    scanf("%s", str2);
    strcat(str1, str2);
    printf("%s", str1);
    return 0;
}