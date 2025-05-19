#include <stdio.h>

int main()

{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int i, length, lowest_age;
    length = sizeof(ages) / sizeof(ages[0]);
    lowest_age = ages[0];
    //printf("%d", lowest_age);

    for (i=0; i<length; i++){
        if(lowest_age>ages[i]){
            lowest_age = ages[i];
        }
    }
    printf("The lowest age in the array is: %d", lowest_age);

    return 0;
}
