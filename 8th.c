#include <stdio.h>
#include <math.h>

int abs_arr(int arr[], int n);

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    abs_arr(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    int h = abs_arr(arr, n);

    printf("\n%d", h);

    return 0;
}

int abs_arr(int arr[], int n){
    int counter = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            arr[i] = fabs(arr[i]);
            counter += 1;
        }
    }
    return counter;
}