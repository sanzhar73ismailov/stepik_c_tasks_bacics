#include <stdio.h>
/*
https://stepik.org/lesson/13977/step/8?unit=30906
*/
int main() {
    const short COLS = 49;
	const short STARTS_PER_LINE = 8;
	int i, j;
	

	for(j = 0; j < COLS; j++)
		printf("_");
	printf("\n");
	
	for(i = 0; i < 6; i++) {
		for(j = 0; j < STARTS_PER_LINE; j++)
	  		printf("*");
	   	
		for(j = 0; j < COLS - STARTS_PER_LINE; j++)
	  		printf("_");
	   	printf("\n");
	}
	
	for(i = 0; i < 6; i++) {
		for(j = 0; j < COLS; j++)
	  		printf("_");
	   	printf("\n");
	}
  return 0;
}

