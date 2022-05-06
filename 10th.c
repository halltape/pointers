#include <stdio.h>

void sort_arr(int arr[], int n, int fl);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int fl;
    scanf("%d", &fl);
    sort_arr(arr, n, fl);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void sort_arr(int arr[], int n, int fl) {
    if (fl == 0) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = n - 1; j > i; j--) {
                if (arr[j - 1] > arr[j]) {
                    int temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    } else if(fl == 1){
        for (int i = 0; i < n - 1; i++) {
            for (int j = n - 1; j > i; j--) {
                if (arr[j - 1] < arr[j]) {
                    int temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}




