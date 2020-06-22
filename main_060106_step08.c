#include <stdio.h>
#include <locale.h>
/*
https://stepik.org/lesson/54840/step/8?unit=34364
*/

int main(void) {
  char sex;
  int age, height, weight;
  double x;
  
  scanf("%c %d %d %d", &sex, &age, &height, &weight); 

  switch (sex) {
  	case 'm':
  		x = 5;
  		break;
  	case 'f':
  		x = -161;
  		break;
  	default: 
  	  printf("ERROR!");
  	  return 0;
  }
  printf("|  BMR  |\n");
  printf("|%.2f|\n", 10*weight + 6.25*height - 5*age + x);

  return 0;
}

