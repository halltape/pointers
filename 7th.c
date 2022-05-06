#include <stdio.h>

int gcd(int x, int y){

    while (x != 0 && y != 0){
        if(x > y){
            x %= y;
        } else y %= x;
    }
    return x + y;
}

void reduce_fraction(int *a, int *b){
    int temp = gcd(*a, *b);
    *a /= temp;
    *b /= temp;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    gcd(a, b);
    reduce_fraction(&a, &b);

    printf("%d %d\nnod = %d", a, b, gcd(a,b));
    return 0;
}