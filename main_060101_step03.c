#include <stdio.h>
#include <locale.h>
/*
https://stepik.org/lesson/54840/step/3?unit=34364
*/

int main(void) {
  setlocale(LC_ALL, "");
  char s;  
  scanf("%c",&s);

  switch (s) {
    default  : break;
    case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
    case 'f' : printf("и себя и коня потеряешь!\n"); break;
    case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
    
  }

  return 0;
}

