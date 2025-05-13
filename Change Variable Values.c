#include <stdio.h>

int main()

{
    int a = 15;  // myNum is 15
    a = 10;  // Now myNum is 10

    printf("First print: %d \n", a); // It will show 10, instead of 15. Because program remember the last input


    // assign the value of one variable to another

    int b = 15;

    int c = 23;

    // Assign the value of c (23) to b
    b = c;

    // b is now 23, instead of 15
    printf("Second print: %d \n", b);// assign the value of one variable to another

    //Create a variable and assign the value 155 to it
    int d = 155;

    //// Declare a variable without assigning it a value
    int e;

    // Assign the value of d (155) to e
    e = d;

    // b is now 23, instead of 15
    printf("Third print: %d", e);


    return 0;
}

