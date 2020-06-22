#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/11?unit=42143
*/
void sort_arr(int arr[], int n, int fl){
  for(int i = 1; i < n; i++){
      for(int j = 1; j < n; j++){
          int temp = 0;
          if((!fl && arr[j] < arr[j-1]) || (fl && arr[j] > arr[j-1]) ){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;  
          }
          
      }
  }
}