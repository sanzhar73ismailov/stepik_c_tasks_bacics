#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/9?unit=42143
*/
int abs_arr(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
       if(arr[i] < 0) {
        arr[i] = -arr[i];   
        res++;
       }
    }
    return res;
}