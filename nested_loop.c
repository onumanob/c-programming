#include <stdio.h>

int main()

{

    int i, j;

    for (i = 1; i <=5; i++) {
        printf("Office Day: %d\n", i);


        //Inner loop
        for (j = 6; j <= 7; j++) {
            printf("Weekend: %d\n", j);
        }
    }

}
