#include <stdio.h>
/* 
https://stepik.org/lesson/64750/step/5?unit=41555
*/
int main() {
    int n;
    scanf("%d", &n);
    int arr[26] = {0};
    char val;
    for (int i = 0; i < n; i++) {
        scanf(" %c", &val);
        //printf("i=%d, val=%c\n", i, val);
        
        if(val > 90){
           val = val - 32;
        }
        val -= 65; 
        arr[val]++;
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ",  arr[i]);
    }
    
    return 0;
}