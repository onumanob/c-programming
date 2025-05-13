#include <stdio.h>

int main()

{
    int a = 15;
    float b = 9.01;
    char c = 'D';

    printf("My integer number is %d and My float number is %f and my letter is %c \n", a, b, c); // use %d for int use %c for char and %f for float

    // We can write just these

    printf("%d %f %c ", a, b, c);
    return 0;
}
