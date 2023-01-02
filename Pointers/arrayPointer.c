#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int A[5] = { 2 , 4 ,6 , 8 , 10};
    int *p;
    p = A;      //p = &A[0];

    for (int i = 0; i <5; i++) {
        printf("\n %d " , p[i]);       
    }
    free(p);
}