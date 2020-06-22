#include <stdio.h>
/* 
https://stepik.org/lesson/65094/step/9?unit=41881
*/
void print_date(int d, int m, int y, int k){
//при k = 0: dd.mm.yy
//при k = 1: dd.mm.yyyy
//при k = 2: yyyy/mm/dd
   switch (k) {
       case 0: printf("%02d.%02d.%02d", d, m, y % 1000); break;
       case 1: printf("%02d.%02d.%04d", d, m, y); break;
       case 2: printf("%04d/%02d/%02d", y, m, d); break;
   }
}
int main(){ 
   int d, m, y, k;
   scanf("%d %d %d %d", &d, &m, &y, &k);
   print_date(d, m, y, k);
   return 0;
 }