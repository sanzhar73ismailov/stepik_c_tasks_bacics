#include <stdio.h>

int main() {
  int num;  
  scanf("%d",&num);
  switch (num % 2) {
      case 1 : printf("Любит\n"); break;
      case 0 : printf("Не любит\n"); break;
  }
    return 0;
}