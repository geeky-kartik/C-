//Adding two numbers

#include <stdio.h>

int add(int x , int y)      //Formal parameters
{
    int z = x + y;
    return z;
}

int main () 
{
    int a = 10;
    int b = 20;
    int sum = add(a , b);     //Actual parameters
    printf("Sum: %d" , sum);
}