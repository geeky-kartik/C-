#include <stdio.h>


void MinMax(int arr[] , int len , int *min , int *max) {
    *min = arr[0];
    *max = arr[0];

    for(int i = 0; i < len; i++) {
        if(arr[i] > *max) {
            *max = arr[i];
        }

         else if(arr[i] < *min) {
                *min = arr[i];
        }
    }
}

int main() {
    printf("Enter number of elements: ");
    int n;
    scanf("%d" , &n);
    int a[n];
    printf("Enter the %d elements: " , n);
    for (int i = 0; i < n; i++) {
        scanf("%d" , a[i]);
    }
    int min , max;
    int len = sizeof(a)/sizeof(a[0]);
    MinMax(a , len , &min , &max);
    printf("%d %d" , min , max);

    return 0;

}
