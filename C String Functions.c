#include <stdio.h>
#include <string.h>


int main()

{

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet));
    printf("%d", sizeof(alphabet)); // Note that sizeof and strlen behaves differently, as sizeof also includes the \0(Null) character when counting

}
