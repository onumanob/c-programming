#include <stdio.h>

int main()

{

    char firstName[10];
    char lastName[10];

    scanf("%s %s", &firstName, &lastName);

    strcat(firstName, lastName);

    printf("Your name is: %s", firstName);
}
