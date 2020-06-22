#include <stdio.h>
#include <math.h>

/*
https://stepik.org/lesson/54437/step/8?unit=32490
*/

//127
//271
int main() {
    int k;
    scanf("%d", &k);
    printf("%d", (k % 100) * 10 + (k / 100)   );
    return 0;
}
