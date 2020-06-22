#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/12?unit=42143
*/
int linear_search(int arr[], int n, int arg){
    for(int i = 0; i < n; i++){
        if(arr[i] == arg) {
           return i;   
        }
    }
    return -1;
}