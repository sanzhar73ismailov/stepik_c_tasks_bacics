#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
https://stepik.org/lesson/53161/step/8?unit=31258
*/
int main(void) {
    srand(time(NULL));
    int rand_digit = rand() % 3;
    printf("%d\n",rand_digit);
    return 0;
}
