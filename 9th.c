#include <stdio.h>
#include <math.h>

int minmax(int arr[], int n, int fl);

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

    minmax(arr, n, fl);
    printf("%d", minmax(arr, n, fl));
    return 0;
}

int minmax(int arr[], int n, int fl){
   int res = arr[0];
   for(int i = 0; i < n; i++) {
       if (fl == 0 && res > arr[i]) {
           res = arr[i];
       } else if (fl == 1 && res < arr[i]) {
           res = arr[i];
       }
   }
   return res;
}



