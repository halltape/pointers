#include <stdio.h>

int main()
{
   int a = 40, b = 75, c = 18;


    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;

    if(*p_a < *p_b && *p_a < *p_c){
        *p_b = *p_a;
        *p_c = *p_a;
    } else if (*p_b < *p_c && *p_b < *p_a){
        *p_a = *p_b;
        *p_c = *p_b;
    } else
        *p_a = *p_c;
        *p_b = *p_c;

    printf("%d %d %d", *p_a, *p_b, *p_c);

    return 0;
}