#include <stdio.h>
/* 
https://stepik.org/lesson/65151/step/8?unit=42121
*/
// int * p_1 ссылается на первую переменную
// int * p_2 ссылается на вторую переменную

  int temp;
  temp = *p_1;
  *p_1 = *p_2;
  *p_2 = temp;