#include <stdio.h>
#include <stdbool.h>

int main()

{
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
      printf("%d years old enough to vote!", myAge);
    } else {
      printf("Not old enough to vote.");
    }

}
