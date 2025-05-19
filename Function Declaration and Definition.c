#include <stdio.h>

int test(int x, int y);

int main()
{

    int result;
    result = test(5,3);
    printf("Result is = %d", result);
    return 0;

}

int test(int x, int y)

{

    return x + y;

}
