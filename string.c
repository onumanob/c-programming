#include <stdio.h>

int main()

{

    char mytext[] = "Hello";
    mytext[0] = 'J';  // To change the value of a specific character in a string, refer to the index number, and use single quotes

    printf("%s \n", mytext);

    // Scientific Numbers: A floating point number can also be a scientific number with an "e" to indicate the power of 10

    float f1 = 35e3;
    double d1 = 12E4;

    printf("%f\n", f1);
    printf("%lf\n", d1);

    //float

    float f = 5.75;
    printf("%f\n", f);

    // Double

    double d = 19.99;
    printf("%lf\n", d);

    //Set Decimal Precision :If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point

    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit after decimal point
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);   // Only show 4 digits

    return 0;
}
