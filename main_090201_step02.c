#include <stdio.h>
/* 
https://stepik.org/lesson/64969/step/2?unit=41758
*/
int main() {
   char str[100] = {0};
   fgets(str, 100, stdin);
   fflush(stdin); 
   //puts(str);
   
   for(int i = 0; i < 100; i++){
   	//printf("%d",str[i]);
   	 if(str[i] == 0) {
   	 	printf("%d", i);
   	 	break;
	}
   }
    return 0;
}