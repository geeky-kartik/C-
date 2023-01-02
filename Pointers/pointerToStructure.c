#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
    int area;
    int perimeter;
} r1 , r2;

int CalculateArea(int l ,int b) {
    return (l*b);
}

int CalculatePerimeter(int l , int b) {
    return (2*(l+b));
}
int main()
{

    struct Rectangle *p = &r1;
    struct Rectangle *q = &r2;
    int l = 10;
    int b = 5;
    // printf("Enter length of rectangle: ");
    // scanf("%d" , &l);
    // printf("Enter breadth of rectangle: ");
    // scanf("%d" , &b);
    
    p -> length = l;
    p -> breadth = b;

    p -> area = CalculateArea(l,b);
    p -> perimeter = CalculatePerimeter(l , b);
    
    printf("%d \n" , p -> length );     
                //or
    printf("%d \n" , (*p).breadth);

    //printf("Area = %d \n" , (p -> length) * (p -> breadth));
    printf("Area = %d\n" , p -> area );
    printf("Area = %d\n" , p -> perimeter );
                //or
    printf("Perimeter = %d \n" , 2*(l+b));

    
}

//programming skills
//pointers , structs
//classes and objects c++
//java classes
//java maps , list


//flipkart merchants posting products
//flipkart end users program
//flipkart program