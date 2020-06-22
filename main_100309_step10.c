#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/10?unit=42143
*/
int minmax(int arr[], int n, int fl){
 int res = arr[0];
 for (int i = 0; i < n; i++){
    if(fl && res < arr[i]){
        res = arr[i];
    }
    if(!fl && res > arr[i]){
        res = arr[i];
    } 
 }
    return res;
}