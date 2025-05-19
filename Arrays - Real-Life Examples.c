#include <stdio.h>

int main()

{

    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    for (i=0; i<length; i++){
        sum = sum + ages[i];
    }
    avg = sum /  length;

    printf("%f\n", avg);
    printf("%d\n", length);
}
