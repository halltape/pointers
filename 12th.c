#include <stdio.h>

int binary_search(int arr[], int n, int arg);

int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int arg;
    scanf("%d", &arg);

    binary_search(arr, n, arg);
    printf("%d", binary_search(arr, n, arg));

    return 0;
}


int binary_search(int arr[], int n, int arg){
    int l_wall = 0;
    int r_wall = n;
    int res = -1;

    while (l_wall < r_wall) {
        int mid = l_wall + (r_wall - l_wall) / 2;

        if (arg <= arr[mid])
            r_wall = mid;
        else
            l_wall = mid + 1;
    }

    if (r_wall < n && arr[r_wall] == arg)
        res = r_wall;

    return res;
}