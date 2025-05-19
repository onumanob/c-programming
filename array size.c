#include <stdio.h>

int main()

{

    int myNumbers[] = {25, 50, 75, 100};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]); // 16 / 4 = 4
    printf("%d", length);

}
