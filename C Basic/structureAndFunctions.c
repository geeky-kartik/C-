#include <stdio.h>
struct Rectangle 
{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r , int l , int b) 
{
    r -> length = l;
    r -> breadth = b;
}

int area(struct Rectangle r) 
{
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *r , int l)
{
    r -> length = l;
}

int main()
{
    struct Rectangle r;
    initialise(&r , 10 , 5);
    printf("Area = %d\n" , area(r));
    changeLength(&r , 20);
    printf("New area = %d\n" , area(r));
}