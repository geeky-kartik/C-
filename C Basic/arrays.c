#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d" , &n);
    int A[n];
    printf("Enter the %d elements" , n);
    for (int i = 0; i <= n; i++) {
        scanf("%d" , A[i]);
    }
    printf("Printing the elements:  \n");
    for (int i = 0; i <= n; i++) {
        printf("%d \t" , A[i]);
    }
    printf("Size of array: %d " , (int)sizeof(A));
    //printf((int)sizeof(A));

    return 0;

} 
