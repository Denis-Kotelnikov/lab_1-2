#define PR(x) printf("x=%u, *x=%d, &=%u\n",x,*x,&x)
#include <stdio.h>

void main(void)
{
    double mas[] = { 10.3, 20.1, 30.4 };
    double *ptr1, *ptr2;
    ptr1 = mas;
    ptr2 = &mas[2];
    PR(ptr1);
    ptr1++;
    PR(ptr1);
    PR(ptr2);
    ++ptr2;
    printf("ptr2 - ptr1 = %u\n", ptr2 - ptr1);
}