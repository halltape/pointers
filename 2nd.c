#include <stdio.h>

void sum_digits(int *x);

int main (){
    int a;
    scanf("%d", &a);
    sum_digits(&a);
    printf("%d", a);
    return 0;
}

void sum_digits(int *x){
     int n = *x;
     for(*x = 0; n!=0;){
         *x += n%10;
         n/= 10;
     }
}