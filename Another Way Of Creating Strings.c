#include <stdio.h>

int main()

{

    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";
    printf("%lu\n", sizeof(greetings));
    printf("%lu\n", sizeof(greetings2));
    printf("%s\n", greetings);
    printf("%s\n", greetings2);
    printf("%c\n", greetings[3]);
    printf("%c\n", greetings2[1]);

}
