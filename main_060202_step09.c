#include <stdio.h>
/*
https://stepik.org/lesson/57210/step/9?unit=35061
*/
int main() {
 double x, y;
    scanf("%lf %lf", &x, &y);
    //printf("%d\n", x == y);
    int res = (x > 0) * (y > 0);
    switch(res) {
    	case 1: 
		  printf("1\n"); break;
    	case 0: 
    	  switch(x > 0) {
    	  	case 1: printf("4\n"); break;
    	  	case 0:
    	  		switch(y > 0){
    	  	      case 1: printf("2\n"); break;
    	  	      case 0: printf("3\n"); break;
			  	}
		  }
	}
  return 0;
}