#include <stdio.h>

int main()

{

    int items = 50;
    float per_item_cost = 9.99;
    float total_cost = items * per_item_cost;
    char currency = '$';

    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", per_item_cost, currency);
    printf("Total cost: %.2f %c \n", total_cost, currency);

}
