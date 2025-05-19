#include <stdio.h>

void calculation(int x, int y)
{

    int sum = x + y;
    printf("The sum of %d + %d is: %d\n",x,y,sum);

}


int main()

{

    calculation(5, 3);
    calculation(8, 2);
    return 0;

}
