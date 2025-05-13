#include <stdio.h>

int main()

{
    //To declare more than one variable of the same type, use a comma-separated list:
    int x = 4, y = 6, z = 50;
    printf("First Print: %d \n", x + y + z);

    //You can also assign the same value to multiple variables of the same type:

    int a, b, c;
    a = b = c = 5;
    printf("Second Print: %d", a + b + c);

    return 0;
}


