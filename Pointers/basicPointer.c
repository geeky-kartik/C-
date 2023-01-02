//Pointer stores address of a variable
// * : dereferencing operator - used to get the value at a given address
// & : referencing operator - returns the address of a variable
// &kartik = Ganga Aashiyana (address of kartik)


#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a = 10;    //Data variable 
	int *p;        //Address variable
	p = &a;        //initialisation
	
    // printing only p will give the address only
    // printing (*p) will go the address of p and return the value at that address
	printf("%d\n" , a);   //10 will be printed
    printf("%d\n" , *p);  //dereferencing
    printf("%d\n" , p);   //will print the address of a
}


// To access data from heap we use malloc function

