#include <stdio.h>

struct myStructure{
    int myNum;
    char myLetter;
};

int main()

{
    // Create a structure variable of myStructure called s1
    struct myStructure s1;

    s1.myNum = 13;
    s1.myLetter = 'Ashik';

    printf("My number is: %d\n", s1.myNum);
    printf("My letter is: %c\n", s1.myLetter);

    return 0;
}
