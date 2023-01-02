#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r1;        //declaration
    r1.length = 15;
    r1.breadth = 10;

    struct Rectangle r2 = {10 , 10};       //declaration + initialisation
    printf("Area1 = %d \n" , r1.length * r1.breadth);
    printf("Area2 = %d \n" , r2.length * r2.breadth);



    return 0;
}