#include <stdio.h>
/* 
https://stepik.org/lesson/65151/step/3?unit=42121
*/
// выше объявлены символьные переменные ch и inp
// создайте указатель p_ch, ссылающийся на переменную ch
char *p_ch = &ch;
// используя операцию разыменования указателя p_ch, присвойте переменной ch значение переменной inp
*p_ch = inp;