#include <stdio.h>

int main()

{
    /* Syntax
    switch (expression) {
      case x:
        // code block
        break;
      case y:
        // code block
        break;
      default:
        // code block
    }*/

    // Example 1

    int week = 3;

    switch (week){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Print 1: Tuesday\n");
            break;
        case 4:
            printf("Wedmesday");
            break;
    }

    // Example 2

    int day = 4;

    switch (day) {
      case 6:
        printf("Today is Saturday");
        break;
      case 7:
        printf("Today is Sunday");
        break;
      default:
        printf("Print 2: Looking forward to the Weekend"); // The default keyword specifies some code to run if there is no case match
    }

    return 0;


}
