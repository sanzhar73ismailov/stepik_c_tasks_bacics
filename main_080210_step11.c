#include <stdio.h>
/* 
https://stepik.org/lesson/64657/step/11?unit=41549
*/
int main() {
  int m, n;
  int direction = 1;
  int k = 1;
  scanf("%d %d", &m, &n);
  int rows = m;
  int cols = n;
  int arr[m][n];
  for(int i = 0; i < m; i++) {
  	 for(int j = 0; j < n; j++) 
          arr[i][j] = 0;
  }
      
  
  int lStart = 0;
  int rStart = n - 2;
  int dStart = 1;
  int uStart = m - 2;
  
  int times = m * n;
  
  int i = 0, j =0;

  while(k <= times) {

  	switch(direction){
  	  case 1:
  	  	for(j = lStart; j < (n + lStart); j++){
			arr[i][j] = k++;
		}
		direction = 2;
		lStart++;
		n--;
		j--;
  	  	break;
  	  case 2:
  	  	for(i = dStart; i < (m + dStart-1) ; i++){
			arr[i][j] = k++;
		}
		direction = 3;
		dStart++;
		m--;
		i--;
  	  	break;
  	  case 3:
  	  	for(j = rStart; j >= (lStart - 1); j--){
			arr[i][j] = k++;
		}
		direction = 4;
		rStart--;
		n--;
		j++;
  	  	break;
      case 4:
  	  	for(i = uStart; i >= (dStart - 1); i--){
			arr[i][j] = k++;
		}
		direction = 1;
		uStart--;
		m--;
		i++;
  	  	break;
	}
	if(k > times){
	  break;
	}
  }
 

  for(int i = 0; i < rows; i++) {
       for(int j = 0; j < cols; j++) {
           printf("%3d", arr[i][j]);
       }
      printf("\n");
   }
  return 0;
}