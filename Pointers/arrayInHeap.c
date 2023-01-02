#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5 , *arr1;
    
    int arr[2];
    // printf("Enter number of elements: ");
    // scanf("%d" , &n);

    //arr = (int *)malloc(n*sizeof(int));

    for(int i = 0; i<n; i++) {
        printf("Index: %d \n" , i);
        
        scanf("%d" , &arr[i]);
    }
    // for(int i = 0; i<n; i++) {
    //     printf("%d" , arr[i]);
    // }

    printf("%d \n" , sizeof(arr));
}