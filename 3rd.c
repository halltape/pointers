#include <stdio.h>

void minmax(int *x, int *y);

int main (){
    int min, max;
    scanf("%d%d", &min, &max);
    minmax(&min, &max);
    printf("%d %d", min, max);
    return 0;
}

void minmax(int *x, int *y){
    if(*x > *y){
        int temp = *y;
        *y = *x;
        *x = temp;
    }
}