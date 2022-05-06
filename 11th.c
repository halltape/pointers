#include <stdio.h>

int linear_search(int arr[], int n, int arg);

int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int arg;
    scanf("%d", &arg);

    linear_search(arr, n, arg);
    printf("%d", linear_search(arr, n, arg));
    return 0;
}

int linear_search(int arr[], int n, int arg){
    int flag = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == arg && flag == -1){
            flag = i;
        }
    }
    return flag;
}
