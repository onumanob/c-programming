#include <stdio.h>

struct car{
    char brand[50];
    char model[50];
    int year;
};

int main()

{
    struct car x = {"BMW", "X5", 1999};
    struct car y = {"Ford", "Mustang", 1969};
    struct car z = {"Toyota", "Corolla", 2011};

    printf("%s %s %d\n", x.brand, x.model, x.year);
    printf("%s %s %d\n", y.brand, y.model, y.year);
    printf("%s %s %d\n", z.brand, z.model, z.year);

    return 0;
}
