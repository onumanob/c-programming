#include <stdio.h>

int main()

{

    int numbers[] = {10,20,30,40};
    numbers[1] = 13;

    // Now outputs 13 instead of 20

    printf("%d", numbers[1]);

    return 0;

}
