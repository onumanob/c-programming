#include <stdio.h>

int main()

{

    /*
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case-sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names
    */

    // Good variable name
    int minutesPerHour = 60;

    // OK, but not so easy to understand what m actually is
    int m = 60;

    printf("%d \n", minutesPerHour);
    printf("%d", m);

    return 0;
}



