#include <stdio.h>

int main()

{

    int my_number1;
    int my_number2;
    int sum;

    printf("Type first number: ");
    scanf("%d", &my_number1);

    printf("Type second number: ");
    scanf("%d", &my_number2);

    sum = my_number1 + my_number2;

    printf("Summ is: %d", sum);

    return 0;

}

