#include <stdio.h>
#include <math.h>

/*
https://stepik.org/lesson/54437/step/8?unit=32490
*/

int main() {
    int k;
    scanf("%d", &k);
    printf("%d", (k % 10) * 100  + (k / 10));
    return 0;
}
