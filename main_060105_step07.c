#include <stdio.h>

int main() {
    char operation;
  int x, y;
  double res;
  scanf("%d %d %c", &x, &y, &operation);
  switch (operation) {
      case '+' : printf("%.2lf", (double) x + y); break;
      case '-' : printf("%.2lf", (double) x - y); break;
      case '*' : printf("%.2lf", (double) x * y); break;
      case '/' : 
	    switch(y) {
	    	case 0: printf("ERROR!"); break;
	    	default: printf("%.2lf", (double) x / y); break;
		}
	    break;
      default: printf("ERROR!");
  }
    return 0;
}