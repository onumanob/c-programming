#include <stdio.h>

int main()

{
    // Traditional way

    int time = 20;
    if (time < 18) {
      printf("Good day.");
    } else {
      printf("Old Method: Good evening.\n");
    }

    // Short Hand If Else(Syntax): variable = (condition) ? expressionTrue : expressionFalse;

    int moment = 20;

    (moment < 18) ? printf("Good Day") : printf("Short Method: Good Evening");
}
