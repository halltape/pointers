#include <stdio.h>

void swap(int*, int*);  //the prototype of function//

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a,&b);                   //Notice!!! & to the the function//
    printf("a = %d\nb = %d", a, b);
    return 0;
}

void swap(int *x, int *y){      //the function//
    int temp = *x;
    *x = *y;
    *y = temp;
    }