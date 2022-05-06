#include <stdio.h>

int gcd(int *x, int *y){

    while (*x != 0 && *y != 0){
        if(*x > *y){
            *x %= *y;
        } else *y %= *x;
    }
    return *x + *y;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    gcd(&x, &y);

    printf("%d %d\n", x, y);
    printf("%d", x + y);


    return 0;
}