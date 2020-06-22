#include <stdio.h>
#include <locale.h>
/*
https://stepik.org/lesson/54840/step/9?unit=34364
*/

int main(void) {
  int m, d;
  
  scanf("%d %d", &m, &d);

  //printf("iii = %d\n", d);
  switch (m - 1) {
  	case 1:
  	case 2:
  		d += 1;
  		break;
  	case 3:
  	case 4:
  		d += 2;
  		break;
  	case 5:
  	case 6:
  		d += 3;
  		break;
	case 7:
	    d += 4;
	    break;
	case 8:
	case 9:
		d += 5;
		break;
	case 10:
	case 11:
		d += 6;
		break;
  }
  printf("%d", d + (m - 1) * 30 + (m > 2 ? -2 : 0 ));

  return 0;
}

