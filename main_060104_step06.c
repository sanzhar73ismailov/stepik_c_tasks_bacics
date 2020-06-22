#include <stdio.h>

int main() {
  char operation;
  int x, y;  
  double res;
  scanf("%c %d %d", &operation, &x, &y);
  switch (operation) {
      case '+' : printf("%.2lf", (double) x + y); break;
      case '-' : printf("%.2lf", (double) x - y); break;
      case '*' : printf("%.2lf", (double) x * y); break;
      case '/' : printf("%.2lf", (double) x / y); break;
      default: printf("ERROR!");
  
  }
  return 0;
}