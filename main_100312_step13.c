#include <stdio.h>
/* 
https://stepik.org/lesson/65373/step/13?unit=42143
*/
int binary_search(int arr[], int n, int arg){
  //int l_wall = 0;
  //int r_wall = n;
  int res = -1;
  int first = 0, last = n - 1;

  while (first < last) {
    int mid = (last - first) / 2 + first;
    if(arg == arr[mid]){
        res = mid;
        break;
    } else if (arg < arr[mid])
      last = mid;
    else
      first = mid + 1;
  }

  if (last < n && arr[last] == arg)
    res = last;

	return res;	   
}