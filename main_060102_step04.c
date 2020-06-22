#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//int main(int argc, char *argv[]) {
int main(void) {
//1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).
  int num;  
  scanf("%d",&num);
  switch (num) {
      case 1 : printf("плохо\n"); break;
      case 2 : printf("неудовлетворительно\n"); break;
      case 3 : printf("удовлетворительно\n"); break;
      case 4 : printf("хорошо\n"); break;
      case 5 : printf("отлично\n"); break;
  }

  return 0;
}