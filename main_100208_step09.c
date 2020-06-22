#include <stdio.h>
/* 
https://stepik.org/lesson/65151/step/9?unit=42121
*/
/*
Выше в программе объявлены указатели
    int * p_a
    int * p_b
    int * p_c
*/
int min = *p_a;
min = *p_b < min ? *p_b : min;
min = *p_c < min ? *p_c : min;
*p_a = min;
*p_b = min;
*p_c = min;