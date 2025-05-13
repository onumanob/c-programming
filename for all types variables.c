#include <stdio.h>

int main()

{
    // Declare a variable
    int myNum ;
    float myFloatNum ;
    char myLetter ;

    // assign the value in the variable
    myNum = 15;
    myFloatNum = 5.99;
    myLetter = 'D';

    /* can do this format also

    // Create variables
    int myNum = 15;            // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    */

    // Print variables
    printf("%d\n", myNum);
    printf("%2f\n", myFloatNum);
    printf("%c\n", myLetter);

    return 0;
}
